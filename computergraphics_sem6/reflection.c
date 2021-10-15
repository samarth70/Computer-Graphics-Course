#include<stdio.h>
#include<graphics.h>


void main()
{
	int a,a1,b,b1,c,c1,xt,ch;
	int gd=DETECT,gm;

	
	printf("1.x-axis\n");
	printf("2.y-axis\n");
	initgraph(&gd,&gm,NULL);
	// printf("3.exit\n");
	a=getmaxx();
	a1=getmaxy();
	b=a/2;
	b1=a1/2;

	line(b,0,b,a1);
	line(0,b1,a,b1);
	line(400,200,600,200);
	line(400,200,400,100);
	line(400,100,600,200);

	do
	{
	printf("enter your choice\n");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:
	      c=400-b;c1=200-b1;
	      line(b+c,b1-c1,b+c+200,b1-c1);
	      line(b+c,b1-c1,b+c,b1-c1+100);
	      line(b+c,b1-c1+100,b+c+200,b1-c1);
	      break;

	case 2:
	      c=400-b;c1=200-b1;
	      line(b-c,b1+c1,b-c-200,b1+c1);
	      line(b-c,b1+c1,b-c,b1+c1-100);
	      line(b-c,b1+c1-100,b-c-200,b1+c1);
	      break;
	} 

	}while(ch<3);
	getchar();
	// closegraph();
}

