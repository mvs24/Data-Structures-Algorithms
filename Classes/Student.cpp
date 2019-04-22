#include "Student.h"
using namespace std;
#include <string>

Student::Student(int id,string emri,string mbiemri,int mosha){
	this->id=id;
	this->emri=emri;
	this->mbiemri=mbiemri;
	this->mosha=mosha;
}
string Student::getEmri(){
	return this->emri;
}

void Student::setEmri(string em){
	this->emri=em;
}

int Student::getId(){
	return this->id;
}

