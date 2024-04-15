#include <string>

class Task{
   private:
      std::string task_name;
      unsigned int time_to_done; // Hours
      char difficulty_level; // E: Easy, N: Normal, H: Hard

   public:
      Task(const std::string& name, const char& level, const int& time);

      void setTaskName(const std::string& name);
      void setTime(const int& time);
      void setDifficulty(const char& level);

      const std::string& getTaskName() const { return this->task_name; }
      const unsigned int& getTimeNeeded() const { return this->time_to_done; }
      const char& getDifficulty() const { return this->difficulty_level; }
};

