#include <iostream>

using namespace std;

int main(){
	int array[5] = {20,9,1286,200,13};
	int length = sizeof(array) / sizeof(*array);
	cout << "## Data lama ##" << endl;
	cout << "Data Array : ";
	for(int i = 0; i < length; i++){
		cout << array[i] << " ";
	}
	array[0] = 4;
	array[1] = 2;
	array[2] = 1;
	array[3] = 3;
	array[4] = 5;
	cout << "\n\n## Data baru ##" << endl;
	cout << "Data Array : ";
	for(int i = 0; i < length; i++){
		cout << array[i] << " ";
	}
	return 0;
}

