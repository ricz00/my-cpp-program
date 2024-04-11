#include <iostream>
using namespace std;

int main() {
	int x;
	int *const ptr = &x;
	*ptr = 57;
	cout<<"X; "<<x;
	x =-40;
	cout<<"\n*ptr: "<<*ptr;
}
