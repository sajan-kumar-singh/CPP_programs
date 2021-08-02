#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
    clrscr();
    int i,j,t2=3,f2=2,n=65,l=77,f=1,t=1,b=24;
    for(j=0;j<6;j++)
    {
    for(i=f;i<=l;i++)
        {
            gotoxy(i,t);
            textcolor(RED);
            cout<<char(n);
            delay(50);
        }    n=n+1;
    for(i=t+1;i<=b;i++)
    {
        gotoxy(l,i);
        cout<<char(n);
        delay(50);
    }    n=n+1;
    for(i=l;i>=f;i--)
    {
        gotoxy(i,b);
        cout<<char(n);
        delay(50);
    }    n=n+1;
    for(i=b;i>=t+2;i--)
    {
        gotoxy(f,i);
        cout<<char(n);
        delay(50);
    }n=n+1;
    gotoxy(f2,t2);
    cout<<char(n);
    l=l-3;
    f=f+2;
    t=t+2;
    b=b-2;
    t2=t2+2;
    f2=f2+2;
    }
    getch();
}
