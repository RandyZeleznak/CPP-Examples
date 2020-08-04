#include <iostream>

using namespace std;


void double_data(int *int_ptr){
	*int_ptr *= 2;
}

int main(){
	int value{10};
	int *int_ptr{nullptr};
	
	cout<< "Value : " << value << endl;
	double_data(&value);
	cout << "Value is " << value << endl;
	
	
	cout << "__________________________" << endl;
	
	int_ptr=&value;
	double_data(int_ptr);
	cout << "Value is " << value << endl;
	
	
	
	
	cout << "End of PROGRAM " << endl;
	return 0;
}
