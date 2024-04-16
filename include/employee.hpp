#include <string>
#include <vector>
#include "task.hpp"

enum Position {
   INTERN  = 1,
   JUNIOR  = 2,
   MEDITOR = 3,
   SENIOR  = 4
};

class Employee{
    private:
        std::string first_name;
        std::string last_name;
        std::string position;
        Position position;

        std::vector<Task const*> tasks;

    public:
        Employee(const std::string& first_name, const std::string& last_name,const std::string& position){
            this->setFirstName(first_name);
            this->setLastName(last_name);
            this->setPosition(position);
        }

        void setFirstName(const std::string& pf_name);
        void setLastName(const std::string& pl_name);
        void setPosition(const std::string& p_position);

        const std::string& getFirstName() const { return first_name;};
        const std::string& getLastName()  const { return last_name;};
        const std::string getFullName()  const { return first_name + " " + last_name;};
        // const Position& getPosition()  const { return position;};
        /// TODO: fix the position bug
        const std::vector<Task const*>& getTasks() const { return this->tasks; };
        void assign(const Task& task) { this->tasks.push_back(&task);};
        void removeTask(const Task& task);
};