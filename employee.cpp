/* File employee.cpp
 *
 * @author Michael Ciaraldi
 * @author Nathaniel Miller
 *
 * Main program which demonstrates Employee,
 * Supervisor, and HighLevelSupervisor classes
 * and methods which operate on those classes.
 */

#include <iostream>

using namespace std;

#include "empl.h"
#include "supervisor.h"
#include "hlsuper.h"

int main()
{  
  /* Lab #6 demonstrations and tests */
  cout << "Demonstrations from Lab 6:" << endl;
  Employee harry("Hacker, Harry", 55000.00);

  double new_salary = harry.get_salary() + 3000;
  harry.set_salary(new_salary);

  cout << "Name: " << harry.get_name() << "\n";
  cout << "Salary: " << harry.get_salary() << "\n";

  harry.print();

  Employee nate("Nate", 2500);
  Employee nick("Nick", 4500);
  nate.print();
  nick.print();

  Employee* james;
  james = new Employee("James", 230505);
  Employee* william;
  william = new Employee("William", 45000);
  james->print();
  william->print();


  /* Employee class & Supervisor subclass demonstration, for part 1 */
  cout << "\nPart 1 Demonstrations:" << endl;

  // Employee object in Employee variable
  cout << "\nEmployee object in an Employee variable:" << endl;
  Employee rachael("Rachael", 40000);
  rachael.print(); // print the Employee object

  // Pointer to Employee object in Employee* variable
  cout << "\nPointer to an Employee object in an Employee* variable:" << endl;
  Employee* bethany = new Employee("Bethany", 60000);
  bethany->print(); // print the Employee object pointed to

  // Supervisor object in Supervisor variable
  cout << "\nSupervisor object in a Supervisor variable:" << endl;
  Supervisor bill("Bill", 85000, "Publishing", 25);
  bill.print_super(); // print the Supervisor object

  // Pointer to Supervisor object in Supervisor* variable
  cout << "\nPointer to a Supervisor object in a Supervisor* variable:" << endl;
  Supervisor* adam = new Supervisor("Adam", 72500, "Testing", 15);
  adam->print_super(); // print the Supervisor object pointed to

  
  /* HighLevelSupervisor/Supervisor/Employee demonstrations, for part 2 */
  cout << "\nPart 2 Demonstrations:" << endl;

  // more Employee & Supervisor examples
  cout << "\nTwo more employees, in Employee and Employee* variables:" << endl;
  Employee roger("Roger", 2500);
  roger.print();
  Employee* leon = new Employee("Leon", 6000);
  leon->print();

  cout << "\nTwo more supervisors, in Supervisor and Supervisor* variables:" << endl;
  Supervisor johnny("Johnny", 7205, "FX", 40);
  johnny.print_super();
  Supervisor* richard = new Supervisor("Richard", 8400, "Ads", 11);
  richard->print_super();

  // HighLevelSupervisor object in HighLevelSupervisor variable
  cout << "\nHighLevelSupervisor object in HighLevelSupervisor var:" << endl;
  HighLevelSupervisor phynn("Phynn", 150000, "Production", 8);
  phynn.print_hlsuper(); // print the HighLevelSupervisor object

  // Pointer to HighLevelSupervisor object in HighLevelSupervisor* variable
  cout << "\nPointer to HighLevelSupervisor obj. in HighLevelSupervisor* var:" << endl;
  HighLevelSupervisor* antonia = new HighLevelSupervisor("Antonia", 25000, "Singer", 0);
  antonia->print_hlsuper();


  /* Virtual & dynamic binding demonstations, for part 3 */
  cout << "\nPart 3 Demonstrations:" << endl;

  /* HighLevelSupervisor object whose pointer is in an Employee* variable */
  Employee* tania = new HighLevelSupervisor("Tania", 24500, "Vocals", 10);
  cout << "\nHighLevelSupervisor object whose pointer in an Employee* variable:";
  cout << "\nOutput of print():" << endl; 
  tania->print(); // call to normal print method for Employee class
  cout << "Output of printv():" << endl;
  tania->printv(); // call to virtual print method

  /* Supervisor object whose pointer is in an Employee* variable */
  Employee* sam = new Supervisor("Sam", 1000, "Film", 18);
  cout << "\nSupervisor object whose pointer in an Employee* variable:";
  cout << "\nOutput of print():" << endl;
  sam->print(); // call to normal print method for Employee class
  cout << "Output of printv():" << endl;
  sam->printv(); // call to virtual print method

  /* HighLevelSupervisor object whose pointer is in a Supervisor* variable */
  Supervisor* blake = new HighLevelSupervisor("Blake", 50400, "Dev", 30);
  cout << "\nHighLevelSupervisor object whose pointer in an Supervisor* variable:";
  cout << "\nOutput of print_super():" << endl; 
  blake->print_super(); // call to normal print method for Supervisor class
  cout << "Output of printv():" << endl;
  blake->printv(); // call to virtual print method

  
  /* makes_more_than functions demonstrations, for part 4 */
  cout << "\nPart 4 Demonstrations:" << endl;
  
  cout << "\nReturn value of 1 indicates True, and 0 indicates False:" << endl;
  /* demonstrate makes_more_than for Employee objects */
  Employee miranda("Miranda", 25000); // Employee object
  Employee audrey("Audrey", 40000); // Employee object

  cout << audrey.makes_more_than(miranda) << endl; // compare two Employee objects
  cout << miranda.makes_more_than(audrey) << endl; // compare oppositely

  Employee* gabe = new Employee("Gade", 5000); // pointer to an Employee object
  Employee* brian = new Employee("Brian", 4999); // pointer to another Employee object

  cout << gabe->makes_more_than(brian) << endl; // compare function on the pointers to objects
  cout << brian->makes_more_than(miranda) << endl; // compare with object and pointer to object
  cout << audrey.makes_more_than(gabe) << endl; // compare with object and pointer to object

  Supervisor* jake = new Supervisor("Jake", 1000, "Contracting", 10);
  HighLevelSupervisor* maddy = new HighLevelSupervisor("Maddy", 7000, "Audio", 5);
  
  cout << jake->makes_more_than(maddy) << endl; // supervisor & highlevelsupervisor comparison
  cout << maddy->makes_more_than(brian) << endl; // another combination
  cout << jake->makes_more_than(audrey) << endl; // yet another combination
  

  return 0; /* successful termination */
} /* end function main */
