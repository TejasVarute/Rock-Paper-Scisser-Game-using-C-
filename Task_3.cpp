#include<iostream>
using namespace std;

int player1()
{	system("cls");
	int ch;
	cout<<endl<<"---------------------------------------------------------------------------"
		<<endl<<"1.Stone\n"<<"2.Paper\n"<<"3.Scissor\n"
		<<endl<<"---------------------------------------------------------------------------"
		<<endl<<"Enter choise for player 1 : ";
	cin>>ch;
	return ch;	
}

int player2()
{	system("cls");
	int ch;
	cout<<endl<<"---------------------------------------------------------------------------"
		<<endl<<"1.Stone\n"<<"2.Paper\n"<<"3.Scissor\n"
		<<endl<<"---------------------------------------------------------------------------"
		<<endl<<"Enter choise for player 2 : ";
		
	cin>>ch;
	return ch;
}

int game()
{	int ch1=0, ch2=0;
	while(true)
	{
		if(ch1>=1 && ch1<=3 && ch2>=1 &&ch2<=3)
		{
			break;
		}
		else
		{	
			ch1=player1();
			ch2=player2();
		}
	}
	system("cls");
	cout<<endl<<"----------------------------------------------------------------------------"<<endl;
	if(ch1==ch2)
	{
		cout<<endl<<"==============================  Its a TIE  =============================="<<endl;
	}
	else if(ch1==1 && ch2==2 || ch1==2 && ch2==3 || ch1==3 && ch2==1 )
	{
		cout<<endl<<"==============================  Player 2 WON  =============================="<<endl;
	}
	else
	{
		cout<<endl<<"==============================  Player 1 WON  =============================="<<endl;
	}
	cout<<endl<<"----------------------------------------------------------------------------"<<endl;
	return 0;
}
int main()
{
	game();
}
