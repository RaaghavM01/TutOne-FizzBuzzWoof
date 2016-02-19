#include <iostream>
using namespace std;

int main(){
	for (int cOne = 1; cOne <= 20; cOne++)
	{
		if (cOne % 3 == 0)
		{
			cout << "Fizz" << endl;
		}else if (cOne % 5 == 0)
		{
			cout << "Buzz" << endl;
		}
		else if (cOne % 15 == 0)
		{
			cout << "Woof" << endl;
		}

		if (cOne % 3 == 0 && cOne % 5 == 0 && cOne % 15 != 0)
		{
			cout << "FizzBuzz" << endl;
		}
		 if (cOne % 3 == 0 && cOne % 5 == 0 && cOne % 15 == 0)  
		{
			cout << "FizzBuzzWoof" << endl;
		}
	}
}
//}//EndMain