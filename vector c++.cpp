#include <iostream>
#include <iomanip>
#include <vector>
#include <stdexcept>
using namespace std;

void outputVector(const vector<int> &);
void inputVector(vector<int> &);

int main(){
	vector<int> integers1(7);
	vector<int> integers2(10);
	cout<<"\nSize of integers1: "<<integers1.size()
	     <<"\nvector after initialization:"<<endl;
	     outputVector(integers1);
	     
	     cout<<"\nSize of integers2: "<<integers2.size()
	         <<"\nvector after initialization:"<<endl;
	     outputVector(integers2);
		 
	cout<<"\nEnter integers:"<<endl;
	inputVector(integers1);
	inputVector(integers2);
	
	cout<<"\nEnter input the vectors contain:\n"
	    <<"integers1:"<<endl;
    outputVector(integers1);
	cout<<"\nintegers2"<<endl;
	outputVector(integers2);
	cout<<"\nEvaluating integers1 ! = integers2"<<endl;
	if(integers1!= integers2)
	   cout<<"integers1 and integers2 are not equal"<<endl;
	   
	vector<int> integers3(integers1);
	cout<<"\nSize of integers3: "<<integers3.size()
	    <<"\nvector after initialization:"<<endl;
	outputVector(integers3);
	
	cout<<"\nAssigning integers2 integers2 to integers1:"<<endl;
	integers1 = integers2;
	
	cout<<"integers1:"<<endl;
	outputVector(integers1);
	cout<<"integers2:"<<endl;
	outputVector(integers2);
	cout<<"\nEvaluating: integers1 == integers2"<<endl;
	if(integers1 == integers2)
	   cout<<"integersd1 and integers2 are equal"<<endl;
	   
	cout<<"\n integers[5] is "<<integers1[5];
	cout<<"\n\nAssigning 1000 to integers1[5]"<<endl;
	integers1[5] = 1000;
	cout<<"integers1:"<<endl;
	outputVector(integers1);
	try{
		cout<<"\nAttempt to display integers1. at(15)"<<endl;
		cout<<integers1.at(15)<<endl; //ERROR
	}catch(out_of_range&ex){
		cout<<"An exception occured:"<<ex.what()<<endl;
	}
	
	  }  
	void outputVector(const vector<int> &array){
	 size_t i;
	for(i = 0 ;i < array.size(); ++ i){
		cout<<setw (12)<<array[i];
		if(( i + 1 )% 4 == 0)
		      cout<<endl;
	} }		   			     
	void inputVector(vector<int> &array){
	     for(size_t i = 0; i <array.size(); ++i)
	         cin>>array[i];
}
