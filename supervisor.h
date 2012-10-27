/** File supervisor.h
 *
 * @author Nathaniel Miller
 *
 * Holds the Supervisor class and
 * any function headers associated with the Supervisor class.
 * This class is subclass of the Employee class.
 */

#ifndef SUPERVISOR_H
#define SUPERVISOR_H

#include <string>
#include <iostream>
#include <stdio.h>
#include "empl.h"
using namespace std;


/** The Supervisor subclass of the Employee class.
 * This class holds more detail/extra information
 * about an Employee.
 */

class Supervisor: public Employee
{
public:
  /* Constructs a supervisor with fields initially empty.
   */
  Supervisor();

  /* function prototypes */

  /* Constructs a supervisor with the given name, salary,
   * department and number of subordinates.
   * @param name The supervisor's name.
   * @param salary The supervisor's salary.
   * @param super_dept The supervisor's department.
   * @param subords The number of suboridnates.
   */
  Supervisor(string name, int salary, string dept, int subords);

  /* prints a supervisor and all its information */
  void print_super();

  /* prints a supervisor and its information, virtual declaration version */
  virtual void printv();

protected:
  string department; // data field for the department
  int subordinates; // data field for the # of subordinates

};

#endif
