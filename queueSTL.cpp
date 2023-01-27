#include<iostream>
#include<queue>
using namespace std;
 
int main(){
    queue<int> q;
    q.push(12);
    q.push(13);
    q.push(15);
    cout<<"Front-> "<<q.front()<<endl;
    cout<<"Back->"<<q.back()<<endl;
    cout<<"Size->"<<q.size()<<endl;
    cout<<"Is Empty->"<<q.empty()<<endl;
    q.pop();
    cout<<"Front-> "<<q.front()<<endl;
    int result = -1%1;
    cout<<result;
    return 0;
}