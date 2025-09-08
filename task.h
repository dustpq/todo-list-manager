#pragma once
#include <string>

using std::string;

/**
 * @file Task.h
 * @brief Defines the task object for use in the main program
 * @author Dustin Quintanilla
 * @date 09-4-2025
 **/

class Task {

private:
  string name; ///< Name of the task
  string date; ///< Date of the task
  string time;
  string description; ///< Description of the task
  int urgency;        ///< Urgency of the task

public:
  Task(string name, string date, string time);

  string getName() const;
  string getDate() const;
  string getTime() const;

  void setName();
};
