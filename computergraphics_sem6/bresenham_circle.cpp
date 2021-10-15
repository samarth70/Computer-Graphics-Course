#include <graphics.h>  
#include <stdlib.h>  
#include <iostream>  
#include <math.h> 
using namespace std; 
  
    void EightWaySymmetricPlot(int xc,int yc,int x,int y)  
   {  
    putpixel(x+xc,y+yc,WHITE);  
    putpixel(x+xc,-y+yc,WHITE);  
    putpixel(-x+xc,-y+yc,WHITE);  
    putpixel(-x+xc,y+yc,WHITE);  
    putpixel(y+xc,x+yc,WHITE);  
    putpixel(y+xc,-x+yc,WHITE);  
    putpixel(-y+xc,-x+yc,WHITE);  
    putpixel(-y+xc,x+yc,WHITE);  
   }  
  
    void BresenhamCircle(int xc,int yc,int r)  
   {  
    int x=0,y=r,d=3-(2*r);  
    EightWaySymmetricPlot(xc,yc,x,y);  
  
    while(x<=y)  
     {  
      if(d<=0)  
             {  
        d=d+(4*x)+6;  
      }  
     else  
      {  
        d=d+(4*x)-(4*y)+10;  
        y=y-1;  
      }  
       x=x+1;  
       EightWaySymmetricPlot(xc,yc,x,y);  
      }  
    }  
  
    int  main(void)  
   {  
   	
    /* request auto detection */  
    int xc,yc,r,gd = DETECT, gm;   
    /* initialize graphics and local variables */  
  
  
      
    printf("Enter the values of xc and yc :");  
    scanf("%d%d",&xc,&yc);  
    printf("Enter the value of radius  :");  
    scanf("%d",&r);

    initgraph(&gd, &gm, NULL);  
    outtextxy(15,15,"Bresenham Circle by Samarth 8444\nEnter coordinates of center (x, y): 200 200\n Enter radius of circle: 100\n");
    BresenhamCircle(xc,yc,r);  
  
     getch(); 
     getchar(); 
     // closegraph();  
     return 0;  
    }  




// gcc -o open_endedprt2  open_endedprt2.c  -lgraph -lm
