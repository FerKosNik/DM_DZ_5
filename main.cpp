#include <iostream>
#include <fstream>
#include <string>
#include <set>
#include <map>
using namespace std;
// ==========================
template <typename T>
set<string> FindSomeWords(T beg, T ending) {
	set <string> my_set;
    string str;
	T i = beg;
    while (i <= ending)
    {

        if ((*i != ' ') & (*i != '\0'))
            str += *i;
        else {
            my_set.insert(str);
            str = "";
        }
        ++i;
    };
	return my_set;
}

//==============================

int main()
{
	set<string> s;
    string fout { "Something text Something by to test this programm." };

	for (const auto& n :FindSomeWords(fout.begin(), fout.end()))
	{
		cout << n << endl;
	};

}