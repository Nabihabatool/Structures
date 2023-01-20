#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct address{
	
	string name;
	int city;
	int country;
	
};
struct student{
	
	string name;
	int id;
    float marks;
    address ad;
	
};
int main() {

	student S[10];
	for(int i=1;i<10;i++)
	{
		cout<<"Enter your name: "<<endl;
	    cin>>S[i].name;
	    	
		cout<<"Enter your ID: "<<endl;
		cin>>S[i].id;
		
		cout<<"Enter your marks: "<<endl;
		cin>>S[i].marks;
		
		cout<<"Enter school name: "<<endl;
		cin>>S[i].ad.name;
		
		cout<<"Enter school city: "<<endl;
		cin>>S[i].ad.city;
		
		cout<<"Enter school country: "<<endl;
		cin>>S[i].ad.country;
			
	}
	
	
	return 0;
}
