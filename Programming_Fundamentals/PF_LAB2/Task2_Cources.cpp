#include<iostream>
using namespace std;

int main(){
	int PF, DLD, STAT;
	cout << "Enter Marks of PF : ";
	cin >> PF;
	cout << "\nEnter Marks of DLD : ";
	cin >> DLD;
	cout << "\nEnter Marks of STAT : ";
	cin >> STAT;
	// PF--------------
	if(PF > 50){
		cout << "\nYou Pass in PF";
	}else
	{
		cout << "\nYou Fail in PF";
	}
	// DLD --------------------
	if (DLD > 50)
	{
		cout << "\nYou Pass in DLD";
	}
	else
	{
		cout << "\nYou Fail in DLD";
	}
	//STAT-----------------------
	if (STAT > 50)
	{
		cout << "\nYou Pass in STAT";
	}
	else
	{
		cout << "\nYou Fail in STAT";
	}
}