#include <bits/stdc++.h>
using namespace std;
void swap(int* xp, int* yp)
{

  // Check if the two addresses are same
  if (xp == yp)
    return;
  *xp = *xp + *yp;
  *yp = *xp - *yp;
  *xp = *xp - *yp;
}

// Driver Code
int main()
{
  int x = 14;
  int y = 14;
  cout<<&x<<endl;
  cout<<&y<<endl;
  swap(&x, &y);
  cout << "After swap(&x, &y): x = " << x<<"\ty = "<< y<<endl;
  cout<<&x<<endl;
  cout<<&y<<endl;
  return 0;
}

// This code is contributed by rathbhupendra
