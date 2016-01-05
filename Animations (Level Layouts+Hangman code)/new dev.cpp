#include<time.h>
#include<fstream>
#include<process.h>
#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<string>
#include<iostream>
using namespace std;
struct book
{
float TIME;
char name[35];
};

void gotoxy(short x, short y)
 {
COORD pos = {x, y};
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
int main()
{



//Initialising the variable


void game(clock_t &start, clock_t &end, char c[10000], char s[10000], char filename[13]);
void add_hs(float &, char filename[13]);
void read_hs(char filename[13]);
void help_text();
void about_text();
int menu_1();
int menu_2(float &);
char again();
system("cls");
clock_t start;
clock_t end;
char c[10000];
char s[10000];
char filename[13];
int choice_1;
int choice_2;
char choice_3;
char a;





//Menu


do
{
do
{
choice_1=menu_1();
if ((choice_1>5)||(choice_1<1))
cout<<"Invalid Choice.";
}while((choice_1>5)||(choice_1<1));
switch(choice_1)
{
case 1: GAMELOOP:
{
system("cls");

for(int u=0;u<6;u++)
{if(u==0){system("cls");int logox=12,logoy=10;
gotoxy(logox,logoy);        cout<<"db        d88888b   db    db   d88888b   db           db \n";
logoy++;gotoxy(logox,logoy);cout<<"88        88'       88    88   88'       88          o88 \n";
logoy++;gotoxy(logox,logoy);cout<<"88        88ooooo   Y8    8P   88ooooo   88           88 \n";
logoy++;gotoxy(logox,logoy);cout<<"88        88~~~~~   `8b  d8'   88~~~~~   88           88 \n";
logoy++;gotoxy(logox,logoy);cout<<"88booo.   88.        `8bd8'    88.       88booo.      88 \n";
logoy++;gotoxy(logox,logoy);cout<<"Y88888P   Y88888P      YP      Y88888P   Y88888P      VP \n";
Sleep(1000);strcpy(filename,"Level 1");}
else if(u==1){system("cls");int logox=12,logoy=10;
gotoxy(logox,logoy);        cout<<"db        d88888b   db    db   d88888b   db         .d888b. \n";
logoy++;gotoxy(logox,logoy);cout<<"88        88'       88    88   88'       88         VP  `8D  \n";
logoy++;gotoxy(logox,logoy);cout<<"88        88ooooo   Y8    8P   88ooooo   88            odD'  \n";
logoy++;gotoxy(logox,logoy);cout<<"88        88~~~~~   `8b  d8'   88~~~~~   88          .88'    \n";
logoy++;gotoxy(logox,logoy);cout<<"88booo.   88.        `8bd8'    88.       88booo.    j88.    \n";
logoy++;gotoxy(logox,logoy);cout<<"Y88888P   Y88888P      YP      Y88888P   Y88888P    888888D  \n";
Sleep(1000);strcpy(filename,"Level 2");}
else if(u==2){system("cls");int logox=12,logoy=10;
gotoxy(logox,logoy);        cout<<"db        d88888b   db    db   d88888b   db         d8888b. \n";
logoy++;gotoxy(logox,logoy);cout<<"88        88'       88    88   88'       88             `8D     \n";
logoy++;gotoxy(logox,logoy);cout<<"88        88ooooo   Y8    8P   88ooooo   88          ~<((      \n";
logoy++;gotoxy(logox,logoy);cout<<"88booo.   88.        `8bd8'    88.       88booo.        ,8D     \n";
logoy++;gotoxy(logox,logoy);cout<<"Y88888P   Y88888P      YP      Y88888P   Y88888P    88888P     \n";
Sleep(1000);strcpy(filename,"Level 3");}
else if(u==3){system("cls");int logox=12,logoy=10;
gotoxy(logox,logoy);        cout<<"db        d88888b   db    db   d88888b   db           j88D  \n";
logoy++;gotoxy(logox,logoy);cout<<"88        88'       88    88   88'       88          j8~88      \n";
logoy++;gotoxy(logox,logoy);cout<<"88        88ooooo   Y8    8P   88ooooo   88         j8' 88    \n";
logoy++;gotoxy(logox,logoy);cout<<"88booo.   88.        `8bd8'    88.       88booo.   C888888D      \n";
logoy++;gotoxy(logox,logoy);cout<<"Y88888P   Y88888P      YP      Y88888P   Y88888P        88      \n";
Sleep(1000);strcpy(filename,"Level 4");}
else if(u==4){system("cls");int logox=12,logoy=10;
gotoxy(logox,logoy);        cout<<"db        d88888b   db    db   d88888b   db         bboooo \n";
logoy++;gotoxy(logox,logoy);cout<<"88        88'       88    88   88'       88        dP      \n";
logoy++;gotoxy(logox,logoy);cout<<"88        88ooooo   Y8    8P   88ooooo   88        V8888b.   \n";
logoy++;gotoxy(logox,logoy);cout<<"88booo.   88.        `8bd8'    88.       88booo.        `8D     \n";
logoy++;gotoxy(logox,logoy);cout<<"Y88888P   Y88888P      YP      Y88888P   Y88888P    88oobY'  \n";
Sleep(1000);strcpy(filename,"Level 5");}

game(start, end, c, s, filename);
if(stricmp(c,s)!=0)
{char option;system("cls");
int logox=18,logoy=12;
gotoxy(logox,logoy);        cout<<"     Oops!! You have typed incorrectly.";
logox=18;logoy=14;gotoxy(logox,logoy);cout<<"Do you want to Replay this Level ? (y/n) : ";
cin>>option;
if ((option=='y')||(option=='Y'))
{u--;}

}
else if(stricmp(c,s)==0)
{
float usertime=(end-start)/CLK_TCK;
system("cls");
int logox=26,logoy=8;
gotoxy(logox,logoy);                 cout<<"You finished in "<<usertime<<" seconds.";
logox=23;logoy=13;gotoxy(logox,logoy);cout<<" 1. Add your time for "<<filename;
logoy++;gotoxy(logox,logoy);         cout<<" 2. View highscores of "<<filename;
logoy++;gotoxy(logox,logoy);         cout<<" 3. Move to next Level "<<u+2;
logoy++;logoy++;logoy++;gotoxy(logox,logoy);cout<<"       Enter choice : ";
cin>>a;
if(a=='1')
{
add_hs(usertime,filename);system("cls");}
else if(a=='2'){read_hs(filename);}
}
}
}
getch();
case 2:
{system("cls");
int logox=15,logoy=8;
gotoxy(logox,logoy);        cout<<"Enter Level no(1-5) --  [type 'Level'spaceLevelno.]\n\n\t";
logox=35;logoy=10;gotoxy(logox,logoy);gets(filename);
read_hs(filename);
choice_3=again();
break;
}
case 3:help_text();
choice_3=again();
break;
case 4:about_text();
choice_3=again();
break;
case 5:exit(0);
break;
}
}while((choice_3=='n')||(choice_3=='N'));
getch();
}

char again()
{
char choice;
system("cls");
cout<<"\nDo you want to exit?(Y/N) : ";
cin>>choice;
if ((choice=='n')||(choice=='N')||(choice=='y')||(choice=='Y'))
return choice;
else
{
cout<<"Invalid choice";
again();
}
return choice;
}


void game(clock_t &start,clock_t &end,char c[10000],char s[10000],char filename[13])
{
system("cls");
ifstream fin(filename,ios::in);
while(!fin.eof())
{
fin.getline(s,10000);
for (int i=0;i<10000;i++)
{fin>>s[i];
}
}
fin.close();
system("cls");
int logox=17,logoy=3;gotoxy(logox,logoy);
cout<<"Type the following as fast as you can : ";
logox=9;logoy=6;gotoxy(logox,logoy);cout<<s;
cout<<"\n\n\n\t";
while(!kbhit()==0)
start=clock(); //On 1st keystroke, time is noted
gets(c);
end=clock(); //End time is noted
}

void read_hs(char filename[13])
{
system("cls");

char highfilename[13];
if((strcmp(filename,"Level 1"))==0)
strcpy(highfilename,"HIGHSCORE1.dat");
else if((strcmp(filename,"Level 2"))==0)
strcpy(highfilename,"HIGHSCORE2.dat");
else if((strcmp(filename,"Level 3"))==0)
strcpy(highfilename,"HIGHSCORE3.dat");
else if((strcmp(filename,"Level 4"))==0)
strcpy(highfilename,"HIGHSCORE4.dat");
else if((strcmp(filename,"Level 5"))==0)
strcpy(highfilename,"HIGHSCORE5.dat");

book b;
fstream file;
file.open(highfilename,ios::in);
if(!file)
{
cout<<"FILE NOT OPENED";
exit(0);
}
cout<<"\t\t\t NAME"<<"\t\t"<<"TIME (in s)\n\n";
while(file.read((char*)&b,sizeof(b)))
cout<<"\t\t\t"<<b.name<<"\t\t"<<b.TIME<<"\n";
file.close();
getch();
}


void add_hs(float &userTIME,char filename[13])
{
char highfilename[13];
if((strcmp(filename,"Level 1"))==0)
strcpy(highfilename,"HIGHSCORE1.dat");
else if((strcmp(filename,"Level 2"))==0)
strcpy(highfilename,"HIGHSCORE2.dat");
else if((strcmp(filename,"Level 3"))==0)
strcpy(highfilename,"HIGHSCORE3.dat");
else if((strcmp(filename,"Level 4"))==0)
strcpy(highfilename,"HIGHSCORE4.dat");
else if((strcmp(filename,"Level 5"))==0)
strcpy(highfilename,"HIGHSCORE5.dat");
book b;
book temp;
char last='y';
fstream fin;
fstream fout;
int logox=28,logoy=20;gotoxy(logox,logoy);cout<<"Enter your name :";
gets(temp.name);
temp.TIME=userTIME;
fout.open("TEMP.dat", ios::out);
fin.open(highfilename, ios::in);
if((!fin)||(!fout))
{
cout<<"FILE NOT OPENED";
exit(0);
}
//Inserting the new record in the sorted file
while(fin.read((char*)&b,sizeof(b)))
{
if(temp.TIME<=b.TIME)
{
fout.write((char*)&temp, sizeof(temp));
last='n';
break;
}
else
fout.write((char*)&b,sizeof(b));
}
if (last=='y')
fout.write((char*)&temp, sizeof(temp));
else
do
{
fout.write((char*)&b, sizeof(b));
}
while(fin.read((char*)&b,sizeof(b)));
fin.close();
fout.close();
remove(highfilename);
rename("TEMP.dat",highfilename);
logox=30;logoy=23;gotoxy(logox,logoy);cout<<" RECORD UPDATED";
getch();}






void help_text() //How to play game
{
system("cls");
int logox=7,logoy=5;
gotoxy(logox,logoy);        cout<<"  ___             __                   __   __                   \n";
logoy++;gotoxy(logox,logoy);cout<<" |   .-----.-----|  |_.----.--.--.----|  |_|__.-----.-----.-----.\n";
logoy++;gotoxy(logox,logoy);cout<<" |.  |     |__ --|   _|   _|  |  |  __|   _|  |  _  |     |__ --|\n";
logoy++;gotoxy(logox,logoy);cout<<" |.  |__|__|_____|____|__| |_____|____|____|__|_____|__|__|_____|\n";
logoy++;gotoxy(logox,logoy);cout<<" |:  |                                                           \n";
logoy++;gotoxy(logox,logoy);cout<<" |::.|                                                           \n";
logoy++;gotoxy(logox,logoy);cout<<" `---'                                                           \n";
logox=5;logoy=16;gotoxy(logox,logoy);cout<<"You have to enter the letters shown on the screen, as fast as you can.";
logoy++;gotoxy(logox,logoy);         cout<<" The time gets recorded from the moment the first keystroke is made.";
logoy++;gotoxy(logox,logoy);         cout<<"If the string is incorrectly entered, the Level has to be restarted.";
getch();
}




void about_text()
{system("cls");
int logox=19,logoy=7;
gotoxy(logox,logoy);        cout<<" .d8b.   d8888b.  .d88b.   db    db d888888b \n";
logoy++;gotoxy(logox,logoy);cout<<"d8' `8b  88  `8D .8P  Y8.  88    88 `~~88~~' \n";
logoy++;gotoxy(logox,logoy);cout<<"88ooo88  88oooY' 88    88  88    88    88    \n";
logoy++;gotoxy(logox,logoy);cout<<"88~~~88  88~~~b. 88    88  88    88    88    \n";
logoy++;gotoxy(logox,logoy);cout<<"88   88  88   8D `8b  d8'  88b  d88    88    \n";
logoy++;gotoxy(logox,logoy);cout<<"YP   YP  Y8888P'  `Y88P'   ~Y8888P'    YP    \n";
logox=10,logoy=15;
gotoxy(logox,logoy);        cout<<"Typefast is a program that lets you practice your speed-typing\n";
logoy++;gotoxy(logox,logoy);cout<<" skills and helps you get familiar with the QWERTY keyboard.\n";
logox=4,logoy=20;
gotoxy(logox,logoy);        cout<<" +-+-+-+-+-+-+-+-+-+ +-+-+ +-+-+-+-+-+-+ +-+-+-+ +-+-+-+-+-+-+-+-+-+-+-+\n";
logoy++;gotoxy(logox,logoy);cout<<" |D|e|v|e|l|o|p|e|d| |b|y| |S|u|j|i|t|h| |a|n|d| |V|i|d|y|a|d|e|e|s|h|a|\n";
logoy++;gotoxy(logox,logoy);cout<<" +-+-+-+-+-+-+-+-+-+ +-+-+ +-+-+-+-+-+-+ +-+-+-+ +-+-+-+-+-+-+-+-+-+-+-+\n";
getch();}


int menu_1()
{system("cls");
int logox=16,logoy=6;
unsigned int choice;
gotoxy(logox,logoy);        cout<<"::::    ::::  :::::::::: ::::    ::: :::    :::\n";
logoy++;gotoxy(logox,logoy);cout<<"+:+:+: :+:+:+ :+:        :+:+:   :+: :+:    :+: \n";
logoy++;gotoxy(logox,logoy);cout<<"+:+ +:+:+ +:+ +:+        :+:+:+  +:+ +:+    +:+ \n";
logoy++;gotoxy(logox,logoy);cout<<"+#+  +:+  +#+ +#++:++#   +#+ +:+ +#+ +#+    +:+ \n";
logoy++;gotoxy(logox,logoy);cout<<"+#+       +#+ +#+        +#+  +#+#+# +#+    +#+ \n";
logoy++;gotoxy(logox,logoy);cout<<"#+#       #+# #+#        #+#   #+#+# #+#    #+# \n";
logoy++;gotoxy(logox,logoy);cout<<"###       ### ########## ###    ####  ########  \n";
logox=28;logoy=15;
gotoxy(logox,logoy);        cout<<" 1. Play game\n";
logoy++;gotoxy(logox,logoy);cout<<" 2. View Highscore\n";
logoy++;gotoxy(logox,logoy);cout<<" 3. Help\n";
logoy++;gotoxy(logox,logoy);cout<<" 4. About\n";
logoy++;gotoxy(logox,logoy);cout<<" 5. Exit\n";
logoy++;logoy++;gotoxy(logox-1,logoy);cout<<"Enter choice : ";
cin>>choice;
return choice;
}




