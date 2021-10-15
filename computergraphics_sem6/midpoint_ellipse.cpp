#include <graphics.h>  
#include <stdlib.h>  
#include <iostream>  
#include <math.h> 
using namespace std; 




// void ellipse(float h,float k,float a,float b)
// {
// 	float p1,p2;
// 	float x=0;  
//     float y=b;
//     float dx=2*b*b*x, dy=2*a*a*y;

//     // REGION 1  
//     p1 =(b * b)-(a * a * b) + (a * a)/4;  
//     while (dx<dy) 
//     {  
//         putpixel (x+h, y+k, WHITE);  
//         putpixel (-x+h, -y+k, WHITE);  
//         putpixel (x+h, -y+k, WHITE);  
//         putpixel (-x+h, y+k, WHITE); 

//         if (p1 < 0)  
//             p1 += ((2 *b * b) *(x+1))-((2 * a * a)*(y-1)) + (b * b);  
//         else  
//         {  
//             p1+= ((2 *b * b) *(x+1))-((2 * a * a)*(y-1))-(b * b);  
//             y--;          
//         }  
//         x++;  
//     }  
//     //REGION 2  
//     p2 =((b * b)* (x + 0.5))+((a * a)*(y-1) * (y-1))-(a * a *b * b);  
//     while (y>0)  	
//     {  
//         putpixel (x+h, y+k, RED);  
//         putpixel (-x+h, -y+k, RED);  
//         putpixel (x+h, -y+k, RED);  
//         putpixel (-x+h, y+k, RED);  
//         if (p2>0)  
//         p2=p2-((2 * a * a)* (y-1))+3*(a *a);  
//         else  	
//         {  
//         	x=x+1;
//         	y=y-1;
//         	dy=dy-2*a*a;
//         	dx+=2*b*b;
//         	p2=p2+dx-dy+a*a;
//         // p2=p2-((2 * a * a)* (y-1))+((2 * b * b)*(x+1))+(a * a);  
//         // x++;  
//         }  
//         y--;  
//     }  
// }



int main()
{
	int gd = DETECT, gm;     
  	float a, b,r,p,h,k,p1,p2; 
    float x,y,rx,ry,X,Y;
	float pk;  
    // cout<<"\n ENTER CENTER OF ELLIPSE ";  
    // cin>>h>>k;    
    // cout<<"\n ENTER LENGTH OF MAJOR AND MINOR AXIS  ";  
    // cin>>a>>b;    
	cout<<"Enter major axis\n";
	cin>>rx;
	cout<<"Enter minor axis\n";
	cin>>ry;
	cout<<"Enter centre\n";
	cin>>X>>Y;

	x=0,y=ry;

	initgraph(&gd, &gm, NULL);  

    outtextxy(15,15,"Midpoint Ellipse by Samarth 8444\nEnter major axis 40 \n Enter minor axis 100 \n Enter centre 250 250\n");
 
	float Rx=pow(rx,2),Ry=pow(ry,2);
	pk=Ry-(Rx*ry)+(Rx/4);
	while((2*Ry*x)<=(2*Rx*y))
 	{
	if(pk<0)
	{
		x=x+1;
		pk=pk+(2*Ry*x)+Ry;
	}
		else
	{
		x=x+1;
		y=y-1;
		pk=pk+(2*Ry*x)-(2*Rx*y)+Ry;
	}
		putpixel(x+X,y+Y,WHITE);
		putpixel(-x+X,y+Y,WHITE);
		putpixel(x+X,-y+Y,WHITE);
		putpixel(-x+X,-y+Y,WHITE);
	}
	pk=(Ry*pow((x+0.5),2))+(Rx*pow((y-1),2))-(Rx*Ry);
	while((2*Rx*y)!=0)
	{
		if(pk<0)
			{
			x=x+1;
			y=y-1;
			pk=pk-(2*Rx*y)+(2*Ry*x)+Rx;
			}
		else
			{
			y=y-1;
			pk=pk-(2*Rx*y)+Rx;
			}
		putpixel(x+X,y+Y,WHITE);
		putpixel(-x+X,y+Y,WHITE);
		putpixel(x+X,-y+Y,WHITE);
		putpixel(-x+X,-y+Y,WHITE);

	}
        // ellipse(h,k,a,b);  
    
    getch();
    getchar();

	return 0;
}