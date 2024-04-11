#include<iostream>
using namespace std;

int main() {
	int x;
	int * const ptr = &x;
	*ptr = 7;
	cout<<"X value: "<<x;
	*ptr = 500;
	cout<<"\nX: "<<x;	
}
