#include<iostream>
using namespace std;
string projectTimeCalculation(int hours, int days, int workers);
main(){
	cout<<"Enter the needed hours: ";
	int hoursneeded;
	cin>>hoursneeded;

	cout<<"Enter the days that the firm has: ";
	int days;
	cin>>days;

	cout<<"Enter the number of all workers: ";
	int workers;
	cin>>workers;
	string output=projectTimeCalculation(hoursneeded,days, workers);
	cout<<output;
}
 string projectTimeCalculation(int hoursneeded, int days, int workers)
{
	int workingtime;
	int trainingtime;
	int hoursleft;
	workingtime=workers*10*days;
	trainingtime=workingtime*0.1;
	hoursleft=hoursneeded-workingtime+trainingtime;
if((workingtime+trainingtime)<=hoursneeded){
	
	return "Not enough time! "+to_string(hoursleft)+ " hours needed.";
}
if((workingtime+trainingtime)>hoursneeded)
{
	

	return "Yes!"+to_string(-hoursleft)+" hours left.";
	

}

}