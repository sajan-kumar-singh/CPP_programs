#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
#include<graphics.h>
void main()
{
    clrscr();
    char i,numb[10];
    cout<<"Enter 10 digit phone number"<<endl;
    for(i=0;i<10;i++)
    {
        numb[i]=getche();
        {
            sound(1000);
            delay(100);
            nosound();
        }
    }
    getch();
    cout<<"\n1.Call  "<<"2.Exit"<<endl;
    int ch;
    cin>>ch;
    if(ch==2)
    {
        exit(0);
    }
    if(ch==1)
    {
        gotoxy(1,15);
        cout<<"Calling.";
        for(int i=0;i<10;i++)
            {gotoxy(9,15);
            cout<<".";
            delay(500);
            gotoxy(10,15);
            cout<<".";
            delay(500);
            gotoxy(9,15);
            cout<<"  ";
            delay(100);
        }
        gotoxy(1,15);
        cout<<"Calling..."<<endl;
        delay(500);
        cout<<"Check your network access "<<endl;
        getch();
    }
}


