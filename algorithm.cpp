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
	// vector<int> v = {3, 3, 3, 3, 3, 2, 1, 0, 2, 9, -4};
	// auto result = count(v.begin(), v.end(), 3);
	// deb(result);
	// COUNT (begin, end, what to search for)
	
	// vector<int> v = {2, 4, 4, 6, 8, 0, 2, 101};
	// bool result = all_of(v.begin(), v.end(), [](int value){return !(value&1);});
	// deb(result);
	// ALL_OF (begin, end, lambda)
	// similar are:
	// ANY_OF, NONE_OF
	
	// vector<int> v = {3, 3, 3, 3, 3, 2, 1, 0, 2, 9, -1, -1, -1};
	// auto result = find_if(v.begin(), v.end(), [](int value){return value<0;});
	// if(result != v.end()) {
	// 	deb("Found: " + to_string(*result));
	// } else {
	// 	deb("Not Found!")
	// }
	// FIND_IF returns an ITERATOR and not BOOL
	// also see:
	// FIND_IF_NOT
	
	// see:
	// MISMATCH returns it* to the first position where the ranges differ.
	
	// vector<int> v = {1, 2, 3, 4, 5};
	// vector<int> u = {3, 2, 1, 5, 4};
	// if(is_permutation(v.begin(), v.end(), u.begin())) {
	// 	deb("YES");
	// } else {
	// 	deb("NO");
	// }
	
	//IS_PERMUTATION gives bool if both vector has same elements, but in diff. order
	
	// vector<int> u = {1, 2, 3, 4, 5};
	// vector<int> v = {2, 3, 4, 3, 6};
	// bool result = equal(u.begin(), u.end(), v.begin());
	// deb(result);
	// by default the comparison function is return (val1 == val2),
	// however we can provide our own predicate (bool function)
	// auto result = equal(u.begin(), u.end(), v.begin(),
	// [](int v1, int v2){return v1 < v2;});
	// deb(result);
	// works just fine with the lambda..
	// also, we can add return types to lambdas by
	// [](params)->returnType{...}
	
	// vector<int> a = {1, 2, 3, 4, 5, 6};
	// vector<int> b = {4, 5, 6};
	
	// auto it = search(a.begin(), a.end(), b.begin(), b.end());
	// if(it != a.end()) {
	// 	deb("Found at pos: " + to_string(it-a.begin()+1));
	// } else {
	// 	deb("Not Found!");
	// }
	// NOTE: SEARCH and FIND are NOT SAME
	// SEARCH searches for a subsequence while find 'FINDS' the element.
	// Also ofcourse we can pass in our own predicate as the final arg, as:
	// search(a.begin(), a.end(), b.begin(), b.end(), [](){});
	
	//#####################################################
	//					MODIFICATION OPERATIONS:
	
	// vector<int> v = {1, 2, 3, 4, 5};
	// vector<int> a(4);
	// copy(v.begin(), v.end(), a.begin());
	// printVector(a);
	// Note that this does not push_back to empty vector in order to copy..
	// we need to initialize the target (copy to) vector to initial size;
	
	// vector<int> a = {1, 2, 3, 4, 5, 6};
	// vector<int> result(a.size());
	// auto it = copy_if(a.begin(), a.end(), result.begin(),
	// [](int value)->bool{return value>3;});
	// printVector(result);
	// it returns an iterator (it) which points to result vector's last value copied
	// in our case 0, just ahead of 6.
	// so now we can resize our vector as follows
	// result.resize(distance(result.begin(), it));
	// deb("new result: ");
	// printVector(result);
	// COPY_IF
	// also see:
	// COPY_BACKWARD
	
	// vector<int> a = {1, 2, 3, 4};
	// vector<int> b;
	// b = move(a);
	// printVector(b);
	// deb(a.size());
	// deb(b.size());
	// Y = MOVE(X);
	// cut paste's the vector also works on range.
	
	// vector<int> a(4,10);
	// vector<int> b(6,20);
	// swap(a, b);
	// printVector(a);
	// printVector(b);
	// SWAP(A, B);
	// swaps the contents of two vectors.
	// also see SWAP_RANGES();
	
	// int a = 4;
	// int b = 6;
	// swap(a, b);
	// deb(a);
	// deb(b);
	// also swaps single variables :)
	
	// vector<int> v = {1, 2, 3, 4, 5};
	// transform(v.begin(), v.end(), v.begin(), [](int val) {return val+1;});
	// printVector(v);
	// TRANSFORM(SRC.BEGIN(), SRC.END(), TAR.BEGIN(), OPERATION (LAMBDA) );
	
	// string s = "ATHARVA";
	// transform(s.begin(), s.end(), s.begin(), ::tolower);
	// deb(s);
	// can also use with the strings.
	
	// vector<int> v = {1, 2, 1, 4, 1};
	// replace(v.begin(), v.end(), 1, 100);
	// printVector(v);
	// REPLACE(begin, end, what, what-to);
	
	// vector<int> v = {1, 2, 1, 4, 1};
	// replace_if(v.begin(), v.end(), [](int val)->bool{return val&1;}, 100);
	// printVector(v);
	// REPLACE_IF(begin, end, predicate, what-to);
	
	// vector<int> v(10);
	// fill(v.begin(), v.begin()+5, 5);
	// printVector(v);
	// FILL(begin, end, with-what) fills the given range with a specific number.
	
	// vector<int> v = {1, 2, 3, 4, 3, 4, 5, 4, 4, 4, 6, 4, 7, 8, 4};
	// auto it = remove(v.begin(), v.end(), 4);
	// v.resize(distance(v.begin(), it));
	// printVector(v);
	// REMOVE(begin, end, what) returns an it, which is the new end.
	// so we need to v.resize(distance(begin, it)) in order to get rid of
	// old values ahead of it..
	
	// string s = "abaabaabababaa";
	// auto it = remove(s.begin(), s.end(), 'a');
	// s.resize(distance(s.begin(), it));
	// deb(s);
	//REMOVE also works on strings.
	
	//REMOVE_IF(begin, end, predicate) ez
	
	//vector<int> v = {10,10,10,20,20,20,30,30,20,20,10};
	// auto it = unique(v.begin(), v.end());
	// v.resize(distance(v.begin(), it));
	// printVector(v);
	// UNIQUE removes only consecutive duplicates, and not all.
	
	// vector<int> v = {1, 2, 3, 4};
	// reverse(v.begin(), v.end());
	// printVector(v);
	// REVERSE reverses the range
	
	
	// vector<int> v = {1, 2, 3, 4, 5};
	// rotate(v.begin(), v.begin()+1, v.end());
	// printVector(v);
	// ROTATE(first, middle, last)
	// where 1st and last are the range, while the middle element is which is supposed to
	// be in first's place
	
	// vector<int> v = {1, 2, 3, 4, 5};
	// random_shuffle(v.begin(), v.end());
	// printVector(v);
	// RANDOM_SHUFFLE shuffles elements in random order.
	
	// vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	// auto bound = partition(v.begin(), v.end(), [](int value)->bool{return value&1;});
	// cout << "Odd elements: ";
	// for(auto it=v.begin(); it!=bound; ++it) {
	// 	cout << *it << " ";
	// }
	// cout << endl;
	// cout << "Even elements: ";
	// for(auto it=bound; it != v.end(); ++it) {
	// 	cout << *it << " ";
	// }
	// cout << endl;
	// PARTITION(START, END, PREDICATE) returns an it, before which(not including itself) are
	// all the elements true to the predicate function, and after which are elements which
	// are false to it.
	// also see: is_partitioned();
	
	// vector<int> v = {4, 7, 3, 2, 5, 1, 6, 8};
	// sort(v.begin(), v.end());		//takes NLOGN time.
	// printVector(v);
	//we could also pass in a comparator function to modify the comparisons/ or in case
	//we want to sort objects/ complex data structures..
	// vector<int> a = {4, 7, 3, 2, 5, 1, 6, 8};
	// sort(a.begin(), a.end(), [](int x, int y)->bool{return x > y;});
	// printVector(a);
	// SORT(BEGIN, END, COMP);
	
	// vector<int> v = {1, 2, 3, 4, 5};
	// deb(is_sorted(v.begin(), v.end()));
	// IS_SORTED(BEGIN, END) returns bool
	
	// vector<int> v = {1, 1, 3, 4, 5};
	// auto l = lower_bound(v.begin(), v.end(), 2);
	// cout << (l - v.begin());
	// lower bound returns iter to element which can be = or > the specified element
	// upper bound returns iter to element which is strictly > the specified element.
	// binary_search(begin, end, key)
	// note that above three functions are used on sorted ranges.. only
	
	// vector<int> v = {1, 2, 3, 4, 5};
	// auto result = min_element(v.begin(), v.end());
	// deb(*result);
	// same is max_element.
	// MIN_ELEMENT, MAX_ELEMENT
	// VVIMP note that this can also take in a comp predicate...
	
	
	
}




















