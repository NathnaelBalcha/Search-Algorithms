#include <iostream>
using namespace std;
int linearSearch(int data[], int size, int target) {
	for (int i = 0; i < size; ++i) {
			if (data[i] == target) {
					return i;
				}
		}
	return -1;
}
int main() {
	const int size = 5;
	int data[size], counter = 1, target, index;
	cout << "\t\t\tLinear Search\n";
	cout << "\t   Enter "<< size << " Elements to inseart into array\n";
	cout << "\t==========================================\n";
	for (int i = 0; i < size; ++i) {
			cout << " Enter elements " << counter << ": ";
			cin >> data[i];
			counter++;
		}
	cout <<"\n---------------------------------------------\n\n";
	cout << " Enter the element to search form the array: ";
	cin >> target;
	cout << endl;
	index = linearSearch(data, size, target);
	if (index != -1) {
			cout << " Element found " << endl;
			cout << " At index: " << index << endl;
			cout << " The Data founded is: " <<data[index] << endl;
		} else {
			cout << " Element not found in the array.\n";
		}
	cout <<"\n---------------------------------------------\n";
	return 0;
}

