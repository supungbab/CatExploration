#include "key.h"

void rull(){
	system("cls");
	bd();
	gmbd();
	character(1);
	gotoxy(23,2);
	Color(12) printf("������");
	gotoxy(47,2);
	Color(14) printf("������");
	gotoxy(44,30);
	printf("            ���� ���!           ");
	getch();
	gotoxy(44,30);
	printf("         ���� �����մϴ�.        ");
	getch();
	gotoxy(44,30);
	printf("�׳� ���ؼ� ������ ���̰��� �ǿ�.");
	getch();
	gotoxy(44,30);
	printf("           �׷� 20000 :)         ");

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
	blue printf("������ ����˴ϴ�.!\n"); white
	exit(0);
}