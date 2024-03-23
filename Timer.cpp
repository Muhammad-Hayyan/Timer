/* MUHAMMAD HAYYAN
23I-2041_______CY-A
Assignment#04____Q5 8 */

#include <iostream>
using namespace std;

int main()
{
		//Program that take input two-byte time entry and appropriately separates hours, minutes and seconds 
	
	//taking input	
	int num , hours, sec, min;
	cout<< "\n\n Enter a two Byte Time value: ";
	cin>> num;
	cout<<endl;
	
	//calculating seconds
	sec = num & 31;			//taking & of number with binary 11111 (i.e 31 in decimal) 
	
	//calculating minutes
	min = num & 2016;			//taking & of number with binary 11111100000 (i.e 2016 in decimal)
	min = min >> 5;				//right shifting output by 5 to extract only minutes value
	
	//calculating hours
	hours = num & 63488;			//taking & of number with binary 1111100000000000 (i.e 63488 in decimal)
	hours = hours >> 11;			//right shifting output by 11 to extract only hours value
	
	//Outputting
	cout<< "\n Time is :  "<<hours<<" hours " <<min<< " minutes " <<sec<< " seconds \n";
	
	return 0;
	
}
