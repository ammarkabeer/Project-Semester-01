#include <iostream>
#include <string>
using namespace std;
 struct date_of_birth
    {
		int dd, mm, yy;
	};
 struct student {
		char name[30];
		string rollNumber;
		date_of_birth dob;
	};
int main() {
		student s[3];
		cout<<"\n\n\t\t********************************";
		cout << "\n\n\t\t\tEnter Student Data!" << endl;
		cout<<"\n\t\t********************************";
		for (int i = 0; i < 3; i++) {
			cout<<"\n\n==> ENTER DATA OF STUDENT "<<i+1;
			cout<<"\n\t_____________________________________\n\n";
			cout << " \t     Student Name= ";
			cin >> s[i].name;
			cout << " \t     Student RollNumber= ";
			cin >> s[i].rollNumber;
			cout << " \t     Student Date= ";
			cin >> s[i].dob.dd;
			cout << " \t     Student Month= ";
			cin >> s[i].dob.mm;
			cout << " \t     Student Year= ";
			cin >> s[i].dob.yy;
			cout<<endl;
			cout<<"\t_____________________________________\n\n";
		}
		student oldest = s[0];
		for (int i = 1; i < 3; i++) {
			if (s[i].dob.yy < oldest.dob.yy ||
			(s[i].dob.yy == oldest.dob.yy && s[i].dob.mm < oldest.dob.mm) ||
			(s[i].dob.yy == oldest.dob.yy && s[i].dob.mm == oldest.dob.mm &&
			s[i].dob.dd < oldest.dob.dd)) 
			{
			oldest = s[i];
			}
		}
		cout<<"\t\t--------------------------------------\n";
		cout << "\t\t\tOldest Student is \n\t\t\t" << oldest.name << "\n\t\t\twith Roll Number " <<
		oldest.rollNumber << endl;
		cout<<"\t\t--------------------------------------";
		return 0;
}
