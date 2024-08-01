#include<iostream>
using namespace std;
int main()
{
    int par[5], impar[5], evenCount=0, oddCount=0, num;
    for(int i=0; i<15; i++)
    {
        cin>>num;
        if(num%2==0)
        {
            if(evenCount==5)
            {
                for(int j=0; j<5; j++)
                {
                    cout << "par[" << j << "] = " << par[j] << endl;
                    evenCount = 0;
                }
            }
            par[evenCount++]=num;
        }

        else
        {
            if(oddCount==5)
            {
                for(int j=0; j<5; j++)
                {
                    cout << "impar[" << j << "] = " << impar[j] << endl;
                    oddCount=0;
                }
            }
            impar[oddCount++]=num;
        }
    }

    //printing remaining odd & even
    for(int k=0; k<oddCount; k++)
    {
        cout << "impar[" << k << "] = " << impar[k] << endl;
    }
    for(int k=0; k<evenCount; k++)
    {
        cout << "par[" << k << "] = " << par[k] << endl;
    }
}
