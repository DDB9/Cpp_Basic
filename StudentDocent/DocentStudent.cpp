#include <iostream>

#include "Docent.h"
#include "Student.h"
#include "Persoon.h"

int main()
{
    Student student = Student("Daan", 20);
    Docent docent = Docent("Karel", 38);

    std::cout << "Student " << student.getName() << " is " << student.getAge() << " jaar oud." << std::endl;
    std::cout << "Docent " << docent.getName() << " is " << docent.getAge() << " jaar oud." << std::endl;

    student.setHuiswerk("moker veel");
    docent.setSalaris(4129.45);

    std::cout << student.getName() << " heeft " << student.getHuiswerk() << " huiswerk..." << std::endl;
    std::cout << docent.getName() << " verdient " << docent.getSalaris() << " euro munten de maand." << std::endl;
}

#pragma region Student
Student::Student(std::string n, int a)
{
    age = a;
    name = n;
}

void Student::setHuiswerk(std::string amnt)
{
    huiswerk = amnt;
}

std::string Student::getHuiswerk()
{
    return huiswerk;
}
#pragma endregion

#pragma region Docent
Docent::Docent(std::string n, int a)
{
    age = a;
    name = n;
}

void Docent::setSalaris(long double amnt)
{
    salaris = amnt;
}

long double Docent::getSalaris()
{
    return salaris;
}
#pragma endregion

int Persoon::getAge()
{
    return age;
}

std::string Persoon::getName()
{
    return name;
}
