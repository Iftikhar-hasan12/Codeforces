
#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, v;
  cin >> n;
  vector<int> a(1001, 0);
  for (int i = 0; i < n; ++i)
  {
    cin >> v;
    a[v]++;
  }
  for (int i = 1; i < 1001; ++i)
    if (a[i] > (n + 1) / 2)
    {
      cout << "NO\n";
      return 0;
    }
  cout << "YES\n";
}
