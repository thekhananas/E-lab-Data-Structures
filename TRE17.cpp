#include<bits/stdc++.h>
using namespace std;

 
signed main()
{
    long long int n;
    long long int id,z,p,l,c,s;
    cin>>n;
  
    vector<pair<long long int,pair<long long int,long long int>>> vp;
    for(int i=0;i<n;i++){
        cin>>id>>z>>p>>l>>c>>s;
        long long int diff = (p * 50 + l * 5 + c * 10 + s * 20) - z;
        vp.push_back(make_pair(diff,make_pair(id,z+diff)));
      
    }
 
    make_heap(vp.begin(),vp.end());
    long long int counti = 0;
    while(counti != 5){
      
        cout<<vp.front().second.first<<" "<<vp.front().second.second<<endl;
        pop_heap(vp.begin(),vp.end());
        vp.pop_back();
        counti++;
    }
 
}