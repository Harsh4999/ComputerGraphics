#include <graphics.h>
#include<stdlib.h>
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
   int gd = DETECT,gm,left=100,top=100,right=200,bottom=200,x= 300,y=150,radius=50;
   int tx=100,ty=100,bx=200,by=200,mvx=10,mvy=10;
   initgraph(&gd,&gm,NULL);
  //  scanf("%d%d%d%d",&tx,&ty,&bx,&by);
  //  scanf("%d%d",&mvx,&mvy);
    cleardevice();
    rectangle(tx,ty,bx,by);
    delay(3000);
    rectangle(tx+mvx,ty+mvy,bx+mvx,by+mvy);

   // rectangle(left, top, right, bottom);
  // circle(x, y, radius);
  // bar(left + 300, top, right + 300, bottom);
  // line(left - 10, top + 150, left + 410, top + 150);
  // ellipse(x, y + 200, 0, 360, 100, 50);
  // outtextxy(left + 100, top + 325, "C Graphics Program");
  // delay(5000);
   wait_for_char();
   closegraph();
   return 0;
}

