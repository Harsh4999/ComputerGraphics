#include <graphics.h>
#include<stdlib.h>
#include<math.h>
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
   int gd = DETECT,gm;
   int x=100,y=100,x1=200,y1=100,nx,ny,nx1,ny1;
   double s,c,angle=-45;

   initgraph(&gd,&gm,NULL);
   //line(x,y,x1,y1);
   //We first convert angle = angle*3.14/180 because we need to convert it to radian from degree
   s = sin(angle*3.14/180); //calc sin angle
   c = cos(angle*3.14/180); //calc cos angle
                            //new cordinates: (x,y) (x1,y1)
                            //this formula is for anticlock wise rotation
    // anti: new_x1 = x+floor((x1-x)*cos(angle*3.14/180)+(y1-y)*sin(angle*3.14/180))
    // anti: new_y1 = y+floor(-(x1-x)*sin(angle*3.14/180)+(y1-y)*cos(angle*3.14/180))
    // new cords: (x,y,new_x,new_y)

   nx1 = x+floor((x1-x)*c+(y1-y)*s); //calc new x1 coz x will be same 
   ny1 = y+floor(-(x1-x)*s+(y1-y)*c); //calc new y1 coz y will be same
   delay(1000);
   cleardevice();
   line(x,y,x1,y1);
   line(x,y,nx1,ny1);

   wait_for_char();
   closegraph();
   return 0;
}

