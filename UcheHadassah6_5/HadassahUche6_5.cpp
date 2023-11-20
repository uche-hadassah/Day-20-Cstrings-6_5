/*Valid names: Write a program that reads a person’s name and checks if the name is 
valid or not, printing an appropriate message in each case. A valid name can contain 
letters (i.e. alphabetic characters), humphens (-), apostrophes (’) and spaces only.*/
#include<iostream>
#include<cstring>
using namespace std;
const int MAX = 100;
int main()
{
	char name[MAX];
	cout << "Enter a name:";
	cin.getline(name, MAX);
	bool IsValid = true;
	for (int i = 0; name[i] != '\0'; i++)
	{
		if (!isalpha(name[i]) && name[i] != '-' && name[i] != '\'' && name[i] != ' ')
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