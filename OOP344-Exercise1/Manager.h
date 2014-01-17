class Employee;

class Manager
   {
   private:
      int totalHours;
  
   public:
      Manager();

      void getWorkerHours(Employee* emp);

      void report();
   };