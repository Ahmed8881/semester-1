#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y);
void moveplayer(int x,int y);
void maze();
main()
	{	
	 int x=2,y=2;
	  system ("cls");
	   maze();
	    while(true)
	{
	 y=y+1;
	  if(y==10)
	{
	 while(y<=10 && y>1)
	{
	 y=y-1;
	 moveplayer(x,y);
	}
	}
	 moveplayer(x,y);
	}
	}
 void maze()
	{
	cout << "#########################" << endl;
	cout << "#                       #" << endl;
	cout << "#                       #" << endl;
	cout << "#                       #" << endl;
	cout << "#                       #" << endl;
	cout << "#                       #" << endl;
	cout << "#                       #" << endl;
	cout << "#                       #" << endl;
	cout << "#                       #" << endl;
	cout << "#                       #" << endl;
	cout << "#########################" << endl;
	}
void gotoxy(int x, int y)
	{
	COORD coordinates;
	coordinates.X=x;
	coordinates.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
	}
void moveplayer(int x,int y)
	{
	gotoxy(x,y);
	cout << "P" ;
	Sleep(100);
	gotoxy(x,y);
	cout << " " ;

	}