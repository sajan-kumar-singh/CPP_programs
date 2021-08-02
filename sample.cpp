#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
void main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
    int i,x,y;
    x=getmaxx()/2;
    y=getmaxy()/2;
    for(i=10;i<=238;i++)
    {
        setcolor(15);
        circle(x,y,i);
        delay(100);
        setcolor(0);
        circle(x,y,i);
    }getch();
    closegraph();
}
