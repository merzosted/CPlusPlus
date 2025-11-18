// isA and hasA -> these are examples of relationships between classes in object-oriented programming.
// if a class A is a derived from class B, then we say A "isA" B (inheritance).
// if a class A contains an object of class B, then we say A "hasA" B (composition).

// Access Specifiers -> Access specifiers define the accessibility of class members (attributes and methods).
// There are three access specifiers in C++:    
// 1. public: Members declared as public are accessible from outside the class.
// 2. private: Members declared as private are accessible only within the class itself.
// 3. protected: Members declared as protected are accessible within the class and by derived class instances.

// Types of Inheritance:
// 1. Single Inheritance: A derived class inherits from a single base class.
// 2. Multiple Inheritance: A derived class inherits from more than one base class.
// 3. Multilevel Inheritance: A derived class inherits from a base class, and another class inherits from that derived class.
// 4. Hierarchical Inheritance: Multiple derived classes inherit from a single base class.

// Diamond Problem in Inheritance:
// The diamond problem occurs in multiple inheritance when two derived classes inherit from the same base class,
// and a third class inherits from both derived classes. This can lead to ambiguity about which base class's properties or methods to use.
// C++ provides virtual inheritance to resolve this issue.
// Virtual Inheritance: A technique used to prevent multiple "instances" of a base class when using multiple inheritance.
// It ensures that only one instance of the base class is shared among all derived classes. The shared instance is created by the most derived class.


// Ways of Inheritance in C++:
// 1. Public Inheritance: Public and protected members of the base class remain public and protected in the derived class.
// 2. Protected Inheritance: Public and protected members of the base class become protected in the derived class.
// 3. Private Inheritance: Public and protected members of the base class become private in the derived class.

//Generalization vs Specialization:
// Generalization is the process of extracting shared characteristics from two or more classes and combining them into a generalized superclass. It is a virtual term for abstraction. eg. Shape is a generalization of Circle and Square.
// The purpose of Generalization is to achieve polymorphism.
// Specialization is the process of creating new subclasses from an existing class by adding specific attributes or behaviors.