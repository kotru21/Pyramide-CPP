using namespace std;
#include <iostream>
#include <windows.h>
#include <cstdlib>
// normal pyramides
int stpath(int s_am) {
	for (int i = 1; i <= s_am; i++)
	{
		cout << std::string(i, '-') << endl;
		if (i == s_am) {
			cout << std::string(s_am + 1, '-') << endl;
		}
	}
	return true;
}
int ndpath(int s_am) {
	for (int i = s_am; i >= 0; i--)
	{
		cout << std::string(i, '-') << endl;

	}
	return true;
}
// inverted pyramides
int inv_stpath(int s_am) {
	int g = 1;
	for (int i = s_am; i > 0; i--)
	{

		cout << std::string(i, ' ') << std::string(g, '-') << endl;
		g++;
		if (g == s_am + 1) {
			cout << std::string(s_am + 1, '-') << endl;
		}

	}


	return true;
}
int inv_ndpath(int s_am) {
	int g = s_am;
	for (int i = 1; i <= s_am; i++)
	{

		cout << std::string(i, ' ') << std::string(g, '-') << endl;
		g--;
		if (g == s_am + 1) {
			cout << std::string(s_am + 1, '-') << endl;
		}

	}
	cout << endl;
	return true;
}
int hello() {
	string inp = " meow soft";
	int i = 0;
	while (i <= inp.length()){
		cout << inp[i];
		i++;
		Sleep(100);
		if (i == inp.length()) {
			cout << endl;
			cout << std::string(11, '-');
			cout << endl;
		}
	}
	return 1;
}
// main code
int main() {
	hello();
	setlocale(LC_ALL, "Russian");
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	int i = 1;
	int select;
	string str;
	int fail_counter = 0;
	cout << "Укажите высоту пирамид: ";
	cin >> select;
	while (cin.fail()) {
		SetConsoleTextAttribute(hConsole, 12);
		if (fail_counter <= 5) {
			cout << "Число введи, гений" << std::endl;
			cin.clear();
			cin.ignore(256, '\n');

			cin >> select;
		}
		else if( fail_counter <= 10) {
			cout << "Ты можешь хотя бы с " << fail_counter << " раза написать число?" << std::endl;
			cin.clear();
			cin.ignore(256, '\n');
			cin >> select;
		}
		else {
			cout << "пшёл вон";
			Sleep(100);
			exit(1);
}
		fail_counter++;
	}

	
	while (true)
	{
		for (int z = 1; z < 10; z++) {
			SetConsoleTextAttribute(hConsole, z);
			cout << std::string(20, '-') << endl << " \t" << i << endl << std::string(20, '-') << endl << endl;
			stpath(select);
			ndpath(select);
			inv_stpath(select);
			inv_ndpath(select);

			Sleep(80);

			i++;
			if (i == 100) {
				cout << endl << "Чего ты ждёшь?" <<endl;
			}
			if (i == 200) {
				cout <<  endl << "Тут ничего нет, и на 500 тоже" << endl;
			}
			if (i == 500) {
				cout << endl << "Мяу. На 1000 точно ничего нет" << endl;
			}
			if (i == 1000) {
				cout << endl << "Я же говорил, тут ничего нет." << endl;
			}
		}
	}

}
