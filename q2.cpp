#include<iostream>
using namespace std;
struct S {
	string rollno,name;
	float chm,phy,math;
}	marks[5];
 
int main(){

	for(int i=0;i<5;i++){
		cout<<"\n\n\t\t________________________________________";
		cout<<"\n\n\t\t****  Enter the record of student "<<i+1<<"  ***";
		cout<<"\n\t\t________________________________________";
		cout<<"\n\nROLL NO: ";
		cin>>marks[i].rollno;
		cout<<"NAME: ";
		cin>>marks[i].name;
		cout<<"Enter Chemistry marks (out of 100)--> ";
		cin>>marks[i].chm;
		cout<<"Enter Math marks (out of 100)--> ";
		cin>>marks[i].math;
		cout<<"Enter Physics marks (out of 100)--> ";
		cin>>marks[i].phy;
	}
	cout<<"\n\n\t\t_____________________________________";
	cout<<"\n\n\t\t *** Percentage of each student***";
	cout<<"\n\n\t\t_____________________________________";
	for(int i=0;i<5;i++){
		float totalmarks = marks[i].chm + marks[i].math + marks[i].phy;
 	    double percentage =totalmarks*100/300;
 	    cout<<"\n\t\t_____________________________________";
        cout<<"\n\tROLL NO: "<<marks[i].rollno<<"\n\tNAME: "
		<<marks[i].name<<"\n\tPERCENTAGE: "<<percentage<<"%";
    	cout<<"\n\t\t_____________________________________";
	}
	return 0;
	
}
