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
	for (int i = 0; name[i] != '\0'; i++)
	{
		if (name[i] != '-' && name[i] != '`' && name[i] != ' ')
		{
			cout << name << " is not a valid name";
			break;
		}
		else if(name[i] > 'A' || name[i] < 'z')
		{ 
			cout << name << " is not a valid name";
			break;
		}
		else if (name[i] < 'Z' && name[i]>'a')
		{
			cout << name << " is not a valid name";
			break;
		}
		else
		{
			cout << name << " is a valid name";
			break;
		}
	}
}