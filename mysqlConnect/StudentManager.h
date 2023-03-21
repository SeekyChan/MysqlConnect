#pragma once
#include<mysql.h>
#include<iostream>
#include<string>
#include<vector>
using namespace std;
typedef struct Student
{
	int student_id;
	string student_name;
	string class_id;
	bool operator==(const struct Student& W)
	{
		return W.student_id == this->student_id
			&& W.student_name == this->student_name
			&& W.class_id == this->class_id;
	}
}Student;

class StudentManager
{
	StudentManager();
	~StudentManager();
public :
	static StudentManager* GetInstance() 
	{
		static StudentManager StudentManager;
		return &StudentManager;
	}
public:
	bool insert_student(Student& t);
	bool update_student(Student& t);
	bool delete_student(int student_id);
	vector<Student> get_students(string condition ="");
private:
	MYSQL* con;
	const char* host = "127.0.0.1";
	const char* user = "root";
	const char* pw = "qinghua520";
	const char* database_name = "database_test";
	const int port = 3306;
};

