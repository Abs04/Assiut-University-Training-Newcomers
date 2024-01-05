#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int digit_sum(int n)
{
    int temp = 0;
    while(n > 0)
    {
        temp += n%10;
        n /= 10;
    }
    return temp;

}
int main()
{
    int n , a, b , sum = 0;
    cin >> n >> a >> b;
    for(int i = 1; i <=n; i++)
    {
        int temp = digit_sum(i);
        if(temp >= a && temp <= b)
        {
            sum+= i;
            //cout << temp << endl;
        }
    }
    cout << sum <<"\n";
   return 0;
}