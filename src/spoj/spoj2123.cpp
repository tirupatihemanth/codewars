#include <iostream>

using namespace std;

int main(){
    int i, sum, ans, N, eq_size;
    int *candies;
    while(true){
        cin >> N;
        if(N == -1){
            break;
        }
        sum=0, ans=0;
        candies = new int[N];
        
        for(i=0;i<N;i++){
            cin>>candies[i];
            sum+=candies[i];
        }
        
        if(sum%N !=0){
            cout<<-1<<endl;
            continue;
        }

        eq_size = sum/N;

        for(i=0;i<N;i++){
            if(candies[i]<eq_size){
                ans+=eq_size-candies[i];
            }
        }
        cout<<ans<<endl;
    }
}
