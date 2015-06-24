#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <map>
#include <set>
#include <iomanip>


#define sz(a) int((a).size())
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define tr(c,i) for(typeof((c).begin()) i = (c).begin(); i!=(c).end(); i++
#define present(c,x) ((c).find(x)!=(c).end())
#define cpresent(c,x) (find(all(c),x) != (c).end()

using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;

class SRMCards {
public:
	int maxTurns(vector <int>);
};

bool arr[50];
int neigh(vector<int> &nums, int i){

    if(nums.size() == 1){
        return 0;
    }
    if(i==0){
        if(arr[1] && (nums[1]-nums[0] == 1)){
            return 1;
        }
        else
            return 0;
    }
    else if( i== nums.size()-1){
         if(arr[i-1] && nums[i-1]-nums[i] == -1){
            return 1;
         }
         else{
            return 0;
         }
    }
    else{
        int ans=0;
        if(arr[i-1] && nums[i-1]-nums[i] == -1){
            ans++;
        }
        if(arr[i+1] && nums[i+1]-nums[i] == 1){
            ans++;
        }
        return ans;
    }


}

int SRMCards::maxTurns(vector <int> cards) {
    
    for(int i=0;i<50;i++){
        arr[i] = true;
    }
    if(cards.size() == 1){
        return 1;
    }

    sort(cards.begin(), cards.end());

    int size = cards.size();

    int count=0,i,j;
    int ans=0;
    while(count != size){
        for(i=0;i<3;i++){
            for(j=0;j<cards.size();j++){
                if(arr[j] && neigh(cards, j) == i){
                    if(i==0){
                        arr[j] = false;
                        count++;
                        ans++;
                    }
                    else if(i==1){
                        if(j>0 && j< cards.size()-1){
                            if(arr[j-1] && cards[j-1]-cards[j] == -1){
                                arr[j-1]=false;
                                arr[j] = false;
                                count+=2;
                                ans++;
                                i=-1;
                                break;
                            }
                            else{
                                arr[j+1] = false;
                                arr[j] = false;
                                count+=2;
                                ans++;
                                i=-1;
                            }   break;
                        }
                        else{
                            if(j==0){
                                arr[j+1] = false;
                                arr[j] = false;
                                count+=2;
                                ans++;
                                i=-1;
                                break;
                            }
                            else{
                                arr[j-1] = false;
                                arr[j] = false;
                                count+=2;
                                ans++;
                                i=-1;
                                break;
                            }
                        }
                 }
                else if(i==2){
                        arr[j-1] = false;
                        arr[j+1] = false;
                        arr[j] = false;
                        count+=3;
                        ans++;
                        i=-1;
                        break;
                }
            }
    
        }
    }
}
     return ans;
}
int main(){
    
    SRMCards obj;
    cout<<obj.maxTurns({10, 11, 12, 13, 14, 1, 2, 3, 4, 5, 6, 7, 8, 9})<<endl;
    return 0;
}
