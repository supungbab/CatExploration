#include "key.h"

typedef enum { NOCURSOR, SOLIDCURSOR, NORMALCURSOR } CURSOR_TYPE;
void setcursortype(CURSOR_TYPE c){
	CONSOLE_CURSOR_INFO CurInfo;
	switch (c) {
		case NOCURSOR:
			CurInfo.dwSize=1;
			CurInfo.bVisible=FALSE;
			break;
		case SOLIDCURSOR:
			CurInfo.dwSize=100;
			CurInfo.bVisible=TRUE;
			break;
		case NORMALCURSOR:
			CurInfo.dwSize=20;
			CurInfo.bVisible=TRUE;
			break;
		}
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE),&CurInfo);
}

void gotoxy( int x , int y) { 
	COORD pos = { x, y }; 
	SetConsoleCursorPosition( GetStdHandle( STD_OUTPUT_HANDLE ), pos); 
}

void main(){
	srand(time(0));
	system("mode con: cols=120 lines=45");
	setcursortype(NOCURSOR);
	mainbo();
}