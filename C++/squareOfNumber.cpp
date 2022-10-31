#include<iostream>
using namespace std;

int calculateSquare(int number)
{
	return number * number;
}

int main()
{
	int number;
	
	cout << "\nPlease Enter Number to find Square of it  =  ";
	cin >> number;	
	
	int square = calculateSquare(number);
	
	cout << "\nThe Square of the Given " << number << " = " << square;
	
 	return 0;
}
