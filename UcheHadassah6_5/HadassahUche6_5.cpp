/*Name:Uche Hadassah
This program reads a person's name and checks if its valid or not. i.e if it has 
anything other than -,', , and alphabets*/
#include<iostream>
#include<cstring>
using namespace std;
const int MAX = 100;
int main()
{
	char name[MAX];
	cout << "Enter a name:";
	cin.getline(name, MAX);
	bool IsValid = true;//initialize a bool variable to true
	for (int i = 0; name[i] != '\0'; i++)
	{
		if (!isalpha(name[i]) && name[i] != '-' && name[i] != '\'' && name[i] != ' ')//if it's a character other than these
		{
			IsValid = false;
			break;
		}
	}
	if (IsValid)
	{
		cout << "It is a valid name!";
	}
	else
	{
		cout << "It is not a valid name!";
	}
}