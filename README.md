# Data Structure 2015

# Lecture Log

#### (2016-Jan-04) 
This is the first meeting. All sections attend the same room. Basically, all you need to know is that this class is 3-0-6 style, which means that you have to study by yourself for 6 hours with 3 hours classroom.

#### (2016-Jan-06)
See [lab07](lab01). We are still on the introduction. We consider more in-depth usage of data structure through a problem of _counting the number of unique words_. It is shown that this can be done by iterating over all text and maintaining a collection of words that we have seen so far. The number of words in the collections is the answer. However, maintaining a list of word and checking if a text that we have just read is in the collection is somewhat non-trivial. With different implementation using different kind of collection (array, vector, set), the running time varies greately. 

**In-class exercise:** The example shown in the class is counting _the number of unique words_. We extend this problem a little bit further. You have to write a program that _count_ the number of occurance of each word.

**Topics:** How Data Structure helps our coding.

#### (2016-Jan-18)
See [lab02](lab02). For this period, we start with a very basic data structure called `pair`. We familiarize ourself with the notion of _Template_, i.e., specification of types into a class. For example, `pair<int,string>` is a data structure that holds `int` and `string` together.

Additionally, we also talk about vector. A vector is a _smart_ array. It works like an array such that we can access its element by numeric indices such as v[0], v[1], v[400]. Moreover, vector does not require us to declare its size. It can extend itself to cover the items that we put in it. Several access and modifier function are given such as `insert()`, `delete()`, `front()`, `pop_back()`, etc.

**In-class exercise:** Write a program that receive a series of `n` integers from the user, the task is to create a vector that contains items in reverse order that the user have given. (see [reverse.cpp](lab02/exercise/reverse.cpp) for the starting code)

**Topics:** `std::pair`, using template class (such as pair<int,int>), `std::vector`, How to read the document of each data structure

#### (2016-Jan-20)
See [lab03](lab03). We talked about `iterator`. Most of the data structure in this class will hold several _data_ in them. Each data structure usually have their own ways to access each item of these data. Iterator is a common way to access it. We can think of the iterator as a "a variable that _refers_ to an item". All data structure supports .begin() which is the iterator that refers to the first items. All iterator supports ++, .i.e., we can do `it++` to move the iterator to refer to the next item. Please see [iter.cpp](lab03/iter.cpp) for examples.

**In-class exercise:** We continue from the previous session, the problem of reverse vector. But this time, you have to write it using iterator without using the `[ ]` operator of a vector.  Moreover, a code that reads input from user and display the output are fixed so that we actually have to _reverse_ the actual vector.

**Topics:** iterator, `auto` keywords, `->` operator of iterators, `.begin()` and `.end()`

#### (2016-Jan-25)
See [lab04](lab04). `set` is the key data structure in this session. We have discussed set in breif earlier. `set`, as the name implies, contains distinct items. It is non-associative, meaning that item in the data structure is not associated with any index. We cannot identify s[0], s[1], s[2], or something like that. We have to access it via `s.find(value)`. Set is specialized in searching, using `s.find(value)` is very fast with respect to vector. This is the list of important function of set and their complexity
- `s.insert(a)` is O(lg n)
- `s.erase(a)` is O(lg n)
- `s.find(a)` is O(lg n)
 

_No in-class exercise_

**Topics:** `std::set`, The different in speed of `set` and `vector`, helper function from `<algorithm>`: `.find()`

#### (2016-Jan-27) 
See [lab05](lab05). For this session, we assume that most of you have already read the class `map`. We skimmingly see several usage example of class `map`. The key idea is that a `map<KeyT,MappedT>` maps a key of type `KeyT` to a value of type `MappedT`. Map can be use with an array-like syntax. However, the underlying mechanics are very different. These are some major performance.
- Inserting (via `m.insert(make_pair(a,b))` or calling `m[a] = b`) takes O(lg n)
- Deleting (via `m.erase(a)`) also takes O(lg n)
- Searching (via `m.find(a)`) also takes O(lg n)
- Iterator of map cannot be used in _Random Access_ fashion, i.e., we cannot do m.begin()+10, but we can m.begin()++ or --m.end()

Notice that these are the same as set's. This is because internally, `map` and `set` are very similar data structure.

Another data structure discussed in this session is `priority_queue`. It is a data structure that allows quick lookup of the "largest" value while adding and removing is relatively fast.

The class std::map, std::priority_queue and std::set requires that the data stored in them must support _ordering_. Many type of data already support ordering by using comparison (such as a < b). For example, we can compare the basic data types such as, int, string, float, double directly. (Vector<T> and pair<T1,T2> support comparison when the template type support it.). However, other classes usually do not provide comparison. We can create our own comparison in several methods. This session shows one way to do this. It is _custom comparator_. Please see [map_custom_sort_demo.cpp](lab05/map_custom_sort_demo.cpp) for examples.

**In-class exercise:** From a given list of people and their height, identify k highest ones. (see [max_height.cpp](lab05/exercise/max_height.cpp).)

**Topics:** `std::map`, `std::priority_queue`, custom comparator

#### (2016-Feb-01)
See [lab06](lab06). We have discussed `queue` and `stack`. Queue and Stack (and Priority Queue) have only a few methods. They are specialized Data Structure that can do very limits but they do them very well. Queue is specialized in FIFO with O(1) in all operations. Stack is LIFO with O(1). Several applications of Stack and Queue are discussed. One particular interesting demo is the "*3/2" problem. It uses _search_ algorithm (more on this in the next class) to identify the solutions. The algorithm requires use of two data structure, one to store nodes that needs to be expanded in order that it is generated, one to stores the tree of generated nodes.

**Topics:** `std::queue`, `std::stack`, *3/2 problem, postfix evaluation, parenthesis checking

#### (2016-Feb-03)
We have a quiz today.

#### (2016-Feb-08)
See [lab07](lab07). This session sees the start of the _development_ of our own data structure. A _Class_ in C++ is briefly review. It is almost the same as the class in Java where you are already familiar with. Two new concepts are shown: _constructor_ and _Operator Overloading_. Constructors of C++ are slightly different from that of Java. There are several types of constructor which are used in different situation. Overloading of Operator is entirely new concept. It allows us to define custom action for operator, such as +, ==, =, <, etc (see [main_overload.cpp](lab07/pair_demo/main_overload.cpp)).

_No in-class exercise_

**Topics:** class in c, header file (.h), #include, #ifndef, various kind of constructors, `CP::pair`, operator overloading, Pass-by-Reference vs Pass-by-Value in function (such as void test(&x)), `this->`, `const` keyword

#### (2016-Feb-10)
See [lab08](lab08). The first _non trivial_ data structure, CP::vector is discussed. Vector is an array that can extend itself indefinitely. The idea of automatically extending the array is the key idea of vector. Moreover, We use vector to introduce several conventions that will be used in upcoming data structures. This includes `.size()`, `.empty()` and some of the constructor. We also see  life cycle of an object, we see when the constructor and destructor is called. 

A major topic in this session is _pointer_. Pointer is a _modifier_ type of variable. Every type can be made pointer. A variable name `x` of pointer type of type `T` is declared as `T *x` where `x` stores the _memory address_ of a variable of type `T`. Please see also [pointer_demo](lab08/pointer_demo/) for more details.

**In-class exercise:** Write a `triplet` class which is an extension of `pair` into a class that contains 3 members of various types. 

**Topics:** Pointers, Array as Pointers, Constructor, Destructor, Initialization List syntax, operator `new`

#### (2016-Feb-15)
We continue with the class CP::Vector. We see how it is extended automatically and how using pointer allow this to be done easily. We also see how the iterator is implemented. Essentially, an iterator of a vector is implemented as a pointer. However, when a vector is expanded automatically, the iterator which is a pointer is _invalidated_ and cannot be used.

**Topics:** Automatic expansion of vector via the use of pointers, invalidation of iterator.

**In-class exercise:** Write additional non-stl function for CP::vector. (See [lab09/exercise](lab09/exercise).)

#### (2016-Feb-17)
The last session before the second quiz and midterm. We discussed the class CP::queue (see [lab10](lab10)). 

**Topics:** Circular queue

**In-class exercise:** Write a simple queue that supports the operation of queue by using just only a vector. This will result in a sub-performance queue that simply works. 

