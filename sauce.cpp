//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int MyGold = 10;
//
//	cout << MyGold + 10 << endl;
//	cout << MyGold - 10 << endl;
//	cout << MyGold * 10 << endl;
//	cout << MyGold / 10 << endl;
//
//	cout << MyGold % 2 << endl;
//
//	float MyHp = 12.5f;
//
//	cout << MyHp + 7.5 << endl;
//	cout << MyHp - 7.5 << endl;
//	cout << MyHp * 7.5 << endl;
//	cout << MyHp / 7.5 << endl;
//
//	//cout << MyHp % 0.1f << endl;
//
//	cout << (10 + (2 * 5)) << endl;
//
//	return 0;
//
//}
//
//
//
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int Korean[10] = {0,};
//
//	Korean[0] = 1;
//	Korean[1] = 2;
//	Korean[2] = 3;
//	Korean[3] = 4;
//	Korean[4] = 5;
//	Korean[5] = 6;
//	Korean[6] = 7;
//	Korean[7] = 8;
//	Korean[8] = 9;
//	Korean[9] = 10;
//
//	cout << Korean[0] << endl;
//	cout << Korean[1] << endl;
//	cout << Korean[2] << endl;
//	cout << Korean[3] << endl;
//	cout << Korean[4] << endl;
//	cout << Korean[5] << endl;
//	cout << Korean[6] << endl;
//	cout << Korean[7] << endl;
//	cout << Korean[8] << endl;
//	cout << Korean[9] << endl;
//
//
//	return 0;
//}
//
//
//
	//cin >> Score;

	//and &&
	//or ||
//#include <iostream>
//
//	using namespace std;
//
//	int main()
//	{
//		int Score = 0;
//		cin >> Score;
//		char Grade = 'F';
//
//		if (Score >= 90 && Score <= 100)
//		{
//			Grade = 'A';
//		}
//		else if (Score >= 80 && Score < 90)
//		{
//			Grade = 'B';
//		}
//		else if (Score >= 70 && Score < 80)
//		{
//			Grade = 'C';
//		}
//		else if (Score >= 60 && Score < 70)
//		{
//			Grade = 'D';
//		}
//		else if (Score >= 0 && Score < 60)
//		{
//			Grade = 'F';
//		}
//		else
//		{
//			cout << "Error" << endl;
//			return -1;
//		}
//
//		cout << "Grade : " << Grade << endl;
//
//		return 0;
//	}
 
//	if (!Result)
//	{
//		cout << "Trus" << endl;
//	}
//	else if ()
//	{
//		cout << "False" << endl;
//	
//	}
//	cout << Result << endl;
//}

//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int Score = 0;
//	cin >> Score;
//	char Grade = 'F';
//
//	switch (Score / 10)
//	{
//	case 10:
//	case 9:
//		Grade = 'A';
//		break;
//	case 8:
//		Grade = 'B';
//		break;
//	case 7:
//		Grade = 'C';
//		break;
//	case 6:
//		Grade = 'D';
//		break;
//	default:
//		Grade = 'F';
//	}
//
//
//	cout << "Grade : " << Grade << endl;
//
//	return 0;
//}
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int IT = 0;
//
//	for (int Index = 0; Index <= 100; Index++)// ++는 1이 증가
//	{
////cout << i << endl;
//		IT = IT + Index; // IT += Index;
//	}
//	cout << IT << endl;
//	return 0;
//
//}
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int Sum = 0;
//	for (int i = 1; i <= 100; i += 2)
//	{
//		Sum += i;
//	}
//
//	cout << Sum << endl;
//
//	Sum = 0;
//	for (int i = 2; i <= 100; i += 2)
//	{
//		Sum += i;
//	}
//
//	cout << Sum << endl;
//
//
//
//	return 0;
//}
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int Sum = 0;
//	for (int i = 3; i <= 100; i+= 3)
//	{
//		Sum += i;
//}
//	cout << "1부터 100까지 3의 배수의 합 : " << Sum << endl;
//
//	return 0;
//
//}
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int Count = 0;
//	cin >> Count;
//		for (int j = Count; j >= 1; --j)
//		{
//			for (int i = 1; i <= j; ++i)
//			{
//				cout << '*';
//			}
//			cout << '\n';
//	}
//	return 0;
//}
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int Korean[10] = { 0 , };
//
//	int Count = sizeof(Korean) / sizeof(int);
//	
//		for (int j = 0; j < Count; ++j)
//		{
//			Korean[j] = j + 1;
//		}
//	for (int j = 0; j < Count; ++j)
//	{
//		cout << Korean[j] << endl;
//		}
//	return 0;
//}
//
//#include <iostream>
//
//using namespace std;
//
//
//
//int main()
//{
//	char Inventory[20] = { 0, };
//
//	int Count = sizeof(Inventory) / sizeof(char);
//
//	for (int Index = 0; Index < Count; ++Index)
//	{
//		Inventory[Index] = Index + 1;
//	}
//
//	for (int Index = 0; Index < Count; ++Index)
//	{
//		cout << Inventory[Index] << endl;
//	}
//
//
//
//
//
//	return 0;
//}
#include <iostream>

using namespace std;



int main()
{
	//1 == º®
	int Map[10][10] = {
		{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
		{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
		{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
		{ 1, 0, 1, 0, 0, 0, 0, 0, 0, 1 },
		{ 1, 0, 1, 0, 0, 0, 0, 0, 0, 1 },
		{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
		{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
		{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
		{ 1, 0, 0, 0, 0, 0, 0, 0, 2, 1 },
		{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }
	};

	for (int Y = 0; Y < 10; ++Y)
	{
		for (int X = 0; X < 10; ++X)
		{
			if (Map[Y][X] == 1)
			{
				cout << '=' << ' ';
			}
			else if (Map[Y][X] == 0)
			{
				cout << ' ' << ' ';
			}
			else if (Map[Y][X] == 2)
			{
				cout << 'G' << ' ';
			}
		}
		cout << '\n';
	}





	return 0;
}