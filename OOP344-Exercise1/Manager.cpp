#include "Manager.h"
#include "Employee.h"
#include <iostream>

Manager::Manager()
   {
   totalHours = 0;
   }

void Manager::getWorkerHours(Employee* emp)
   {
   std::cout << "Employee #" << emp->getID() << " has logged " << emp->getHours() << " hours..." << std::endl;
   std::cout << "Thanks " << emp->getName() << "!" << std::endl << std::endl;
   totalHours += emp->getHours();
   }

void Manager::report()
   {
   std::cout << "A total of " << totalHours << " have been logged by employees since the last report." << std::endl << std::endl;
   totalHours = 0;
   }