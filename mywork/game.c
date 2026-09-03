#include "game.h"
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include <windows.h>

void Directory()
{
    printf("请开始游戏：\n");
    printf("1. 开始游戏\n");
    printf("0. 退出游戏\n");
    printf("请输入您的选择：");
    printf("\n");
}


void ChooseDifficulty()
{   char diff;
    printf("请选择难度：\n");
    printf("A. 简单\n");
    printf("B. 中等\n");
    printf("C. 困难\n");
    scanf(" %c",&diff);
    switch(diff)
    {
        case 'A':
            printf("简单难度\n");
            break;
        case 'B':
            printf("中等难度\n");
            break;
        case 'C':
            printf("困难难度\n");
            break;
        default:
            printf("无效的选择，请重新输入\n");
    }
}


void Start(int key)
{
    do
    {
        switch(key)
        {
            case 1:
                printf("开始游戏...\n");
                    Sleep(1000);
                break;
            case 0:
                printf("退出游戏...\n");
                break;
            default:
                printf("无效的选择，请重新输入\n");
                    Sleep(1000);
                break;
        }
    } while(key != 0 && key != 1);
}

void Initboard(char board[ROWS][COLS], int r, int c, char T)
{
    int i, j;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            board[i][j] = T;
        }
    }
}

void SetMine(char board[ROWS][COLS], int r, int c)
{
    int count = EASY_COUNT;
    while (count)
    {
        int x = rand() % r + 1;
        int y = rand() % c + 1;
        if (board[x][y] == '0')
        {
            board[x][y] = '1';
            count--;
        }
    }
}

void Displayboard(char board[ROWS][COLS], int r, int c)
{
    int i, j;  
    for(j=0;j<=c;j++)
    {
        printf("%d ",j);
    }
    printf("\n");
    for(i=1;i<=r;i++)
    {
        printf("%d ",i);
        for(j=1;j<=c;j++)
        {
            printf("%c ",board[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

size_t GetMineCount(char mine[ROWS][COLS], int x, int y)
{
    return mine[x-1][y]+mine[x+1][y]+mine[x][y-1]+mine[x][y+1]+mine[x-1][y-1]+mine[x-1][y+1]+mine[x+1][y-1]+mine[x+1][y+1] - 8*'0';
}

void FindMine(char board[ROWS][COLS],char mine[ROWS][COLS], int r, int c)
{
    int step=ROW*COL-EASY_COUNT;
    while(step)
    {
        printf("请输入要查找的坐标：\n");
        int x,y;
        scanf("%d %d",&x,&y);
        if(x>=1&&x<=r&&y>=1&&y<=c)
        {
            if(board[x][y]=='*')
            {
                if(mine[x][y]=='0')
                {

                    size_t count=GetMineCount(mine,x,y);
                    board[x][y]=(char)count+ '0';
                    Displayboard(board,ROW,COL);
                    step--;
                }
                else if(mine[x][y]=='1')
                {
                    printf("你被炸死了！\n");
                    break;
                }
                printf("\n");
            }
            else
            {
                printf("该坐标依旧查找过，无需查找\n");
            }
        }
        else
        {
            printf("坐标无效，请重新输入\n");
        }
    }
    if(step==0)
    {
        Displayboard(board,ROW,COL);
        printf("恭喜你，你赢了！\n");
    }
}