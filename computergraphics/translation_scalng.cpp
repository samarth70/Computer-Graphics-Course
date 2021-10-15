// #include <graphics.h>
// #include <stdlib.h>
// #include <stdio.h>
// #include <conio.h>
// #include<math.h>

// void draw2d(int,int [],int [],int,int)
// {

//     int i; 
//     for(i=0;i<fs;i++) 
//     { 
//     if(i!=(fs-1)) 
//     line(x[i]+tx,y[i]+ty,x[i+1]+tx,y[i+1]+ty); 
//     else 
//     line(x[i]+tx,y[i]+ty,x[0]+tx,y[0]+ty); 
//     } 

// } 

 


// int main()
// {
      
//     int xc,yc,r,gd = DETECT,gm;
//     int x[20],y[20],tx=0,ty=0,i,fs; 
//     int sx,sy,xt,yt,r;
//     float t;
//     cout<<"No of sides : "; 
//     cin>>"%d",&fs; 
//     printf("Co-ordinates : "); 

//     for(i=0;i<fs;i++) 
//     { 

//     cout<<"(x"<<i<<",y"<<i<<")";  
//     cin>>x[i]>>y[i];    
    
//     } 


//     initgraph(&gd, &gm, NULL); 

//     // getch(); 
//     getchar();
//     return 0;   


// }





// void main() 

// { 

// int gd=DETECT,gm; 

// int x[20],y[20],tx=0,ty=0,i,fs; 

// initgraph(&gd,&gm,Null); 

// printf("No of sides : "); 

// scanf("%d",&fs); 

// printf("Co-ordinates : "); 

// for(i=0;i<fs;i++) 

// { 

// printf("(x%d,y%d)",i,i); 

// scanf("%d%d",&x[i],&y[i]); 

// } 

// draw2d(fs,x,y,tx,ty); 

// printf("translation (x,y) : "); 

// scanf("%d%d",&tx,&ty); 

// draw2d(fs,x,y,tx,ty); 

// getch(); 

// } 

// // void draw2d(int fs,int x[20],int y[20],int tx,int ty) 

