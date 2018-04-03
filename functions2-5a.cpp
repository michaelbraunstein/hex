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
#include<cmath>

using namespace std;
int choice = 0;
int conv;
int  cosine, logarithms, logarithm, convert;


int main() {

	cout << "Type 1 for finding Cosines, type 2 for finding Logarithms,";
	cout << "type 3 for converting between Decimal and hexadecimal,";
	cout << "and type 4 to exit the program. \n";
	cin >> choice;


	if (choice == 1) {
		int costype; // cosine, arc, hyperbolic;
		float cosi, result;// arc, hyperbolic, result;
		cout << "Type 1 if you want to find the cosine, type 2 if you want to find the arc cosine, or 3 if you wnat to find the hyperbolic cosine? \n" << endl;
		cout << "Enter your choice\n" << endl;
		cin >> costype;
		if (costype = 1) {
			cout << "Enter your number\n" << endl;
			cin >> cosi;
			result = cos(cosi);
			cout << "The cosine of " << cosi << " is " << result << " /n" << endl;
			system("pause");
		}
		else if (costype == 2) {
			cout << "Enter your number\n" << endl;
			cin >> cosi;
			result = acos(cosi);
			cout << "The arc of " << cosi << " is " << result << " /n" << endl;
			system("pause");

		}
		else if (costype == 3) {
			cout << "Enter your number\n" << endl;
			cin >> cosi;
			result = cosh(cosi);
			cout << "The hyperbolic cosin of " << cosi << " is " << result << "\n" << endl;
			system("pause");
		}
	}

	else if (choice == 2)
	{
		int logtype;

		float cos, result;
		cout << "If you want to find the common logarithm press 1, if you want to find the naturural logarithm press 2 \n" << endl;
		cin >> logtype;


		if (logtype == 1) {
			cout << "Enter the number you want to find the common logarithm for: \n" << endl;
			cin >> cos;
			result = log(cos);

			cout << "The common logarithm of " << cos << " is " << result << "\n " << endl;
			system("pause");

		}
		else if (logtype == 2) {
			cout << "Enter the number you want to find the natural logarithm for: \n";
			cin >> cos;
			result = log10(cos);

			cout << "The natural logarithm of " << cos << " is " << result << " \n" << endl;
			system("pause");
		}
	}

	else if (choice == 3) {
		int dec, rem;
		string hrx, dekout;
		int conv;
		int cs;
		bool up = false;

		cout << "Type 1 if you want to convert decimal to hexadecimal or type 2 if you want ";
		cout << "to convert hexadecimal to decimal" << "\n " << endl;
		cin >> (conv);

		if (conv == 1) {
			bool up = false;

			cout << "Type 1 if you want to use lower case or 2 if you want to use uppercase letters in the printing of the hexadecimal number.\n";
			cin >> cs;
			if (cs == 1) up = true;
			else up = false;
			hrx = "";
			cout << "Enter the decimal number you wish to convert to hexadecimal: \n";
			cin >> dec;
			dekout = dec;
			while (dec > 15) {

				rem = dec % 16;
				dec = dec / 16;
				if (rem < 10) hrx = std::to_string(rem) + hrx;
				else if (rem == 10) hrx = "A" + hrx;
				else if (rem == 11) hrx = "B" + hrx;
				else if (rem == 12) hrx = "C" + hrx;
				else if (rem == 13) hrx = "D" + hrx;
				else if (rem == 14) hrx = "E" + hrx;
				else if (rem == 15) hrx = "F" + hrx;

			}
			if (dec < 10) hrx = std::to_string(dec) + hrx;
			else if (dec == 10) hrx = "A" + hrx;
			else if (dec == 11) hrx = "B" + hrx;
			else if (dec == 12) hrx = "C" + hrx;
			else if (dec == 13) hrx = "D" + hrx;
			else if (dec == 14) hrx = "E" + hrx;
			else if (dec == 15) hrx = "F" + hrx;

			if (up == false) {
				for (int i = 0; i = hrx.length(); i++)
					hrx[i] = tolower(hrx[i]);
			}
			cout << "The hexadecimal version of " << (dekout) << " is H0" << (hrx) << "\n" << endl;

			system("pause");
		}
		else if (conv == 2) {
			double dec;
			int pwr;
			string myhex = "";
			pwr = 0;
			dec = 0;

			cout << "Enter the hexadecimal number you wish to convert to decimal: \n";
			cin >> myhex;


			for (int i = myhex.length() - 1; i >= 0; i--) {
				if (myhex[i] == '0') dec += 0 * pow(16, pwr);
				else if (myhex[i] == '1') dec += 1 * pow(16, pwr);
				else if (myhex[i] == '2') dec += 2 * pow(16, pwr);
				else if (myhex[i] == '3') dec += 3 * pow(16, pwr);
				else if (myhex[i] == '4') dec += 4 * pow(16, pwr);
				else if (myhex[i] == '5') dec += 5 * pow(16, pwr);
				else if (myhex[i] == '6') dec += 6 * pow(16, pwr);
				else if (myhex[i] == '7') dec += 7 * pow(16, pwr);
				else if (myhex[i] == '8') dec += 8 * pow(16, pwr);
				else if (myhex[i] == '9') dec += 9 * pow(16, pwr);
				else if (myhex[i] == 'A') dec += 10 * pow(16, pwr);
				else if (myhex[i] == 'B') dec += 11 * pow(16, pwr);
				else if (myhex[i] == 'C') dec += 12 * pow(16, pwr);
				else if (myhex[i] == 'D') dec += 13 * pow(16, pwr);
				else if (myhex[i] == 'E') dec += 14 * pow(16, pwr);
				else if (myhex[i] == 'F') dec += 15 * pow(16, pwr);
				pwr++;
			}

			cout << "The decimal version of " << (myhex) << " is " << (dec) << "\n" << endl;
			system("pause");

		}

	}
	else if (choice == 4) {
		cout << "Exiting program\n" << endl;
		system("pause");

		exit(EXIT_SUCCESS);
	}


	//system("pause");

}


