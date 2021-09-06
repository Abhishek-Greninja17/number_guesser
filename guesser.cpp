#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <time.h>
#include <ctime>
#include <conio.h>
using namespace std;
int rand_num();
int rand_num()
{
    unsigned int seedval;
    time_t t;
    seedval = (unsigned) time (&t);
    srand (seedval);
    return((rand()%100)+1);
}
int main()
{
	cout<<"\n\n\n\n\n\n\n\n\t\t\t\tWelcome to Hi-Lo game\n\n\t\t\t\t";
	cout<<"Enter any key to start....\n";
	getch();
	system("CLS");
	int n,chances;
	menu:
	system("CLS");
	cout<<"1.Play\n2.Rules\n3.Exit\nEnter your choice:";
	cin>>n;
	switch(n)
	{
	case 1:char name[50],ch;
	cout<<"\n\nEnter your name: ";
	cin>>name;
	int r;
	do
	{   chances=0;
		system("CLS");
		int num;
		r=rand_num();
		cout<<"I have a number in my head. Can you guess it?\n";
		turn:
		cout<<"Guess A number between 0 and 100 :";
		cin>>num;
		chances++;
		if(num==r)
		{	cout<<"\n\n\n\n\t\t\t"<<name<<"   W O N!!!";
			cout<<"\n\n no. of chances:"<<chances;
			getch();
		}
		else
		{	
			if(num>r)
			{
				if((num-5)<=r)
				cout<<"\nclose....try hard!!! little lesser.\n";
				else
				cout<<"\nToo High\n";
			}
			else
			{
				if((num+5)>=r)
				cout<<"\nclose....try hard!!! little higher.\n";
				else
				cout<<"\nToo Low\n";
			}
			goto turn;
		}
		cout<<"\n\n Do you Want to Play One More Round? (Y/N):";
		cin>>ch;
	}while(ch=='Y'||ch=='y');
	goto menu;
	break;
	case 2: system("CLS");
	cout<<"Rules are simple...\n Guess a number between 0 and 100.\n If your guessed the number right then you will be the winner.";
	cout<<"\n\n guess the number in the least number of chances to a make record....";
	getch();
	goto menu;
	break;
	case 3: exit(0);
		break;
	default: cout<<"\nOops! Wrong choice...";
	getch();
	goto menu;
	}
return 0;
}
