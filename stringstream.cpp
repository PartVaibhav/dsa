// C++ program to count words in 
// a string using stringstream.
#include <iostream>
#include <sstream>
#include<string>
using namespace std;

int countWords(string str)
{
	stringstream s(str); 
	string word; 

	int count = 0;
	while (s >> word)
    {
        count++;
        cout << word << endl;
    }
		
	return count;
}

int main()
{
	string s = "Vaibhav Suryavanshi "
			"contribution placements";
	cout << " Number of words are: " << countWords(s);
	return 0;
}
