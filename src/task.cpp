#include "task.hpp"

Task::Task(const std::string& p_name, const char& p_level, const int& p_time) {
    this->setTaskName(p_name);
    this->setDifficulty(p_level);
    this->setTime(p_time);
}

void Task::setTaskName(const std::string& p_name) {
    /// TODO: Validation
    this->task_name = p_name;
}

void Task::setDifficulty(const char& p_level) {
    /// TODO: Validation
    this->difficulty_level = p_level; 
}

void Task::setTime(const int& p_time) {
    /// TODO: Validation
    this->time_to_done = p_time;
}
