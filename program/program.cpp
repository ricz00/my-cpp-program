#include<iostream> 
#include<iomanip>
#include<cstdlib>
using namespace std;

int squareByValue(int);
void squareByReference(int &);

int main(){
	int x = 2, z = 4;
   	cout<<"x = "<<x<<"before squareByValue\n";
	cout<<"Value returned by SquareByValue: "<<squareByValue(x)<<endl;
	cout<<"x"<<x<<"after SquareByValue\n"<<endl;
	cout<<"z = "<<z<<"befoere SquareByReference"<<endl;
	squareByReference(z);
	cout<<"z = "<<z<<"after SquareByReference"<<endl;
}

int squareByValue(int num){
	return num * num;
}

void squareByReference(int &num){
    num *= num;	
}
