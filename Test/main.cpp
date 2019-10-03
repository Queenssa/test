#include <iostream>

using namespace std;

void EnterToQuit()
{
	char l_ch = 0;
	do 
	{
		cout << "Please input 'q' or 'Q' to quit : ";
		cin >> l_ch;
		cout << endl;
	} while (l_ch != 'q' && l_ch != 'Q');
}
void main()
{
	cout << "This is test project for using github" << endl;
	cout << "Now let's create a repository from a existed projects" << endl;
	cout << "This is the test project" << endl;
	cout << "Good luck to me !" << endl;
	EnterToQuit();
}