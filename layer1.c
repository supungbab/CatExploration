#include "key.h"

void mainbo(){
	int i=0,a,t=1,gy=34,x1=17,x2=56,x3=94;
	white
	system("cls");
	printf("\n\n");
	bd();
	back();
	gotoxy(x1,gy);
	printf("���� ���");
	gotoxy(x2,gy);
	printf("���� ����");
	gotoxy(x3,gy);
	printf("�� �� ��");
	gotoxy(50,gy+3);
	Color(10) printf("����Ű�� �����ּ���!"); white

	while(1){
		a=_getch();
		if(a==Left)
			(t-1)==0?t=3:--t;
		if(a==Right)
			(t+1)==4?t=1:++t;
			if(t==1){
				gotoxy(x1,gy);
				red printf("���� ���"); white
				gotoxy(x2,gy);
				printf("���� ����");
				gotoxy(x3,gy);
				printf("�� �� ��");
			}
			if(t==2){
				gotoxy(x1,gy);
				printf("���� ���");
				gotoxy(x2,gy);
				red printf("���� ����"); white
				gotoxy(x3,gy);
				printf("�� �� ��");
			}
			if(t==3){
				gotoxy(x1,gy);
				printf("���� ���");
				gotoxy(x2,gy);
				printf("���� ����");
				gotoxy(x3,gy);
				red printf("�� �� ��");white
			}
			if(a==Enter){
				switch(t){
				case 1 :
					rull();
					break;
				case 2 :
					gamestart();
					break;
				case 3 :
					Exit();
					break;
				}
				break;
			}
			//Sleep(100);
	}
}

