#include <iostream>
#include <string>
using namespace std;

//OVERLOADING FUNCTIONS: creating several functions with the same name
//The functions must have different FUNCTION SIGNATURES
//	-A function signature is the name together with the parameter list

//function prototypes
int larger(int a, int b);
char bigger(char cLetter1, char cLetter2);
string huge(string sLine1, string sLine2);

int main()
{
	cout << larger(100, 5) << endl;
	cout << larger(100.35, 100.89) << endl;

	cout << bigger('A', 'a') << endl;

	cout << huge("swag man booyah", "yolo") << endl;
	

	return 0;
}

//compare a and b and return the larger of the two
int larger(int a, int b)
{
	if (a >= b)
		return a;

	return b;
}

//compare letters
char bigger(char cLetter1, char cLetter2)
{
	if (cLetter1 >= cLetter2)
		return cLetter1;
	
	return cLetter2;
}

//create a version that is larger that accepts strings
//return the string that has more characters
//hint: stringName.length()

string huge(string sLine1, string sLine2)
{
	if (sLine1.length() >= sLine2.length())
		return sLine1;

	return sLine2;
}