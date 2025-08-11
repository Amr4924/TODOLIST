#include "functions.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

    const string RED = "\033[31m";
    const string GREAN = "\033[32m";
    const string YELLOW = "\033[33m";
    const string BLUE = "\033[34m";
    const string MAGENTA = "\033[35m";
    const string CYAN = "\033[36m";
    const string RESET = "\033[0m";

struct Tasks
{
    string Title;
    string Priority;
    string Status = "Not Done";
};

void View(vector<Tasks> task,int num)
{
    for (int i = 0; i < num; ++i)
    {
            cout << BLUE << "[" << i + 1 << "]" << RESET
            << RED << "Title: " << task[i].Title << YELLOW << " | " << RESET
            << RED << "Priority: " << task[i].Priority << YELLOW << " | " << RESET
            << RED << "STASUS: " << task[i].Status << YELLOW << " | " << RESET << endl;
    }
}

int main()
{
    vector<string> welcome =
    {
        "|                                                                     |",
        "|  FEATURES:                                                          |",
        "|  --> [1] Add tasks                                                  |",
        "|  --> [2] View tasks                                                 |",
        "|  --> [3] Education as completion                                    |",
        "|  --> [4] Prioritize each task                                       |",
    };
    
    char again;
    int nums =0;
    vector<Tasks> task(nums);
    do {
        int pick;
        Welcome(welcome);
        cout << MAGENTA << "------> Choose from the available options <------" << RESET << endl;
        cout << YELLOW << ": " << RESET;
        cin >> pick;
        system("cls");

        if (pick == 1)
        {
            cout << BLUE << "|----------------------------- |" << RESET << endl;
            cout << BLUE << "|          ADD TASKS           |" << RESET << endl;
            cout << BLUE << "|------------------------------|" << RESET << endl;

            cout << GREAN << "---> Enter Number Of Tasks <---" << RESET << endl;
            cout << YELLOW << ": " << RESET;
            cin >> nums;
            cin.ignore();
            task.resize(nums);
            for (int i = 0; i < nums; ++i)
            {
                cout << GREAN << "Task (" << i + 1 << ") " << RESET << endl;
                cout << MAGENTA << "Title : " << RESET;
                getline(cin, task[i].Title);
                cout << MAGENTA << "Priority : " << RESET;
                getline(cin, task[i].Priority);
                
                cout << YELLOW << "____________________________________" << RESET << endl;
            }
        }
        else if (pick == 2)
        {
            cout << BLUE << "|----------------------------- |" << RESET << endl;
            cout << BLUE << "|         View tasks           |" << RESET << endl;
            cout << BLUE << "|------------------------------|" << RESET << endl;
            View(task, nums);

        }
        else if (pick == 3)
        {
            int pick;
            cout << BLUE << "|----------------------------- |" << RESET << endl;
            cout << BLUE << "|   Education as completion    |" << RESET << endl;
            cout << BLUE << "|------------------------------|" << RESET << endl;

            View(task, nums);
            cout << GREAN << "---> Enter the task number <---" << RESET << endl;
            cout << YELLOW << ":" << RESET;
            cin >> pick;
            task[pick-1].Status ="Done";
            cout << BLUE << "Congratulations on your completion ( " << task[pick].Title << " )" << RESET << endl;

        }
        else 
        {
            cout << RED << " \"""Please choose from the available options.\"" << RESET << endl;
        }
   

        cout << MAGENTA << "Do you want to try again? (y/n)." << RESET << endl;
        cout << YELLOW << ":"<<RESET;
        cin >> again;
    
    system("cls");
    } while (again == 'y' || again == 'Y');

    return 0;
}