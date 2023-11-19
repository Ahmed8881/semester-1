#include<iostream>
using namespace std;
string calculateCost(float budget,string category,int numPeople);
main(){
    float budget;
    string c;
    int p;
    cout<<"Enter the budget: ";
    cin>>budget;
    cout<<"Enter the category (VIP/Normal): ";
    cin>>c;
    cout<<"Enter the number of people in the group: ";
    cin>>p;
     cout<<calculateCost(budget,c,p);
}
string calculateCost(float budget,string category,int numPeople)
   { float tp,s;
   string final;
    
        if (numPeople>=1 && numPeople<=4)
        {
            budget=budget-(budget*0.75);
        }
        if (numPeople>=5 && numPeople<=9)
        {
            budget=budget-(budget*0.60);
        }
        if (numPeople>=10 && numPeople<=24)
        {
            budget=budget-(budget*0.50);
        }
        if (numPeople>=25 && numPeople<=49)
        {
            budget=budget-(budget*0.40);
        }
        if(numPeople>=50)
        {
            budget=budget-(budget*0.25);

        }
        if (category=="VIP")
        {
            tp=499.99*numPeople;
        }
        else{
            tp=249.99*numPeople;
        }
        s=(budget-tp)+0.000005;
        if (s>0.0)
        {
            final="Yes! You have "+to_string(s)+" leva left."; return final;
        }else{
            final="Not enough money! You need "+to_string(-s)+" leva."; return final;
        }
        
        
    
    
}