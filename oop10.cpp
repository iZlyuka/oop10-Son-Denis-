#include "Header.h"
#include<iostream>



Human::Human() {
	surname = "unknown";
	name = "unknown";
	midname = "unknown";
	age = 0;
}

Human::Human(string surname1, string name1, string midname1, int age1) {
	surname = surname1;
	name = name1;
	midname = midname1;
	age = age1;
}

Human::~Human() {

}

Student::Student() : Human() {
	on_lesson = false;
}

Student::Student(string sur, string name, string mid, int age, bool on) : Human(sur, name, mid, age) {
	on_lesson = on;
}

void Student::print() {
	cout << surname << " " << name << " " << midname << endl << "Age: " << age << ". Is on lesson? ";
	if (on_lesson)
		cout << "Yes.";
	else
		cout << "No.";
	cout << endl;
}

Student::~Student() {

}

Boss::Boss() : Human() {
	number_of_workers = 0;
}

Boss::Boss(string surname, string name, string midname, int age, int num) : Human(surname, name, midname, age) {
	number_of_workers = num;
}

void Boss::print() {
	cout << surname << " " << name << " " << midname << endl << "Age: " << age << ' ' << " Number of workers: " << number_of_workers << " " << endl;
}

Boss::~Boss() {

}