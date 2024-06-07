#include <iostream>
using namespace std;
void Sort(int data[], int size) {
	for (int i = 1; i < size; ++i) {
			int arr_i = data[i], j;
			j = i - 1;
			while (j >= 0 && data[j] > arr_i) {
					data[j + 1] = data[j];
					j = j - 1;
				}
			data[j + 1] = arr_i;
		}
}
int binarySearch(int data[], int size, int target) {
	int left = 0, right = size - 1, mid;
	while (left <= right) {
			mid = (right + left) / 2;
			if (data[mid] == target) {
					return mid;
				} else if (data[mid] < target) {
					left = mid + 1;
				} else {
					right = mid - 1;
				}
		}
	return -1;
}
int main() {
	const int size = 5;
	int data[size], counter = 1, target, index;
	cout << "\t\t\tBinary Search\n";
	cout << "\t   Enter "<< size << " Elements to inseart into array\n";
	cout << "\t==========================================\n";
	for (int i = 0; i < size; ++i) {
			cout << " Enter elements " << counter << ": ";
			cin >> data[i];
			counter++;
		}
	Sort(data, size);
	cout <<"\n---------------------------------------------\n\n";
	cout << " Enter the element to search form the array: ";
	cin >> target;
	cout << endl;
	index = binarySearch(data, size, target);
	if (index != -1) {
			cout << " Element found " << endl;
			cout << " At index: " << index << endl;
			cout << " The Data founded is: " <<data[index] << endl;
		} else {
			cout << "Element not found in the array.\n";
		}
	cout <<"\n---------------------------------------------\n";
	return 0;
}

