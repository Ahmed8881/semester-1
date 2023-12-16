#include<iostream>
using namespace std;
void tpc(int p,int tp);
main() {
	int p;
	int tp;
	cout<<"Number of people in the household: ";
	cin>> p;
	cout<<"Number of rolls of TP: ";
	cin>> tp;
	tpc(p,tp);
	}
void tpc(int p,int tp){
			int sheettp=500;
			int days=(sheettp*tp)/(p*57);
			if (days<14)
			{cout<<"Your TP will only last "<<days<<" days, buy more!"; }
			if (days>=15)
			{cout<<"Your TP will last "<<days<<" days, no need to panic!"; }



}
			 





