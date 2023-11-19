#include<iostream>
using namespace std;
float lowestPrice(int distance, string time);
main()
{
string time;
int distance;
cout <<"Enter the number of kilometers: ";
cin >> distance;
cout <<"Enter the period of the day (day/night): ";
cin >> time;
float price=lowestPrice(distance, time);
cout << "Lowest price for " << distance << " kilometers: "<< price <<" EUR";
}
float lowestPrice(int distance, string time){
    float income;
    if(distance <20 && time=="day"){
        income=distance*0.79+0.7;
    }
        if(distance <20 && time=="night"){
        income=distance*0.90 +0.7;
    }
            if(distance >=20){
        income=distance*0.09;
    }
                if(distance >=100){
        income=distance*0.06;
    }
        return income;
}