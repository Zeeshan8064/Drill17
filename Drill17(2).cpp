#include "std_lib_facilities.h"

void print_array(ostream& os, int* a, int n) {
	for (int i = 0; i < n; i++) {
		os << "INT " << i << ":" << *a << "  Addr: " << a << endl;
		++a; //incrementing the array by int size
	}
}

int main() {
	
	int a = 7; //drill1
	int* p1 = &a;

	cout << "a=" << a << " p1: " << p1 <<endl;  // Drill2
	cout << '\n';
	int sevenints [7] = {1,2,4,8,16,32,64}; //Drill3
	int* p2 = sevenints;

	print_array(cout, p2, 7); //drill4

	int* p3 = p2; //drill5

	p1 = p2; //drill6

	p2 = p3; //drill7

	//drill8
	cout << "-----------------------------------" << endl;
	cout << "p1: " << p1 << "/" << *p1 << endl;

	print_array(cout, p2, 7);

	//Drill 9

	// No new memory was allocated. 

	int tenints[10] = { 1,2,4,8,16,32,64,128,256,512 }; // drill 10
	int* p1 = tenints;

	int tenints2[10] = { 10,20,40,80,160,320,640,1280,2560,5120 }; //drill 11
	int* p2 = tenints2;

	for (int i = 0; i < 10; i++) //dril l12
		p2[i] = p1[i];

	//drill 13
	vector<int> v_tenints{ 1,2,4,8,16,32,64,128,256,512 };
	p1 = &v_tenints[0];


	vector<int> v_tenints2{ 10,20,40,80,160,320,640,1280,2560,5120 };
	p2 = &v_tenints2[0];

	for (int i = 0; i < 10; i++)
		p2[i] = p1[i];

	keep_window_open();
	return 0;
}