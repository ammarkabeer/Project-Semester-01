#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
 int i=0;
struct student
{
	string id,course,rollno;
	double num;
	int admyr;
	string name,grade;
	float marks,per;
} s[25];

 void insert (){
 	system("cls");
 	cout<<"\n\n\n\t\t\t ****  Insert REcord **** ";
 	cout<<"\n\n Enter Student Name: ";
 	cin>>s[i].name;
 	cout<<"\n\n Enter STudent systum ID: ";
 	cin>>s[i].id;
 	cout<<"\n\n Enter STudent Roll no: ";
 	cin>>s[i].rollno;
 	cout<<"\n\n Enter STudent faculty department: ";
 	cin>>s[i].course;
 	cout<<"\n\n Enter STudent admission year: ";
 	cin>>s[i].admyr;
 	cout<<"\n\n Enter STudent phone number: ";
 	cin>>s[i].num;
 	cout<<"\n\n Enter Student Marks: ";
 	cin>>s[i].marks;
 	s[i].per = s[i].marks/100*100;
 	if(s[i].per>=90)
 	    s[i].grade ="A+";
 	else if(s[i].per >=80)
 	    s[i].grade ="B";
 	else if(s[i].per >=70)
 	    s[i].grade ="C";
 	else if(s[i].per >=60)
 	    s[i].grade ="D";
 	else if(s[i].per >=50)
 	    s[i].grade ="E";
 	else
 	    s[i].grade ="F";
 	i++;
 	cout<<"\n\n *** Insert Record Succesfully ***";
 }
 void search(){
 	system("cls");
 	cout<<"\n\n\t\t\t *** Search Record ***";
 	if(i==0)
 	    cout<<"\n\n *** No Record Found ***";
 	else {
 		string id;
 		int found=0;
 		cout<<"\n\n Enter student Id: ";
 		cin>>id;
 		for(int a=0;a<i;a++){
 			if(id == s[a].id){
 			 cout<<"\n\n STudent Name: "<<s[a].name;
 			 cout<<"\n\n Student systum id: "<<s[a].id;
 			 cout<<"\n\n Student Roll no: "<<s[a].rollno;
 			 cout<<"\n\n STudent faculty department: "<<s[i].course;
             cout<<"\n\n STudent admission year: "<<s[i].admyr;
             cout<<"\n\n STudent phone number: "<<s[i].num;
			 cout<<"\n\n Student Marks: "<<s[a].marks;
			 cout<<"\n\n Student Percentage: "<<s[a].per<<"%";
			 cout<<"\n\n Student Grade: "<<s[a].grade;
			 found++;
		 }
	 }
	 if(found==0){
	 	cout<<"\n\n *** Student Id Not Found ***";
	 }
    }
}
 void update(){
 		system("cls");
 	cout<<"\n\n\t\t\t *** Update Record ***";
 	if(i==0)
 	    cout<<"\n\n *** No Record Found ***";
 	else {
 		string id;
 		int found=0;
 		cout<<"\n\n Enter student systum Id: ";
 		cin>>id;
 		for(int a=0;a<i;a++){
 			if(id == s[a].id){
				cout<<"\n\n Enter Student Name: ";
			 	cin>>s[a].name;
			 	cout<<"\n\n Enter STudent systum ID: ";
			 	cin>>s[a].id;
			 	cout<<"\n\n Enter STudent Roll no: ";
			 	cin>>s[a].rollno;
			 	cout<<"\n\n Enter STudent faculty department: ";
			 	cin>>s[a].course;
			 	cout<<"\n\n Enter STudent admission year: ";
			 	cin>>s[a].admyr;
			 	cout<<"\n\n Enter STudent phone number: ";
			 	cin>>s[a].num;
			 	cout<<"\n\n Enter Student Marks: ";
			 	cin>>s[a].marks;
			 	s[a].per = s[a].marks/100*100;
			 	if(s[a].per>=90)
			 	    s[a].grade ="A+";
			 	else if(s[a].per >=80)
			 	    s[a].grade ="B";
			 	else if(s[a].per >=70)
			 	    s[a].grade ="C";
			 	else if(s[a].per >=60)
			 	    s[a].grade ="D";
			 	else if(s[a].per >=50)
			 	    s[a].grade ="E";
			 	else
			 	    s[a].grade ="F";
			 	cout<<"\n\n *** Update Record Successfully ***";
			 	    found++;
					 }
	 }
			    if(found==0){
			 	cout<<"\n\n *** Student Id Not Found ***";
			    }
	}
 }
 void del(){
 		system("cls");
 	cout<<"\n\n\t\t\t *** Delete Record ***";
 	if(i==0)
 	    cout<<"\n\n *** No Record Found ***";
 	else {
 		string id;
 		int found=0;
 		cout<<"\n\n Enter student Id: ";
 		cin>>id;
 		for(int a=0;a<i;a++){
 			if(id == s[a].id){
 				for(int m=a;m<i-1;m++){
 					s[m].name = s[m+1].name;
 					s[m].id = s[m+1].id;
 					s[m].rollno =s[m+1].rollno;
 					s[m].course =s[m+1].course;
 					s[m].admyr =s[m+1].admyr;
 					s[m].num =s[m+1].num; 
					s[m].marks = s[m+1].marks;
					s[m].per =	s[m+1].per;
					s[m].grade =s[m+1].grade;
     			 }
				 cout<<"\n\n *** DElete Record Succesfully ***";
				 found++;
				 i--;
				 break;
				 
			 }
		 }
		    if(found==0){
			 	cout<<"\n\n *** Student Id Not Found ***";
			    }
    }
 	
 }
 void show(){
 		system("cls");
 	cout<<"\n\n\t\t\t *** Show All Record ***";
 	if(i==0)
 	    cout<<"\n\n *** No Record Found ***";
 	else {
 		for(int a=0;a<i;a++){
 			cout<<"\n\n Name: "<<s[a].name;
 			cout<<"\n\n student Systum ID: "<<s[a].id;
 			cout<<"\n\n Student Roll no: "<<s[a].rollno;
 			cout<<"\n\n STudent faculty department: "<<s[i].course;
            cout<<"\n\n STudent admission year: "<<s[i].admyr;
            cout<<"\n\n STudent phone number: "<<s[i].num;
 			cout<<"\n\n Marks: "<<s[a].marks;
 			cout<<"\n\n percentage: "<<s[a].per<<"%";
 			cout<<"\n\n Grade: "<<s[a].grade;
 			cout<<"\n\n********************************";
		 }
 }
 }
int main(){
		p:
		system("cls");
		int choice;
	cout<<"\n\n\t\t****Student Management Systum ****";
	cout<<"\n\n 1. Insert record";
	cout<<"\n\n 2. Search Record";
	cout<<"\n\n 3. update Record";
	cout<<"\n\n 4. delete record";
	cout<<"\n\n 5. Show Record";
	cout<<"\n\n 6. EXIT";
	cout<<"\n\nEnter Your choice --> ";
	cin>>choice;
	switch(choice)
	{
		int choice;
		case 1:
			insert();
			break;
		case 2:
			search();
			break;
		case 3:
			update();
			break;
		case 4:
			del();
			break;
		case 5:
			show();
			break;
		case 6:
			exit(0);
			break;
		default:
			cout<<"\n\n ***  please enter valid choice your choice is invalid  ***";	
	}
	getch();
	goto p;

}
