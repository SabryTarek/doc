/**************************************************************************************************************************************/

c++ Liberaries
- Standard Template Library
- collection of template classes
- Containers (Data Sraucutes)
- Algorthims (Template Functions)
- Iterators
- <complex> = complex number 

- <tuple>
- <regex>
- <string>
- <math>
- <cmath>
- <math.h>
- <string.h>
- <assert.h>

/**************************************************************************************************************************************/

- Container class templates

- Simple
	- pair

- Sequence containers:
	- <array>
	- <vector> (ArrayList)
	- <deque> (Double queue)
	- <forward_list> (Singliy LikedList)
	- <list> (Doubly LikedList)

- Container adaptors:
	- <stack>
	- <queue> (queue - priority_queue (heap))

- Associative containers: (Red-Black Tree)  -> stored contiguously in memory
	- <set>
	- <multiset>
	- <map>
	- <multimap>

- Unordered associative containers: (Hash Table)
	- <unordered_set>
	- <unordered_multiset>
	- <unordered_map>
	- <unordered_multimap>



Other:
Two class templates share certain properties with containers, and are sometimes classified with them:
	- <bitset>
	- <valarray>

/**************************************************************************************************************************************/




- Updating means inserting/deleting an element
- querying means searching/operating a particular element.
So just try to analyze which data structure is taking how much time for querying and updation.














#include <memory>

{
	std:: uniqe_ptr<int> e(new int[4]);
}




in 32-bit applications memry address is 32 bit
unction pointers are just
a way to assign a function to a variable

display() -> calling a function
display -> getting the function pointer
&display -> getting the function memory address


standard bind
void(*<function_pointer_name>)(int x) = greating;

typedef void(*func_ptr)(string);

func_ptr s = greating
s("sabry");

you cann't use a function as a first citizen but you can do it at function pointer

 function objects, and functors
 method pointers

 typedef void cherno(void);

cherno* func = HelloWorld;


With regular functions the & operator is optional but with a member function you have to use the & operator to get a pointer to itWith regular

used std::function binds without knowing this "raw" c function pointers










It's one of those ideas where the abstraction of concepts used in Assembly languages is taken to a more verbose vernacular only to have that technique used to generate less efficient machine code than more traditional methods of operations. I'm sure if we operate under the assumption that the same function would be used in the parameter for your forEach example, the compiler would know to inline the second parameter so that it says "PrintValue(value)" instead of "func(value)" inside the loop. Sadly, that would have to be boiled down to a local function map optimization pass that doesn't exists yet to my knowledge. Ultimately, we just assume a loss of LEA usage in exchange for IP stack pushes and pops in addition to a jmp, which in 64 bit world is a lot slower than either a 32 bit jmp instruction or any decent local usage of a SHORT jmp instruction.

If only would be mindful not to abuse virtual functions just for more flexible and unwittingly generating slower code, unless they know that it's the only option that they have and that they understand the speed tradeoff in the machine level when using function pointers.
 

Peterolen Thank goodness for godbolt.org where anyone can quickly check the assembly output directly without locally compiling the source code. Having that said, it's important to remember that just because a feature exists in the language to make high level code easier to read/comprehend, doesn't always mean you should use it over something that creates faster machine code at the end of the day. The big winner in the forEach assembly generation was inlining the vector construction and printValue function without its declaration inside of an ordinary for loop like this:

for (int value : {1,5,4,2,3} )
  std::cout << value << std::endl;

A surprising amount of assembly output code is removed when the vector parameter is removed in the forEach function and is instead inlined into the for loop of that function while you can still use the function pointer in forEach. Those were a couple of interesting observations that I've noticed when there weren't any optimization flags used.






What is the difference between:
void ForEach(const std::vector<int>& values, void(*func)()) and 
void ForEach(const std::vector<int>& values, void func () )
both work fine for me.



#include <functional>



stack is used to manage the function calls and returns in a computer program
queue is used to Printer Buffer





push_heap does the same thing we've seen with the
"tree vision" but in in "range vision"


std function:
- swap

/**************************************************************************************************************************************/

>>>>>>>>>>>>>>>>>>>>># [\<vector\>](http://www.cplusplus.com/reference/vector/vector/) [29]

vector intialization

| vector<int>v; | Defualt constrauctor size == capacity = zero there is no elements
| vector<int>v(5); | prametrized constractor //OUTPUT: 0  0  0  0  0
| vector<int>v {1,2,3,4,5,}; | 
| vector<int>v(arr.begin(, arr.end())); |  copy data from array


Initializing by one by one pushing values

>>>>>>>>>>>>>>>>>>>>>### Iterators: [8]
	- begin()
	- end()
	- rbegin()
	- rend()
	- cbegin()
	- cend()
	- crbegin()
	- crend()

>>>>>>>>>>>>>>>>>>>>>### Capacity: [7]
	- size() === int n = sizeof(arr) / sizeof(arr[0]); 
	- max_size()
	- resize()
	- capacity()
	- empty()
	- reserve()
	- shrink_to_fit()

>>>>>>>>>>>>>>>>>>>>>### Element access: [5]
	- operator[]
	- at()
	- front()
	- back()
	- data()

>>>>>>>>>>>>>>>>>>>>>### Modifiers: [9]
	- assign()
	- push_back()
	- pop_back()
	- insert()
	- erase()
	- swap()
	- clear() | v.clear();
	- emplace() | v.emplace(it+2,50);
	- emplace_back()

/**************************************************************************************************************************************/

>>>>>>>>>>>>>>>>>>>>># [\<algorithm\>](http://www.cplusplus.com/reference/algorithm/)  [85]

>>>>>>>>>>>>>>>>>>>>>### Non-modifying sequence operations: [17]
| Function | discription |
|----------|-------------|
| all_of() |  Test condition on all elements in range |
| any_of() |  Test if any element in range fulfills condition |
| none_of() |  Test if no elements fulfill condition |
| for_each() |  Apply function to range |
| find() |  Find value in range |
| find_if() |  Find element in range |
| find_if_not() |  Find element in range (negative condition) |
| find_end() |  Find last subsequence in range |
| find_first_of() |  Find element from set in range |
| adjacent_find() |  Find equal adjacent elements in range |
| count() |  Count appearances of value in range |
| count_if() |  Return number of elements in range satisfying condition |
| mismatch() | Return first position where two ranges differ |
| equal() | Test whether the elements in two ranges are equal |
| is_permutation() |   Test whether range is permutation of another |
| search() |  Search range for subsequence |
| search_n() |  Search range for elements |

>>>>>>>>>>>>>>>>>>>>>### Modifying sequence operations: [30]
   | Function | discription |
   |----------|-------------|
| copy() | Copy range of elements |
| copy_n() | Copy elements |
| copy_if() | Copy certain elements of range |
| copy_backward() | Copy range of elements backward |
| move() | Move range of elements |
| move_backward() | Move range of elements backward |
| swap() | Exchange values of two objects |
| swap_ranges() | Exchange values of two ranges |
| iter_swap() | Exchange values of objects pointed to by two iterators |
| transform() | Transform range |
| replace() | Replace value in range |
| replace_if() | Replace values in range |
| replace_copy() | Copy range replacing value |
| replace_copy_if() | Copy range replacing value |
| fill() | Fill range with value |
| fill_n() | Fill sequence with value |
| generate() | Generate values for range with function |
| generate_n() | Generate values for sequence with function |
| remove() | Remove value from range |
| remove_if() | Remove elements from range |
| remove_copy() | Copy range removing value |
| remove_copy_if() | Copy range removing values |
| unique() | Remove consecutive duplicates in range |
| unique_copy() | Copy range removing duplicates |
| reverse() | Reverse range |
| reverse_copy() | Copy range reversed |
| rotate() | Rotate left the elements in range |
| rotate_copy() | Copy range rotated left |
| random_shuffle() | Randomly rearrange elements in range |
| shuffle() | Randomly rearrange elements in range using generator |

>>>>>>>>>>>>>>>>>>>>>### Partitions: [5]
| Function | discription |
|----------|-------------|
| is_partitioned() | Test whether range is partitioned |
| partition() | Partition range in two |
| stable_partition() | Partition range in two | stable ordering |
| partition_copy() | Partition range into two |
| partition_point() | Get partition point |

>>>>>>>>>>>>>>>>>>>>>### Sorting: [7]
| Function | discription |
|----------|-------------|
| sort() | Sort elements in range |
| stable_sort() | Sort elements preserving order of equivalents |
| partial_sort() | Partially sort elements in range |
| partial_sort_copy() | Copy and partially sort range |
| is_sorted()  | Check whether range is sorted |
| is_sorted_until()  | Find first unsorted element in range |
| nth_element() | Sort element in range |

>>>>>>>>>>>>>>>>>>>>>### Binary search (operating on partitioned/sorted ranges): [4]
| Function | discription |
|----------|-------------|
| lower_bound() | Return iterator to lower bound |
| upper_bound() | Return iterator to upper bound |
| equal_range() | Get subrange of equal elements |
| binary_search() | Test if value exists in sorted sequence |

>>>>>>>>>>>>>>>>>>>>>### Merge (operating on sorted ranges): [7]
| Function | discription |
|----------|-------------|
| merge() | Merge sorted ranges |
| inplace_merge() | Merge consecutive sorted ranges |
| includes() | Test whether sorted range includes another sorted range |
| set_union() | Union of two sorted ranges |
| set_intersection() | Intersection of two sorted ranges |
| set_difference() | Difference of two sorted ranges |
| set_symmetric_difference() | Symmetric difference of two sorted ranges |

>>>>>>>>>>>>>>>>>>>>>### Heap: [6]
| Function | discription |
|----------|-------------|
| push_heap() | Push element into heap range |
| pop_heap() | Pop element from heap range |
| make_heap() | Make heap from range |
| sort_heap() | Sort elements of heap |
| is_heap()  | Test if range is heap |
| is_heap_until() | Find first element not in heap order |

>>>>>>>>>>>>>>>>>>>>>### Min/max: [6]
| Function | discription |
|----------|-------------|
| min() | Return the smallest |
| max() | Return the largest |
| minmax()  | Return smallest and largest elements |
| min_element() | Return smallest element in range |
| max_element() | Return largest element in range |
| minmax_element() | Return smallest and largest elements in range |

>>>>>>>>>>>>>>>>>>>>>### Other: [3]
| Function | discription |
|----------|-------------|
| lexicographical_compare() | Lexicographical less-than comparison |
| next_permutation() | Transform range to next permutation |
| prev_permutation() | Transform range to previous permutation |

/**************************************************************************************************************************************/
>>>>>>>>>>>>>>>>>>>>># [\<bitset\>](http://www.cplusplus.com/reference/bitset/bitset/)  [85]


not support:
- <
- >

- any()
- count()
- flip()
- reset()
- set()


>>>>>>>>>>>>>>>>>>>>>### Bit access: [7]
| Function |       Discription        |
|----------|--------------------------|
| []       | Access bit               |
| count()  | Count bits set           |
| size()   | Return size              |
| test()   | Return bit value         |
| any()    | Test if any bit is set   |
| none()   | Test if no bit is set    |
| all ()   | Test if all bits are set |


>>>>>>>>>>>>>>>>>>>>>### Bit operations: [3]
| Function | discription |
|----------|-------------|
| set()    | Set bits    |
| reset()  | Reset bits  |
| flip()   | Flip bits   |

>>>>>>>>>>>>>>>>>>>>>### Bitset operations: [3]
|   Function  |           Discription            |
|-------------|----------------------------------|
| to_string() | Convert to string                |
| to_ulong()  | Convert to unsigned long integer |
| to_ullong() | Convert to unsigned long long    |

Non-member function overloads
applicable operators
Bitset operators (function )

Non-member class specializations
hash<bitset> 
Hash for bitset (class template specialization )


/**************************************************************************************************************************************/

>>>>>>>>>>>>>>>>>>>>># [\<numeric\>](http://www.cplusplus.com/reference/vector/vector/) [29]


Set Theory
Group Theory
Abstract algebra
	Category Theory


----------------------------------------------------------------------------------------------------------------------------------------------------------

[C Standard library] functions or simply [C Library] functions are inbuilt functions in C programming.
- .a files are static libraries, .so means shared object and is the Linux equivalent of a DLL
