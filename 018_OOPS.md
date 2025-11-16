## Object-Oriented Programming (OOP) — Notes

### What is OOP?
OOP is a paradigm organizing code around "objects" — entities that combine state (data) and behavior (methods). It improves modularity, reuse, and maintainability.

### Four Pillars
- Encapsulation
    - Bundle data and methods; hide internal state behind accessors.
    - Benefits: reduces coupling, protects invariants.
    - Example:
        ```cpp
        class Account {
            private:
                double balance;
            public:
                void deposit(double amt);
                double getBalance() const;
        };
        ```
- Abstraction
    - Expose relevant interfaces, hide implementation details.
    - Use abstract classes or interfaces to define contracts.
- Inheritance
    - Derive new types from existing ones to reuse and extend behavior.
    - Use `public` inheritance for "is-a" relationships.
    - Example:
        ```cpp
        class Animal { public: virtual void speak() = 0; };
        class Dog : public Animal { public: void speak() override { /* bark */ } };
        ```
- Polymorphism
    - Same interface, different implementations at runtime (virtual functions) or compile-time (templates/overloading).
    - Enables extensibility and substitution.

### Core Concepts & Language Features
- Classes & Objects
    - Class = blueprint; object = instance.
- Constructors & Destructors
    - Initialize and clean up resources.
    - Use initializer lists for members.
- Access Specifiers
    - `public`, `protected`, `private` control visibility.
- Virtual functions & overriding
    - Use `virtual` and `override`. Mark base destructors `virtual` if polymorphic.
- Abstract classes / Interfaces
    - Pure virtual functions (`= 0`) define interfaces.
- Composition vs Aggregation vs Inheritance
    - Composition: owns member objects (strong lifetime).
    - Aggregation: uses references/pointers (weaker lifetime).
    - Prefer composition over inheritance for flexibility.

### Memory & Resource Management
- RAII: tie resource lifetime to object lifetime.
- Prefer smart pointers (`std::unique_ptr`, `std::shared_ptr`) over raw pointers.
- Avoid object slicing: use pointers/references for polymorphic objects.

### Design Principles (brief)
- Single Responsibility Principle: one reason to change.
- Open/Closed Principle: open for extension, closed for modification.
- Liskov Substitution Principle: derived types must substitute base types safely.
- Interface Segregation Principle: many client-specific interfaces better than one general.
- Dependency Inversion Principle: depend on abstractions, not concretions.

### Best Practices
- Keep classes small and focused.
- Expose minimal public surface; prefer `const` where applicable.
- Favor composition, prefer interfaces for extensibility.
- Document ownership and lifetime semantics.
- Write unit tests for class behavior and invariants.

### Common Pitfalls
- Overusing inheritance for code reuse (use composition).
- Exposing internal state directly.
- Not making destructor virtual in base classes used polymorphically.
- Mixing responsibilities in a single class.

### Quick C++ Example (concise)
```cpp
class Shape {
public:
    virtual double area() const = 0;
    virtual ~Shape() = default;
};

class Rectangle : public Shape {
    double w,h;
public:
    Rectangle(double w,double h):w(w),h(h){}
    double area() const override { return w*h; }
};
```