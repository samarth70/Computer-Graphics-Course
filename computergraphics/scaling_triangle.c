// C program to demonstrate scaling of abjects 
#include<stdio.h> 
#include<graphics.h> 

 
void findNewCoordinate(float s[][2], float p[][1]) 
{ 
	float temp[2][1] = { 0 }; 

	for (int i = 0; i < 2; i++) 
		for (int j = 0; j < 1; j++) 
			for (int k = 0; k < 2; k++) 
				temp[i][j] += (s[i][k] * p[k][j]); 

	p[0][0] = temp[0][0]; 
	p[1][0] = temp[1][0]; 
} 

// Scaling the Polygon 
void scale(float x[], float y[], float sx, float sy) 
{ 
	// Triangle before Scaling 
	line(x[0], y[0], x[1], y[1]); 
	line(x[1], y[1], x[2], y[2]); 
	line(x[2], y[2], x[0], y[0]); 

	// Initializing the Scaling Matrix. 
	float s[2][2] = { sx, 0, 0, sy }; 
	float p[2][1]; 

	// Scaling the triangle 
	for (int i = 0; i < 3; i++) 
	{ 
		p[0][0] = x[i]; 
		p[1][0] = y[i]; 

		findNewCoordinate(s, p); 

		x[i] = p[0][0]; 
		y[i] = p[1][0]; 
	} 

	// Triangle after Scaling 
	line(x[0], y[0], x[1], y[1]); 
	line(x[1], y[1], x[2], y[2]); 
	line(x[2], y[2], x[0], y[0]); 
} 


float main() 
{ 
	float x[] = { 300, 150, 320 };
	float y[] = { 300, 180, 200 };  
	float sx = 0.5, sy = 0.5; 

	int gd; 
	int gm; 
	// detectgraph(&gd, &gm); 
	initgraph(&gd, &gm,NULL); 
	outtextxy(15,15,"by Samarth 8444\nEnter first coordinates of triangle (x, y):150 150  \n second coordinates of triangle 150 350\nEnter third coordinates of triangle:320 300 \n Scaling factor: 0.5 0.5");
 
	scale(x, y, sx,sy); 

	getchar();
	getch(); 

	return 0; 
} 