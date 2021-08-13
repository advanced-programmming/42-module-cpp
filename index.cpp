#include <iostream>
#include <set>

using namespace std;

int main () {
    set<int> setIn;
    set<int> setResult;

    int value = 0;
    for(int i = 0; i < 10; i++) {
        cin>>value;
        setIn.insert(value);
    }

    for(int i: setIn)
        setResult.insert(i < 42 ? i : (i % 42));
    
    cout<<setResult.size()<<endl;

    return 0;
}