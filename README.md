- [Compilation Process](#compilation-process)
- [EOF (End of File)](#eof-end-of-file)
- [2) Variables & Basic Types](#2-variables--basic-types)
  - [Literals](#literals)
  - [Variable](#variable)
  - [Compound Types](#compound-types)
  - [References](#references)
  - [Pointers](#pointers)
  - [Type Aliases - Opt1) typedef](#type-aliases---opt1-typedef)
  - [Type Aliases - Opt2) "using"](#type-aliases---opt2-using)
  - [decltype](#decltype)
  - [Defining our own data structures](#defining-our-own-data-structures)
  - [Writing out own header files](#writing-out-own-header-files)
- [3) Strings, Vectors & Arrays](#3-strings-vectors--arrays)
  - [String Library](#string-library)
  - [Defining Strings](#defining-strings)
  - [Operations on Strings](#operations-on-strings)
  - [>> operator VS getline()](#-operator-vs-getline)
  - [Vector Library](#vector-library)
  - [Iterators](#iterators)
  - [Arrays](#arrays)
  - [Pointers & arrays](#pointers--arrays)
- [4) Expressions](#4-expressions)
  - [lvalues and rvalues](#lvalues-and-rvalues)
  - [combiing deref and increment in single expr](#combiing-deref-and-increment-in-single-expr)
  - [member access operators](#member-access-operators)
  - [```sizeof``` operator](#sizeof-operator)
- [5) Statements](#5-statements)
  - [switch cases](#switch-cases)
  - [```do while```](#do-while)
  - [```goto``` statement](#goto-statement)
  - [```try``` blocks & exception handling](#try-blocks--exception-handling)
    - [```throw``` exception](#throw-exception)
    - [```try``` block](#try-block)
    - [Standard exceptions](#standard-exceptions)
- [6) Functions](#6-functions)
  - [function return types](#function-return-types)
  - [```static```](#static)
  - [function declarations](#function-declarations)
  - [seperate compilation](#seperate-compilation)
  - [Argument Passing](#argument-passing)
    - [Pointer Parameters](#pointer-parameters)
    - [Reference Parameters](#reference-parameters)
    - [```const``` parameters](#const-parameters)
    - [Array parameters](#array-parameters)
      - [1) Use an array marker (C-style)](#1-use-an-array-marker-c-style)
      - [2) standard library conventions](#2-standard-library-conventions)
      - [3) explicitly pass a size parameter](#3-explicitly-pass-a-size-parameter)
    - [array ref parameters](#array-ref-parameters)
    - ["multidimensional" array parameters](#multidimensional-array-parameters)
    - [```main()``` handling CLI options](#main-handling-cli-options)
    - [functions with varying parameters](#functions-with-varying-parameters)
      - [```initializer_list``` parameters](#initializer_list-parameters)
      - [ellipsis parameters ```...```](#ellipsis-parameters-)


# Compilation Process

![](media/cpp_compilation.png)

# EOF (End of File)
* unix - ctrl + D
* windows - (ctrl + z) then Enter

# 2) Variables & Basic Types

* mixing unsigned and signed types can produce unexpected behaviour.
  
## Literals

```cpp
// char literal
'a'
// string literal
"hello"
// compiler always appends a null char '\0' to string literlas. 
// Hence, actual size of string literals is one more than apparrent.
```

## Variable

* declaration - introduce an identifier. It's what the **compiler** needs.
* definition- instantiate the identifier. It's what the **linker** needs.
```cpp
// extern keyword tells compiler that a var is defined in another source module.
extern int x;
```

## Compound Types

* compound types - a type that is defined in terms of another type. e.g. pointers & references.

## References
* references are not objects. It's another name for an already existing object.
* references must be initialised.
* references can't be rebinded.
```cpp
// & is the address of operator.
int x = 2;
int &ref = x;

ref += 1;
// prints 3.
cout << x;
// prints the addresses of x & ref, which are the same.
cout << &x << endl;
cout << &ref << endl;
```

## Pointers

* pointers ARE objects.
* pointers hold the address of another object.
* pointers do not have to be initialised.

```cpp
int x = 0;
// define the pointer. It 'points' to the address of x.
int *ptr = &x;

// 1) print the address of x.
cout << &x << endl;
// 2) print the address of x. 1 = 2.
cout << ptr << endl;
// 3) print the address of the pointer itself 3 != 1.
cout << &ptr << endl;
// 4) print the value of the memory address ,which is x = 0.
cout << *ptr << endl;
```

## Type Aliases - Opt1) typedef

* typedef allows us to use another name for a data type.

```cpp
// DOUB becomes a synonym for double
typedef double DOUB;
// the following two are now equivalent
double x;
DOUB x;
```

## Type Aliases - Opt2) "using"

```cpp
// DOUB becomes a synonym for double
using DOUB = double;
```

## decltype

* can use decltype() to define a var with a type that the compiler deduces from an expresion (but do not want to use that expression to init the variable)

```cpp
// the datatype of sum is whatever type that f() returns.
decltype(f()) sum;
```

## Defining our own data structures

* in cpp, we define our own data types by using classess/structs.
* The default accessability of member vars & methods in structs are public, in a class they are private.

```cpp
// example struct
struct Ice_Cream_Van{
unsigned double milk_pct = 20;
int sugar = 15;
std::string name;
};

// declaring a struct
Ice_Cream_Van korneto;
korneto.sugar = 30;
```

## Writing out own header files

* To ensure that class defs are the same in each file, classess are usually defined in header files. Typically, header names are derived from the name of the class within. 
* Since headers often need to use facilities from other headers, "double imports" can occur which lead to errors. **header guards** come to save the day. 
* every '#' is read before anything else in the compilation process, by the preprocessor.
```cpp
// inside ice_cream_van.h
// 
#ifndef ICE
#define ICE
struct Ice_Cream_Van{
unsigned double milk_pct = 20;
int sugar = 15;
std::string name;
};
#endif
```
```cpp
// inside ice_cream_van.h
// Alternatively:
#pragma once
struct Ice_Cream_Van{
unsigned double milk_pct = 20;
int sugar = 15;
std::string name;
};
```

# 3) Strings, Vectors & Arrays

## String Library

For the String section, assume
```cpp
#include <string>
using std::string;
using std::cin;
using std::cout;
```

## Defining Strings
```cpp
// hiya
string s1 = "hiya";
// cccccccccc
string s2(10, 'c');
// a copy of the string literal hiya, without null char.
string s3("hiya");
```
## Operations on Strings

```cpp
// send s to output stream os
os << s;
// input stream is accepts s
is >> s;
// true if string is empty
s.empty();
// number of chars in s
s.size();
// returns a reference to the char in position n in s.
s[n];
```

## >> operator VS getline()
* getline(arg1: input stream, arg2: string line)
* cin ignores any leading whitespaces
* getline() does not. One line is until a \n is encountered.
* getline also does not store the new line .

## Vector Library
* a vector is a collection of objects, all of which have the same type.
* a vector is often referred to as a container, because it contains other objects.
* a vector is a **class template**, not a type. Types generated from vector must include the element type, e.g. ```vector<int>```

```cpp
#include <vector>
using std::vector;

// different ways of initialising
vector<int> ivec;
// following are equivalent
vector<string> articles = {"a", "an", "the"};
vector<string> articles{"a","an","the"};

// add element to ivec
ivec.push_back(3);
```

## Iterators

* types that have members that return iterators have members called ```begin``` and ```end```.
* ```begin`` denotes first element
* ```end``` returns one past the end of the container.
* if container is empty then begin and end return the same iterators.
* we do not generally care about the types returned by iterators, so we use ```auto```.
* to return constant iterators (access but not write, like constant pointers), we use ```cbegin``` and ```cend```.

## Arrays

* Like vectors, an array is a container of unnamed objects.
* Unlike vectors, arrays have fixed size. Hence, they sometimes offer better runtime performacne.
* when initialising arrays, the dimension specified must be a ```constexpr```.

## Pointers & arrays

```cpp
string nums[] = {"one", "two", "three"};
// the following are equivalent
// they point to first element in array.
string *p = &nums[0];
string *p2 = nums;
```cpp
// iterarting over an array using iterators
int arr[] = {0,1,2,3,4,5,6,7,8,9};
int beg = begin(arr); 
int end = end(arr); 
// easy manipulation from here.
```

# 4) Expressions

* unary operators - operators that work on one operand. e.g. &
* binary operators - operators that work on two operands.
* ternary operators - three operands.
* overloaded operator - when operators have alternative meanings in their class types as compared to their built-in type

## lvalues and rvalues

* roughly speaking, when we use an object as an lvalue, we use the objects location in memory. When we use an object as an rvalue, we use the object's contents.
* generally, we can use an lvalue when an rvalue is required, but we can't use an rvalue when an lvalue is required.

* left hand operand of an assignment operator must be a **modifiable l value**

* binary operators are left associative, assignment is right associative.

## combiing deref and increment in single expr

```cpp
auto pbeg = v.begin();
// print elements up to the first negative value
while (pbeg != v.end() && *beg >= 0)
  cout << *pbeg++ << endl; // print the current value and advance pbeg
```
* ```*pbeg++``` equivalent to ```*(pbeg)++```
* pbeg increments pbeg and yields a copy of previous value of pbeg
* * retrieves the unincrimented value of pbeg

## member access operators

```cpp
string s1 = "a string", *p = &s1;
auto n = s1.size(); // run the size member of the string s1
n = (*p).size(); // run size on the object to which p points
n = p->size(); // equivalent to (*p).size()
```

## ```sizeof``` operator

  * ```sizeof``` returns size in byte of an expr or type. The return is a constexpr.
  
  ```cpp
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size_arr = sizeof(arr) / sizeof(*arr);

    // prints num of elements in arr.
    cout << size_arr;
  ```

# 5) Statements

* expression statements are terminated by a ;
* null satements are a single semicolon. Can be useful in reading from cin until a particular value is encountered.
  
```cpp
while (cin >> s && s != sought){
  ; // null statement. 
}
```

## switch cases

```cpp
// initialize counters for each vowel
unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
char ch;
while (cin >> ch) {
 // if ch is a vowel, increment the appropriate counter
 switch (ch) {
    case 'a':
      ++aCnt;
      break;
    case 'e':
      ++eCnt;
      break;
    case 'i':
      ++iCnt;
      break;
    case 'o':
      ++oCnt;
      break;
    case 'u':
      ++uCnt;
      break; 
    default:
      cout << "nothing" << endl;
      break;
  }
}
```

* case labels must be integral constant expressions
* we must explicitly tell the compiler to stop i.e. ```break``` in each case, otherwise it continues with the other cases.
* the ```default``` label is called if no other cases are called.

## ```do while```

* do while are first executed and then checked. Hence, they are always executed atleast once.

## ```goto``` statement

```cpp
cout << "one" << endl;
goto a;
// two and three are skipped
cout << "two" << endl;
cout << "three" << endl;
// we "goto" a
a:
  cout << "four" << endl;
```

## ```try``` blocks & exception handling

### ```throw``` exception

* consits of keyword ```throw``` followed by expression (the type of error to throw)
  
```cpp
throw runtime_error("Data must refer to same ISBN");
```

### ```try``` block

```cpp
try {
  int x = get_value()
} catch (runtime_error err){
  cour << err.what()
}
```

### Standard exceptions

* ```exception``` header defined general exceptions
* ```stdexcept``` defines several general purpose exceptions. The exception types define a single operation ```what```. it accepts a ```const char*```, and its purpose is to give context.

# 6) Functions

## function return types
* function return type cannot be an array type or a function type
* function return types can be pointers to arrays or functions
  
## ```static```
* local static objects are not destroyed when a function ends. They are destroyed when the program ends.
  
```cpp
size_t count_calls()
{
 static size_t ctr = 0; // value will persist across calls
 return ++ctr;
}

int main()
{
  for (size_t i = 0; i != 10; ++i){
    cout << count_calls() << endl;
  return 0;
  } 
}
```

## function declarations
* put function prototypes in header files

## seperate compilation

* can either seperately compile every cpp file into multiple executeables or link them into one.
  
## Argument Passing

### Pointer Parameters

```cpp
// function that takes a pointer and sets the pointed-to value to zero
void reset(int *ip)
{
 *ip = 0; // changes the value of the object to which ip points
 ip = 0; // changes only the local copy of ip; the argument is unchanged
}

int main(){
  int i = 42;
  reset(&i);// changes i but not the address of i
  cout << "i = " << i << endl; 
}
```

### Reference Parameters

```cpp
void reset(int &i) {
    i = 0;
}

int main()
{
    int x = 5;
    
    reset(x); // x becomes 0.

    cout << x;
}

```

### ```const``` parameters

* keep in mind the difference between top-level and low-level const.
* can init object with low level const from a non-const object, but not vice versa.
* use **const refs** instead of **refs** when only reading the value and not changing it.

### Array parameters

* cannot copy an array, so we cannot pass an array by value. Because arrays are converted to pointers, when we pass an array to a function, we are actually passing a pointer to the array's first element.
* because arrays are passed as pointers, functions don't know the size of the array. **we can manage pointer parameters in different ways**.

#### 1) Use an array marker (C-style)
* e.g. null character for the last element.

#### 2) standard library conventions
* can post parameters pointing to both the beginning and end of array. recall ```begin()``` and ```end()```.

#### 3) explicitly pass a size parameter
* define a second parameter, explicitly stating the size of the array.

### array ref parameters

```cpp
// ok: parameter is a reference to an array; the dimension is part of the type
// parantheses around arr are necessary
void print(int (&arr)[10])
{
 for (auto elem : arr) cout << elem << endl;
}
```

### "multidimensional" array parameters
* i.e array of arrays.
```cpp
// matrix points to the first element in an array whose elements are arrays of ten ints
void print(int (*matrix)[10], int rowSize) { /* . . . */ }
```

### ```main()``` handling CLI options

* can pass args to main to handle CL options when running executeable.

### functions with varying parameters

#### ```initializer_list``` parameters
* we can write a fct that takes an unknown number of args of same type by using an ```initializer_list``` parameter.
*  It's a library type that represents an array of values of specified type.
*  ```initializer_list``` is a template type, like ```vector```.
*  they have the same begin and end operations as in vector.
*  elements in the init_list are always const.
*  they are defined with curly braces.
  
#### ellipsis parameters ```...```
* ellipisis params are used to itnerface with a C lib named ```varargs```.

**page 315**