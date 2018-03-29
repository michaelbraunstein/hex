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


int main(){
int pow, dec;
string myhex = "";
pow = 0;
dec = 0;


cout << "Enter the hexadecimal number you wish to convert to decimal: \n" << endl;
cin >> hex >> myhex;
//cin >> hex;
/*
for (int i = hex.length() - 1; i = 0; i--) {
	if (hex[i] == '0') dec += 0 * 16 ^ pow;
	if (hex[i] == '1') dec += 1 * 16 ^ pow;
	if (hex[i] == '2') dec += 2 * 16 ^ pow;
	if (hex[i] == '3') dec += 3 * 16 ^ pow;
	if (hex[i] == '4') dec += 4 * 16 ^ pow;
	if (hex[i] == '5') dec += 5 * 16 ^ pow;
	if (hex[i] == '6') dec += 6 * 16 ^ pow;
	if (hex[i] == '7') dec += 7 * 16 ^ pow;
	if (hex[i] == '8') dec += 8 * 16 ^ pow;
	if (hex[i] == '9') dec += 9 * 16 ^ pow;
	if (hex[i] == 'A') dec += 10 * 16 ^ pow;
	if (hex[i] == 'B') dec += 11 * 16 ^ pow;
	if (hex[i] == 'C') dec += 12 * 16 ^ pow;
	if (hex[i] == 'D') dec += 13 * 16 ^ pow;
	if (hex[i] == 'E') dec += 14 * 16 ^ pow;
	if (hex[i] == 'F') dec += 15 * 16 ^ pow;
	pow++;
}
*/


cout << " The dec of " << hex << myhex << endl;

cout << "The decimal version of " << (hex) << " is " << (dec) << "\n" << endl;
system("pause");

				

			}