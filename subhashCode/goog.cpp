#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,k=1;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        int count=1,count1=0;
        stack <int> st1;
        stack <int> st2;
        int tst=0;
        int flag=0;
        
        // printf("Case  %d",k);
        k++;
        for(int i=0;i<n;i++)

        {  
            if(flag!=1) {cout<<count<<" "; flag=0;}
            else
            {
                flag=0;
            }
            
            if(count%2!=0)
            {
                if(arr[i]>=count && tst<=count){

                    st1.push(arr[i]);
                    tst++;
                    if(tst==count){
                        tst=0;
                        cout<<count<<" ";
                        count++;
                        flag=1;
                        
                        while(st1.empty()!=true){
                            if(st1.top()>=count){
                            st2.push(st1.top());
                            st1.pop();
                            tst++;
                            }
                            else st1.pop();
                        }
                    }

                
                }

            }
            else if(arr[i]>=count && tst<=count){

                    st2.push(arr[i]);
                    tst++;
                    if(tst==count){
                        tst=0;
                        cout<<count<<" ";
                        flag=1;
                        count++;
                        
                        while(!st2.empty()!=true){
                            if(st2.top()>=count){
                            st1.push(st2.top());
                            st2.pop();
                            tst++;
                            }
                            else st2.pop();
                        }
                    }

                
                }


        }

    }

}