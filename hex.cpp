/* Michael Braunstein MARCH 25, 2018
ASSIGNMENT functions 2-5
This application will let the user select between three options or exit
*/

#include<iostream>
#include<cstdlib>
#include<stdlib.h>
#include<string>
#include<ctype.h>
#include<stdio.h>
#include<iomanip>

using namespace std;
int choice = 0;
int conv;
int  cosine, logarithms, logarithm, convert;


int main() {
	int pow, mydec;
	string myhex = "";
	pow = 0;
	mydec = 0;


	cout << "Enter the hexadecimal number you wish to convert to decimal: \n" << endl;
	//cin >> hex >> myhex; //second method added later
	cin >> myhex;
	
	for (int i = myhex.length() - 1; i = 0; i--) {
	if (myhex[i] == '0') mydec += 0 * 16 ^ pow;
	if (myhex[i] == '1') mydec += 1 * 16 ^ pow;
	if (myhex[i] == '2') mydec += 2 * 16 ^ pow;
	if (myhex[i] == '3') mydec += 3 * 16 ^ pow;
	if (myhex[i] == '4') mydec += 4 * 16 ^ pow;
	if (myhex[i] == '5') mydec += 5 * 16 ^ pow;
	if (myhex[i] == '6') mydec += 6 * 16 ^ pow;
	if (myhex[i] == '7') mydec += 7 * 16 ^ pow;
	if (myhex[i] == '8') mydec += 8 * 16 ^ pow;
	if (myhex[i] == '9') mydec += 9 * 16 ^ pow;
	if (myhex[i] == 'A') mydec += 10 * 16 ^ pow;
	if (myhex[i] == 'B') mydec += 11 * 16 ^ pow;
	if (myhex[i] == 'C') mydec += 12 * 16 ^ pow;
	if (myhex[i] == 'D') mydec += 13 * 16 ^ pow;
	if (myhex[i] == 'E') mydec += 14 * 16 ^ pow;
	if (myhex[i] == 'F') mydec += 15 * 16 ^ pow;
	pow++;
	}
	


	//cout << " The dec of " << hex << myhex << endl; // second method just added

	cout << "The decimal version of " << (myhex) << " is " << (mydec) << "\n" << endl;
	system("pause");



}