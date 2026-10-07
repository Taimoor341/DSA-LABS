#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;

class Employee {
public:
	virtual double calculateSalary() = 0;

};

class FullTimeEmployee :Employee {
private:
	double salary;
public:
	FullTimeEmployee(double s) {
		salary = s;
	}
	double calculateSalary() {
		return salary;
	}
};

class PartTimeEmployee : Employee {
private:
	double hours;
	double hourlyRate;

public:
	PartTimeEmployee(double h, double r) {
		hours = h;
		hourlyRate = r;
	}

	double calculateSalary() {
		return hours * hourlyRate;
	}
};
int main()
{
	FullTimeEmployee f1(90000);
	PartTimeEmployee p1(40,230);

	cout << "Full Time Employee Salary: "
		<< f1.calculateSalary() << endl;

	cout << "Part Time Employe Salary: "
		<< p1.calculateSalary() << endl;
}