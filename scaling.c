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
    int sx=2,sy=2,x=100,y=100,x1=80,y1=200,x2=120,y2=200;
    int nx,ny,nx1,ny1,nx2,ny2;

   initgraph(&gd,&gm,NULL);
    line(x,y,x1,y1);
    line(x1,y1,x2,y2);
    line(x2,y2,x,y);
    
    nx=x*sx;
    ny=y*sy;
    nx1=x1*sx;
    ny1=y1*sy;
    nx2=x2*sx;
    ny2=y2*sy;

    line(nx,ny,nx1,ny1);
    line(nx1,ny1,nx2,ny2);
    line(nx2,ny2,nx,ny);

    wait_for_char();
   closegraph();
   return 0;
}

