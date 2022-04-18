#include<iostream>
using namespace std;
void bubblesort(int a[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
          if(a[j]>a[j+1]){
              int temp=a[j];
              a[j]=a[j+1];
              a[j+1]=temp;
                        }
                                }
    }
}
int main(){
    int x=0;
    int a[]={3,1,6,9,0,4};
    bubblesort(a,6);
    //cin>>a;
    cout<<a<<endl;
    for(int i=0;i<6;i++){
        cout<<a[i]<<endl;
    }
}