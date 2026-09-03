#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include <windows.h>


#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define EASY_COUNT 10




//目录函数
void Directory();

//难度选择函数
void ChooseDifficulty();

//难度给予函数
int CountDefine();

//开局函数
void Start(int key);

//初始化棋盘函数
void Initboard(char board[ROWS][COLS], int r, int c, char T);

//藏雷函数
void SetMine(char board[ROWS][COLS], int r, int c);

//显示棋盘函数
void Displayboard(char board[ROWS][COLS], int r, int c);

//排雷函数
void FindMine(char board[ROWS][COLS],char mine[ROWS][COLS],int r,int c);

