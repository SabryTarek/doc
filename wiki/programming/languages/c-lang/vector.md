********************************************************************************************/

Iterators
=========
- Iterator is a pointer
- each STL Container have iterator for it spacficlly
- 

vector<int>::iterator it = v.begin;
vector<int>::iterator it = v.end;


vector<int>::reverse_iterator it;


- simple for loop :=:>> for(int i=0; i<v.size(); i++) {cout << v.at(i) << '\n';}



for(vector<int>::iterator it = v.begin; it!=v.end; it++) {
	cout << *it << '\n';
	}
	it=V.begin();
	
	while(it!=V.end())
	{
		cout<<*it<< '\n';
		it++;
	}
- for range loop :=:>> for(auto n : v) { cout << n << '\n';}


|---------|-------------------------------------------------------------------------------|
| Iterator|          Member function                                                      |
|---------|-------------------------------------------------------------------------------|
| begin   | Return iterator to beginning (public member function )                        |
| end     | Return iterator to end (public member function )                              |
|---------|-------------------------------------------------------------------------------|
| rbegin  | Return reverse iterator to reverse beginning (public member function )        |
| rend    | Return reverse iterator to reverse end (public member function ) 			  |
|---------|-------------------------------------------------------------------------------|
| cbegin  | Return const_iterator to beginning (public member function )                  |
| cend    | Return const_iterator to end (public member function )                        |
|---------|-------------------------------------------------------------------------------|
| crbegin | Return const_reverse_iterator to reverse beginning (public member function )  |
| crend   | Return const_reverse_iterator to reverse end (public member function )        |
|---------|-------------------------------------------------------------------------------|




/**************************************************************************************************************************************/









erase(int position):

Removes the element present at position.  
Ex: v.erase(v.begin()+4); (erases the fifth element of the vector v)
erase(int start,int end):

Removes the elements in the range from start to end inclusive of the start and exclusive of the end.
Ex:v.erase(v.begin()+2,v.begin()+5);(erases all the elements from the third element to the fifth element.)


map
---------

- at(k): returns the value associated with key k (works the same way as [] operator).

	- cout<<jobs.at("Ahmed")<<endl;
	- cout<<jobs["Ahmed"]<<endl;
- begin(): returns an iterator pointing at the start of the table.
- end(): Returns an iterator pointing to the past-the-end element. 
- empty(): Returns a bool value indicating whether the container is empty.
	- 	cout<<jobs.empty()<<endl;
- find(k): Searches the container for an element with k as key and returns an iterator to it if 
found, otherwise it returns the same iterator as the function end().
- insert(pair): inserts the key-value pair given as a parameter into the map.
	- jobs.insert(make_pair("Khaled", "Developer"));
- erase(k): removes the element with key k.
	- jobs.erase("Ahmed");

```c++
    map <string, string> jobs;

    jobs["Salma"]="Doctor";
    jobs["Ahmed"]="Engineer";
    jobs["Mohamed"]="Teacher";
```






- emplace_back == push_back faster than push_back as push_back stores values in temporary variable and then adds the value at the end of vector





	it=V.begin();
	V.emplace(it+2,50);

	cout<<"maximum = "<<*max_element(v.begin(),v.end())<<endl;
	cout<<"minimum = "<<*min_element(v.begin(),v.end())<<endl;

	if(binary_search(v.begin(), v.end(), 41))
		cout<<"41 found"<<endl;
	else
		cout<<"value not found"<<endl;



class student
{
public:
	int id;
	string name;
};

bool compare(student s1, student s2)
{
	return (s1.id<s2.id);
}

int main()
{
	vector<student> v; 
	student s;
	s.id=1; s.name="Ahmed"; v.push_back(s);
	s.id=7; s.name="Ali"; v.push_back(s);
	s.id=3; s.name="Hala"; v.push_back(s);

	sort(v.begin(), v.end(), compare);
	
	vector<student>::iterator it;
	it=v.begin();
	while(it!=v.end())
	{
		cout<<(*it).id<<" "<<(*it).name<<endl;
		it++;
	}



void triple(int& x)
{
	x=x*3;
}

int main()
{
	vector<int> v(10); 
	for(int i = 0; i < 10; i++)
	{
		v[i] = i+1;
	}

	for_each(v.begin(), v.end(), triple);

	vector<int>::iterator it;
	it=v.begin();

	while(it!=v.end())
	{
		cout<<*it<<endl;
		it++;
	}






v.begin() === begin(v)
all(c) stands for (c).begin(),(c).end()
	*min_element(v.begin(),v.end());
	*min_element(begin(v),end(v));
	*min_element(all(v));

copy(v.begin(), v.end(), l.begin());


  int myints[]= {15,36,7,17,20,39,4,1};
  list<int> mylist (myints,myints+8);   // 15 36 7 17 20 39 4 1

  mylist.remove_if (is_odd);               // 36 20 4

- map actually contains pairs of element

- STL does not have a built-in string splitting function


Implementation
============

- Set 

```c++
#include <iostream>
#include <set>
using namespace std;

int main()
{
    set <int> s;

    s.insert(1);
    s.insert(9);
    s.insert(9);
    s.insert(8);
    s.insert(0);
    s.insert(5);
    s.insert(0);
    s.insert(1);

    set <int> ::iterator it;
    for(it=s.begin(); it!=s.end(); it++)
    {
        cout<<*it<<endl;
    }
    return 0;
}

```
<br>
<br>

- Pair

```c++
#include <iostream>
using namespace std;

int main()
{
    pair <int, string> p;
    p.first= 1;
    p.second= "sabry";
    pair <int, string> b;
    b.first= 2;
    b.second= "tarek";
    cout<<p.first<<"- "<<p.second<<"\n"
        <<b.first<<"- "<<b.second<<endl;
    return 0;
}

```
<hr>

```c++
#include <iostream>
using namespace std;

int main()
{
    pair <T1, T2> make_pair(T1 x, T2 y);
    pair <int, string> p;
    p= make_pair(1, "sabry");

    cout<<p.first<<"- "<<p.second<<"\n";
    return 0;
}

```

<hr>

```c++
#include <iostream>
#include <vector>

using namespace std;
int main()
{

    vector<pair<string,string> > v;

    v.push_back(make_pair("Salma","Doctor"));
    v.push_back(make_pair("Ahmed","Engineer"));
    v.push_back(make_pair("Mohamed","Teacher"));

for(int i=0; i<v.size(); i++)
    {
    cout<<v[i].first<<" "<<v[i].second<<endl;
    }

    return 0;
}

```
<br>
<br>

- Map

``` c++
#include <iostream>
#include <map>

using namespace std;
int main()
{

    map <string, string> jobs;

    jobs["Salma"]="Doctor";
    jobs["Ahmed"]="Engineer";
    jobs["Mohamed"]="Teacher";

    cout<< jobs["Ahmed"]<<endl;


    return 0;
}

```
<hr>
```
c++
#include <iostream>
#include <map>

using namespace std;
int main()
{

    map <string, string> jobs;

    jobs["Salma"]="Doctor";
    jobs["Ahmed"]="Engineer";
    jobs["Mohamed"]="Teacher";

    map<string,string>::iterator it;

    for(it=jobs.begin();it!=jobs.end();it++)
    {
	cout<<it->first<<" "<<it->second<<endl;
    }


    return 0;
}


```