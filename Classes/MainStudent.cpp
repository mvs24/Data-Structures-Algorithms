#include <iostream>
using namespace std;
#include "Student.cpp"
#include <string>
int main(int argc, char const *argv[])
{
	// string str1="dddd";
	// string str2("sdf7ddsddvgd");


	Student newStudent(10,"4324","fdfs",78);
	Student newStudent2(1999,"4324","fdfs",77);
	Student newStudent3(1999,"4324","fdfs",88);


	// cout<<newStudent.getEmri();
	// cout<<newStudent.getId();
	cout<<newStudent.max;
	return 0;
}