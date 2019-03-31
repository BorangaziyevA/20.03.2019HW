#include<iostream> 
#include<locale.h>
#include<Windows.h>
#include <iomanip>
#include<fstream>

using namespace std;

void task1()
{

	char str[30];

	ifstream in_file("in.txt");

	ofstream out_file("out.txt");

	int a[10];

	int g = 0;

	int f = 0, o = 0, l = 0, d = 0, e = 0, b = 0, x = 0;;

	char c[6] = { "A" "E" "I" "O" "U" };

	char q[6] = { "a" "e" "i" "o" "u" };

	while(!in_file.eof())
	{
		in_file >> str;

		g = strlen(str);

		for (size_t j = 0; j < g; j++)
		{

			e++;

			if (str[j] > 64 && str[j] < 91)
			{
				o++;
			}

			if (str[j] > 96 && str[j] < 123)
			{
				o++;
			}
			if (str[j] > 47 && str[j] < 58)
			{
				f++;
			}
			x = 0;
			for (size_t r = 0; r < 6; r++)
			{
				if (str[j] == c[r])
				{
					l++;
					x++;
				}
				if (str[j] == q[r])
				{
					l++;
					x++;
				}
			}
			if (x == 0)
			{
				d++;
			}
		}

	}

	out_file << o << endl << f << endl << l << endl << d << endl << e << endl;



}

void task2()

{

	char str[100];

	ifstream in_file("in.txt");

	ofstream out_file("out.txt");

	while(!in_file.eof())
	{

		in_file.getline(str,100);

		for (size_t j = 0; j < strlen(str); j++)
		{

			if (str[j] == ' ' || str[j] == ',' ||str[j]=='.')
			{
				continue;
			}
			else
			{
				str[j] = str[j] + 2;
			}

		}
		out_file << str << endl;
	}
}

int main()

{

	setlocale(LC_ALL, "");

	srand(time(NULL));

	int flag, task;

	do

	{

		cout << "Номер задания:" << endl;

		cin >> task;

		switch (task)

		{

		case 1: task1(); break;

		case 2: task2(); break;



		default:

			break;

		}

		cout << "Continue?";

		cin >> flag;

	} while (flag == 1);

	system("pause");

}