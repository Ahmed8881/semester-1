#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x , int y);
void name();
main(){
name();

}
void gotoxy(int x , int y){
COORD coordinates;
coordinates.X = x;
coordinates.Y = y; 
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);

}
void name(){
gotoxy(50,2);	
cout<<"  ######  #    #  # #     # #  #######   ######        "<<endl;
gotoxy(50,3);	
cout<<"  #    #  #    #  #  #   #  #  #         #    ##       "<<endl;
gotoxy(50,4);	
cout<<"  #    #  #    #  #   # #   #  #         #     ##      "<<endl;
gotoxy(50,5);	
cout<<"  ######  ######  #    #    #  #######   #     ##      "<<endl;
gotoxy(50,6);	
cout<<"  #    #  #    #  #         #  #         #    ##        "<<endl;
gotoxy(50,7);	
cout<<"  #    #  #    #  #         #  #######   ######         "<<endl;


}