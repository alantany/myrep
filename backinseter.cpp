#include<string>
#include<iostream>
using namespace std;
int main() {
	string s = "alan";
	auto loc = back_inserter(s);
	cout <<s<<" "<<s.size() << endl;
	*loc = '!';
	cout <<s<<" "<<s.size() << endl;

	fill_n(back_inserter(s), 10,'!');
	cout << s << endl;
	system("pause");
}






























































































































