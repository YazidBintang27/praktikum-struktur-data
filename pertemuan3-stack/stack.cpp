#include <iostream>

using namespace std;

struct Stack {
	int max = 10;
	int top = -1;
	int tmp[10];
}stack;

bool isEmpty() {
	return stack.top == -1;
}

bool isFull() {
	return stack.top == stack.max - 1;
}

void push(int data) {
	if(isEmpty()) {
		stack.top++;
		stack.tmp[stack.top] = data;
		cout << "Data " << stack.tmp[stack.top] << " Telah diinputkan" << endl;
	}else if(!isFull()) {
		stack.top++;
		stack.tmp[stack.top] = data;
		cout << "Data " << stack.tmp[stack.top] << " Telah dimasukkan ke dalam stack" << endl;
	}else {
		cout << "Stack telah penuh" << endl;
	}
}

void pop() {
	if(!isEmpty()) {
		cout << "Data " << stack.tmp[stack.top] << " telah diambil" << endl;
		stack.top--;
	}else {
		cout << "Data dalam stack kosong" << endl;
	}
}

void show() {
	if(!isEmpty()) {
		for(int i = stack.top; i >= 0; i--) {
			cout << stack.tmp[i] << endl;
		}
	}else {
		cout << "Stack kosong" << endl;
	}
}

int main() {
	
	int pilih;
	int data = 0;
	bool loop = true;

	do {
		cout << "------MENU PROGRAM STACK" << endl;
		cout << "1. PUSH" << endl;
		cout << "2. POP" << endl;
		cout << "3. SHOW" << endl;
		cout << "4. EXIT" << endl;
		cout << "Masukkan Pilihan : ";
		cin >> pilih;
	
		switch (pilih) {
			case 1 : 
				cout << "Masukkan data kedalam stack : ";
				cin >> data;
				push(data);
				break;
			case 2 : 
				pop();
				break;
			case 3 : 
				show();
				break;
			case 4 : 
				loop = false;
				break;
		}	
	} while(loop);
	
	return 0;
}
