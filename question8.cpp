#include<iostream>
#include<string>

using namespace std;

void check(string here)
{
    int counter = 0;
    while(here.length() == 2)
	{ 
		if((here[0] == 'A' && here[1] == 'B') ||(here[0]=='B' && here[1]=='A'))
		{
			counter = 1;
			break;
		}
		else
		{
			counter = 0;
			break;
		}
	}

	if(counter == 0)
	{
		cout<<"NO"<<endl;
	}
	else
	{
		cout<<"Yes"<<endl;
	}

}

int main()
{
	string str;
	cout<<"Enter String: ";
	cin>>str;
	
	check(str);
	
	return 0;
}

