/** File hlsuper.cpp
 *
 * @author Nathaniel Miller
 *
 * Class HighLevelSupervisor definitions.
 * Holds functions associated with the HighLevelSupervisor class.
 */

#include "hlsuper.h"
#include "supervisor.h"
#include "empl.h"

/* default constructor for a high-level supervisor object */
HighLevelSupervisor::HighLevelSupervisor() {
}

/* creates a high-level supervisor object with the given parameters as data,
 * calls the Supevisor base-class constructor explicitly.
 */
HighLevelSupervisor::HighLevelSupervisor(string emp_name, int salary,
					 string dept, int subords)
  : Supervisor(emp_name, salary, dept, subords)
{
  department = dept; // set the supervisor's department field
  subordinates = subords; // set the supervisor's subordinates field
}

/* prints a supervisor object */
void HighLevelSupervisor::print_hlsuper() {
  
  cout << "HighLevel "; // ouput high-level supervisor qualifier
  Supervisor::print_super(); // invoke the Supervisor superclass method
}

/* prints a supervisor object, virtual declaration version*/
void HighLevelSupervisor::printv() {
  
  cout << "HighLevel "; // ouput high-level supervisor qualifier
  Supervisor::printv(); // invoke the Supervisor superclass method
}
