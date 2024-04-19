#include "task.hpp"
#include "employee.hpp"

class Team{
    private:
        std::vector<Employee const*> employees;
        const Task& task;

    public:
        Team(const Task& p_task) : task(p_task) {};

        const std::vector <Employee const*>& getEmployees();

        void addEmployees(const Employee& p_employee);

        const Task& getTask();

        const int memberCount();
};
