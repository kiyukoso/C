#include "game.h"
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include <windows.h>



int main()
{
    srand((unsigned int)time(NULL));
    printf("欢迎来到 Minesweeper 游戏！\n");
    Sleep(1000);
    char choice;
    do
    {
        time_t start_time = time(NULL);
        int key;
        ChooseDifficulty();
        Directory();
        scanf("%d", &key);
        Start(key);
        if(key==0)
        {
            break;
        }
        char mine[ROWS][COLS];
        char show[ROWS][COLS];
        Initboard(mine,ROWS,COLS,'0');
        Initboard(show,ROWS,COLS,'*');
        SetMine(mine,ROW,COL);
        Displayboard(mine,ROW,COL);
        Displayboard(show,ROW,COL);
        FindMine(show,mine,ROW,COL);
        printf("是否继续游戏?(y/n)");
        scanf(" %c",&choice);
        time_t end_time = time(NULL);
        printf("本轮游戏结束，您用时%d秒\n", (int)(end_time - start_time));
    }while(choice=='y'||choice=='Y');
    printf("感谢您玩 Minesweeper 游戏！\n");
    Sleep(1000);
    return 0;
}

