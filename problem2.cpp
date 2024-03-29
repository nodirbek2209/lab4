// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include <vector>
void insertionSort(vector<int> &v){
    int size=v.size();
    
    int j;
    int key;
    for(int i=1;i<size;i++){
        key=v[i];
        j=i-1;
        while(j>=0 && key>v[j]){
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
    insertionSort(v);
    
    


    return 0;
}