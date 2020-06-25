#include <iostream>     
#include <algorithm>    
#include <vector>       
#include <memory>

using namespace std;

int main () {
  int first[] = {5,10,15,20,25};
  int second[] = {50,40,30,20,10};
  vector<int> v(10);                      // 0  0  0  0  0  0  0  0  0  0
  vector<int>::iterator it;

  sort (first,first+5);     //  5 10 15 20 25
  sort (second,second+5);   // 10 20 30 40 50

  it=set_intersection (first, first+5, second, second+5, begin(v));
                                               // 10 20 0  0  0  0  0  0  0  0
  /*******************************************************8*/v.resize(it-v.begin());                      // 10 20

  
  for (it=v.begin(); it!=v.end(); ++it)
    cout << ' ' << *it;
  cout << '\n';

  return 0;
}


// list::merge
/*#include <iostream>
#include <list>

using namespace std;

int main ()
{
  list<double> first, second;

  first.push_back (3.1);
  first.push_back (2.2);
  first.push_back (2.9);

  second.push_back (3.1);
  second.push_back (7.1);
  second.push_back (1.4);

  first.sort();
  second.sort();

  first.merge(second);

  // (second is now empty)

  cout << "first contains:";
  for (list<double>::iterator it=first.begin(); it!=first.end(); ++it)
	cout << ' ' << *it;
  cout << '\n';

  return 0;
}*/






////merging lists of objects
/*#include <iostream>
#include <list>
#include <string>

using namespace std;

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
	list<student> l1; 
	student s;
	s.id=1; s.name="Ahmed"; l1.push_back(s);
	s.id=7; s.name="Ali"; l1.push_back(s);
	s.id=3; s.name="Hala"; l1.push_back(s);

	list<student> l2;
	s.id=5; s.name="Mohamed"; l2.push_back(s);
	s.id=2; s.name="Hussein"; l2.push_back(s);


	l1.sort(compare);
	l2.sort(compare);

	l1.merge(l2, compare);

	for (list<student>::iterator it=l1.begin(); it!=l1.end(); ++it)
		cout<<(*it).id<<" "<<(*it).name<<endl;


	return 0;
}*/





{
	std::uniqe_ptr<int> e(new int[4]);
	std::uniqe_ptr<int>e =  std::make_uniqe<int>();
  
}
when the scope end the uniqe pointer will destroyed