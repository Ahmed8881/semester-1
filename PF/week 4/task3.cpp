#include<iostream>
using namespace std;
void howManyStickers(int length) ;
main(){
	cout<<"Enter the side length of the Rubik's Cube: ";
	int length;
	cin>>length;
	howManyStickers(length);



}
void howManyStickers( int length){
	int howManyStickers;
	howManyStickers=6*length*length;
	cout<<"Number of stickers needed: "<<howManyStickers;
}
