#include<iostream>
#include<string>

using namespace std;



class Derterministric
{
	string InputString;
	int Initial_State = 0;
	int Current_State = 0;


public:
	Derterministric(string InputString)
	{
		this->InputString = InputString;
	}

	int TransitionDFA(char Inputstring1, int State)
	{
		if (State == 0)
		{
			if (Inputstring1 == '0')
			{
				State = 1;
			}
			else if (Inputstring1 == '1')
			{
				State = 3;
			}
			else
			{
				cout << "Invalid String" << endl;
			}

		}
		else if (State == 1)
		{
			if (Inputstring1 == '0')
			{
				State = 0;
			}
			else if (Inputstring1 == '1')
			{
				State = 2;
			}
			else {
				cout << "Invalid String" << endl;
			}
		}
		else if (State == 2)
		{
			if (Inputstring1 == '0')
			{
				State = 3;
			}
			else if (Inputstring1 == '1')
			{
				State = 0;
			}
			else {
				cout << "Invalid String";
			}
		}
		else if (State == 3)
		{
			if (Inputstring1 == '0')
			{
				State = 2;
			}
			else if (Inputstring1 == '1')
			{
				State = 0;
			}
			else {
				cout << "Invlid String";
			}
		}
		else {
			cout << "String Is not Language";
		}


		return State;
	}

	void DerterministricDFA()
	{
		for (int i = 0; i < InputString.length(); i++)
		{
			char inputchar = char(InputString[i]);

			Current_State = TransitionDFA(inputchar, Current_State);
		}

		if (Current_State == 0)
		{
			cout << "True";
		}
		else
		{
			cout << "False";
		}
	}
};

int main()
{
	Derterministric First("01001101");

	First.DerterministricDFA();


}