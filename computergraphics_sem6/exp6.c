#include<graphics.h>
#include<stdio.h>
#include<math.h>
int main()
{
	int gd=DETECT,gm;
	float x1,y1,x2,y2,x3,y3;  
    double s,c, angle; 

    printf("Enter coordinates of triangle: ");  
    scanf("%f%f%f%f%f%f",&x1,&y1,&x2,&y2, &x3, &y3);  


      
    printf("Enter rotation angle: ");  
    scanf("%lf", &angle);  
     
		
	initgraph(&gd,&gm,NULL);
	setcolor(WHITE);  
	outtextxy(15,15,"by Samarth 8444\n Enter first coordinate of the triangle= 300 400 \n Enter second coordinates of triangle 400 300\nEnter third coordinates of triangle:150 200 \n Now enter the rotational angle(anti clockwise):60 \nBefore rotation:White \nAfter rotation:Red ");
 	
 	// cleardevice();  
    line(x1,y1,x2,y2);  
    line(x2,y2, x3,y3);  
    line(x3, y3, x1, y1);  
    // getch();
	// setbkcolor(BLACK);

	// setbkcolor(WHITE);  
    c = cos(angle *M_PI/360);  
    s = sin(angle *M_PI/360);  
    x1 = (x1 * c + y1 * s);  
    y1 = (-x1 * s + y1 * c);  
    x2 = (x2 * c + y2 * s);  
    y2 = (-x2 * s + y2 * c);  
    x3 = (x3 * c + y3 * s);  
    y3 = (-x3 * s + y3 * c);  
    // cleardevice();
    setcolor(RED);  
    line(x1, y1 ,x2, y2);  
    line(x2,y2, x3,y3);  
    line(x3, y3, x1, y1); 
	
	getchar();
	// getchar();
	// closegraph();
	return 0;
}
