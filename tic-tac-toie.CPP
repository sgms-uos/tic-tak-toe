#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
 //
 char p1[15],p2[15];
 cout<<"\nEnter Name of Player 1:::";
 cin>>p1;
 cout<<"\nEnter Name of player 2:::";
 cin>>p2;
 int p,s,a,m,t,a1,a2,a3,a4,a5,a6,a7,a8,a9,l;  //P for player
 m=0;
 t=0;
 char g1,g2,g3,g4,g5,g6,g7,g8,g9;//g for Grid or s for Select
 g1='1'; a1=0;
 g2='2'; a2=0;
 g3='3'; a3=0;
 g4='4'; a4=0;
 g5='5'; a5=0;
 g6='6'; a6=0;
 g7='7'; a7=0;
 g8='8'; a8=0;
 g9='9'; a9=0;
 s=0;
 a=0;
 for(m=0;m<9;m++)//to controle Rotation and player
 {
  //Game selection
    {
    //
   cout<<"\n"<<m;
   if(((m%2)+1)==2)
   {
    cout<<"\n\n\n\t\t\t"<<p2;
   }
   else
   {
    cout<<"\n\n\t\t\t"<<p1;
   }
   cout<<"\n\n\t\t \t||\t \t||\t\n";
   cout<<"\t\t"<<g1<<"\t||\t"<<g2<<"\t||\t"<<g3;
   cout<<"\n\t\t \t||\t \t||\t";
   cout<<"\n\t\t======================================";
   cout<<"\n\t\t \t||\t \t||\t";
   cout<<"\n\t\t"<<g4<<"\t||\t"<<g5<<"\t||\t"<<g6;
   cout<<"\n\t\t \t||\t \t||\t";
   cout<<"\n\t\t======================================";
   cout<<"\n\t\t \t||\t \t||\t";
   cout<<"\n\t\t"<<g7<<"\t||\t"<<g8<<"\t||\t"<<g9;
   cout<<"\n\t\t \t||\t \t||\t";
   if(m%2==1)
   {
    do
    {
      do
      {
       cout<<"\n\nSelect one of above to play::=";
       s=getche(); //Number testing
       s=s-48;
       if(s==0)
       m=m-1;
       else
       {
	cout<<" ";
       }
      }
      while(!(s>0));
      a=2;
      if(s==1&&g1=='1')
      {
       g1='O';
       a1=1;
       }
      else
       if(s==2&&g2=='2')
     {
       g2='O';
       a2=2;
      }
      else
      if(s==3&&g3=='3')
      {g3='O';a3=3;}
      else
      if(s==4&&g4=='4')
     { g4='O';a4=4;}
      else
      if(s==5&&g5=='5')
     {g5='O';a5=5;}
      else
      if(s==6&&g6=='6')
     { g6='O';a6=6;}
      else
      if(s==7&&g7=='7')
     { g7='O';a7=7;}
      else
      if(s==8&&g8=='8')
     { g8='O';a8=8;}
      else
      if(s==9&&g9=='9')
     { g9='O';a9=9;}
      else
      {
       cout<<"This Number is alrady Selected Enter New one";
       m=m-1;
       a++;
      }
     }
     while(!(a<=9));        //whole testing;
   }
    if(m%2==0)
   {
    do
    {
      do
      {
       cout<<"\n\nSelect one of above to play::=";
       t=getche(); //Number testing
       t=t-48;
       if(t<=0)
       {
	m=m-1;
       }
       else
       {
	cout<<" ";
       }
      }
      while(!(t>0));
      a=2;
      if(t==1&&g1=='1')
      g1='X';
      else
      if(t==2&&g2=='2')
      g2='X';
      else
      if(t==3&&g3=='3')
      g3='X';
      else
      if(t==4&&g4=='4')
      g4='X';
      else
      if(t==5&&g5=='5')
      g5='X';
      else
      if(t==6&&g6=='6')
      g6='X';
      else
      if(t==7&&g7=='7')
      g7='X';
      else
      if(t==8&&g8=='8')
      g8='X';
      else
      if(t==9&&g9=='9')
      g9='X';
      else
      {
       cout<<"This Number is alrady Selected Enter New one";
       a++;
       m=m-1;
      }
     }
     while(!(a<=9));
	  //whole testing;
      if(((a1+a2+a3)==6)||((a4+a5+a6)==15)||
      ((a7+a8+a9)==24)||((a1+a4+a7)==12)||
      ((a2+a5+a8)==15)||((a3+a6+a9)==18)||
      ((a1+a5+a9)==15)||((a3+a5+a7)==15))
      {
       goto Mustafa;
      }
      else
      {
      cout<<" ";
      }
      if((a1==1&&a2==2&&a3==3)||(a4==4&&a5==5&&a6==6)||
	(a7==7&&a8==8&&a9==9)||(a1==1&&a4==4&&a7==7)||
	(a2==2&&a5==5&&a8==8)||(a3==3&&a6==6&&a9==9)||
	(a1==1&&a5==5&&a9==9)||(a3==3&&a5==5&&a7==7))
       {cout<<" winer";	goto Mustafa; }
	else
	{
	cout<<"";
	}
     if((g1=='o'&&g2=='o'&&g3=='o')||(g4=='o'&&g5=='o'&&g6=='o')||
	(g7=='o'&&g8=='o'&&g9=='o')||(g1=='o'&&g4=='o'&&g7=='o')||
	(g2=='o'&&g5=='o'&&g8=='o')||(g3=='o'&&g6=='o'&&g9=='o')||
	(g1=='o'&&g5=='o'&&g9=='o')||(g3=='o'&&g5=='o'&&g7=='o')||
	(g1=='X'&&g2=='X'&&g3=='X')||(g4=='X'&&g5=='X'&&g6=='X')||
	(g7=='X'&&g8=='X'&&g9=='X')||(g1=='X'&&g4=='X'&&g7=='X')||
	(g2=='X'&&g5=='X'&&g8=='X')||(g3=='X'&&g6=='X'&&g9=='X')||
	(g1=='X'&&g5=='X'&&g9=='X')||(g3=='X'&&g5=='X'&&g7=='X')||
	(g1=='O'&&g2=='O'&&g3=='O')||(g4=='O'&&g5=='O'&&g6=='O')||
	(g7=='O'&&g8=='O'&&g9=='O')||(g1=='O'&&g4=='O'&&g7=='O')||
	(g2=='O'&&g5=='O'&&g8=='O')||(g3=='O'&&g6=='O'&&g9=='O')||
	(g1=='O'&&g5=='O'&&g9=='O')||(g3=='O'&&g5=='O'&&g7=='O'))
	{
	 goto Mustafa;
	}
       else
	{
	 cout<<" ";
	}
       }
  }
  cout<<"\n"<<m;
 }
 SGMS:
 Mustafa: //winer testing
 if((g1=='X'&&g2=='X'&&g3=='X')||(g4=='X'&&g5=='X'&&g6=='X')||
 (g7=='X'&&g8=='X'&&g9=='X')||(g1=='X'&&g4=='X'&&g7=='X')||
 (g2=='X'&&g5=='X'&&g8=='X')||(g3=='X'&&g6=='X'&&g9=='X')||
 (g1=='X'&&g5=='X'&&g9=='X')||(g3=='X'&&g5=='X'&&g7=='X'))
 {
  //
   cout<<"\n\n\n\t\t \t||\t \t||\t\n";
   cout<<"\t\t"<<g1<<"\t||\t"<<g2<<"\t||\t"<<g3;
   cout<<"\n\t\t \t||\t \t||\t";
   cout<<"\n\t\t======================================";
   cout<<"\n\t\t \t||\t \t||\t";
   cout<<"\n\t\t"<<g4<<"\t||\t"<<g5<<"\t||\t"<<g6;
   cout<<"\n\t\t \t||\t \t||\t";
   cout<<"\n\t\t======================================";
   cout<<"\n\t\t \t||\t \t||\t";
   cout<<"\n\t\t"<<g7<<"\t||\t"<<g8<<"\t||\t"<<g9;
   cout<<"\n\t\t \t||\t \t||\t";
   cout<<"\n\n"<<p1<<" Is winer of the game";
 }
 else if((g1=='O'&&g2=='O'&&g3=='O')||(g4=='O'&&g5=='O'&&g6=='O')||
 (g7=='O'&&g8=='O'&&g9=='O')||(g1=='O'&&g4=='O'&&g7=='O')||
 (g2=='O'&&g5=='O'&&g8=='O')||(g3=='O'&&g6=='O'&&g9=='O')||
 (g1=='O'&&g5=='O'&&g9=='O')||(g3=='O'&&g5=='O'&&g7=='O'))
 {
  //
   cout<<"\n\n\t\t \t||\t \t||\t\n";
   cout<<"\t\t"<<g1<<"\t||\t"<<g2<<"\t||\t"<<g3;
   cout<<"\n\t\t \t||\t \t||\t";
   cout<<"\n\t\t======================================";
   cout<<"\n\t\t \t||\t \t||\t";
   cout<<"\n\t\t"<<g4<<"\t||\t"<<g5<<"\t||\t"<<g6;
   cout<<"\n\t\t \t||\t \t||\t";
   cout<<"\n\t\t======================================";
   cout<<"\n\t\t \t||\t \t||\t";
   cout<<"\n\t\t"<<g7<<"\t||\t"<<g8<<"\t||\t"<<g9;
   cout<<"\n\t\t \t||\t \t||\t";
   cout<<"\n\n";
   cout<<p2;
   cout<<" is winer the game";
 }
 else
 {
  //
   cout<<"\n\n\t\t \t||\t \t||\t\n";
   cout<<"\t\t"<<g1<<"\t||\t"<<g2<<"\t||\t"<<g3;
   cout<<"\n\t\t \t||\t \t||\t";
   cout<<"\n\t\t======================================";
   cout<<"\n\t\t \t||\t \t||\t";
   cout<<"\n\t\t"<<g4<<"\t||\t"<<g5<<"\t||\t"<<g6;
   cout<<"\n\t\t \t||\t \t||\t";
   cout<<"\n\t\t======================================";
   cout<<"\n\t\t \t||\t \t||\t";
   cout<<"\n\t\t"<<g7<<"\t||\t"<<g8<<"\t||\t"<<g9;
   cout<<"\n\t\t \t||\t \t||\t";
  cout<<"\n\nGame is Draw";
 }
  return 0;
 getche();
 cout << endl << endl;
}
