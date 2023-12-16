#include<iostream>
using namespace std;
void price(string a,float tprice,float fprice);
main() {
	string a;
	float tprice;
	float fprice;
	cout<<"Enter the country's name: ";
	cin>>a;
	cout<<"Enter the ticket price in dollars: $";
	cin>>tprice;
	price(a,tprice,fprice);
			  }
void price(string a,float tprice,float fprice)
         {
	   if(a=="Pakistan")
		{
		 fprice=tprice-(tprice*0.05);
			cout<<"Final ticket price after discount: $"<<fprice;
				}
         
	   if(a=="Ireland")
		{
		 fprice=tprice-(tprice*0.10);
			cout<<"Final ticket price after discount: $"<<fprice;
				}

         
	   if(a=="India")
		{
		 fprice=tprice-(tprice*0.20);
			cout<<"Final ticket price after discount: $"<<fprice;
				}

         
	   if(a=="England")
		{
		 fprice=tprice-(tprice*0.30);
			cout<<"Final ticket price after discount: $"<<fprice;
				}

         
	   if(a=="Canada")
		{
		 fprice=tprice-(tprice*0.45);
			cout<<"Final ticket price after discount: $"<<fprice;
				}

         }
