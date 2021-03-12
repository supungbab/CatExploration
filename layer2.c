#include "key.h"

void rull(){
	system("cls");
	bd();
	gmbd();
	character(1);
	gotoxy(23,2);
	Color(12) printf("♥♥♥");
	gotoxy(47,2);
	Color(14) printf("■□□□□");
	gotoxy(44,30);
	printf("            게임 방법!           ");
	getch();
	gotoxy(44,30);
	printf("         아주 간단합니다.        ");
	getch();
	gotoxy(44,30);
	printf("그냥 피해서 앞으로 많이가면 되요.");
	getch();
	gotoxy(44,30);
	printf("           그럼 20000 :)         ");

	while(1){
		if(getch()==Enter)
			mainbo();
	}
}

void gamestart(){
	system("cls");
	white
	gmbd();
	game();
}

void Exit(){
	gotoxy(50,42);
	blue printf("게임이 종료됩니다.!\n"); white
	exit(0);
}