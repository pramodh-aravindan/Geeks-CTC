/* Imagine a robot sitting on the upper left corner of an X by Y grid. The robot can only
   move in two directions: right and down. How many possible paths are there for the 
   robot to go from (0,0) to (X,Y) 
   
   FOLLOW UP
   
   Imagine certain spots are "off limits", such that the robot cannot step on them. 
   Design an algorithm to find a path for the robot from the top left to the bottom right. */

#include<iostream>
#include<vector>
#include<map>

using namespace std;

bool grid[4][4] = {{true, false, true, true},
					{true, false, false, true},
					{true, true, true, true},
					{true, true, false, true}};


class Point
{
private:

	int x;
	int y;

public:

	Point(int xC, int yC): x(xC), y(yC)
	{}

	friend ostream & operator << (ostream & tempOut, Point tempPoint)
	{
		tempOut << "(" << tempPoint.x << "," << tempPoint.y << ")" << endl;

		return tempOut;
	}

	// Comparison operator needs to be consistent
	bool operator < (Point tempPoint) const
	{
		if(x == tempPoint.x)
			return (y < tempPoint.y);
		else 
			return (x < tempPoint.x);
	}
};

vector<Point> path;

bool isFree(int x, int y)
{
	return grid[x][y];
}

bool getPath(int x, int y, vector<Point> &path)
{
	Point P(x,y);
	//path.push_back(P);
	

	if(x == 0 && y == 0)
		return true;

	bool success = false;

	if(x >= 1 && isFree(x - 1, y))
		success = getPath(x-1, y, path);

	if(!success && y >= 1 && isFree(x, y - 1))
		success = getPath(x, y - 1, path);

	if(success)
	{
		path.push_back(P);
		cout << x << " " << y << " " << path.size() << endl;
	}

	return success;
}

bool getPathDP(int x, int y, vector<Point> &path, map<Point, bool> &cache)
{
	Point P(x,y);
	cout << P;
	map<Point, bool>::iterator iter = cache.find(P);
	if(iter != cache.end())
	{
		cout << "Found in cache";
		return iter->second;
	}

	if(x == 0 && y == 0) // Reached Start
	{
		return true;
	}

	bool success = false;

	if(x >= 1 && isFree(x - 1, y))
		success = getPathDP(x-1, y, path, cache);

	if(!success && y >= 1 && isFree(x, y - 1))
		success = getPathDP(x, y - 1, path, cache);

	if(success)
	{
		path.push_back(P);		
	}
	
	//cache[P] = success; Works just as well
	cache.insert(std::pair<Point,bool>(P, success));

	return success;
}

void getPathDPMain()
{
	map<Point, bool> cache;

	bool result = getPathDP(3, 3, path, cache);
	cout << "Size of path: " << path.size() << endl;
	cout << "Size of cache: " << cache.size() << endl;

	vector<Point>::iterator iter;

	int count = 0;
	
	for(iter = path.begin(); iter != path.end(); iter++)
	{
		count++;
		cout << *iter;
	}

	cout << count;
	char temp;
	cin >> temp;

}


void getPathMain()
{
	bool result = getPath(3, 3, path);
	cout << "Size of path: " << path.size() << endl;

	vector<Point>::iterator iter;

	int count = 0;
	
	for(iter = path.begin(); iter != path.end(); iter++)
	{
		count++;
		cout << *iter;
	}

	cout << count;
	char temp;
	cin >> temp;
}