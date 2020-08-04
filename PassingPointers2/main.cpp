#include <iostream>
#include <string>
#include <vector>

using namespace std;

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int x{100}, y{200};
	cout << "\n X is " << x << endl;
	cout << "Y is " << y << endl;
	
	
	swap(&x, &y);
	
	
	cout << "\n X is " << x << endl;
	cout << "Y is " << y << endl;
	
	
	
	cout << "End of PROGRAM " << endl;
	return 0;
}
