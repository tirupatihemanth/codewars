#include <iostream>
//#include <vector>
#include <stdlib.h>

using namespace std;

int main(){
    
    int T;
    cin >> T;
    
    int N, sum, i, j;
    int *num;
    bool flag = false;
    int *votes;
    //vector<int> votes;
    while(T--){
        //votes.clear();
        j = 1;
        sum = 0;
        flag = false;
        cin >> N;
        num = (int *)malloc(sizeof(int)*N);
        for(i=0;i<N;i++){
            cin >> num[i];
        }
    
        for(i=0;i<N;i++){
            if(num[i]>=N){
                flag = true;
                break;
            }
            sum+= num[i];  
        
        }
        if(flag){
            cout<<-1<<endl;
            continue;
        }

        if(sum!=N){
            cout<<-1<<endl;
            continue;
        } 

        votes = (int *) malloc(sizeof(int)*N);
        for(i = 0;i< N;i++){
            while(j< N){
                if(num[j]!=0){
                    num[j]--;
                    //votes.push_back(j+1);
                    votes[i] = j+1;
                    sum--;
                    //cout << j+1;
                    break;
                }
                j++;
            }
            if(j>=N){
                j=0;
                while(j<i){
                    if(num[j]!=0){
                        num[j]--;
                        sum--;
                        votes[i] = j+1;
                        //votes.push_back(j+1);
                        //cout << j+1;
                        break;
                    }
                }
            }
            j = i+2;
            
            if(sum==0){
                break;
            }
        }

        for(i=0;i<N;i++){
            if(num[i]!=0){
                cout<< -1;
                free(votes);
                //votes.clear();
                break;
            }
        }
        
        for(i=0;i<N;i++){
            cout<<votes[i]<< " ";
        }
        cout<<endl;
        free(votes);
        free(num);
    }
    return 0;
}
