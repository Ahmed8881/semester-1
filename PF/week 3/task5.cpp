#include <iostream>
using namespace std;
main(){
	cout<< "Enter the student's name: ";
	string name;
	cin>>name;
	cout<< "Enter matriculation marks (out of 1100): ";
	float matric_marks;
	cin>>matric_marks;
	cout<< "Enter intermediate marks (out of 550): ";
	float inter_marks;
	cin>>inter_marks;
	cout<< "Enter Ecat marks (out of 400): ";
 	float ecat_marks;
	cin>>ecat_marks;
	float aggregate;
	aggregate=(ecat_marks/400*50)+(inter_marks/550*40)+(matric_marks/1100*10);
	cout<<"Aggregate score for "<<name<<" in UET is: "<<aggregate<<"%";




}