#include<iostream> 
#include<iomanip>
#include<cstdlib>
using namespace std;

int main(){
	int f1 = 0,f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
	int face;
	
	for (int roll = 1; roll <= 6000000; ++roll) {
		face = 1 + rand() % 6; // 1 to 6
		
		switch(face){
			case 1:
				++f1;
			    break;
	        case 2:
			    ++f2;
				break;
		    case 3:
		        ++f3;
				break;
		    case  4:
			    ++f4;
				break;
		    case 5:
			    ++f5;
				break;
		    case 6:
			    ++f6;
				break;
		    default:
			    cout<<"Program should never get here! ";		   		   		    								
		}
	} 
	cout<<"Face"<<setw(15)<<"Frequency"<<endl;
	cout<<"1"<<setw(13)<<f1
	 <<"\n2"<<setw(13)<<f2
	 <<"\n3"<<setw(13)<<f3
	 <<"\n4"<<setw(13)<<f4
	 <<"\n5"<<setw(13)<<f5
	 <<"\n6"<<setw(13)<<f6<<endl;
}
