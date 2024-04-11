#include <iostream>
using namespace std;

int main() {
	int x = 5, y;
	const int *const ptr = &x;
	cout<<"\n"<<*ptr<<endl;
}
