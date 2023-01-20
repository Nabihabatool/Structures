#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	struct date
	{
	int day;
	int month;
	int year;
	   
   };


int main(){

    date d1;
    date d2;
  
	cout<<"Please enter Date 1:"<<endl;
	
	cout<<"Enter Day:";
	cin>>d1.day;
	
	cout<<"Enter Month:";
	cin>>d1.month;
	
	cout<<"Enter Year:";
	cin>>d1.year;
	
	
	cout<<"Please enter Date 2:"<<endl;
	
	cout<<"Enter day:";
    cin>>d2.day;
    
    cout<<"Enter Month:";
	cin>>d2.month;
	
	cout<<"Enter Year:";
	cin>>d2.year;
	
	
	
	if(d1.day==d2.day&&d1.month==d2.month&&d1.year==d2.year){
		cout<<"Dates are equal";
	}
	else{
		cout<<"Dates are not equal";
	}
	
	

	return 0;
}
