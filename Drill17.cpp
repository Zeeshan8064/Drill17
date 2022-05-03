#include "std_lib_facilities.h"


void printArray10(ostream& os, int* a) { //drill4
	for (int i = 0; i < 10; ++i)
		os << "Int " << i << ": " << a[i] << endl;
}

void print_array(ostream& os, int* a, int n) {
	for (int i = 0; i < n; i++)
		os << "n[" << i << "] =" << a[i] << endl;
}

int* allocateArray(int n)
{
	int* a = new int[n];
	int counter = 100;
	for (int i = 0; i < n; ++i)
		a[i] = counter++;
	return a;
}

vector<int*> AllocateVector(int n) {
	vector<int*> temp;
	int counter = 100;
	for (int i = 0; i < n; ++i)
		temp.push_back(new int{ counter++ });
	return temp;
}

void print_vector(vector<int*> v) {
	for (int i = 0; i < v.size(); i++)
		cout << "vector[" << i << "] =" << *v[i] << endl;
}

void deletevector(vector<int*> v) {
	for (int i = 0; i < v.size(); i++)
		delete v[i];
}

int main() {
	
	int* tenints = new int[10]; //Drill1
	 
	for (int i = 0; i < 10; ++i) {//Drill2
		cout << "p[" << i << "] = " << tenints[i] << endl;
	}
	cout << "---------------------------------" << endl;
	printArray10(cout, tenints);
	delete[] tenints; //Drill3

	int* AllocateArray10 = new int[10]{ 100,101,102,103,104,105,106,107,108,109};; //Drill5+7
	cout << "---------------------------------" << endl;
	print_array(cout, AllocateArray10, 10);
	delete[] AllocateArray10;

	int* elevenints = new int[11] {100,101,102,103,104,105,106,107,108,109,110}; //Drill6+7
	cout << "---------------------------------" << endl;
	print_array(cout, elevenints, 11);
	delete[] elevenints;

	int* twentyints = allocateArray(20); //drill8
	cout << "---------------------------------" << endl;
	print_array(cout, twentyints, 20);
	delete[] twentyints;

	cout << "---------------------------------" << endl;

	//drill10

	vector<int*> v_tenints = AllocateVector(10); //drill5
	cout << "---------------------------------" << endl;
	print_vector(v_tenints);
	deletevector(v_tenints);


	vector<int*> v_elevenints = AllocateVector(11); //drill6
	cout << "---------------------------------" << endl;
	print_vector(v_elevenints);
	deletevector(v_elevenints);

	
	vector<int*> v_twentyints = AllocateVector(20); //drill8
	cout << "---------------------------------" << endl;
	print_vector(v_twentyints);
	deletevector(v_twentyints);
	
	return 0;
}