/*  Author: Abuzar Noorali
Purpose/Description: This program recieves a monthly salary, a first name, and a last name and determines yearly salary for two employees, then calculates a
raise for the employees and displays the adjusted salaries.
*/
#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
	int monthlySalary;				//Hold an employee's monthly salary
	string firstName;				//Hold an employee's first name
	string lastName;				//Hold an employee's last name

public:
	Employee(int salary, string fname, string lname) : monthlySalary(salary), firstName(fname), lastName(lname)
	{                               
		//constructor
		
		//If monthly salary is a negative number, assume salary is $0.
		if (monthlySalary < 0)			
			monthlySalary = 0;
	}                               
		//end constructor

	 //Monthly Salary set & get Functions

	void setMonthlySalary(int salary)
	{
		//Set the monthly salary based on user input
		monthlySalary = salary;			
	}

	int getMonthlySalary() const
	{
		//Return monthlySalary to the main function
		return monthlySalary;			
	}

	//First name set & get functions
	void setFirstName(string fname)
	{
		//Set the first name based on user input
		firstName = fname;			
	}

	string getFirstName() const
	{
		//Return firstName to the main function
		return firstName;			
	}

	//Last name set & get functions
	void setLastName(string lname)
	{
		//Set the last name based on user input
		lastName = lname;			
	}

	string getLastName() const
	{
		//Return lastName to the main function
		return lastName;			
	}

};							
//End Employee class

int main()
{
	int salary;					//Hold salary
	string fname;					//Hold first name
	string lname;					//Hold last name

	//First object Employee#1
	
	//Get a monthly salary from the user
	cout << "Employee #1" << "\n \n";
	cout << "Please enter a monthly salary amount for an employee" << "\n";			
	cin >> salary;

	//Get a first name from the user
	cout << "Please enter that employee's first name" << "\n";				
	cin >> fname;

	//Get a last name from the user
	cout << "Please enter that employee's last name" << "\n";				
	cin >> lname;

	//Skip a line
	cout << "\n";	
	
	//Create an object of the employee class and send it salary, first name, and last name user inputs
	Employee employee1(salary, fname, lname);						
	
	//Display object 1. Display an employee's first name, last name, and yearly salary (calculated with the monthly salary)
	cout << employee1.getFirstName() << " " << employee1.getLastName() << "'s yearly salary is: " << (employee1.getMonthlySalary() * 12);
	
	//Skip 3 lines
	cout << "\n\n\n";																	

	//Second object Employee#2

	//Get a monthly salary from the user
	cout << "Employee #2" << "\n \n";
	cout << "Please enter a monthly salary amount for a second employee" << "\n";		
	cin >> salary;

	//Get a first name from the user
	cout << "Please enter that employee's first name" << "\n";				
	cin >> fname;

	//Get a last name from the user
	cout << "Please enter that employee's last name" << "\n";				
	cin >> lname;

	//Skip a line
	cout << "\n";																		
	Employee employee2(salary, fname, lname);	
	
	//Create an object of the employee class and sent it salary, first name, and last name user inputs
	
	//Display object 2. Display an employee's first name, last name, and yearly salary (calculated with the monthly salary)
	cout << employee2.getFirstName() << " " << employee2.getLastName() << "'s yearly salary is: " << (employee2.getMonthlySalary() * 12);

	//Skip 3 lines
	cout << "\n\n\n";																	

	//Calculate and display a 10% raise for both employees

	//Display the first employee's first and last name, and salary after a 10% raise
	cout << "After a 10% raise, " << employee1.getFirstName() << " " << employee1.getLastName() << " will earn on a yearly basis: $" <<
		((employee1.getMonthlySalary() * 12) * 0.10) + (employee1.getMonthlySalary() * 12) << "\n\n\n";


	//Display the second employee's first and last anem, and salary after a 10% raise
	cout << "After a 10% raise, " << employee2.getFirstName() << " " << employee2.getLastName() << " will earn on a yearly basis: $" <<
		((employee2.getMonthlySalary() * 12) * 0.10) + (employee2.getMonthlySalary() * 12) << "\n\n";

	
	return 0;
}																						//End main function
