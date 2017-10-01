#include <iostream>
#include <vector>
using namespace std;


vector<int> intersection(vector<int> graf1, vector<int> graf2)
{
	vector<int> graf;
	int size1 = graf1.size();
	int size2 = graf2.size();

	for (int i = 0; i < size1; i++)
	{
		for (int k = 0; k < size2; k++)
		{
			if (graf1[i] == graf2[k])
			{
				graf.push_back(graf1[i]);
				break;
			}
		}
	}

	return graf;
}

vector<int> unionGraf(vector<int> graf1, vector<int> graf2)
{
	vector<int> graf;
	copy(graf1, graf1 + graf.size(), graf.begin());
	return graf;
}



void printGraf(vector<int> graf)
{
	int pr = graf.size();
	for (int i = 0; i < pr; i++)
	{
		cout << graf[i] << " ";
	}
}

int main()
{
	vector<int> graf1 = { 1, 3, 4, 5 };
	vector<int> graf2 = { 2, 3, 4 };
	int size1 = graf1.size();
	int size2 = graf2.size();

	vector<int> graf = intersection(graf1, graf2);

	vector<int> grafUnion = unionGraf(graf1, graf2);

	printGraf(grafUnion);
	cout << endl;

	system("PAUSE");
	return 0;
}