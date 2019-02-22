#include <iostream>
#include <bits/stdc++.h>

using namespace std;

char filename[100];

int main(){

	cout << "You will hear a beep, if you are lucky! " << endl;

	cin >> filename;

	string str = "gcc ";

	str = str + " -o a.out " + filename;

	// Convert string to const char * as system requires

	// parameter of type const char *

	const char *command = str.c_str();

	cout << "Compiling file using " << command << endl;

	system(command);

	cout << "\nRunning file ";

	system("./a.out");

	return 0;

}