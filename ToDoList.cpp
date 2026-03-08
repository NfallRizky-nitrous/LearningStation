#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<string> tasks;
    int choice;

    while(true){

        cout << "\nWelcome to your Personal To-Do List Manager" << endl;
        cout << "1. Add Task" << endl;
        cout << "2. View Tasks" << endl;
        cout << "3. Delete Task" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {

            case 1: {
                string task;
                cout << "Enter the task: ";
                cin.ignore();
                getline(cin, task);
                tasks.push_back(task);
                break;
            }

            case 2: {
                cout << "Tasks:" << endl;
                for(const auto& t : tasks) {
                    cout << "- " << t << endl;
                }
                break;
            }

            case 3: {
                int index;
                cout << "Enter the task number to delete: ";
                cin >> index;
                if(index > 0 && index <= tasks.size()) {
                    tasks.erase(tasks.begin() + index - 1);
                    cout << "Task deleted." << endl;
                } else {
                    cout << "Invalid task number." << endl;
                }
                break;
            }

            case 4:
            cout << "\nThanks for using To-Do List!" << endl;
            cout << "Have a productive day ^_^" << endl;
                return 0;

            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}