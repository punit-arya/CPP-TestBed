#include <cfloat>
#include <climits>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	// int fav_num;

	// cout << "Hello, world!" << endl;
	// cout << fav_num << endl;
	// cout << "Enter your favorite number: ";
	// cin >> fav_num;
	// cout << "That's my favorite number too" << endl;
	// cout << "Yes, " << fav_num << " is my favourite number!" << endl;

	// int num1, num2;
	// double num3;

	// cin >> num1 >> num2;
	// cout << "num1: " << num1 << endl << "num2: " << num2 << endl;
	// cin >> num2;
	// cin >> num3;
	// cout << "Values:" << endl;
	// cout << num2 << endl;
	// cout << num3 << endl;

	// cout << INT_MAX << endl;
	// cout << LONG_LONG_MAX;

	// cout << sizeof(int) << endl;

	// 	int scores[5]{};
	//
	// 	cout << scores[0] << endl;
	// 	cout << scores1] << endl;
	// 	cout << scores2] << endl;
	// 	cout << scores[3] << endl;
	// 	cout << scores[4] << endl;

	// 	int scores[5]{10};
	//
	// 	cout << scores[0] << endl;
	// 	cout << scores[1] << endl;
	// 	cout << scores[2] << endl;
	// 	cout << scores[3] << endl;
	// 	cout << scores[4] << endl;

	// 	int scores[5]{10, 10};
	//
	// 	cout << scores[0] << endl;
	// 	cout << scores[1] << endl;
	// 	cout << scores[2] << endl;
	// 	cout << scores[3] << endl;
	// 	cout << scores[4] << endl;

	// vector<char> vowels{'a', 'e', 'i', 'o', 'u'};
	// 	int i{0};
	//
	// 	for (i = 0; i < 6; ++i)
	// 	{
	// 		cout << vowels[i];
	// 		// cout << vowels.at(i);
	// 	}
	// cout << vowels.size();

	// vector<vector<int>> movie_ratings{{4,2, 9,2}, 2, 4, 9, 9}};
	// int i, j;

	// for (i = 0; i <2; ++i)
	// {
	// 	for (j = 0; j < 4; ++j)
	// 	{
	// 		// cout << movie_ratings[i][j];
	// 		cout << movie_ratings.at(i).at(j);
	// 	}
	// }

	// 	vector<int> vector1, vector2;
	// 	int i{0}, j{0};
	// 	vector<vector<int>> vector2d;
	//
	// 	cout << vector1.size() << endl << vector2.size() << endl;
	// 	vector1.push_back(10);
	// 	vector1.push_back(20);
	//
	// 	for (i = 0; i < vector1.size(); ++i)
	// 	{
	// 		cout << vector1.at(i) << endl;
	// 	}
	//
	// 	vector2.push_back(100);
	// 	vector2.push_back(200);
	//
	// 	for (i = 0; i < vector2.size(); ++i)
	// 	{
	// 		cout << vector2.at(i) << endl;
	// 	}
	//
	// 	vector2d.push_back(vector1);
	// 	vector2d.push_back(vector2);
	//
	// 	for (i = 0; i < vector2d.size(); ++i)
	// 	{
	// 		for (j = 0; j < vector2d.at(i).size(); ++j)
	// 		{
	// 			cout << vector2d.at(i).at(j) << "\t";
	// 		}
	// 		cout << endl;
	// 	}
	//
	// 	cout << "Changing..." << endl;
	// 	vector1.at(0) = 1000;
	// 	cout << "After change:" << endl;
	//
	// 	for (i = 0; i < vector2d.size(); ++i)
	// 	{
	// 		for (j = 0; j < vector2d.at(i).size(); ++j)
	// 		{
	// 			cout << vector2d.at(i).at(j) << "\t";
	// 		}
	// 		cout << endl;
	// 	}
	//
	// 	for (i = 0; i < vector1.size(); ++i)
	// 	{
	// 		cout << vector1.at(i) << "\t";
	// 	}
	// 	cout << endl;
	//
	// 	return 0;

	// 	cout << 5 / 10 << endl;
	// 	cout << 5.0 / 10 << endl;
	// 	cout << 5 / 10.0 << endl;
	// 	cout << 5.0 / 10.0 << endl;
	//
	// 	int a;
	// 	double b;
	//
	// 	a = 5 / 10;
	// 	b = 5 / 10;
	// 	cout << a << endl;
	// 	cout << b << endl;
	//
	// 	b = 5.0 / 10;
	// 	cout << b << endl;
	//
	// 	b = 5 / 10.0;
	// 	cout << b << endl;
	//
	// 	b = 5.0 / 10.0;
	// 	cout << b;

	cout << (0.1 == 0.1) << endl;
	cout << boolalpha;
	cout << (0.1 == 0.1) << endl;

	cout << (1 == 1) << endl;
	cout << noboolalpha;
	cout << (1 == 1) << endl;

	int a = 0.1;
	int b = 0.1;
	bool result;

	cout << boolalpha;
	cout << (a == b) << endl;

	result = a == b;
	cout << result << endl;

	cout << (0.3 == (0.1 + 0.1 + 0.1)) << endl;
}
