//�����Ǹ������ͱ���������

#pragma once

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>


#define ROW 3
#define COL 3

//��ʼ������
void InItBoard(char board[ROW][COL], int row, int col);

//��ӡ����
void DisplayBoard(char board[ROW][COL], int row, int col);

//����ƶ�
void player_move(char board[ROW][COL], int row, int col);

//�����ƶ�
void computer_move(char board[ROW][COL], int row, int col);

char is_win(char board[ROW][COL], int row, int col);









