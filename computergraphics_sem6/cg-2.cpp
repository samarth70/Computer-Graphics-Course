#include <iostream>
#include <graphics.h>
using namespace std;

int main()
{
	
	int x1,y1,x2,y2;
	int gd=DETECT,gm;

	cout<<"(x1,y1)";
	cin >> x1>>y1;

	cout<<"(x2,y2)";
	cin >> x2>>y2;

	initgraph(&gd,&gm,NULL);
	settextstyle(10,2,12); 
	setlinestyle(10,2,12);
	outtextxy(150,15,"By Samarth Agarwal");

	outtextxy(150,35,"x");




	delay(5000);
	getchar();
	// delay(50000);
	return 0;
}



// void wait_for_char()
// 		{
// 		    //Wait for a key press
// 		    int in = 0;

// 		    while (in == 0) {
// 		        in = getchar();
// 		    }
// 		}



	

	// wait_for_char();
	// closegraph();