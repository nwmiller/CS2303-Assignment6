/** File empl.h
 *
 * @author Michael Ciaraldi
 * @author Nathaniel Miller
 *
 * Holds th Employee class and
 * any function prototypes associated with the Employee class.
 */

#ifndef EMPL_H
#define EMPL_H

#include <string>
#include <iostream>
#include <stdio.h>
using namespace std;

/**
   A basic employee class that is used in many examples
   in the book "Computing Concepts with C++ Essentials"
*/
class Employee
{
public:
   /**
      Constructs an employee with empty name and no salary.
   */
   Employee();

   /**
      Constructs an employee with a given name and salary.
      @param employee_name the employee name
      @param initial_salary the initial salary
   */
   Employee(string employee_name, double initial_salary);

   /**
      Sets the salary of this employee.
      @param new_salary the new salary value
   */
   void set_salary(double new_salary);

   /**
      Gets the salary of this employee.
      @return the current salary
   */
   double get_salary() const;

   /**
      Gets the name of this employee.
      @return the employee name
   */
   string get_name() const;

   /** Prints the name and salary of an employee.
   */
   void print();

   /* Prints the name and salary of an employee.
    * Virtual declaration.
    */
   virtual void printv();

   /** Takes an Employee object and returns true if
    * the current Employee's object has a higher salary than
    * the input Employee object.
    */
    bool makes_more_than(Employee emp);

    /** Takes a pointer to an Employee object and returns true if
    * the current Employee's object has a higher salary than
    * the input Employee object pointed to by the parameter.
    */
    bool makes_more_than(Employee* emp);

protected:
   string name;
   double salary;

};


#endif
