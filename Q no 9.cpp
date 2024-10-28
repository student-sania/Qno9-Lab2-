# include <iostream>
using namespace std;
int main(){
	string cars[4] = {"Mazda","BMW","Ford","Hondai"};
	int index;
	cout << "Enter Index: ";
	cin >> index ;
	cars[index] = "Toyota";
	for (string car: cars){
		cout << car << endl;
	}
	return 0;
}