#include<iostream>
#include<string>

using namespace std;


class DFA {


	string inputstring;
	int Current_State = 0;


public:
	DFA(string inputstring)
	{
		this->inputstring = inputstring;
	}

	int TransitionDFA(char inputchar, int state)
	{
		cout << inputchar << endl;
		if (state == 0)
		{
			if (inputchar == '0')
			{
				state = 3;
			}
			else if (inputchar == '1')
			{
				state = 1;
			}
		
		}
		else if (state == 3)
		{
			if (inputchar == '0')
			{
				state = 4;
			}
			else if (inputchar == '1')
			{
				state = 3;
			}
			
		}
		else if (state == 4)
		{
			if (inputchar == '0')
			{
				state = 4;
			}
			else if (inputchar == '1')
			{
				state = 4;
			}
			
		}
		else if (state == 1)
		{
			if (inputchar == '0')
			{
				state = 1;
			}
			else if (inputchar == '1')
			{
				state = 2;
			}
		}
		else if (state == 2)
		{
			if (inputchar == '0')
			{
				state = 2;
			}
			else if (inputchar == '1')
			{
				state = 2;
			}
		}
	

		return state;
	}

	void FindDerterministric()
	{
		for (int i = 0; i < inputstring.length(); i++)
		{
			char inputchar = inputstring[i];
			Current_State = TransitionDFA(inputchar, Current_State);
		}

		if (Current_State == 4)
		{
			cout << "True";
		}
		else if (Current_State == 2)
		{
			cout << "true";
		}
		else {
			cout << "Invalid String";
		}
	}

};


int main()
{
	DFA DFAObject("0101");

	DFAObject.FindDerterministric();

}