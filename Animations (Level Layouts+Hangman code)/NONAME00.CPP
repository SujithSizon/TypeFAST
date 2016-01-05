#include<time.h>
#include<fstream.h>
#include<process.h>
#include<stdio.h>
#include<dos.h>
#include<conio.h>
#include<string.h>
struct book
{
float TIME;
char name[35];
};
void main()
{
//Declaring functions used
void game(clock_t &start, clock_t &end, char c[150]);
void add_hs(float &);
void read_hs();
void help_text();
void about_text();
int menu_1();
int menu_2(float &);
char again();
clrscr();
//Declaring necessary variables
clock_t start;
clock_t end;
char c[150];
char s[150];
int choice_1;
int choice_2;
char choice_3;
for(int i=0;i<26;i++)
s[i]=65+i;
s[26]='\0';
do
{
do //Start menu
{
choice_1=menu_1();
if ((choice_1>5)||(choice_1<1))
cout<<"Invalid Choice.";
}while((choice_1>5)||(choice_1<1));
switch(choice_1)
{
case 1: GAMELOOP:
game(start, end, c);
if(stricmp(c,s)!=0)
{
char option;
clrscr();
cout<<"Oops!! You have typed incorrectly.";
cout<<"\nDo you want to continue? Y/N : ";
sleep(200);
cin>>option;
if ((option=='y')||(option=='Y'))
{
cout<<"\nPLEASE WAIT. ";
cout<<"\nDON'T PRESS ANY KEYS";
sleep(2000);
goto GAMELOOP;
}
else
{
sleep(500);
cout<<"EXITING..";
sleep(1000);
exit(0);
}
}
else
if(stricmp(c,s)==0)
{
MENU:
do
{
float usertime=(end-start)/CLK_TCK;
choice_2 = menu_2(usertime);
switch(choice_2)
{
case 1: add_hs(usertime);
break;
case 2:read_hs();
break;
case 3: exit(0);
default:cout<<"Invalid Choice";
sleep(2000);
goto MENU;
}
}while(choice_2!=3);
}
getch();
case 2:read_hs();
choice_3=again();
break;
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
clrscr();
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
void game(clock_t &start,clock_t &end,char c[150])
{
clrscr();
cout<<"Type A-Z as fast as you can:\n\n\n\t\t : ";
while(kbhit()==0)
start=clock(); //On 1st keystroke, time is noted
gets(c);
end=clock(); //End time is noted

}
void read_hs()
{
book b;
fstream file;
file.open("HIGHSCORE.dat", ios::in);
if(!file)
{
cout<<"FILE NOT OPENED";
sleep(1000);
exit(0);
}
cout<<"\t NAME"<<"\t\t"<<"TIME (in s)\n";
while(file.read((char*)&b,sizeof(b)))
cout<<"\t"<<b.name<<"\t\t"<<b.TIME<<"\n";
file.close();
getch();
} void add_hs(float &userTIME)
{
book b;
book temp;
char last='y';
fstream fin;
fstream fout;
cout<<"Enter your name :";
gets(temp.name);
temp.TIME=userTIME;
fout.open("TEMP.dat", ios::out);
fin.open("HIGHSCORE.dat", ios::in);
if((!fin)||(!fout))
{
cout<<"FILE NOT OPENED";
sleep(1000);
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
remove("HIGHSCORE.dat");
rename("TEMP.dat", "HIGHSCORE.dat");
cout<<"\n RECORD UPDATED";
sleep(2000);

}
void help_text() //How to play game
{
clrscr();
cout<<"\t\t\t HOW TO PLAY ";
cout<<"\n\nYou have to enter the letters of the alphabet, as fast as youcan.";
cout<<"\nThe time gets recorded from the moment the first keystroke ismade.";
cout<<"\nIf the string is incorrectly entered, the game has to berestarted.";
getch();
}
void about_text() //About the game
{
clrscr();
cout<<"\n\n\t\t ABOUT TYPEFAST";
cout<<"\n\n TYPEFAST is a bitvh project ";
getch();
}
int menu_1()
{
clrscr();
unsigned int choice;
cout<<"\t\t MENU";
cout<<"\n\n 1. Play game";
cout<<"\n 2. View Highscore";
cout<<"\n 3. Help";
cout<<"\n 4. About";
cout<<"\n 5. Exit";
cout<<"\n Enter choice : ";
cin>>choice;
return choice;
}
int menu_2(float &TIME)
{
clrscr();
unsigned int choice;
cout<<"You finished in "<<TIME<<" seconds.";
cout<<"\n\n 1. Add your time";
cout<<"\n 2. View ";
cout<<"\n 3. Exit";
cout<<"\n Enter choice : ";
cin>>choice;
return choice;
}