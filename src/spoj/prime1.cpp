#include <iostream>
#include <cmath>
#include <vector>
#include <iterator>

using namespace std;

int main(){

    int T;
    cin>>T;
    long long int m, n,i,j;
    int val1,val2;
    int saved[] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101,103,107,109,113,127,131,137,139,149,151,157,163,167,173,179,181,191,193,197,199,211,223,227,229,233,239,241,251,257,263,269,271,277,281,283,293,307,311,313,317,331,337,347,349,353,359,367,373,379,383,389,397,401,409,419,421,431,433,439,443,449,457,461,463,467,479,487,491,499,503,509,521,523,541,547,557,563,569,571,577,587,593,599,601,607,613,617,619,631,641,643,647,653,659,661,673,677,683,691,701,709,719,727,733,739,743,751,757,761,769,773,787,797,809,811,821,823,827,829,839,853,857,859,863,877,881,883,887,907,911,919,929,937,941,947,953,967,971,977,983,991,997};


    vector<int> primes;
    while(T--){
        cin>>m>>n;

        if(m<1000){
            if(n>1000){
                for(int val: saved){
                    if(val>=m){
                        cout<<val<<endl;
                    }
                }
            }
            else{
                if(m==n){
                    for(int val: saved){
                        if(val>n){
                            break;
                        }
                        if(val == n){
                            cout<<val<<endl;
                        }
                    }
                }
                for(int val: saved){
                    if(val>n){
                        break;
                    }
                    if(val>=m){
                        cout<<val<<endl;
                    }
                }
            }
            m=1000;
        }

        if(n<=1000){
            cout<<endl;
            continue;
        }

        j = m;


        while(j<n+1){
            if((j-1)%6==0 || (j+1)%6==0){
                primes.push_back(j);
            }
            j++;
        }

        val1 = sqrt(n);
        //val2 = primes.size();
        //cout<<val2<<endl;

        for(int val: saved){
    
            for(vector<int>::reverse_iterator it = primes.rbegin();it!=primes.rend();it++){
                if(sqrt(*it)<val){
                    break;            
                }        
                if((*it)%val==0){
                    advance(it,1);
                    primes.erase(it.base());
                    it = prev(it);
                }
            }

        }
        short temp[] = {-1, 1};
        long long int temp2;
    
        //cout<<primes.size()<<endl;
        for(short val: temp){        
            for(i=167;(temp2=6*i+val)<=val1;i++){
                
                for(vector<int>::reverse_iterator it = primes.rbegin();it!=primes.rend();it++){
                    if(sqrt(*it)<temp2){
                        break;
                    }
                    if((*it)%temp2==0){
                        advance(it,1);
                        primes.erase(it.base());
                        it = prev(it);
                    }
                }
            }
        }

        for(int val : primes){
            cout<<val<<endl;
        }
        primes.clear();
        cout<<endl;
    }
    return 0;
}
