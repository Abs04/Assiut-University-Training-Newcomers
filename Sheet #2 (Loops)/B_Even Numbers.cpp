#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin >> n;
	int temp = 0;
	for(int i = 1 ; i <= n; i++)
	{
		if(i%2 == 0){cout << i << endl;}	else temp++;
	}
	if(temp == n){cout << -1 << endl;}

    return 0;
}