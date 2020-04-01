#include <bits/stdc++.h>
using namespace std;

#define deb(x) cout << #x << ": " << x << "\t##" << endl;
#define fo(i, n) for(int i=0;i<n;++i)
#define Fo(i, k, n) for(int i=k;i<n;++i)

template <typename T>
void printVector(vector<T> v) {
	fo(i,v.size())
		cout << v[i] << " ";
	cout << endl;
}

int main() {
	
	vector<int> v = {1, 2, 3, 4, 5};
	// v.erase(v.begin()+1);
	// printVector(v);
	// just passing 1 iter deletes it, we can also delete range by:
	// v.erase(v.begin(), v.begin()+2);
	// printVector(v);
	
	// v.insert(v.begin()+1, 200);
	// printVector(v);
	// can insert elements by specifying the iter, and value
	// vector<int> another = {10, 20, 30, 40};
	// v.insert(v.end(), another.begin(), another.end());
	// printVector(v);
	// deb(v.size());
	// we can also insert range of elements as so...
	
	// v.clear();
	// deb(v.size());
	// printVector(v);
	// clear vector contents.
	
}















