#include "Task.h"
#include <string>

using std::string;

Task::Task(string name, string date, string time)
    : name(name), date(date), time(time) {

      };

string Task::getName() const { return name; };

string Task::getDate() const { return date; };

string Task::getTime() const { return time; };
