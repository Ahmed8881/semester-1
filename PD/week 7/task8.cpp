#include<iostream>
#include<iomanip>
using namespace std;
main(){
    cout <<"Enter the count of cargo for transportation: ";
    int count;
    float weights;
    float price=0;
    float price1=0;
    float price2=0;
    int final=0;
    cin >> count;
    for (int i=1;i<=count;i++){
        cout <<"Enter the tonnage of cargo "<<i<<": ";
        cin >> weights;
        if(weights<=3){
            price+=weights;
        }
        if(weights>3 && weights<=11){
            price1+=weights;
        }
        if(weights>11){
            price2+=weights;
        }
    }
    final=price+price1+price2;
  float  priced=(price/final)*100;
   float priced1=(price1/final)*100;
   float priced2=(price2/final)*100;
   float average_price=(price*200+price1*175+price2*120)/final;
   cout << fixed <<setprecision(2)<<average_price<<endl;
   cout << fixed <<setprecision(2)<<priced<<"%"<<endl;
   cout << fixed <<setprecision(2)<<priced1<<"%"<<endl;
   cout << fixed <<setprecision(2)<<priced2<<"%";
}
