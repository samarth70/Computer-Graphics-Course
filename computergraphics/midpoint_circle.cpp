#include<iostream>
#include<graphics.h>
using namespace std;

void midPointCircleDraw(int xc, int yc, int r) 
{ 
	int x = r, y = 0; 
	
	
	if (r > 0) 
	{ 
    putpixel(x+xc, -y+yc, WHITE);
    putpixel(y+xc, x+yc, WHITE);
    putpixel(-y+xc, x+yc, WHITE);
	} 
	
	int P = 1 - r; 
	while (x > y) 
	{ 
		y++; 
		
		if (P <= 0) 
			P = P + 2*y + 1; 
		else
		{ 
			x--; 
			P = P + 2*y - 2*x + 1; 
		} 
		
		if (x < y) 
			break; 
		
    putpixel(x+xc, y+yc, WHITE);
    putpixel(-x+xc, y+yc, WHITE);
    putpixel(x+xc, -y+yc, WHITE);
    putpixel(-x+xc, -y+yc, WHITE);
		
		if (x != y) 
		{ 
      putpixel(y+xc, x+yc, WHITE);
      putpixel(-y+xc, x+yc, WHITE);
      putpixel(y+xc, -x+yc, WHITE);
      putpixel(-y+xc, -x+yc, WHITE);
		} 
	} 
} 

int main() 
{ 
  int gd = DETECT, gm, color;
  

  initgraph(&gd, &gm, NULL);
	outtextxy(10,15,"Mid-Point circle by Samarth\nEnter coordinates of mid-point (x, y): 200 200\n Enter radius of circle: 100\n");
	midPointCircleDraw(200, 200, 100); 
  getchar();
	return 0; 
} 