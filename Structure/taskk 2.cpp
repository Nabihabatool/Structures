#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct address{
	
	int house_no;
	string city;
	string country;
};

struct student{
	string name;
	int age;
	int roll_no;
	address ad;
};

void even_roll(student s1, student s2,student s3){
	if(s1.roll_no%2==0){
		cout<<s1.name;
	}
	if(s2.roll_no%2==0){
		cout<<s2.name;
	}
	if(s3.roll_no%2==0){
		cout<<s3.name;
	}
	
	
}
void age14(student s1,student s2,student s3){
	if(s1.age==14){
		cout<<s1.name;
	}
		if(s2.age==14){
		cout<<s2.name;
	}
		if(s3.age==14){
		cout<<s3.name;
	}
}

int main() {
            student S1;
            student S2;
            student S3;
            
             
             cout<<"Enter data of student S1: "<<endl;
             cout<<"Enter Name: ";
             cin>>S1.name;
             cout<<"Enter Age: ";
             cin>>S1.age;
             cout<<"Enter Roll NO: ";
             cin>>S1.roll_no;
              cout<<"Enter City: ";
             cin>>S1.ad.city;
             cout<<"Enter Country: ";
             cin>>S2.ad.country;
             cout<<"Enter House NO: ";
             cin>>S2.ad.house_no;
             
              cout<<"Enter data of student S2: "<<endl;
              cout<<"Enter Name: ";
             cin>>S2.name;
             cout<<"Enter Age: ";
             cin>>S2.age;
             cout<<"Enter Roll NO: ";
             cin>>S2.roll_no;
              cout<<"Enter City: ";
             cin>>S2.ad.city;
             cout<<"Enter Country: ";
             cin>>S2.ad.country;
             cout<<"Enter House NO: ";
             cin>>S2.ad.house_no;
             
	        cout<<"Enter data of student S3: "<<endl;
	        cout<<"Enter Name: ";
             cin>>S3.name;
             cout<<"Enter Age: ";
             cin>>S3.age;
             cout<<"Enter Roll NO: ";
             cin>>S3.roll_no;
             cout<<"Enter City: ";
             cin>>S3.ad.city;
             cout<<"Enter Country: ";
             cin>>S3.ad.country;
             cout<<"Enter House NO: ";
             cin>>S3.ad.house_no;
     even_roll(S1,S2,S3);
     age14(S1,S2,S3);
	     
             
	return 0;
}
