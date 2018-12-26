/*
This is the code
No licences , can be redistributed by anyone , i don't mind

author-Himanshu singh bisht
date-26/12/2018
what this does?= read redme file or wrapping up in a single sentence " it formats text and makes it look fancy"
only lowercase alphabets will be formatted , will not work for uppercase letters or numbers !


/*



#include<iostream>
#include<string.h>
#define endl "\n"
using namespace std;
void gotoxy(int x,int y)                          //This is the gotoxy() function which helps to move at anypoint 
 {                                                  // in the console
 printf("%c[%d;%df",0x1B,y,x);
 }
int main(int argc,char*argv[])
{
system("clear");
int x=2,y=2;
char a[argc];
for(int i=1;i<argc;i++)
{

a[i]=*argv[i];
}
char b;
for(int i=1;i<strlen(a);i++)
{
gotoxy(x,y);
b=a[i];
if(b==32)
x+=3;

switch(b)
{                                         // switch case for all lowercase alphabets

case 'a':                                     //rest is implementation

cout << endl;
gotoxy(x,y+1);

 cout << "  __ _";
gotoxy(x,y+2);
 
 cout << " / _` |";
gotoxy(x,y+3);
cout << "| (_| |";
gotoxy(x,y+4);

cout<< " \\__,_|";

x+=7;
break;
case 'b':
cout << " _     ";
gotoxy(x,y+1);
cout << "| |__  ";
gotoxy(x,y+2);
cout << "| '_ \\ ";
gotoxy(x,y+3);
cout << "| |_) |";
gotoxy(x,y+4);
cout << "|_.__/ ";
       
x+=7;
break;
case 'c':



gotoxy(x,y+1);
cout << "  ___"; gotoxy(x,y+2);
 cout <<" / __|";gotoxy(x,y+3);
cout << "| (__ ";gotoxy(x,y+4);
 cout << " \\___|";
      
x+=6;
break;
case 'd':

gotoxy(x,y);
cout << "      _ ";gotoxy(x,y+1);
cout << "   __| |";gotoxy(x,y+2);
cout << "  / _` |";gotoxy(x,y+3);
cout << " | (_| |";gotoxy(x,y+4);
 cout << "  \\__,_|";gotoxy(x,y+5);
       



x+=8;
break;
case 'e':


gotoxy(x,y+1);
cout << "  ___ ";gotoxy(x,y+2);
 cout << " / _ \\";gotoxy(x,y+3);
cout << "|  __/";gotoxy(x,y+4);
 cout << " \\___|";
      


x+=6;
break;
case 'f':


cout << "   __ ";gotoxy(x,y+1);
cout << "  / _|";gotoxy(x,y+2);
cout << " | |_ ";gotoxy(x,y+3);
cout << " |  _|";gotoxy(x,y+4);
cout << " |_|  ";
     


x+=6;

break;
case 'g':


cout << "   __ _ ";gotoxy(x,y+1);
cout << "  / _` |";gotoxy(x,y+2);
cout << " | (_| |";gotoxy(x,y+3);
 cout << "  \\__, |";gotoxy(x,y+4);
 cout << "  |___/ ";

x+=8;


break;
case 'h':

cout << " _      ";
gotoxy(x,y+1);
cout << "| |__   ";

gotoxy(x,y+2);
cout << "| '_ \\  ";

gotoxy(x,y+3);
cout << "| | | | ";

gotoxy(x,y+4);
cout << "|_| |_| ";


x+=7;
break;
case 'i':
cout << " _ ";

gotoxy(x,y+1);
cout << "(_)";
gotoxy(x,y+2);
cout << "| |";

gotoxy(x,y+3);
cout << "| |";

gotoxy(x,y+4);
cout << "|_|";
x+=3;
break;
case 'j':
gotoxy(x,y-1);
cout << "   _ ";gotoxy(x,y);
cout << "  (_)";gotoxy(x,y+1);
 cout << "  | |";gotoxy(x,y+2);
 cout << "  | |";gotoxy(x,y+3);
 cout << " _/ |";gotoxy(x,y+4);
cout << "|__/ ";gotoxy(x,y+5);



x+=6;

break;
case 'k':
gotoxy(x,y);
cout << "  _    ";gotoxy(x,y+1);
cout << " | | __";gotoxy(x,y+2);
cout << " | |/ /";gotoxy(x,y+3);
cout << " |   < ";gotoxy(x,y+4);
cout << " |_|\\_\\";
      


x+=7;
break;
case 'l':
gotoxy(x,y);
cout << "  _ ";gotoxy(x,y+1);
cout << " | |";gotoxy(x,y+2);
cout << " | |";gotoxy(x,y+3);
cout << " | |";gotoxy(x,y+4);
cout << " |_|";
   

x+=4;

break;
case 'm':
gotoxy(x,y+1);
cout << "  _ __ ___  ";gotoxy(x,y+2);
cout << " | '_ ` _ \\ ";gotoxy(x,y+3);
cout << " | | | | | |";gotoxy(x,y+4);
cout << " |_| |_| |_|";
           

x+=12;

break;
case 'n':
   gotoxy(x,y+1);
cout << "  _ __  ";gotoxy(x,y+2);
cout << " | '_ \\ ";gotoxy(x,y+3);
cout << " | | | |";gotoxy(x,y+4);
cout << " |_| |_|";
       
x+=8;

break;
case 'o':
gotoxy(x,y+1);
cout << "   ___  ";gotoxy(x,y+2);
cout << "  / _ \\ ";gotoxy(x,y+3);
cout << " | (_) |";gotoxy(x,y+4);
cout << "  \\___/ ";
       

x+=8;

break;
case 'p':
gotoxy(x,y+1);
cout << "  _ __  ";gotoxy(x,y+2);
cout << " | '_ \\ ";gotoxy(x,y+3);
cout << " | |_) |";gotoxy(x,y+4);
cout << " | .__/ ";gotoxy(x,y+5);
cout << " |_|    ";


x+=8;
break;
case 'q':
gotoxy(x,y+1);
cout << "  __ _ ";gotoxy(x,y+2);
cout << " / _` |";gotoxy(x,y+3);
cout << "| (_| |";gotoxy(x,y+4);
 cout << " \\__, |";gotoxy(x,y+5);
 cout << "    |_|";

x+=8;

break;
case 'r':

gotoxy(x,y+1);
cout << "  _ __ ";gotoxy(x,y+2);
cout << " | '__|";gotoxy(x,y+3);
cout << " | |   ";gotoxy(x,y+4);
cout << " |_|   ";
      


x+=7;

break;
case 's':

gotoxy(x,y+1);
cout << "  ___ ";gotoxy(x,y+2);
cout << " / __|";gotoxy(x,y+3);
cout << " \\__ \\";gotoxy(x,y+4);
cout << " |___/";
     

x+=6;

break;
case 't':

gotoxy(x,y);
cout << "  _   ";gotoxy(x,y+1);
cout << " | |_ ";gotoxy(x,y+2);
cout << " | __|";gotoxy(x,y+3);
cout << " | |_ ";gotoxy(x,y+4);
cout << "  \\__|";
     


x+=6;
break;
case 'u':

gotoxy(x,y+1);
cout << "  _   _ ";gotoxy(x,y+2);
cout << " | | | |";gotoxy(x,y+3);
cout << " | |_| |";gotoxy(x,y+4);
cout << "  \\__,_|";
       

x+=8;

break;
case 'v':
gotoxy(x,y+1);
cout << " __   __";gotoxy(x,y+2);
cout << " \\ \\ / /";gotoxy(x,y+3);
cout << "  \\ V / ";gotoxy(x,y+4);
 cout << "   \\_/  ";
       
x+=8;

break;
case 'w':

gotoxy(x,y+1);
cout << " __      __";gotoxy(x,y+2);
cout << " \\ \\ /\\ / /";gotoxy(x,y+3);
cout << "  \\ V  V / ";gotoxy(x,y+4);
cout << "   \\_/\\_/  ";
          



x+=11;
break;
case 'x':

gotoxy(x,y+1);
cout << " __  __";gotoxy(x,y+2);
cout << " \\ \\/ /";gotoxy(x,y+3);
cout << "  >  < ";gotoxy(x,y+4);
cout << " /_/\\_\\";
      


x+=7;

break;
case 'y':

gotoxy(x,y);
 cout << "  _   _ ";gotoxy(x,y+1);
cout << " | | | |";gotoxy(x,y+2);
cout << " | |_| |";gotoxy(x,y+3);
 cout << "  \\__, |";gotoxy(x,y+4);
 cout << "  |___/ ";


x+=8;

break;
case 'z':

gotoxy(x,y+1);
cout << "  ____";gotoxy(x,y+2);
cout << " |_  /";gotoxy(x,y+3);
 cout << "  / / ";gotoxy(x,y+4);
cout << " /___|";
     


x+=6;
break;


}

}
for(int i=0;i<10;i++)
cout << endl;
return 0;
}
