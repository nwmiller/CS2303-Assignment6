/** File hlsuper.h
 *
 * @author Nathaniel Miller
 *
 * Holds the HighLevelSupervisor class and
 * any function headers associated with the HighLevelSupervisor class.
 * This class is subclass of the Supervisor class.
 */

#ifndef HLSUPER_H
#define HLSUPER_H

#include <string>
#include <iostream>
#include <stdio.h>
#include "supervisor.h"
#include "empl.h"
using namespace std;


/** The HighLevelSupervisor subclass of the Supervisor class.
 * This class holds more detail/extra information
 * about an Supervisor.
 */

class HighLevelSupervisor: public Supervisor
{
public:
  /* Constructs a high-level supervisor.
   */
  HighLevelSupervisor();

  /* function prototypes */

  /* Constructs a high-level supervisor with the given name, salary,
   * department and number of subordinates.
   * @param name The high-level supervisor's name.
   * @param salary The high-level supervisor's salary.
   * @param super_dept The high-level supervisor's department.
   * @param subords The number of suboridnates.
   */
  HighLevelSupervisor(string name, int salary, string dept, int subords);

  /* prints a high-level supervisor and all its information */
  void print_hlsuper();

  /* prints a high-level supervisor, virtual declaration version */
  virtual void printv();

};

#endif
