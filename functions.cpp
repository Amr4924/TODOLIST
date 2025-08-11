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

void list(vector<string> lis)
{
	for (string print : lis)
	{
		cout << CYAN << print << RESET << endl;
	}

}
void Welcome(vector<string> welcom)
{
	cout << CYAN << "|---------------------------------------------------------------------|" << RESET << endl;
	cout << CYAN << "|                        WELCOME APP TO DO LIST                       |" << RESET << endl;
	cout << CYAN << "|---------------------------------------------------------------------|" << RESET << endl;
	list(welcom);
	cout << CYAN << "|_____________________________________________________________________|" << RESET << endl;
}