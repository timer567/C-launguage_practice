#pragma once

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>

#define ROW 3
#define COL 3


void menu();

void game(); 

void InitArray(char arr[ROW][COL], int row, int col);

void DisplayBoard(char arr[ROW][COL], int row, int col);

void Player_PutChess(char arr[ROW][COL], int row, int col);

void Computer_PutChess(char arr[ROW][COL], int row, int col);

char IsWin(char arr[ROW][COL], int row, int col);
