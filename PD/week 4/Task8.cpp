#include<iostream>
using namespace std;
void pet(int holidays);
main() {
	int holidays;
	cout<<"Holidays: ";
	cin>>holidays;
	pet(holidays);
       }  
void pet(int holidays){
			 
			 int w= 365-holidays;
			 int t= (holidays*127)+(w*63);
			 if (t<=30000){
                                       int d=30000-t;
					int hours=d/60;
					 int minutes=d-(hours*60);
			 cout<<"Tom sleeps well"<<endl;
 			 cout<<hours<<" hours and "<<minutes<<" minutes less for play";				 }
			 if (t>30000){
                                       int d=t-30000;
					int hours=d/60;
					 int minutes=d-(hours*60);
			 cout<<"Tom will run away"<<endl;
 			 cout<<hours<<" hours and "<<minutes<<" minutes for play";				 }
	                 
			}
			 





