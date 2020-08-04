
#include <iostream>
#include <vector>

using namespace std;

// Display prototypes
void display_menu();
char get_selection();

//Menu handling prototypes

void handle_display(const vector<int> &v);
void handle_add(vector<int> &v);
void handle_mean(const vector<int> &v);
void handle_smallest(const vector<int> &v);
void handle_largest(const vector<int> &v);
void handle_find(const vector<int> &v);
void handle_quit();
void handle_unknown();

//Prototypes of functions that perform actions on list
void display_list(const vector<int> &v);
double calculate_mean(const vector<int> &v);
int get_smallest(const vector<int> &v);
int get_largest(const vector<int> &v);
bool find(const vector<int> &v, int target);

int main()
{
	vector<int> numbers{};	// THe list of numbers
	char selection{};
	
	
	
	do{
		display_menu();
		selection = get_selection();
			switch(selection){
				case 'P':
					handle_display(numbers);
					break;
				case 'A':
					handle_add(numbers);
					break;
					case 'F':
					handle_find(numbers);
					break;
				case 'M':
					handle_mean(numbers);
					break;
				case 'S':
					handle_smallest(numbers);
					break;
				case 'L':
					handle_largest(numbers);
					break;
				case 'Q':
					handle_quit();
					break;
				default:
					handle_unknown();
			}
		}while (selection != 'Q' && selection != 'q');
		
		cout << endl;
		return 0; 
	}

	

void display_menu(){	
		cout<<"\n Numbers Menu"<<endl;
		cout<<"P - Print numbers"<<endl;
		cout<<"A - add a number"<<endl;
		cout<<"F - Find a number" << endl;
		cout<<"M - display Mean of numbers"<<endl;
		cout<<"S - Display Smallest number"<<endl;
		cout<<"L - Display Largest number"<<endl;
		cout<<"Q -  to quit...."<<endl;
		cout<<"\nEnter your choice : ";
		
}

char get_selection(){
	char selection{};
	cin>>selection;
	return toupper(selection);
}

void handle_display(const vector<int> &v){
		if(v.size()==0)
			cout<<" The list is empty" <<endl;
		else
			display_list(v);
}

void handle_add(vector<int> &v){
	int num_to_add{};
	cout << "ENter an integer to add to the list:";
	cin >> num_to_add;
	v.push_back(num_to_add);
	cout << num_to_add << "added" << endl;
}

void handle_find(const vector<int> &v){
	int target{};
	cout << "Enter the number you wish to find: ";
	cin >> target;
	if(find(v, target))
		cout << target << " was found" << endl;
	else
		cout << target << " was not found" << endl;
}
void handle_mean(const vector<int> &v){
	if(v.size() == 0)
		cout << "UNable to calculate mean - list is empty" << endl;
	else
		cout << "The mean is  " << calculate_mean(v) << endl;
	
}

void handle_smallest(const vector<int> &v){
	if(v.size() == 0)
		cout << "There is not list to provide smallest!" << endl;
	else {
		int smallest = v.at(0);
		for(auto num: v)
			if(num < smallest)
				smallest = num;
		cout << "The smallest number is " << smallest << endl;
	}
	
}

void handle_largest(const vector<int> &v){
	if(v.size() == 0)
		cout << "There is not list to provide largest!" << endl;
	else {
		int largest = v.at(0);
		for(auto num: v)
			if(num > largest)
				largest = num;
		cout << "The largest number is " << largest << endl;
	}
}



void handle_quit(){
	cout << "Quiting GOODBYE........" << endl;
}

void handle_unknown(){
	cout << "Unknown selection.... PLEASE Try Again" << endl;
}

void display_list(const vector<int> &v){
	cout << "[";
	for (auto num: v)
		cout << num << " ";
	cout << "]" << endl;
}

double calculate_mean(const vector<int> &v){
	int total{};
	for (auto num: v)
		total += num;
	return static_cast<double>(total)/v.size();
}

bool find(const vector<int> &v, int target){
	for(auto num: v)
		if(num == target)
			return true;
	return false;
}

















