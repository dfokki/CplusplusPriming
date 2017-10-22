#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{

	string s{ "hello world" };

	for (auto it = s.begin(); it != s.end() && !isspace(*it); ++it)
		*it = toupper(*it);

	cout << s << endl;

	system("Pause");

	//Using iterator arithmetic

	auto beg = s.begin(), end = s.end();
	auto mid = s.begin() + (end - beg) / 2; // original midpoint

	//while (mid != end && *mid !=  sought) {

	//}

    return 0;
}

