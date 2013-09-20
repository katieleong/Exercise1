class Employee;

class Manager
   {
   private:
      int totalHours;
   protected:
   public:		//changed to public 
      Manager();

      void getWorkerHours(Employee* emp);

      void report();
   };