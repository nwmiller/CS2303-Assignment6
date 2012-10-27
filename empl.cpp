/** File empl.cpp
 *
 * @author Michael Ciaraldi
 * @author Nathaniel Miller
 *
 * Class Employee definitions.
 * Holds functions associated with the Empoyee class.
 */

#include "empl.h"

Employee::Employee() {
  name = ""; // initially empty
  salary = 0; // initially zero
}

Employee::Employee(string employee_name, double initial_salary) {  
  name = employee_name; // set the name field
  salary = initial_salary; // set the salary field
}

void Employee::set_salary(double new_salary) {  
  salary = new_salary; // set the salary as the new salary
}

double Employee::get_salary() const {
  return salary; // return the Employee's salary field
}

string Employee::get_name() const {  
  return name; // return the Employee's name field
}

void Employee::print() {
  // print the Employee object's data
  cout << "Employee name: " << name << "  Salary: " << salary << endl; 
}

void Employee::printv() {
  // print the Employee object's data, virtual declaration version
  cout << "Employee name: " << name << "  Salary: " << salary << endl;
}

bool Employee::makes_more_than(Employee emp) {

  /* notify users of what is being compared */
  cout << "Is input Employee's salary of " << emp.get_salary() 
       << " less than current Employee's salary of " << salary << endl;
  
  /* compare the two salaries of the Employee objects */
  if( emp.get_salary() < salary ) {
    return true;
  } /* end if */
  else {
    return false;
  } /* end else */
}

bool Employee::makes_more_than(Employee* emp) {

  /* notify users of what is being compared */
  cout << "Is input Employee's salary of " << emp->get_salary() 
       << " less than current Employee's salary of " << salary << endl;
  
  /* compare the two salaries of the Employee objects pointed to */
  if( emp->get_salary() < salary ) {
    return true;
  } /* end if */
  else {
    return false;
  } /* end else */
}
