#include <iostream>

#include "LesRooster.h"

int main()
{
    std::cout << "Hello World!\n";
}

/// <summary>
/// Get a Student object
/// </summary>
/// <param name="studentNum">Number of the student whos Student object to return.</param>
/// <returns>Returns a Student object.</returns>
Student Student::GetStudent(int studentNum)
{
    // Check the register of students and compare the student numbers to the parameter.
}

/// <summary>
/// Adds a student object to the registry of already existing students.
/// </summary>
/// <param name="student">Student to add.</param>
void Student::AddStudent(Student student)
{
}

/// <summary>
/// Add a subject to the registery of already existing subjects.
/// </summary>
/// <param name="subj">Subject to add.</param>
void Subject::AddSubject(Subject subj)
{
}

/// <summary>
/// Schedule a time for a subject.
/// </summary>
/// <param name="subj">Subject to schedule time for.</param>
/// <param name="time">A dictionairy containing the Day as the key, and the time as another dictinairy as the value, 
/// which contains the starting time as the key, and the end time as the value.</param>
void Subject::AddSubjectHours(Subject subj, std::map<std::string, std::map<std::string, std::string>> time)
{
}

/// <summary>
/// Get a Subject object.
/// </summary>
/// <param name="subjName">Name of the subject to return.</param>
/// <returns>Returns a subject object.</returns>
Subject Subject::GetSubject(std::string subjName)
{
    return Subject();
}

/// <summary>
/// Adds a student to a specific subject.
/// </summary>
/// <param name="student">Student to assign a specific subject to.</param>
/// <param name="subj">Subject to assign a student to.</param>
void Subject::AddSubjectToStudent(Student student, Subject subj)
{
}

/// <summary>
/// Removes a student from target subejct.
/// </summary>
/// <param name="student">Student to remove.</param>
/// <param name="subj">Subject to remove the student from.</param>
void Subject::RemoveStudentFromSubject(Student student, Subject subj)
{
}

/// <summary>
/// Assigns a teacher to a specific subject.
/// </summary>
/// <param name="teacher">Teacher to add to a subject.</param>
/// <param name="subj">Subject to add a teacher to.</param>
void Teacher::AssignTeacherToSubject(Teacher teacher, Subject subj)
{
}

/// <summary>
/// Removes a teacher from a specific subject.
/// </summary>
/// <param name="teacher">teacher to remove from a subject.</param>
/// <param name="subj">Subject to remove a teacher from.</param>
void Teacher::RemoveTeacherFromSubject(Teacher teacher, Subject subj)
{
}