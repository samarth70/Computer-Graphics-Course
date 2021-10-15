#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;	

#include<graphics.h>

void wait_for_char()
		{
		    //Wait for a key press
		    int in = 0;

		    while (in == 0) {
		        in = getchar();
		    }
		}
 
int main()
{
      int gd = DETECT, gm;
      int left = 100, right = 200, top = 100, bottom = 200;
      // printf("\nLet's build a sample rectangle using Graphics in C\n");
      initgraph(&gd, &gm, NULL);
      rectangle(left, top, right, bottom);
      // getch();
      wait_for_char();

      closegraph();
      return 0;
}



// g++ -g -o exp1  exp1.cpp  -lgraph
