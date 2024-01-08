#include <iostream>

using namespace std;

struct Task {
  string title;
  string description;
} newTask;

void addNewTask();

int main() {

  int ans;

  cout << "Welcome to the To-do list manager! What would you like to do";
  cout << "\n****************";
  cout << "\n\n1. Add a new task";
  cout << "\n****************\n";
  cin >> ans;
  cin.ignore();

  if (ans == 1) {
    addNewTask();
  }

   return 0;
}

void addNewTask() {

  cout << "Title of new task: ";
  getline(cin, newTask.title);

  cout << "\nDescription of new task: ";
  getline(cin, newTask.description);

  cout << "\n\nTitle: " << newTask.title;
  cout << "\nDescription: " << newTask.description;
}
