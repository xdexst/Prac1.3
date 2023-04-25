#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class TBook {
public:
	string name;
	string author;
	string count;
};

int main() {
	setlocale(LC_ALL, "ru");
	cout << "Test v1.4: Ok.\n";

	TBook book1;

	book1.name = "Prikladnoe programmirovanie";
	book1.author = "Kirill Aleksandrovi Kasatkin";
	book1.count = "10000";

	cout << "\nFirst book: \n";
	cout << "Name: " << book1.name << endl;
	cout << "Author: " << book1.author << endl;
	cout << "Count: " << book1.count << endl;

	return 0;
}
