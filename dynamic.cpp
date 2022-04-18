#include<iostream>
using namespace std;
int main(){
    int *a=new int;
    *a=55;
    cout<<"random:"<<*a<<" "<<a<<endl;
    delete a;
    // cout<< sizeof(a)<<"size: of &"<<sizeof(*a)<<endl;
    // char *x= new char;
    // *x='r';
    // cout<<x<<" "<<"size of x:"<<sizeof(x)<<" "<<*x<<"size of*x:"<<sizeof(*x);
//     int n;
//     cin>>n;
//     int* b=new int[n];
//     cout<<"o1:"<<b<<"ad"<<endl;
//     for(int i=0;i<n;i++){
//         b[i]=i+2;
//     }
//     //cout<<"size of b:"<<*(b+1)<<endl;
//     delete []b;
//     int y=88;
//     int* h=&y;
//     b=h;
// cout<<"B:"<<*h;
 //cout<<"size of w:"<<sizeof(w);
 int m;
 int n;
 cin>>m;
 int**p=new int*[m];
    for(int i=0;i<m;i++)  {
      p[i]=new int[i+1];
   for(int j=0;j<=i;j++){
        cin>>p[i][j];
                        }
                             }
    for(int i=0;i<m;i++){
        for(int j=0;j<=i;j++){
            cout<<p[i][j]<<" ";
                             }
        cout<<endl;
                        }                   
for(int i=0;i<m;i++){
    delete []p[i];
                    }
            delete []p; 
            cout<<p<<endl<<p[0][0] ;      

}