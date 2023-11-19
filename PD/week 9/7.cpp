#include<iostream>
using namespace std;
int min(int num[],int arr[],int n);
bool consecutive(int arr[],int n);
int count=0;
main()
{
	int n;
	cout<<"Enter the length of the array: ";
	cin>>n;
	int arr[n];
	int num[n];
	cout<<"Enter the elements of the array: \n";
	for(int i=0;i<n;i++)
	cin>>num[i];
	int x=0;
	while(count<n)
	{
	arr[x]=min(num,arr,n);
	x++;
	}
	if(consecutive(arr,n))
	cout<<"Can be arranged: 1";
	else
	cout<<"Can be arranged: 0";
}
int min(int num[],int arr[],int n)
{
	int less=0;
	int add=0;
	int y=1;
	int x=0;
	while(x<n&&y<n)
	{
	if(num[x]<=num[y])
	{
	less=num[x];
	add=x;
	y=y+1;
	}
	else if(num[y]<num[x])
	{
	less=num[y];
	add=y;
	x=x+2;
	}
	} 
	count=count+1;
	num[add]=1000;
	return less;
}
bool consecutive(int arr[],int n)
{
	for(int i=0;i+1<n;i++){
	if(arr[i+1]!=arr[i]+1){
	return false;}
	}
	return true;		
}