#include <iostream>

using namespace std;

void display(int *array, int sentinel){
	while(*array != sentinel)
		cout << *array++ <<" ";
	cout << endl;
}

void displaypartial(int *array2, int sentinel){
	while(*array2 >= sentinel)
		cout << *array2++ <<" ";
	cout << endl;
}
int main()
{
	int scores[] {100,97, 86, 74, 55, 40, -1};
	
	displaypartial(scores, 60);
	display(scores, -1);
	
	
	cout << "End of PROGRAM " << endl;
	return 0;
}
