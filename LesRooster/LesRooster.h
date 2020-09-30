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

	void addStudent(Student student);
	Student getStudent(int studentNum);

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
	
	void assignTeacherToSubject(Teacher teacher, Subject subj);
	void removeTeacherFromSubject(Teacher teacher, Subject subj);

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

	void addSubject(Subject subj);
	void addSubjectHours(Subject subj, std::map<std::string, std::map<std::string, std::string>> time);
	Subject getSubject(std::string subjName);

	void addSubjectToStudent(Student student, Subject subj);
	void removeStudentFromSubject(Student student, Subject subj);

private:
	int subjectID;
	std::string subjectDescription;
};