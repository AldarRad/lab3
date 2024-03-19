#include <iostream>
#include <vector>
int main()
{
	const int n = 15;
	std::vector <int> a(n);
	for(int i=0;i<n;i++)
	{
		std::cin >> a[i];
	}
	int number;
	std::cin >> number;
	for (int i = 0;i < a.size();i++)
	{
		if (a[i] == number)
		{
			a.erase(a.begin() + i);			
		}
	}
	for(int i=0;i<a.size();i++)
	{
		std::cout << a[i] << " ";
	}

}