#include<time.h>
#include<fstream.h>
#include<process.h>
#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<string.h>
#include<iostream.h>
#include<stdlib.h>

#include<conio.h>

const int MAXLENGTH=80;
const int MAX_TRIES=5;
const int MAXROW=7;

int letterFill (char, char[], char[]);
void initUnknown (char[], char[]);

struct book
{
float TIME;
char name[35];
};
void main()
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
clrscr();
clock_t start;
clock_t end;
char c[10000];
char s[10000];
char filename[13];
int choice_1;
int choice_2;
char choice_3;
char a;




//Boot animations
   /*

for(int i=0;i<60;i++,i++,i++)
{gotoxy(30,22);cout<<"<coded by sujith>";int x=29+i;gotoxy(x,22);cout<<"                   ";
int logox=16,logoy=4;
gotoxy(logox,logoy);        cout<<" ___________     , __, ,________  ___________, ,,....         \n";
logoy++;gotoxy(logox,logoy);cout<<"/__    ____/  __/||  | | ______ } >_   _____/ ********         \n";
logoy++;gotoxy(logox,logoy);cout<<"  |    |     /   ||  | |     __/   |    __)__***`````       \n";
logoy++;gotoxy(logox,logoy);cout<<"  |    |    {____    | |    |      |         } *******""   \n";
logoy++;gotoxy(logox,logoy);cout<<"  |____|    / _______| |____|     <_______  / ***""""""        \n";
logoy++;gotoxy(logox,logoy);cout<<"           {_/                            |/ ""````           \n";
logoy++;gotoxy(logox,logoy);cout<<" __________ _________   ________  __________ ,,,....      \n";
logoy++;gotoxy(logox,logoy);cout<<"/_  ______//  _   __/  / ______/ {_________/ ********```   \n";
logoy++;gotoxy(logox,logoy);cout<<" |   ___) /  [_]  }   {_____  }    |   | ...**""""````      \n";
logoy++;gotoxy(logox,logoy);cout<<" |  >    /    |    }  _____/  }    |   | ******          \n";
logoy++;gotoxy(logox,logoy);cout<<" | /    {____/|__  / {_____  /     |___| ****""""``        \n";
logoy++;gotoxy(logox,logoy);cout<<" |/              |/        |/          ,,***````                \n";
for(logox=(7+i);logox<60;logox++)
{
logoy=4;
gotoxy(logox,logoy);        cout<<"         \n";Sleep(5);
logoy++;gotoxy(logox,logoy);cout<<"         \n";Sleep(5);logox++;
logoy++;gotoxy(logox,logoy);cout<<"         \n";Sleep(5);logox++;
logoy++;gotoxy(logox,logoy);cout<<"         \n";Sleep(5);logox++;
logoy++;gotoxy(logox,logoy);cout<<"         \n";Sleep(5);logox++;
logoy++;gotoxy(logox,logoy);cout<<"         \n";Sleep(5);logox++;
logoy++;gotoxy(logox,logoy);cout<<"         \n";Sleep(5);logox++;
logoy++;gotoxy(logox,logoy);cout<<"         \n";Sleep(5);logox++;
logoy++;gotoxy(logox,logoy);cout<<"         \n";Sleep(5);logox++;
logoy++;gotoxy(logox,logoy);cout<<"         \n";Sleep(5);logox++;
logoy++;gotoxy(logox,logoy);cout<<"         \n";Sleep(5);logox++;
logoy++;gotoxy(logox,logoy);cout<<"         \n";Sleep(5);logox++;
}
}Sleep(5000);


 */

//Menu


do
{
do
{
choice_1=menu_1();
if ((choice_1>6)||(choice_1<1))
cout<<"Invalid Choice.";
}while((choice_1>6)||(choice_1<1));
switch(choice_1)
{
case 1: GAMELOOP:
{
clrscr();

for(int u=0;u<6;u++)
{if(u==0){clrscr();int logox=12,logoy=10;
gotoxy(logox,logoy);        cout<<"db        d88888b   db    db   d88888b   db           db \n";
logoy++;gotoxy(logox,logoy);cout<<"88        88'       88    88   88'       88          o88 \n";
logoy++;gotoxy(logox,logoy);cout<<"88        88ooooo   Y8    8P   88ooooo   88           88 \n";
logoy++;gotoxy(logox,logoy);cout<<"88        88~~~~~   `8b  d8'   88~~~~~   88           88 \n";
logoy++;gotoxy(logox,logoy);cout<<"88booo.   88.        `8bd8'    88.       88booo.      88 \n";
logoy++;gotoxy(logox,logoy);cout<<"Y88888P   Y88888P      YP      Y88888P   Y88888P      VP \n";
Sleep(1000);strcpy(filename,"Level 1");}
else if(u==1){clrscr();int logox=12,logoy=10;
gotoxy(logox,logoy);        cout<<"db        d88888b   db    db   d88888b   db         .d888b. \n";
logoy++;gotoxy(logox,logoy);cout<<"88        88'       88    88   88'       88         VP  `8D  \n";
logoy++;gotoxy(logox,logoy);cout<<"88        88ooooo   Y8    8P   88ooooo   88            odD'  \n";
logoy++;gotoxy(logox,logoy);cout<<"88        88~~~~~   `8b  d8'   88~~~~~   88          .88'    \n";
logoy++;gotoxy(logox,logoy);cout<<"88booo.   88.        `8bd8'    88.       88booo.    j88.    \n";
logoy++;gotoxy(logox,logoy);cout<<"Y88888P   Y88888P      YP      Y88888P   Y88888P    888888D  \n";
Sleep(1000);strcpy(filename,"Level 2");}
else if(u==2){clrscr();int logox=12,logoy=10;
gotoxy(logox,logoy);        cout<<"db        d88888b   db    db   d88888b   db         d8888b. \n";
logoy++;gotoxy(logox,logoy);cout<<"88        88'       88    88   88'       88             `8D     \n";
logoy++;gotoxy(logox,logoy);cout<<"88        88ooooo   Y8    8P   88ooooo   88          ~<((      \n";
logoy++;gotoxy(logox,logoy);cout<<"88booo.   88.        `8bd8'    88.       88booo.        ,8D     \n";
logoy++;gotoxy(logox,logoy);cout<<"Y88888P   Y88888P      YP      Y88888P   Y88888P    88888P     \n";
Sleep(1000);strcpy(filename,"Level 3");}
else if(u==3){clrscr();int logox=12,logoy=10;
gotoxy(logox,logoy);        cout<<"db        d88888b   db    db   d88888b   db           j88D  \n";
logoy++;gotoxy(logox,logoy);cout<<"88        88'       88    88   88'       88          j8~88      \n";
logoy++;gotoxy(logox,logoy);cout<<"88        88ooooo   Y8    8P   88ooooo   88         j8' 88    \n";
logoy++;gotoxy(logox,logoy);cout<<"88booo.   88.        `8bd8'    88.       88booo.   C888888D      \n";
logoy++;gotoxy(logox,logoy);cout<<"Y88888P   Y88888P      YP      Y88888P   Y88888P        88      \n";
Sleep(1000);strcpy(filename,"Level 4");}
else if(u==4){clrscr();int logox=12,logoy=10;
gotoxy(logox,logoy);        cout<<"db        d88888b   db    db   d88888b   db         bboooo \n";
logoy++;gotoxy(logox,logoy);cout<<"88        88'       88    88   88'       88        dP      \n";
logoy++;gotoxy(logox,logoy);cout<<"88        88ooooo   Y8    8P   88ooooo   88        V8888b.   \n";
logoy++;gotoxy(logox,logoy);cout<<"88booo.   88.        `8bd8'    88.       88booo.        `8D     \n";
logoy++;gotoxy(logox,logoy);cout<<"Y88888P   Y88888P      YP      Y88888P   Y88888P    88oobY'  \n";
Sleep(1000);strcpy(filename,"Level 5");}

game(start, end, c, s, filename);
if(stricmp(c,s)!=0)
{char option;clrscr();
int logox=18,logoy=12;
gotoxy(logox,logoy);        cout<<"     Oops!! You have typed incorrectly.";
logox=18;logoy=14;gotoxy(logox,logoy);cout<<"Do you want to Replay this Level ? (y/n) : ";
cin>>option;
if ((option=='y')||(option=='Y'))
{u--;}
else

{
cout<<"EXITING..";
exit(0);
}
}
else if(stricmp(c,s)==0)
{
float usertime=(end-start)/CLK_TCK;
clrscr();
int logox=26,logoy=8;
gotoxy(logox,logoy);                 cout<<"You finished in "<<usertime<<" seconds.";
logox=23;logoy=13;gotoxy(logox,logoy);cout<<" 1. Add your time for "<<filename;
logoy++;gotoxy(logox,logoy);         cout<<" 2. View highscores of "<<filename;
logoy++;gotoxy(logox,logoy);         cout<<" 3. Move to next Level "<<u+2;
logoy++;logoy++;logoy++;gotoxy(logox,logoy);cout<<"       Enter choice : ";
cin>>a;
if(a=='1')
{
add_hs(usertime,filename);clrscr();}
else if(a=='2'){read_hs(filename);}
}
}
}
getch();
case 2:
{clrscr();
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

case 6:


{
	char unknown [MAXLENGTH];
	char letter,y;
	int num_of_wrong_guesses=0;
	char word[MAXLENGTH];
	char words[30][30];

	//choose and copy a word from array of words randomly
	randomize();
	int n=random(10);
   ifstream finn("Hangman.txt",ios::in);
while(!finn.eof())
{
finn.getline(words[20],10000);
for (int i=0;i<10000;i++)
{finn>>words[i][30];

}
}
finn.close();

	strcpy(word,words[n]);

    	// Initialize the secret word with the * character.
	initUnknown(word, unknown);
           system("cls");


	// welcome the user
cout << "\n\nWELCOME TO HANGMAN\n\n\n  ...Guess a Country's Name";
cout << "\n\nEach letter is represented by a '-'.";
cout << "\n\nYou have to type only one letter in one try";
cout << "\n\nYou have " << MAX_TRIES << " tries to try and guess the word.";
cout << "\n______________________________________________________________\n";

cout<<"\n           Press 'y' when you are ready\n ";
cin>>y;
        system("cls");
	// Loop until the guesses are used up
	while (num_of_wrong_guesses < MAX_TRIES)
	{
		cout << "\n\n         The unkown word is:" << unknown;
		cout << "\n\n         Guess a letter: ";
		cin >> letter;
		// Fill secret word with letter if the guess is correct,
		// otherwise increment the number of wrong guesses.
		if (letterFill(letter, word, unknown)==0)
		{
			cout << endl << "OOPS! That letter isn't in there!" << endl;
			num_of_wrong_guesses++;
		}
		else
		{
			 cout << endl << "YOU HAVE FOUND A LETTER! Isn't that exciting!" << endl;
		}
		// Tell user how many guesses has left.
		cout << "You have " << MAX_TRIES - num_of_wrong_guesses;
		cout << " guesses left." << endl;

       Sleep(3000);
       system("cls");

		// Check if they guessed the word.
		if (strcmp(word, unknown) == 0)
		{
			cout << word << endl;
			cout << "Yeah! You got it!";
			break;
		}
	}
	if(num_of_wrong_guesses == MAX_TRIES)
	{
		cout << "\nSorry, you lose...you've been hanged." << endl;
		cout << "The word was : " << word << endl;
	}
	getch();


     }

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


void game(clock_t &start,clock_t &end,char c[10000],char s[10000],char filename[13])
{
clrscr();
ifstream fin(filename,ios::in);
while(!fin.eof())
{
fin.getline(s,10000);
for (int i=0;i<10000;i++)
{fin>>s[i];
}
}
fin.close();
clrscr();
int logox=17,logoy=3;gotoxy(logox,logoy);
cout<<"Type the following as fast as you can : ";
logox=9;logoy=6;gotoxy(logox,logoy);cout<<s;
cout<<"\n\n\n\t";
while(kbhit()==0)
start=clock(); //On 1st keystroke, time is noted
gets(c);
end=clock(); //End time is noted
}

void read_hs(char filename[13])
{
clrscr();

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
clrscr();
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
{clrscr();
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

int letterFill (char guess, char secretword[], char guessword[])
{
	int i;
	int matches=0;
	for (i = 0; secretword[i]!='\0'; i++)
	{
		// Did we already match this letter in a previous guess?
		if (guess == guessword[i])
			return 0;
		// Is the guess in the secret word?
		if (guess == secretword[i])
		{
			guessword[i] = guess;
			matches++;
		}
	}
	return matches;
}


// Initialize the unknown word

void initUnknown (char word[], char unknown[])
{
	int i;
	int length = strlen(word);
	for (i = 0; i < length; i++)
		unknown[i]='-';
	unknown[i]='\0';
}


int menu_1()
{clrscr();
int logox=16,logoy=6;
unsigned int choice,choicesec;
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
if(choice==1)
cout<<"\nWhich game you wanna play\n 1.Typefast \n 2.Hangman\n ";
cin>>choicesec;
if(choicesec==2)
choice=6;
return choice;
}




