#include <iostream>

using namespace std;

// User Defined Functions....
int getTotalX (int a[], int b[], int m, int n)
{
    int count = 0;
    for(int i=1; i<=100; i++)
    {
        int flag = 0;
        for(int j=0; j<m; j++)
        {
            if(i%a[j]!= 0)
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
        {
            for(int j=0; j<n; j++)
            {
                if(b[j]%i!= 0)
                {
                    flag = 1;
                    break;
                }
            }
        }
        if(flag == 0)
            count++;
    }
    return count;
}
int main()
{
    int m, n; 
   
    cin >> m >> n;
    if(m<0 || m> 10 || n<0 || n>10)
        return 0;

    int a[m], b[n];
    
    for(int i=0; i<m; i++)
    {
        cin >> a[i];
        if(a[i] < 0 || a[i] > 100)
            return 0;
    }
    for(int i=0; i<n; i++)
    {
        cin >> b[i];
        if(b[i] < 0 || b[i] > 100)
            return 0;
    }
    cout<< getTotalX(a, b, m, n);
    return 0;
}