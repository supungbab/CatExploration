#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <time.h>
#define red SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
#define white SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
#define blue SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
#define Color(x) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),x);

#define Left 75
#define Right 77
#define Up 72
#define Down 80
#define Enter 13
#define Esc 27