#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> tasks;
    int choice;
    string task;

    do {
        cout << "\n1. Add Task\n2. Show Tasks\n3. Exit\nEnter choice: ";
        cin >> choice;
        cin.ignore();
        if(choice == 1) {
            cout << "Enter task: ";
            getline(cin, task);
            tasks.push_back(task);
        }
        else if(choice == 2) {
            cout << "\nYour Tasks:\n";
            for(int i=0; i<tasks.size(); i++)
                cout << i+1 << ". " << tasks[i] << endl;
        }
    } while(choice != 3);

    return 0;
}