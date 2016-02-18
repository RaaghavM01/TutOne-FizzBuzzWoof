#include <iostream>
using namespace std;

int main(){
	int cOne = 0;
	for (cOne = 0; cOne<20; cOne++)
	{
		if (cOne % 3 == 0)
		{
			cout << "Fizz" << endl;
		}
		else if (cOne % 5 == 0)
		{
			cout << "Buzz" << endl;
		}
		else if (cOne % 7 == 0)
		{
			cout << "Woof" << endl;
		}
	}
}
}//EndMain