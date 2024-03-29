// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include <vector>
void insertionSort(vector<int> &v,int target){
    int size=v.size();
    bool flag=false;
    int j;
    int key;
    int index;
    for(int i=1;i<size;i++){
        key=v[i];
        j=i-1;
        if (key==target){
            flag=true;
            index=i;
            continue;
        }
        while(j>=0 && key>v[j] && !flag){
            v[j+1]=v[j];
            j=j-1;
           
        }
        while(j>=index && key<v[j] && flag){
            v[j+1]=v[j];
            j=j-1;
           
        }
        v[j+1]=key;
    }
    for(int q=0;q<size;q++){
        cout<<v[q]<<" ";
    }
}
int main() {
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int element;
        cin>>element;
        v.push_back(element);
    }
    int target;
    cin>>target;
    insertionSort(v,target);
    
    


    return 0;
}
