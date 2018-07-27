#include <iostream>
#include <map>
using namespace std;

struct MyStruct
{
	int x;
	double y;
};

int main()
{
	MyStruct ms = { 10, 111.11 };

	auto[u, v] = ms;

	cout << "X : " << u << endl;
	cout << "Y : " << v << endl;

	map<string, string> sites;

	sites.insert({ "Facebook", "The social network site" });
	sites.insert({ "StackOverflow", "Q-A forums" });
	sites.insert({ "Wikipedia", "Resources + References" });

	for (auto &[key, value] : sites)
	{
		cout << key.c_str() << " " << value.c_str() << endl;
	}

	cin.get();

	return 0;
}