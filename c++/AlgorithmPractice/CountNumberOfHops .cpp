//Algorithm practice - Dynamic programming 
#include <iostream>
#include <vector>

using namespace std;

int getAns(const int& top) {
	vector<int> memory(top + 1, 0);
	if (top == 1) {
		return 1;
	}
	else if (top == 2) {
		return 2;
	}
	else if (top == 3) {
		return 4;
	}
	memory[1] = 1;
	memory[2] = 2;
	memory[3] = 4;
	
	for (int i = 4; i <= top; ++i) {
		memory[i] = memory[i - 1] + memory[i - 2] + memory[i - 3];
	}

	return memory[top];
}

int main() {
	int testCase, top;
	cin >> testCase;
	for (int i = 0; i < testCase; ++i) {
		cin >> top;
		cout << getAns(top) << '\n';
	}
}