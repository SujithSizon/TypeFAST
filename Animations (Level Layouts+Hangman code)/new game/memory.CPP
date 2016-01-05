#include<time.h>
#include<fstream.h>
#include<process.h>
#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<string.h>


int main()
{
char c[10000],ch,ch1;
int pos[10],x=0,count=0,space,count1=0;
char s[10000];


ifstream fout;
fout.open("hangaroo lv1.txt",ios::in)
  while(fout)
  {fout<<ch1;
   count++;
   if(ch1==' ')
   space=count;
  }

 for(int u=0;u<count;u++)
 {   gotoxy(u+5,6);
 cout<<"_ ";
 }   
  gotoxy(count+u+5,6);


ifstream fin("hangaroo clue lv1.txt",ios::in);               
while(!fin.eof())
{
fin.getline(s,10000);
for (int i=0;i<10000;i++)
{fin>>s[i];
}
}
fin.close();
gotoxy(5,5);cout<<s;


gotoxy(6,6);cin>>ch;

while(fout)
{
fout<<ch1;
count1++;
if(ch==ch1)
pos[x]=count1;
x++;
}

for(int j=0;j<x;j++)
{gotoxy(pos[x],6);  cout<<ch;}



 }






