#include <iostream>

using namespace std;

int main(){
	int array[10]={12,24,13,25,10,11,21,20,15,18};
	int length = sizeof(array) / sizeof(*array);
	int input;
	cout << "Data Array : ";
	for(int i = 0; i < length; i++){
		cout << array[i] << " ";
	}
	cout << "\nCari elemen : ";
	cin >> input;
	for(int i = 0; i < length; i++){
		if(array[i] == input){
			cout << "\nData " << input << " berada di posisi ke " << (i + 1) << endl;
			break;
		}
	}
	return 0;
}
