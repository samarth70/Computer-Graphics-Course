#include<graphics.h>
#include<stdio.h>
void main()
{
	int gd=DETECT,gm;
	int x,y,x1,y1,x2,y2,tx,ty;
	printf("\n Please enter first coordinate of the triangle= ");
	scanf("%d %d", &x,&y);
	printf("\n Enter second coordinate of the trinagle = ");
	scanf("%d %d",&x1,&y1);
	printf("\n Enter third coordinate of the triangle = ");
	scanf("%d %d",&x2,&y2);
	// printf("\n\t\t********** TRIANGLE before & after translation by samarth***********");
	printf("\n Now enter the translation vector = ");
	scanf("%d %d",&tx,&ty);
	initgraph(&gd,&gm,NULL);
	outtextxy(15,15,"by Samarth 8444\n Please enter first coordinate of the triangle= 120 150 \n second coordinates of triangle 150 350\nEnter third coordinates of triangle:320 300 \n Now enter the translation vector =120 150");
 
	line(x,y,x1,y1);
	line(x1,y1,x2,y2);
	line(x2,y2,x,y);

	setcolor(WHITE);
	line(x+tx,y+ty,x1+tx,y1+ty);
	line(x1+tx,y1+ty,x2+tx,y2+ty);
	line(x2+tx,y2+ty,x+tx,y+ty);
	getch();
	// closegraph();
}