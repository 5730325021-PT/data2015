#include <iostream>
#include <vector>
#include <map>
#include <assert.h>
#include <queue>
#include <string>

using namespace std;

void test1(){
    cout << "TEST 1" << endl << endl;
    queue<int> q;

    q.push(1);
    q.push(8);

    assert(q.front() == 1);
    q.pop();
    assert(q.front() == q.back());
    cout << "front() is OK!" << endl;

    assert(q.back() == 8);
    q.push(2);
    assert(q.back() == 2);
    cout << "back() is OK!" << endl;

    assert(q.size() == 2);
    q.pop();
    assert(q.size() == 1);
    cout << "size() is OK!" << endl;

    assert(q.empty() == false);
    q.pop();
    assert(q.empty() == true);
    cout << "empty() is OK!" << endl;

    cout << "push() is OK!" << endl;
    cout << "pop() is OK!" << endl;
}

void test5(){
    cout << "TEST 5" << endl << endl;
    queue<vector<map<char,pair<string,int>>>> q;
    vector<map<char,pair<string,int>>> v;
    map<char,pair<string,int>> m;
    m['P'] = make_pair("POPs",11);
    v.push_back(m);
    q.push(v);
    assert(q.front().back()['P'].first == "POPs");
    m['A'] = make_pair("PAPs",22);
    vector<map<char,pair<string,int>>> v2;
    v2 = v;
    v2.push_back(m);
    q.push(v2);
    assert(q.back().back()['A'].second == 22);

    cout << "front() is OK!" << endl;
    cout << "back() is OK!" << endl;

    assert(q.size() == 2);
    q.push(v);
    assert(q.size() == 3);
    q.pop();
    q.pop();
    assert(q.size() == 1);
    cout << "size() is OK!" << endl;

    assert(q.empty() == false);
    q.pop();
    assert(q.empty() == true);
    cout << "empty() is OK!" << endl;

    cout << "push() is OK!" << endl;
    cout << "pop() is OK!" << endl;
}

int main()
{
    test1();
    cout << endl;
    test5();

    return 0;
}
