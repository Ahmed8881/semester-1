#include <iostream>
#include <windows.h>
using namespace std;
void printmenu();
void checkaggregate(string n,float intmarks,float matmarks,float emarks);
void comparemarks(string n1,float emarks1,string n2,float emarks2);
main()
{	
	system("color 02");
	printmenu();
	char x;
	string n,n1,n2;
	float intmarks,matmarks,emarks,emarks2,emarks1;
	cout << "For calculating aggregate enter '1' for comparing ECAT marks enter '2': " ;
	cin >> x ;
	if(x=='1')
	{	
		checkaggregate(n,intmarks,matmarks,emarks);
	}
	if(x=='2')
	{
		comparemarks(n1,emarks1,n2,emarks2);
	}
}
void checkaggregate(string n,float intmarks,float matmarks,float emarks)
{
	cout << "Enter the student's name: " ;
	cin >> n ;
	cout << "Enter matriculation marks (out of 1100): " ;
	cin >> matmarks ;
	cout << "Enter intermediate marks (out of 550): " ;
	cin >> intmarks ;
	cout << "Enter Ecat marks (out of 400): " ;
	cin >> emarks ;
	;
	cout << "Aggregate score for "<< n << " in UET is: " << (matmarks/1100)*30+(intmarks/550)*30+(emarks/400)*40 << "%";
}
void comparemarks(string n1,float emarks1,string n2,float emarks2)
{
	cout << "Enter the 1st student's name: " ;
	cin >> n1 ;
	cout << "Enter Ecat marks (out of 400): " ;
	cin >> emarks1 ;
	cout << "Enter the 2nd student's name: " ;
	cin >> n2 ;
	cout << "Enter Ecat marks (out of 400): " ;
	cin >> emarks2;
	if(emarks1>emarks2)
	{
		cout << n1 << " has more marks in ECAT than " << n2 ;
	}
	if(emarks1<emarks2)
	{
		cout << n2 << " has more marks in ECAT than " << n1 ;
	}
	if(emarks1==emarks2)
	{
		cout << n1 << " and " << n2 << " have equal marks in ECAT." ;
	}


}
void printmenu()
{	
	cout << "* ____________________________________________________________________________________________________________________________________________________________________________________________________ *" << endl;	
	cout << "* |                                                                                                                                                                                                  | *" << endl;
	cout << "* |           ##     ## ###     ## #### ##     ## ###### #######   ######  #### ######## ##      ##     ###    #######   ##        ## ####  ######   ######  ####   #######   ###     ##             | *" << endl;
	cout << "* |           ##     ## ####    ##  ##  ##     ## ##      ##   ## ##    ##  ##     ##     ##    ##     ## ##   ##    ##  ###      ###  ##  ##    ## ##    ##  ##   ##     ##  ####    ##             | *" << endl;
	cout << "* |           ##     ## ## ##   ##  ##  ##     ## ##      ##   ## ##        ##     ##      ##  ##     ##   ##  ##     ## ## ##  ## ##  ##  ##       ##        ##  ##       ## ## ##   ##             | *" << endl;
	cout << "* |           ##     ## ##  ##  ##  ##  ##     ## ######  ######   ######   ##     ##       ####     ######### ##     ## ##  ####  ##  ##   ######   ######   ##  ##       ## ##  ##  ##             | *" << endl;
	cout << "* |           ##     ## ##   ## ##  ##   ##   ##  ##      ## ##         ##  ##     ##        ##      ##     ## ##     ## ##   ##   ##  ##        ##       ##  ##  ##       ## ##   ## ##             | *" << endl;
	cout << "* |           ##     ## ##    ####  ##    ## ##   ##      ##  ##  ##    ##  ##     ##        ##      ##     ## ##    ##  ##        ##  ##  ##    ## ##    ##  ##   ##     ##  ##    ####             | *" << endl;
	cout << "* |            #######  ##     ### ####    ###    ###### ###   ##  ######   ##     ##        ##      ##     ## #######   ##        ## ####  ######   ######  ####   #######   ##     ###             | *" << endl;
	cout << "* |                                                                                                                                                                                                  | *" << endl;
	cout << "* |  ##        ##    ###    ###     ##    ###    ###     ##   ######  ###### ##        ## ###### ##        ## ###### ###     ## ########    ######  ##      ##  ######  ######## ###### ##       ##  | *" << endl;
	cout << "* |  ###      ###   ## ##   ####    ##   ## ##   ####    ##  ##    ## ##     ###      ### ##     ###      ### ##     ####    ##    ##      ##    ##  ##    ##  ##    ##    ##    ##     ###     ###  | *" << endl;
	cout << "* |  ## ##  ## ##  ##   ##  ## ##   ##  ##   ##  ## ##   ## ##        ##     ## ##  ## ## ##     ## ##  ## ## ##     ## ##   ##    ##      ##         ##  ##   ##          ##    ##     ## ## ## ##  | *" << endl;
	cout << "* |  ##  ####  ## ######### ##  ##  ## ######### ##  ##  ## ##   #### ###### ##  ####  ## ###### ##  ####  ## ###### ##  ##  ##    ##       ######     ####     ######     ##    ###### ##  #### ##  | *" << endl;
	cout << "* |  ##   ##   ## ##     ## ##   ## ## ##     ## ##   ## ## ##     ## ##     ##   ##   ## ##     ##   ##   ## ##     ##   ## ##    ##            ##     ##           ##    ##    ##     ##   ##  ##  | *" << endl;
	cout << "* |  ##        ## ##     ## ##    #### ##     ## ##    ####  ##    ## ##     ##        ## ##     ##        ## ##     ##    ####    ##      ##    ##     ##     ##    ##    ##    ##     ##       ##  | *" << endl;
	cout << "* |  ##        ## ##     ## ##     ### ##     ## ##     ###   ######  ###### ##        ## ###### ##        ## ###### ##     ###    ##       ######      ##      ######     ##    ###### ##       ##  | *" << endl;
	cout << "* |                                                                                                                                                                                                  | *" << endl;
	cout << "* ___________________________________________________________________________________________________________________________________________________________________________________________________  *" << endl;
}