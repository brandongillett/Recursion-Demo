#include"recursion.h"
#include "reverse.h"

//First it will show the user the original alphabet ask the user where they would like to reverse twice and then show the complete alphabet reversed
void print(){
	string alphabet;
	alphabet = "abcdefghijklmnopqrstuvwxyz";
	cout << "Original : " << alphabet << endl;
		//calling the reverse function using the input variables and the alphabet / 0 is used for counting variable
		cout << "11 - 18 : ";
		reverserec(11,18,alphabet,0);
		cout << alphabet << endl;
		alphabet = "abcdefghijklmnopqrstuvwxyz";
		cout << "4 - 22 : ";
		reverserec(4,22,alphabet,0);
		cout << alphabet << endl;
		alphabet = "abcdefghijklmnopqrstuvwxyz";
		cout << "All : ";
		reverserec(0,25,alphabet,0);
		cout << alphabet << endl;
}
