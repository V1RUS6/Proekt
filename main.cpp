#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Task {
    int id;
    string description;
};

vector<Task> todoList;
int nextId = 1;

void add_task(const string& description) {
    Task newTask = {nextId++, description};
    todoList.push_back(newTask);
    cout << "Zadaca dobaBlena: " << description << endl;
}

void get_tasks() {
    if (todoList.empty()) {
        cout << "Spisok zadac pyst." << endl;
        return;
    }
    cout << "Baw spusok zadac:" << endl;
    for (const auto& task : todoList) {
        cout << task.id << ". " << task.description << endl;
    }
}

void delete_task(int id) {
    for (auto it = todoList.begin(); it != todoList.end(); ++it) {
        if (it->id == id) {
            cout << "Ydalena zadaca: " << it->description << endl;
            todoList.erase(it);
            return;
        }
    }
    cout << "Zadaca s takim ID ne nadena." << endl;
}

void edit_task(int id, const string& newdescription) {
    for (auto& task : todoList) {
        if (task.id == id) {
            task.description = newdescription;
            cout << "Zadaca obnoBlena: " << newdescription << endl;
            return;
        }
    }
    cout << "Zadawa s takim ID ne nadena." << endl;
}

int main() {
     
}