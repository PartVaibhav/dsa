#include <bits/stdc++.h>
using namespace std;

int main()
{
    //Finding occurance of first and last letter

	string str = "Learn Competitive Programming with GFG!";
	size_t first = str.find('m'),
		last = str.find_last_of('m');
	if (first != string::npos)
		cout << "First occurrence of m is at index = "
			<< first << "\n";
	if (last != string::npos)
		cout << "Last Occurrence of m is at index = "
			<< last << "\n";

    //Reversing a string

    string str1 = "Learn Competitive Programming with GFG!";
    string rev(str1.rbegin(), str1.rend());
    cout << "Reverse = " << rev << "\n";

    // Append a character/string at the end of the String:

    string str2 = "Learn Competitive Programming with ";
      str2.append("GFG!");
      cout << "New String = " << str2 << "\n";

    //Sorting a string

    string str3 = "Learn Competitive Programming with GFG!";
    sort(str3.begin(), str3.end());
    cout << "Sorted String = " << str3 << "\n";

    //Substring extraction
    string str4 = "Learn Competitive Programming with GFG!";
    cout << "Substring from index 6 to 16 = "
         << str4.substr(6, 11) << "\n";

	return 0;
}
