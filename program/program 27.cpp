#include <iostream>
using namespace std;

void displayWord(int a);

int main(){
	int number[3], i;
	cout<<"Enter three numbera(1-3): ";
	
	for(i = 0; i < 3; i++)
	    cin>>number[i];
	    
	for(i = 0; i < 3; i++)
	    displayWord(number[i]);
		    
}

void displayWord(int a) {
	if(a == 1)
	   cout<<"One\n";
	else if (a == 2)
	   cout<<"Two\n";
	else if (a == 3)
	   cout<<"Three\n";
	else
	   cout<<"?\n";          
}
