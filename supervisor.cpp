/** File supervisor.cpp
 *
 * @author Nathaniel Miller
 *
 * Class Supervisor definitions.
 * Holds functions associated with the Supervisor class.
 */

#include "supervisor.h"
#include "empl.h"

/* default constructor for a supervisor object, with empty fields */
Supervisor::Supervisor() {
  department = ""; // initially empty
  subordinates = 0; // initally zero
}

/* creates a supervisor object with the given parameters as data,
 * calls the Employee base-class constructor explicitly.
 */
Supervisor::Supervisor(string emp_name, int salary, string dept, int subords)
  : Employee(emp_name, salary)
{
  department = dept; // set the supervisor's department field
  subordinates = subords; // set the supervisor's subordinates field
}

/* prints a supervisor object */
void Supervisor::print_super() {
  
  cout << "Supervisor's name: " << name << "  Department: " << department <<
    "  Subordinates: " << subordinates << "  Salary: " << salary << endl; 
}

/* prints a supervisor object, virtual declaration version */
void Supervisor::printv() {
  
  cout << "Supervisor's name: " << name << "  Department: " << department <<
    "  Subordinates: " << subordinates << "  Salary: " << salary << endl; 
}
