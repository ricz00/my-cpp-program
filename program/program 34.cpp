#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char string1[] = "abcdefghijklmnopqrstuvwxyz";
	char string2[] = "four";
	char string3[] = "Boston";
	
	cout<<"The lenght of "<<string1
	    <<" is " << strlen(string1)
        <<"\nThe lenght of "<<string2
        <<" is " << strlen(string2)
        <<"\nThe lenght of "<<string3
        <<" is " <<strlen(string3) << endl;
        
    return 0;    
}
