#include <iostream>

using namespace std;

int main(){
	int array[5] = {20,9,1286,200,13};
	int length = sizeof(array) / sizeof(*array);
	int input;
	cout << "## Data lama ##" << endl;
	cout << "Data Array : " << endl;
	for(int i = 0; i < length; i++){
		cout << (i + 1) << ". " << array[i] << endl;
	}
	cout << "\nPilih data yang ingin dihapus : ";
	cin >> input;
	for(int i = input - 1; i < length - 1; i++){
		array[i] = array[i + 1];
	}
	for(int i = 0; i < length - 1; i++){
		cout << (i + 1) << ". " << array[i] << endl;
	}
	return 0;
}
