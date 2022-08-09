// CPP program to illustrate
// the vector::rbegin() function
#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> v;
	v.push_back(11);
	v.push_back(12);
	v.push_back(13);
	v.push_back(14);
	v.push_back(15);

	// prints all the elements
	cout << "The vector elements in reverse order are:\n";
	for (auto it = v.rbegin(); it != v.rend(); it++)
		cout << *it << " ";

    vector<int> v1;

    // inserts elements
    for (int i = 0; i < 20; i++) {
        v1.push_back(i * 10);
    }

    cout << "\n\nThe size of vector is " << v1.size();
    cout << "\nThe maximum capacity is " << v1.capacity();

	return 0;
}
