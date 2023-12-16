#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y);
void maze();
main()
	{	
	 int x,y;
	  system ("cls");
	   maze();
	    gotoxy(3,4);
	     cout << "P";
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