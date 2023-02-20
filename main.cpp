#include<iostream>
#include<vector>

using namespace std;

int main() {
	cout << "Hello World" << endl;
	int n; 
	cout << "Enter n: " << endl;
	cin >> n;
	
	vector<int> list;
	for (int i = 0; i < n; i++) {
		list.push_back(i);
	}
	for (size_t i = 0; i < list.size(); i++){
		cout << list[i] << " ";
	}
	return 0;
}