#include<iostream.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
void main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
    int x,y,i;
    x=getmaxx();
    y=getmaxy();
    for(i=0;i<=y;i++)
    {setcolor(WHITE);
    line(0,i,x,i);}
    getch();
    for(i=50;i<55;i++)
    {setcolor(RED);
    circle(420,200,i);
    setcolor(GREEN);
    circle(360,260,i);
    setcolor(BLUE);
    circle(180,200,i);
    setcolor(YELLOW);
    circle(240,260,i);
    setcolor(BLACK);
    circle(300,200,i);
    delay(500);}
    gotoxy(30,5);
    cout<<"OLYMPICS 2020";
    delay(2000);
    gotoxy(25,7);
    cout<<"C O M I N G   S O O N ";
    getch();
/*0:Black
1: Blue
2: Green
3: Cyan
4: Red
5: Purple
6: Yellow (Dark)
7: Default white
8: Gray/Grey
9: Bright blue
10: Brigth green
11: Bright cyan
12: Bright red
13: Pink/Magenta
14: Yellow
15: Bright white*/
getch();
x=getmaxx();
    y=getmaxy();
    for(i=0;i<=y;i++)
    {setcolor(WHITE);
    line(0,i,x,i);}
    getch();
    x=30;
    for(i=0;i<16;i++)
    {
        setcolor(i);
        line(x,100,x,150);
        x=x+30;
    }getch();
    closegraph();
}

