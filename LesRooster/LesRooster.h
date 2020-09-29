#pragma once
#include <string>
#include <map>
#include <vector>

class Student
{
public:
	std::string studentName;
	const int studentNum;
	int studentYear;

	void AddStudent(Student student);
	Student GetStudent(int studentNum);

private:
	std::string studentHomeAdress;
	std::string studentEMail;
	int studentPhoneNumber;
};

class Teacher
{
public:
	std::string teacherName;
	const int teacherNum;
	std::vector<std::string> teacherSubjects;
	
	void AssignTeacherToSubject(Teacher teacher, Subject subj);
	void RemoveTeacherFromSubject(Teacher teacher, Subject subj);

private:
	std::string teacherHomeAdress;
	std::string teacherEMail;
	int teacherPhoneNumber;
};

class Subject
{
public:
	std::string subjectName;
	std::vector<std::map<std::string, std::map<std::string, std::string>>> subjectHours; // oh god what have I created.

	void AddSubject(Subject subj);
	void AddSubjectHours(Subject subj, std::map<std::string, std::map<std::string, std::string>> time);
	Subject GetSubject(std::string subjName);

	void AddSubjectToStudent(Student student, Subject subj);
	void RemoveStudentFromSubject(Student student, Subject subj);

private:
	int subjectID;
	std::string subjectDescription;
};