#include <iostream>
using namespace std;

int main()
{
    int f[5]={600,400,300,400,100};
    int p[5]={500,200,100,600,200};
    int visited[5];
    int k=0;
    
    for (int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(p[i]<=f[j])
            {
                f[j]=0;
                // visited[k]=0;
                // k++;
                cout<<"Visited: ";
                cout<<f[j]<<", "<<endl;
                break;
            }
            else{
                cout<<"Not Visited: "<<p[i]<<endl;
            }
        }
    }

    // cout<<"\n Not Visited: ";
    // for(int i=0;i<5;i++){
    //     if(f[i]!=0){
    //         cout<<
    //     }
    // }

    return 0;
}