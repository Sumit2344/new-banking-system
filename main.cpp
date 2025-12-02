  #include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> toDoList; // Vector to store tasks
    int choice;
    string task;
    
    while (true) {
        // Menu display
        cout << "\nTo-Do List Application\n";
        cout << "1. Add Task\n";
        cout << "2. View Tasks\n";
        cout << "3. Delete Task\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(); // To ignore the leftover newline character
        
        switch(choice) {
            case 1: // Add task
                cout << "Enter the task to add: ";
                getline(cin, task);
                toDoList.push_back(task); // Add task to vector
                cout << "Task added!\n";
                break;

            case 2: // View tasks
                cout << "\nYour To-Do List:\n";
                if (toDoList.empty()) {
                    cout << "Your to-do list is empty.\n";
                } else {
                    for (int i = 0; i < toDoList.size(); ++i) {
                        cout << i + 1 << ". " << toDoList[i] << endl;
                    }
                }
                break;

            case 3: // Delete task
                cout << "Enter the task number to delete: ";
                int taskNumber;
                cin >> taskNumber;
                if (taskNumber > 0 && taskNumber <= toDoList.size()) {
                    toDoList.erase(toDoList.begin() + taskNumber - 1); // Remove task
                    cout << "Task deleted!\n";
                } else {
                    cout << "Invalid task number.\n";
                }
                break;
               
             
            case 4: // Exit the program
                cout << "Exiting the To-Do List application.\n";
                return 0;

            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}
