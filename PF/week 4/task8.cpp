#include <iostream>
using namespace std;
void calculatePayableAmount(int amount,string day);
main(){
	cout<<"Enter the day of purchase: ";
	string day;
	cin>>day;

	cout<<"Enter the total purchase amount: $";
	int amount;
	cin>>amount;
	calculatePayableAmount(amount,day);

}
void calculatePayableAmount(int amount,string day){
if(day == "Sunday"){
	amount=amount-(amount*10/100);
	cout<<"Payable Amount: $"<<amount;
}
if(day != "Sunday"){
	cout<<"Payable Amount: $"<<amount;

}}