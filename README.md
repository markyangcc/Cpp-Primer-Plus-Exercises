# Cpp-Primer-Plus-Exercises

Cpp Primer Plus Exercises

## Chapter 10 Folder-001



### How to run the program?

1、From chapter-007 chapter-014 Exercise-002

The drive file(Mostly named drive.cpp) have include all dependance files.(It's not a good habit)

So when you run command like this,
```bash
$ g++ file1.cpp file2.cpp drive.cpp -o drive
```

You may run into multiple definition error.

#### How to solve this?
One way is replace the included .cpp file with just it's declaration file( .h ) and then run again.

The other way is just compile the drive.cpp file, because it include all dependance already.

2、From chapter 014 Exercise-003 and later
Run command like this, I change that horrible include way

```bash
$ g++ file1.cpp file2.cpp drive.cpp -o drive
```


### Why can run like a single file?

​    THIS IS BECAUSE I INCLUDE ALL DEPENDED FILES INTO <file where main() function in>.


## What do we learn after finish exercises?
### chapter 07
	
	Learn to use functions to work out problems

### chapter 08
	Learn functions overload
	Learn functions default values
	Learn template

### chapter 09
	Learn to use string object to replace char *
	Learn to use new memory in specific location
	Learn to use namespace

### chapter 10

	Learn to use class

### chapter 11

	Learn to overload different operators
	Learn to use friend functions when overloading operators

### chapter 12
	1 Learn to manage memory youeself with new and delete keyword in class

	2 Learn to use C Lib functions like, strcpy() to copy the entire content from memory, rather than the pointer
	(cause just copy the pointer will cause many problems. When delete the location one of the pointer to, the other pointers will be have no-where to pointe to. Many times, the output value will not meet your expectations)

	3 Learn to write copy constructor and self-overload assignment operater to avoid the problems mentioned in point 2

### chapter 13
	1 Learn to derive a class
	2 Learn to use Abstract Base Class (ABC) to inherit
	3 Learn when should ddefine a virtual function and when not to

### chapter 14
	1 Learn to use private inherit
	2 Something need to be note when using multiple inherit 
	3 Learn to use class template

### chapter 15
	1 Class can be another class's friend
	2 Learn to use exception
	3 Learn to use RTTI
