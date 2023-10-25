#include <iostream>
#include <time.h>
#include <string>
#include <fstream>
#include <memory> 
#include <vector>
#include <list>
#include <array>
#include <deque>
#include <set>
#include <thread> 
#include <chrono> 
#include <algorithm>
#include <numeric>
#include <mutex>
using namespace std;
//---------------------Функции и Прототипы---------------------------------------





//------------------------MAIN----------------------------------------------------
int main() {
	setlocale(LC_ALL, "RU");
	srand(time(NULL));
	//-------------------------------САМА ПРОГА-------------------------------------

	string str;
	bool unique = true;
	int x = 0;

	cout << "Введите строку: " << endl;
	getline(cin, str);


	for (int i = 0; i < str.size(); i++)     // берем букву
	{

		unique = true;
		
		for (int j = 0; j < i; j++)
		{
			if (str[i] == str[j])
			{
				unique = false;
			}
		}
		
		if (unique)
		{
			x += 1;

			for (int j = i + 1; j < str.size(); j++)
			{
				if (str[i] == str[j])
				{
					x += 1;
				}
			}

			cout << str[i] << "\t" << x << endl;

		}
		
		x = 0;
		
		
		
		
		
		
		
		
		
		
	}




	system("pause");

	return 0;
}
