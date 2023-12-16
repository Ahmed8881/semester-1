#include<iostream>
using namespace std;
void  flowerShop(float redRose, float whiteRose, float tulip, float op, float dp);
main() {
	float redRose;
	float whiteRose;
	float tulip;
	float op;
	float dp;
	cout<<"Red Rose: ";
	cin>>redRose;
	cout<<"White Rose: ";
	cin>>whiteRose;
	cout<<"Tulips: ";
	cin>>tulip;
	flowerShop(redRose, whiteRose, tulip,op,dp);
	}
void flowerShop(float redRose, float whiteRose, float tulip,float op, float dp)
	{op=(redRose*2.00)+(whiteRose*4.10)+(tulip*2.50);
	 if (op>200)
		{dp=op-(op*0.20);
		cout<<"Original Price: $"<<op<<endl;
		cout<<"Price After Discount: $"<<dp;}
	 if (op<=200)
		{cout<<"Original Price: $"<<op<<endl;
		cout<<"No discount applied.";}
                 }
		       
	