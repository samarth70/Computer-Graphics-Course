#include <graphics.h>
#include <iostream>
#include <math.h>
using namespace std;



int main()
{
	int x,y,x1,y1,x2,y2,dx,dy,e,exchange,s1,s2,p;
	int i,gd=DETECT,gm;
 
 
	cout<<"Enter the value of x1 and y1 : ";
	cin>>x1>>y1;
	cout<<"Enter the value of x2 and y2: ";
	cin>>x2>>y2;

	initgraph(&gd,&gm,NULL);

	
	outtextxy(150,15,"By Samarth Agarwal-BRESENHAM'S ALGORITHM");

	dx=(x2-x1);
	dy=(y2-y1);
	x=x1;
	y=y1;  

    p=2*dy-dx;  
    while(x<x2)  
    {  
        if(p>=0)  
        {  
            putpixel(x,y,7);  
            y=y+1;  
            x=x+1;  
            p=p+2*dy-2*dx;  
        }  
        else  
        {  
            putpixel(x,y,7);  
            p=p+2*dy;
            x=x+1;  
        }  
            
    }  

	


	getchar();
	getch();

	return 0;

}