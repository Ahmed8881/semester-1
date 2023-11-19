#include<iostream>
using namespace std;
string checkTitle(int age, char gender);
main(){
    int age;
    char gender;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your gender (m/f): ";
    cin >> gender;
    string title =checkTitle(age,gender);
    cout << "Your personal title is: " << title;
}
string checkTitle(int age, char gender){
    string title;
    if(age>=16 && gender=='m'){
        title= "Mr.";
    }
    if(age>=16 && gender=='f'){
        title= "Ms.";
    }
        if(age<16 && gender=='m'){
        title= "Master";
    }
        if(age<16 && gender=='f'){
        title= "Miss";
    }
    return title;
}