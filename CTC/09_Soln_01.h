/* A child is running up a staircase with n steps, and can hop either 1 step, 2 steps, or 
   3 steps at a time. Implement a method to count how many possible ways the child
   can run up the stairs */

#include <iostream>
using namespace std;

int countWays(int n)
{
	if(n < 0)
		return 0;
	else if(n == 0)
		return 1;
	else{
		return countWays(n-1) + countWays(n-2) + countWays(n-3);
	}
}

int countWaysDP(int n, int map[])
{
	cout << n << endl;

	if(n < 0)
		return 0;
	else if(n == 0)
		return 1;
	else if(map[n] > -1)
		return map[n];
	else{
		map[n] = countWaysDP(n - 1, map) + countWaysDP(n - 2, map) + countWaysDP(n - 3, map);
		return map[n];
	}

}

void countWaysDPMain(int n)
{
	int map[50];
	char temp;

	for(int i = 0; i < 50; i++)
	{
		map[i] = -1;
	}

	cout << "Number of ways to run upto " << n << " steps in 1,2,3 step sizes: " << countWaysDP(n, map) << endl;
	cin >> temp;


}

void countWaysMain(int n)
{
	char temp;
	cout << "Number of ways to run upto " << n << " steps in 1,2,3 step sizes: " << countWays(n) << endl;
	cin >> temp;
}