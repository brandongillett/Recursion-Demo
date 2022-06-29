#include <iostream>
#include <string>

using namespace std;

int d;
string temp;
//rev function uses recursion to set alphabet variable backwards
void reverserec(int a, int b, string& alpha, int c){
	//one time argument to set d to b for counting
	if (c == 0){
		d = b;
	}
	//adds one to the counting variable and then calls the function again
	if (c < 25){
	//this will show that you are greater than the first variable but less then the second &&  make sure that when swapping the first and last you dont swap them when they are equal
	//or when the first doesnt get greater than the last
	if (c >= a && c <=b && c != d && c < d)
	{
		//sets the first letter to the last and the last to the first using temp set to the first then subtracts 1 from d

			temp[0] = alpha[c];
			alpha[c] = alpha[d];
			alpha[d] = temp[0];
			d -= 1;	
	}	
		c +=1;
		reverserec(a,b,alpha,c);
	}
	// this is the base case to see if we have gotten to the 26th character
		return;	
}