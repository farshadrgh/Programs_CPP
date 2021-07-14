#include <iostream>
#include <string>
using namespace std;

int Word_count(string text) {

	int ctr = 0;
	for (int x = 0; x < text.length(); x++)
	{
		if (text[x] == ' ')
			ctr++;
	}
	return ctr + 1;
}

int main() {
        cout << "Original string: Python, number of words -> " << Word_count("Python") << endl;
        cout << "\nOriginal string: CPP Exercises, number of words -> " << Word_count("CPP Exercises") << endl;
        cout << "\nOriginal string: After eagling the Road Hole on Thursday, he missed an 8-footer for birdie Friday., \nnumber of words -> ";
		cout << Word_count("After eagling the Road Hole on Thursday, he missed an 8-footer for birdie Friday.") << endl;
        return 0;
}
