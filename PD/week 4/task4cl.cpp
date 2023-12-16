#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y);
void moveplayer(int x,int y);
void maze();
main()
	{		
	 int x=2,y=4;
	  system ("cls");
	   maze();
	    while(true)
	{
	  x=x+1;
	   if(x==24)
	{
	 x=2;
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