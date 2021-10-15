#include<iostream>
#include<graphics.h>
#include<string>
using namespace std;



int main()
{
	int gd=DETECT,gm,points[]={320,150,420,300,250,300,320,150,420,300};

	initgraph(&gd,&gm,NULL);

	outtextxy(150,15,"By Samarth Agarwal");
	
	// circle(350,100,50);
	// outtextxy(305,210,"Circle");
	
	// line(30,30, 100,100);
 //    outtextxy(30, 70, "Line");

 //    arc(200,200,0,135,50);
 //    outtextxy(180,180, "Arc");
	// bar(100,100,300,300);

	// ellipse(150,00)
	// getch();
	// bar3d(100, 100, 300, 300, 100, 100);
	// fillellipse(100, 100, 70, 55);

	setcolor(RED);
   circle(100,100,50);
   floodfill(100,100,RED);
	delay(5000);
	
	

	return 0;
}