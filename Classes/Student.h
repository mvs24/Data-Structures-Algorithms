
#include <string>
#ifndef STUDENT_H
#define STUDENT_H


class Student
{
private:
	int id;
	std::string emri;
	std::string mbiemri;
	int mosha;

public:
	static int max;
	Student(int,string,string,int);
	string getEmri();
	void setEmri(string);
	int getId();
	void krahaso(Student a){
		if(id>a.id){
		cout<<"jona eshte"<<id;
	}else{
		cout<<"jona eshte"<<a.id;
	}
	}

	void getMaxMosha(){
		if(this->id>max){
			max=this->id;
		}
	}
};






#endif