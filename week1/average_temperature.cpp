#include <iostream>
#include <vector>
using namespace std;

int main ()
{
	int N;
	cin >> N;
	double avg = 0.0;
	int* t = new int[N];
	for (auto i = 0; i < N; ++i)
	{
		cin >> t[i];
		avg += t[i];
	}

	avg = avg / N;
	vector<double> res;

	for (auto i = 0; i < N; ++i)
	{
		if (t[i] > avg)
			res.push_back(i);
	}

	cout << res.size() << endl;
	for (long long unsigned int i = 0; i < res.size(); ++i)
		cout << res.at(i) << " ";

	return 0;
}
