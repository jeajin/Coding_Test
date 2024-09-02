#include <iostream>
#include <vector>
using namespace std;
int n;

bool is_prime(int number) {
	for (int num = 2; num * num <= number; num++) {
		if (number % num == 0)
			return false;
	}
	return true;
}

void solve(int number, int length) {
	if (length == n) {
		cout << number << "\n";
	}

	for (int next_number = 1; next_number <= 9; next_number += 2) {
		if(is_prime(number * 10 + next_number)) {
			solve(number * 10 + next_number, length + 1);
		}
	}
}

int main() {
	cin >> n;
	vector<int> start_number = { 2, 3, 5, 7 };
	for (int idx = 0; idx < start_number.size(); idx++) {
		solve(start_number[idx], 1);
	}
}