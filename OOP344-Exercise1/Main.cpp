#include "Manager.h"
#include "Employee.h"
#include <iostream>

int main()
   {
   Manager* man = new Manager; // Changed man to a pointer type

   Employee dan(1, "Dan");
   Employee mike(2, "Mike");
   Employee alex(3, "Alex");
   Employee sarah(4, "Sarah");

   dan.setBoss(man);
   mike.setBoss(man);
   alex.setBoss(man);
   sarah.setBoss(man);

   dan.work(2);
   mike.work(2);
   sarah.work(4);
   sarah.work(3);
   mike.work(8);
   alex.work(11);
   dan.report();
   mike.report();
   dan.work(7);
   mike.work(7);
   mike.work(5);
   sarah.work(7);
   alex.report();
   sarah.report();
   dan.work(5);
   dan.report();//1
   man->report();
   alex.work(4);
   alex.work(3);
   alex.work(7);
   dan.work(3);
   sarah.work(8);
   dan.report();
   mike.report();
   alex.report();
   sarah.report();
   dan.work(8);
   dan.work(7);
   man->report();//2
   mike.work(11);
   mike.work(4);
   alex.work(7);
   alex.work(5);
   sarah.work(2);
   sarah.work(11);
   dan.report();
   mike.report();
   alex.report();
   sarah.report();
   man->report();//3
   man->report();//4
    

   return 0;
   }