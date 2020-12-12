#include<iostream>
#include<cstring>
/**
Student and teacher information entry	
*/
using namespace std;
class Person{
public:
	string ID;
	string name;
public:
	Person(string sendID, string sendName){
	    ID = sendID;
	    name = sendName;
	}
	string getName(){
	    return name;
	}
	string getID(){
	    return ID;
	}
};
class Student: public Person{
public:
	static int stucount;
	string classnum;
	int  grade;
public:
	Student(string sendClassNum, int sendGrade, string ID, string name) : Person(ID,name){
	    classnum = sendClassNum;
        grade = sendGrade;
        stucount++;                      //The total number of students + 1 
	}
	void print(){
		cout<<Person::getID()<<"\t\t"<<Person::getName()<<"\t"<<classnum<<"\t\t"<<grade<<endl; 
	}
};
int Student::stucount = 0;
class Teacher: public Person{
public:
	static int teacount;
	string titleName;
	string department;
public:
	Teacher(string sendtitle,string sendDepartment,string ID, string name) : Person(ID,name){
        titleName  = sendtitle;
        department = sendDepartment;
        teacount++;                   //The total number of teachers + 1 
	}
	void print(){
	    cout<<Person::getID()<<"\t\t"<<Person::getName()<<"\t\t"<<titleName<<"\t\t"<<department<<endl;  
	}	
};
int Teacher::teacount = 0; 
int main(){
    string name;
    string ID;
    int grade;
    string department;
    string titlname;
    string classnum; 
    / / Instantiate the student class object 
    Student stu[3]={
	Student(classnum,grade,ID,name),
	Student(classnum,grade,ID,name),
	Student(classnum,grade,ID,name)
	};
	/ / Instantiate the teacher class object
	Teacher tea[3]={
	Teacher(titlname,department,ID,name),
	Teacher(titlname,department,ID,name),
	Teacher(titlname,department,ID,name)
	};
    / / Receive student data 
    cout<<"Please enter information for three students"<<endl;
    for(int i = 0; i < 3; i++){
    	cin>>stu[i].name>>stu[i].ID>>stu[i].grade>>stu[i].classnum;
    }	
    / / Receive teacher data 
    cout<<"Please enter the information of three teachers"<<endl;
    for(int j = 0; j < 3; j++){
    	cin>>tea[j].name>>tea[j].ID>>tea[j].titleName>>tea[j].department;
    }
    / / Print student information 
    cout<<"The total number of students is:"<<Student::stucount<<"people"<<endl; 
    cout<<"----------------------------- Student List ------------------ -----------"<<endl;
    cout<<"Student number \t\t"<<"name\t\t"<<"Class\t\t"<<"score"<<endl; 
	for(int k = 0; k < 3; k++){
		stu[k].print();
	} 
	/ / Print teacher information 
	cout<<"The total number of teachers is:"<<Teacher::teacount<<"people"<<endl;
	cout<<"----------------------------- Teacher list ------------------ -----------"<<endl;
	cout<<"teacher number \t\t"<<"name\t\t"<<"Title\t\t"<<"department\t\t"<<endl; 
	for(int n = 0; n < 3; n++){
		tea[n].print();
	}
	return 0;
}