#include <stdio.h>
#include "key.h"

void bd(){
	int i=0;
	gotoxy(0,0);
	printf("\n");
	printf("　┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
	for(i=0;i<39;i++)
	printf("　┃　 　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　 ┃\n");
	printf("　┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
}

void back(){
	int x=22,y=7;
	white
	gotoxy(x,y++);
	printf("　■■■■■■　　　■■■　　■　　　■■■　　■\n");
	gotoxy(x,y++);
	printf("　　　　　　■　　■　　　■　■■　■　　　■　■\n");
	gotoxy(x,y++);
	printf("　　　　　　■　　■　　　■　■　　■　　　■　■\n");
	gotoxy(x,y++);
	printf("　　　■　　■　　■　　　■　■■　■　　　■　■\n");
	gotoxy(x,y++);
	printf("　　　■　■　　　　■■■　　■　　　■■■　　■\n");
	gotoxy(x,y++);
	printf("　　　■　　　　　　　　　　　■　　　　　　　　■\n");
	gotoxy(x,y++);
	printf("■■■■■■■■　　　　　　　　　　　　　　　　■\n");
	gotoxy(x,y++);
	printf("　　　　　　　　　　　　■■■　　　　　　　　　　\n");
	gotoxy(x,y++);
	printf("　　　　　　　　　　　■　　　■　　　　　　　　　\n");
	gotoxy(x,y++);
	printf("　　　　　　　　　　　■　　　■　　　　　　　　　");
	gotoxy(x,y++);
	printf("　　　　　　　　　　　　■■■　　　　　　　　　　\n");
	x=32; y=19;
	Color(11)
	gotoxy(x,y++);
	printf("　　　　　■　　　　　　■■■■■■　　■　　　　■■■　　　　■\n");
	gotoxy(x,y++);
	printf("　　　　　■　　　　　　■　　　　　　　■　　　　　　　　　　　■\n");
	gotoxy(x,y++);
	printf("■■■■■■■■■■■　■■■■■■　　■■■■■■■■■■　　■\n");
	gotoxy(x,y++);
	printf("　　　　■　■　　　　　■　　　　　　　■　　　■　　　■　■■■\n");
	gotoxy(x,y++);
	printf("　　　　■　■　　　　　■■■■■■■　■　　　■　　　■　　　■\n");
	gotoxy(x,y++);
	printf("　　　■　　　■　　　　　　　　　　　　　　　　　■■■　　　　■\n");
	gotoxy(x,y++);
	printf("　　　■　　　■　　　　　■■■■■■■■　　　　　　　　　　　　\n");
	gotoxy(x,y++);
	printf("　　■　　　　　■　　　　■　　　　　　■　　　　■■■■■■■■\n");
	gotoxy(x,y++);
	printf("　■　　　　　　　■　　　■　　　　　　■　　　　■　　　　　　■\n");
	gotoxy(x,y++);
	printf("■　　　　　　　　　■　　■■■■■■■■　　　　■■■■■■■■");
	white
}

void gmbd(){
	gotoxy(0,0);
	printf("\n");
printf("  ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
printf("　┃　　　　　　LIFE : ♥♥♥　　　　　SPEED : □□□□□　　　　　　SCORE : 　　　　　　　BEST : 　　　　　　　　　┃\n");
printf("　┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
printf("　┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
printf("　┃↖　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　↗┃\n");
printf("　┃　 ↖　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　↗　 ┃\n");
printf("　┃　 　 ↖　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　↗ 　   ┃\n");
printf("　┃　 　    ↖　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　↗　　　　 ┃\n");
printf("　┃　 　 　 　 ↖　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　↗ 　 　 　   ┃\n");
printf("　┃　 　 　 　    ↖───────────────────────────────────────↗　　　　　　　 ┃\n");
printf("　┃　 　 　 　    │ ↖　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　↗ │ 　 　 　 　   ┃\n");
printf("　┃　 　 　 　 　 │ 　 ↖　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　↗ 　 │ 　 　 　 　 　┃\n");
printf("　┃　 　 　 　 　 │ 　    ↖　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　↗　　　 │ 　 　 　 　 　┃\n");
printf("　┃　 　 　 　 　 │ 　    　 ↖───────────────────────────↗　　　 　 │ 　 　 　 　 　┃\n");
printf("　┃　 　 　 　 　 │ 　    　 │ ↖　　　　　　　　　　　　　　　　　　　　　　　　↗ │　　　 　 │ 　 　 　 　 　┃\n");
printf("　┃　 　 　 　 　 │ 　　  　 │    ↖　　　　　　　　　　　　　　　　　　　　　↗　　│　　　 　 │ 　 　 　 　 　┃\n");
printf("　┃　 　 　 　 　 │ 　　　　 │    　 ↖──────────────────↗　　　 │　　　 　 │ 　 　 　 　 　┃\n");
printf("　┃　 　 　 　 　 │ 　　　　 │    　 │ ↖　　　　　　　　　　　　　　　↗ │ 　　　│　　　 　 │ 　 　 　 　 　┃\n");
printf("　┃　 　 　 　 　 │ 　　　　 │    　 │ 　 ↖────────────↗ 　 │ 　　　│　　　 　 │ 　 　 　 　 　┃\n");
printf("　┃　 　 　 　 　 │ 　　　　 │    　 │ 　 │ ↖─────────↗ │ 　 │ 　　　│　　　 　 │ 　 　 　 　 　┃\n");
printf("　┃　 　 　 　 　 │ 　　　　 │ 　 　 │ 　 │ │ ↖──────↗ │ │ 　 │　　　 │ 　　　　 │ 　 　 　 　 　┃\n");
printf("　┃　 　 　 　 　 │ 　　　　 │ 　 　 │ 　 │ │ │ ↖┌─┐↗ │ │ │ 　 │ 　　　│　　　 　 │ 　 　 　 　 　┃\n");
printf("　┃　 　 　 　 　 │ 　　　　 │ 　 　 │ 　 │ │ │ ↙　　　↘ │ │ │ 　 │ 　　　│　　　 　 │ 　 　 　 　 　┃\n");
printf("　┃　 　 　 　 　 │ 　　　　 │ 　 　 │ 　 │ │ ↙　　　　　　↘ │ │ 　 │　　　 │　　　 　 │ 　 　 　 　 　┃\n");
printf("　┃　 　 　 　 　 │ 　　　　 │ 　 　 │ 　 │ ↙　　　　　　　　　↘ │ 　 │ 　　　│　　　 　 │ 　 　 　 　 　┃\n");
printf("　┃　 　 　 　 　 │ 　　　　 │ 　 　 │ 　 ↙　　　　　　　　　　　　↘ 　 │　　　 │　　　 　 │ 　 　 　 　   ┃\n");
printf("　┃　 　 　 　 　 │ 　　　　 │    　 │ ↙　　　　　　　　　　　　　　　↘ │ 　　　│　　　 　 │ 　 　 　 　 　┃\n");
printf("　┃　 　　  　 　 │ 　　　　 │    　 ↙　　　　　　　　　　　　　　　　　　↘　　　 │　　　 　 │ 　 　 　 　 　┃\n");
printf("　┃　 　 　 　 　 │ 　    　 │  　↙　　　　　　　　　　　　　　　　　　　　　↘　　│　　　 　 │ 　 　 　 　 　┃\n");
printf("　┃　 　　  　 　 │ 　    　 │ ↙　　　　　 방향키를 누르면 시작됩니다.　　　　　↘ │　　　 　 │ 　 　 　 　 　┃\n");
printf("　┃　 　    　 　 │ 　    　 ↙　　　　　　　　　　　　　　　　　　　　　　　　　　　↘　　　 　 │ 　 　 　 　 　┃\n");
printf("　┃　 　 　 　 　 │ 　  　↙　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　↘　　　 │ 　 　 　 　 　┃\n");
printf("　┃　 　 　 　 　 │ 　 ↙　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　↘ 　 │ 　 　 　 　   ┃\n");
printf("　┃　 　 　 　    │ ↙　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　↘ │ 　 　 　 　   ┃\n");
printf("　┃　 　 　 　    ↙　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　↘　　　  　　   ┃\n");
printf("　┃　 　 　 　 ↙　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　↘ 　 　 　   ┃\n");
printf("　┃　 　  　↙　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　↘　　　   ┃\n");
printf("　┃　 　 ↙　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　↘ 　 　┃\n");
printf("　┃ 　↙　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　↘　 ┃\n");
printf("　┃↙　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　↘┃\n");
printf("　┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n\n");

}

void clear(int c){
	white
	if(c==0){
	gotoxy(29,33);
	printf("　　　");
	gotoxy(28,34);
	printf("　　　　");
	gotoxy(27,35);
	printf("　　　　");
	gotoxy(26,36);
	printf("　　　　");
	gotoxy(23,37);
	printf("　　　　　　");
	gotoxy(22,38);
	printf("　　　　　　");
	gotoxy(21,39);
	printf("　　　　　　　");
	gotoxy(22,40);
	printf("　　　　　　");
	}

	if(c==1){
	gotoxy(57,33);
	printf("　　　");
	gotoxy(56,34);
	printf("　　　　");
	gotoxy(55,35);
	printf("　　　　　");
	gotoxy(56,36);
	printf("　　　　");
	gotoxy(55,37);
	printf("　　　　　");
	gotoxy(54,38);
	printf("　　　　　　");
	gotoxy(53,39);
	printf("　　　　　　　");
	gotoxy(54,40);
	printf("　　　　　　");
	}

	if(c==2){
	gotoxy(85,33);
	printf("　　　");
	gotoxy(84,34);
	printf("　　　　");
	gotoxy(85,35);
	printf("　　　　");
	gotoxy(86,36);
	printf("　　　　");
	gotoxy(85,37);
	printf("　　　　　");
	gotoxy(86,38);
	printf("　　　　　　");
	gotoxy(85,39);
	printf("　　　　　　　");
	gotoxy(86,40);
	printf("　　　　　　");
	}	
}

void character(int c){
	red
	if(c==0){
	gotoxy(29,33);
	printf("∧─∧");
	gotoxy(28,34);
	printf("│　　│");
	gotoxy(27,35);
	printf("│　　│");
	gotoxy(26,36);
	printf("│　　│");
	gotoxy(23,37);
	printf("│　　　　│");
	gotoxy(22,38);
	printf("│　　　　│");
	gotoxy(21,39);
	printf("│　　　　　│");
	gotoxy(22,40);
	printf("└────┘");
	}

	if(c==1){
	gotoxy(57,33);
	printf("∧─∧");
	gotoxy(56,34);
	printf("│　　│");
	gotoxy(55,35);
	printf("│      │");
	gotoxy(56,36);
	printf("│　　│");
	gotoxy(55,37);
	printf("│　　　│");
	gotoxy(54,38);
	printf("│　　　　│");
	gotoxy(53,39);
	printf("│　　　　　│");
	gotoxy(54,40);
	printf("└────┘");
	}

	if(c==2){
	gotoxy(85,33);
	printf("∧─∧");
	gotoxy(84,34);
	printf("│　　│");
	gotoxy(85,35);
	printf("│　　│");
	gotoxy(86,36);
	printf("│　　│");
	gotoxy(85,37);
	printf("│　　　│");
	gotoxy(86,38);
	printf("│　　　　│");
	gotoxy(85,39);
	printf("│　　　　　│");
	gotoxy(86,40);
	printf("└────┘");
	}
	white;
}
int best=0,s1=5,s2=5,score=0;

void random(){
	
	if(rand()%2==1)
		s1=rand()%3;
	else{
		s1=rand()%3;
		do{
			s2=rand()%3;
		}while(s1==s2);
	}
}

void gameover(){
	int key=0;
	int x=14,y=7;
	if(best<score)
		best=score;
	system("cls");
	bd();
	white
	gotoxy(x,y++);
	red
	printf("　　　■■■■■■　　　　　■■　　　　■■■■　　　　■■■　■■■■■■■■\n");
	gotoxy(x,y++);
	printf("　　■■■■■■■　　　　　■■■　　　　■■■　　　■■■■　　■■■　　　■\n");
	gotoxy(x,y++);
	printf("　■■■　　　■■　　　　■■■■　　　　■■■■　　■■■■　　■■■　　　　\n");
	gotoxy(x,y++);
	printf("■■■■　　　■■　　　　■■■■■　　　■■■■　■■■■　　　■■■　■　　\n");
	gotoxy(x,y++);
	printf("■■■■　　　　　　　　■■　　■■　　　■■■■■■■■■　　　■■■■■■　\n");
	gotoxy(x,y++);
	printf("■■■■　　■■■■　　■■■■■■■　　■■　■■■■■■　　　■■■　■　　\n");
	gotoxy(x,y++);
	printf("　■■■■　　■■■　■■■■■■■■　　■■　■■　■■■■　　■■■　　　■■\n");
	gotoxy(x,y++);
	printf("　■■■■■■■■　　■■　　　■■■■　■■　　■　■■■■　　■■■　　　■■\n");
	gotoxy(x,y++);
	printf("　　　■■■■■　　■■■■　　■■■■■■■■　　　■■■■　■■■■■■■■　\n");
	x=32; y+=4;
	gotoxy(x,y++);
	printf("　　　■■■■　　■■■■■　■■■　■■■■■■■■　　■■■■■■■\n");
	gotoxy(x,y++);
	printf("　■■■■■■■■■■■■■　　■■　　■■■　　　■　■■■■　■■■\n");
	gotoxy(x,y++);
	printf("　■■■　　■■■　■■■　　　■　　　■■■　　　　　　■■■　■■■■\n");
	gotoxy(x,y++);
	printf("■■■■　　■■■■　■■■　■■　　　■■■　■　　　　■■■　■■■\n");
	gotoxy(x,y++);
	printf("■■■■　　■■■■　■■■　■　　　　■■■■■■　　　■■■■■■\n");
	gotoxy(x,y++);
	printf("■■■■　　　■■■　■■■■■　　　　■■■　■　　　　■■■　■■■■\n");
	gotoxy(x,y++);
	printf("　■■■■　■■■　　　■■■　　　　　■■■　　　■■　■■■　■■■■\n");
	gotoxy(x,y++);
	printf("　■■■■■■■■　　　■■■　　　　　■■■　　　■■　■■■　　■■■\n");
	gotoxy(x,y++);
	printf("　　　■■■■　　　　　　■　　　　　■■■■■■■■　　■■■■　■■■■\n");
	gotoxy(x,y++);
	printf("　　　　　　　　　　　　　　　　　　　　　　　　　　　　■■■■■　　　　　");
	
	Color(10)
	gotoxy(20,35);
	printf("고양이가 죽었어여 ㅜㅜ 메인으로 갈려면 Enter 다시 시작하려면 R키을 눌러주세요.");
	while(1){
		key=_getch();
		if(key=='r')
			gamestart();
		if(key==Enter)
			mainbo();
	}
}

void damage(int x,int y){
	int i=0;

	gotoxy(23,2);

	Color(12)
	if(x==2)
		printf("♥♥♡");
	gotoxy(23,2);
	if(x==1)
		printf("♥♡♡");
	gotoxy(23,2);
	if(x==0){
		printf("♡♡♡");
	for(i=0;i<4;i++){
		clear(y);
		Sleep(150);
		character(y);
		Sleep(150);
	}
		gameover();
	}
	white
	for(i=0;i<4;i++){
		clear(y);
		Sleep(150);
		character(y);
		Sleep(150);
	}
}

void Speed(int x){
	if((70<x)&&x<=100){
		gotoxy(47,2);
		Color(14) printf("■□□□□");
	}
	if((50<x)&&x<=70){
		gotoxy(47,2);
		Color(14) printf("■■□□□");
	}
	if((40<x)&&x<=50){
		gotoxy(47,2);
		Color(14) printf("■■■□□");
	}
	if((30<x)&&x<=40){
		gotoxy(47,2);
		Color(14) printf("■■■■□");
	}
	if((20<=x)&&x<=30){
		gotoxy(47,2);
		Color(14) printf("■■■■■");
	}
}

void game(){
	int i=0,j=0,s=1;
	int x0=57,x1=59,x2=63,y=23;
	int key=0;
	int life=3,speed=100;

	score=0;
	gotoxy(23,2);
	Color(12) printf("♥♥♥");
	gotoxy(47,2);
	Color(14) printf("■□□□□");
	gotoxy(98,2);
	Color(10) printf("%d",best);
	random();
	character(s);
	white
	while(1){
		key=_getch();
		if(key==Esc)
				mainbo();
		switch(key){
			case Left :
				clear(s);
				s-1<0?s=0:s--;
				break;
			case Right :
				clear(s);
				s+1>2?s=2:s++;
				break;
		}
		while(!_kbhit()){
			score+=1;
			gotoxy(77,2);
				Color(11) printf("%d",score); white
			gotoxy(x0,y);
				for(i=0;i<j;i++)
					printf("　");
			gotoxy(x1,y);
				for(i=0;i<=j;i++)
					printf("　");
			gotoxy(x2,y);
				for(i=0;i<j;i++)
					printf("　");

			if(y==40){
				x0=57;x1=59;x2=63; y=23; j=0;
				random();
			}
			x0-=3; x1-=1; x2+=1; y++; j++;

			blue
			if(s1==0||s2==0){
				gotoxy(x0,y);
				for(i=0;i<j;i++)
					printf("━");
			}
			if(s1==1||s2==1){
				gotoxy(x1,y);
				for(i=0;i<=j;i++)
					printf("━");
			}
			if(s1==2||s2==2){
				gotoxy(x2,y);
				for(i=0;i<j;i++)
					printf("━");
			}
			white
			character(s);
			Sleep(speed);
			if(score%10==0){
				speed<20?speed=20:speed--;
				Speed(speed);
			}
			if(y==40&&((s==s1)||(s==s2))){
				life--;
				damage(life,s);
				_getch();
			}
		}

	}
}
