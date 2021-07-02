
#include<iostream>
using namespace std;


class Student{
    private:
	int id;
	string name;
	float cgpa;
    public:
	void doSome(){
	    //....
    }

	void setInfo(){
		cout<<"Enter id: ";  cin>>id; cin.ignore();
		cout<<"Enter Name: "; getline(cin,name);
		cout<<"Eneter cgpa: "; cin>>cgpa;
		doSome();
	}
	void showInfo(){
		cout<<"ID="<<id<<", Name="<<name<<", Cgpa="<<cgpa<<endl;
	}
};

int main(){
	Student tahmid;

	
	tahmid.setInfo();


	tahmid.showInfo();

	return 0;
}



