#include <iostream>

using namespace std;

int main(){
	int array[5];
	int length = sizeof(array) / sizeof(*array);
	int input;
	int temp = 0;
	for(int i = 0; i < length; i++){
		cout << "Masukkan elemen ke " << (i + 1) << " : ";
		cin >> input;
		array[i] = input;
	}
	cout << "\nData Array : ";
	for(int i = 0; i < length; i++){
		cout << array[i] << " ";
	}
	for(int i = 0; i < length; i++){
		temp = temp + array[i];
	}
	cout << "\nJumlah : " << temp << endl;
	return 0;
}

