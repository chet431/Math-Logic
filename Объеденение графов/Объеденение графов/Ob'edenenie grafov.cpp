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

void printGraf(vector<int> graf)
{
	int pr = graf.size();
	for (int i = 0; i < pr; i++)
	{
		cout << graf[i] << " ";
	}
}

vector<int> unionGraf(vector<int> graf1, vector<int> graf2)
{
	vector<int> graf;

	for (int i = 0; i < graf1.size(); i++)
	{
		graf.push_back(graf1[i]);
	}
	for (int k = 0; k < graf2.size(); k++)
	{
		bool temp = true;
		for (int l = 0; l < graf1.size(); l++)
		{
			if (graf1[l] == graf2[k])
			{
				temp = false;
				break;
			}
		}
		if (temp == true) 
		{
			graf.push_back(graf2[k]);
		}
	}
	return graf;
}

int main()
{
	vector<int> graf1 = { 1, 3, 4, 5 };
	vector<int> graf2 = { 2, 3, 4 };
	int size1 = graf1.size();
	int size2 = graf2.size();

	vector<int> graf = intersection(graf1, graf2);
	vector<int> grafNew = unionGraf(graf1, graf2);
	
	printGraf(graf);
	cout << endl;
	printGraf(grafNew);
	cout << endl;
	system("PAUSE");
	return 0;
}