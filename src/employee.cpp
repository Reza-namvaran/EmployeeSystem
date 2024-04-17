#include "employee.hpp"

Employee::Employee(const std::string& first_name, const std::string& last_name,const std::string& position){
            this->setFirstName(first_name);
            this->setLastName(last_name);
            this->setPosition(position);
}

void Employee::setFirstName(const std::string& pf_name){
    /// TODO: set the validation
    this->first_name = pf_name;
}

void Employee::setLastName(const std::string& pl_name){
    /// TODO: set the validation
    this->last_name = pl_name;
}

void Employee::setPosition(const std::string& p_position){
    /// TODO: set the validation
    switch (p_position[0])
    {
    case 'I':
        this->position = INTERN;
        break;
    case 'J':
        this->position = JUNIOR;
        break;
    case 'M':
        this->position = MEDITOR;
        break;
    case 'S':
        this->position = SENIOR;
        break;
    default:
        break;
    }
}

const std::string& Employee::getFirstName() const { return this->first_name; }

const std::string& Employee::getLastName()  const { return this->last_name; }

const std::string Employee::getFullName()  const { return this->first_name + " " + this->last_name; }

const Position& Employee::getPosition()  const { return this->position; }

const std::vector<Task const*>& Employee::getTasks() const { return this->tasks; }

void Employee::assign(const Task& task) { this->tasks.push_back(&task); }

void Employee::removeTask(const Task& task){}
