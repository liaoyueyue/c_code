//这里是各函数和变量的声明

#pragma once

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>


#define ROW 3
#define COL 3

//初始化棋盘
void InItBoard(char board[ROW][COL], int row, int col);

//打印棋盘
void DisplayBoard(char board[ROW][COL], int row, int col);

//玩家移动
void player_move(char board[ROW][COL], int row, int col);

//电脑移动
void computer_move(char board[ROW][COL], int row, int col);

char is_win(char board[ROW][COL], int row, int col);









