#include <iostream>

using namespace std;

template<typename T>
void first(T t)
{
	cout << t << endl;
}

template<typename T>
void second(T t)
{
	cout << t << endl;
}


int main()
{
	setlocale(LC_ALL, "ru");
	cout << "Here i'm out new text.";
	return 0;
}