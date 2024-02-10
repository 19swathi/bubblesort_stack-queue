// C++ code to illustrate Queue in 
// Standard Template Library (STL)
#include <iostream>
// This allows the usage of functions like cout and cin for console I/O
#include <queue>

using namespace std;

// Function to display the elements of the queue
void showq(queue<int> gq)
{
	queue<int> g = gq;//
	while (!g.empty()) {
		cout << '\t' << g.front();

		g.pop();
	}
	cout << '\n';
}
//
// Driver Code
int main()
{
	queue<int> gquiz;
	gquiz.push(10);
	gquiz.push(20);
	gquiz.push(30);
	//
	cout << "The queue gquiz is : ";
	showq(gquiz);

	cout << "\ngquiz.size() : " << gquiz.size();
	cout << "\ngquiz.front() : " << gquiz.front();
	cout << "\ngquiz.back() : " << gquiz.back();

	cout << "\ngquiz.pop() : ";
	gquiz.pop();
	showq(gquiz);

	return 0;
}