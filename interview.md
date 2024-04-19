[Original post question](https://dou.ua/lenta/articles/c-sharp-developer-interview-questions/?from=recent)


# Співбесіда з C# розробником. 150+ запитань для рівня Junior, Middle, Senior

## 1. What are the main principles of OOP? How are they implemented in C#
Які основні принципи ООП? Як вони реалізовані в C#?

## The main principles of Object-Oriented Programming (OOP) are:

### Encapsulation: 
Encapsulation refers to the bundling of data and methods that operate on the data into a single unit or class. This allows for better control over access to the data and ensures that the data is only accessed and modified through well-defined interfaces.

### Inheritance:
Inheritance allows a class (subclass or derived class) to inherit properties and behaviors (methods) from another class (superclass or base class). This promotes code reusability and allows for the creation of hierarchical relationships between classes.

### Polymorphism: 
Polymorphism allows objects of different classes to be treated as objects of a common superclass. This enables flexibility in programming by allowing methods to operate on objects of various types and to exhibit different behaviors based on the object type.

### Abstraction: 
Abstraction refers to the process of simplifying complex systems by modeling classes based on their essential characteristics and hiding unnecessary details. This allows programmers to focus on the relevant aspects of the system and promotes code maintainability and scalability.

## In C#, these principles are implemented as follows:

### Encapsulation: 
Encapsulation in C# is achieved through the use of access modifiers such as public, private, protected, and internal to control the visibility of class members. Properties and methods can be used to provide controlled access to class fields, ensuring data integrity.

### Inheritance: 
In C#, classes can inherit from other classes using the : syntax. Derived classes inherit members (fields, properties, methods) from their base classes, allowing for code reuse. C# also supports single inheritance of classes but multiple inheritance of interfaces through the use of interfaces.

### Polymorphism: 
Polymorphism in C# can be achieved through method overriding and method overloading. Method overriding allows derived classes to provide a specific implementation of a method defined in a base class, while method overloading allows multiple methods with the same name but different parameter lists to coexist within a class.

### Abstraction: 
Abstraction in C# can be achieved through the use of abstract classes and interfaces. Abstract classes define abstract methods that must be implemented by derived classes, allowing for the creation of common behavior among related classes. Interfaces define a contract that classes must adhere to by implementing all the members defined in the interface, promoting code interoperability and flexibility.


## 2. Які проблеми вирішуються цим підходом? Які недоліки ООП? 
2. What problems are addressed by this approach? What are the drawbacks of OOP?

## Object-Oriented Programming (OOP) addresses several problems in software development:

### 1. Complexity Management
OOP allows for the organization of code into manageable units (objects/classes), reducing complexity by breaking down a system into smaller, more understandable pieces.

### 2. Code Reusability
Through features like inheritance and polymorphism, OOP promotes code reuse, leading to more efficient and maintainable codebases. Common functionalities can be encapsulated in reusable classes, reducing redundancy and promoting modularity.

### 3. Modifiability and Scalability
OOP supports modular design, enabling changes to be made to one part of a system without affecting other parts. This enhances the maintainability of code and facilitates scalability as systems can be easily extended by adding new classes or modifying existing ones.

### 4. Abstraction and Encapsulation 
OOP encourages the use of abstraction to represent real-world entities as objects with well-defined interfaces. Encapsulation ensures that the internal details of objects are hidden, promoting information hiding and reducing system complexity.

## Drawbacks

### 1. Overhead
OOP can introduce overhead in terms of memory and processing resources, especially in languages with dynamic dispatch mechanisms like virtual method calls.

### 2. Complexity 
While OOP helps manage complexity to some extent, it can also lead to overly complex designs if not used judiciously. Inheritance hierarchies can become convoluted, making the system harder to understand and maintain.

### 3. Difficulty in Modeling Real-World Concepts
Not all real-world problems map neatly to object-oriented models. Some domains may be better suited to other paradigms such as functional programming or procedural programming.

### 4. Performance Impact 
In certain scenarios, the overhead introduced by features like inheritance, dynamic dispatch, and object creation can impact performance, especially in resource-constrained environments or performance-critical applications.

## 3.Explain the concept of encapsulation in object-oriented programming and how to implement it using C#.
3. Поясніть концепцію інкапсуляції в об’єктноорієнтованому програмуванні та як її реалізувати за допомогою C#.

The concept of encapsulation in object-oriented programming (OOP) involves bundling data and methods that operate on that data into a single unit or class, and controlling access to that data through well-defined interfaces. This means that the internal state of an object is hidden from the outside world, and can only be accessed or modified through designated methods or properties.

## Encapsulation serves several purposes:

### Data Hiding
By encapsulating data within a class, you can hide the internal state of objects from external code, which prevents direct manipulation of the data and helps maintain data integrity.

### Abstraction
Encapsulation allows you to abstract away the implementation details of how data is stored and manipulated, exposing only the essential features and behaviors of an object through its interface.

### Modularity
Encapsulation promotes modularity by encapsulating related data and behavior into cohesive units, which makes it easier to manage and maintain code as it scales.

In C#, encapsulation can be achieved using access modifiers such as public, private, protected, and internal to control the visibility of class members (fields, properties, methods). Here's how encapsulation can be implemented in C#:

```csharp
public class Car
{
    // Private field encapsulated within the Car class
    private string make;

    // Public property to access and modify the make field
    public string Make
    {
        get { return make; }
        set { make = value; }
    }

    // Private field encapsulated within the Car class
    private int year;

    // Public property to access and modify the year field
    public int Year
    {
        get { return year; }
        set 
        {
            // Validate input before setting the value
            if (value > 0)
            {
                year = value;
            }
            else
            {
                // Throw an exception or handle the invalid input appropriately
                throw new ArgumentException("Year must be greater than 0.");
            }
        }
    }

    // Method encapsulated within the Car class
    public void Start()
    {
        // Implementation details of starting the car
    }
}
```


## 4. Чи можете ви пояснити концепцію успадкування в C# та навести приклад, де вона може бути використана в програмі?

The concept of inheritance in C# allows for the creation of new classes based on existing ones. A class that inherits functionality is called a derived class or subclass, while a class whose functionality is inherited is called a base class or superclass.

## Inheritance enables:

Code Reusability: Derived classes can inherit properties and methods from a base class, thus facilitating code reuse.

Functionality Extension: Derived classes can add new properties and methods or modify existing ones, thereby extending the functionality of the base class.

Creation of Class Hierarchies: Inheritance allows for the creation of class hierarchies, where classes are organized in parent-child relationships.

An example of using inheritance in a program might involve creating a class for animals that contains common information such as name and age. For instance, the base class Animal could have properties for name and age. Then, derived classes like Dog, Cat, Bird, etc., can inherit properties from the Animal class while also having their unique properties and methods, such as Bark() for a dog or Meow() for a cat.

Example:


```csharp

//Base class Animal

public class Animal
{
    public string Name {get; set;}
    public int Age {get; set;}

    //Constructor
    public Animal(string name, int age)
    {
        Name = name;
        Age = age;
    }

    public void Eat()
    {
        Console.WriteLine($"{Name} is eating.");
    }
}

//Derivved class Dog inheriting from base class Animal
public class Dog: Animal
{
    public string Bread{get; set;}

    //Constructor
    public Dog(string name, int age, string breed): base(name, age)
    {
        Breed = breed;
    }

    public voud Bark()
    {
        Console.WriteLine($"{Name} is barking.");
    }
}

class Program 
{
    static void Main(string[] args)
    {
        //Creating an object of Dog class;
        Dog myDog = new Dog("Buddy", 3, "Labrador");

        //Calling methods from the base class Animal
        myDog.Eat();


        //Calling methods from the derived class Dog
        myDog.Bark();
    }
}
```

## 5. What is an abstract class? And how does it differ from a regular class?"
Що таке абстрактний клас? І чим відрізняється від звичайного класу?

An abstract class in C# is a class that cannot be instantiated directly and may contain one or more abstract methods. Abstract methods are declared without implementation, leaving their specific implementation to derived classes. Abstract classes are used to define a common interface for a group of related classes while allowing each derived class to provide its own implementation.

### Key differences between an abstract class and a regular class include:

### 1. Instantiation
Abstract classes cannot be instantiated directly, meaning you cannot create objects of an abstract class. In contrast, regular classes can be instantiated, allowing you to create objects of that class.

### 2. Abstract Methods
Abstract classes may contain abstract methods, which are declared without any implementation. These methods must be implemented by any derived class. Regular classes do not contain abstract methods, and all methods must have an implementation.

### 3. Inheritance
Abstract classes are often used as base classes from which other classes can inherit. Derived classes must provide concrete implementations for all abstract methods defined in the abstract class. Regular classes can also be used as base classes, but they do not necessarily require derived classes to provide implementations for their methods.

### 4. Purpose.
Abstract classes are typically used when you want to define a common interface for a group of related classes, but you do not want instances of the abstract class itself. Regular classes are used for creating objects and encapsulating data and behavior.

Example:

```csharp

//Abstract class Animal

public abstract class Animal 
{
    //Abstract method
    public abstract void MakeSound();

    //Regular method
    public void Eat()
    {
        Console.WriteLine("The animal is eating.");
    }
}

//Derived class Dog inheriting from abstract class Animal
public class Dog:Animal 
{
    //Implementaion of abstract class
    public override void MakeSound()
    {
        Console.WriteLine("The dog barks.");
    }
}

class Program 
{
    static void Main(string[] args)
    {
        //Creating an object of Dog class
        Dog myDog = new Dog();

        //Calling methods from the base class Animal
        myDog.MakeSound();
        myDog.Eat();
    }
}

```

## 6. What is an interface and what are its key differences from an abstract class?
Що таке інтерфейс і які його ключові відмінності від абстрактного класу?


An interface in C# defines a contract that classes can implement. It contains only the declaration of methods, properties, events, or indexers, without any implementation. Classes that implement an interface must provide concrete implementations for all members defined in the interface.

## Key differences between an interface and an abstract class include:

### 1. Implementation
An interface contains only method and property declarations without any implementation, whereas an abstract class can contain both abstract and concrete methods.

### Inheritance
A class can implement multiple interfaces, but it can inherit from only one class (including abstract classes). This allows for more flexibility in designing class relationships when using interfaces.

### Accessibility
Interface members are implicitly public and cannot have access modifiers such as public, private, or protected. In contrast, abstract class members can have different access modifiers.

### Purpose
Interfaces are typically used to define contracts or protocols that classes can adhere to, promoting loose coupling and allowing for polymorphism. Abstract classes are used when you want to define a common base class with some default behavior, but you also want to allow for subclasses to provide their own implementations.

Example:

```csharp
//Interface definition
public interface IAnimal
{
    //Method declaration
    void MakeSound();

    //Property declaration
    string Name( get; set;)
}

//Class implementing the interface
public class Dog : IAnimal
{
    //Implementing of interface method
    public void MakeSound()
    {
        Console.WriteLine("The dog barks.");
    }
    
    //Implementation of interface property
    public string Name {get; set;}

}

class Program
{
    static void Main(string[] args)
    {
        Dog myDog = new Dog();

        //Calling method from the interface
        myDog.MakeSound();

        //Accessing method from the interface
        myDog.MakeSound();

        //Accessing property from the interface
        myDog.Name = "Buddy";
        Console.WriteLine($"Name of the dog: {myDog.Name}");
    }

}
```

## 7. What does the 'virtual' keyword provide? Which class members can be marked with this modifier
Що дає ключове слово «virtual»? Які члени класу можуть бути позначені цим модифікатором?

In C#, the 'virtual' keyword is used to modify a method, property, or indexer declaration and allows it to be overridden in derived classes. When a method, property, or indexer is marked as virtual in a base class, it indicates that the method can be redefined in any derived class using the 'override' keyword.

## The members of a class that can be marked as virtual include:

### 1. Methods
Virtual methods allow derived classes to provide their own implementation of the method. This enables polymorphic behavior, where the appropriate method implementation is determined at runtime based on the actual type of the object.

### 2. Properties
Virtual properties allow derived classes to override both the getter and setter implementations of a property. This allows for customized behavior when accessing or setting the property in derived classes.

### 3. Indexers
Virtual indexers allow derived classes to provide their own implementation for accessing and setting elements within an indexed collection.

Example

```csharp
//Base class with a virtual method
public class Shape
{
    public virtual void Draw()
    {
        Console.WriteLine("Drawing a shape.");
    }
}

//Defived class overriding the virtual method
public class Circle: Shape
{
    //Override the Draw method from the base class
    public override void Draw()
    {
        Console.WriteLine("Drawing a circle.");
    }
}

class Program
{
    static void  Main(string[] args)
    {
        //Creating objects of Shape and Circle classes
        Shape shape = new Shape();
        Circle circle = new Circle();

        //Calling the Draw method on both objects
        //Output: Drawing a shape
        shape.Draw();
        //Output: Drawing a circle
        circle.Draw();
        
    }
}
```

## 8. What is the difference between method overloading and method overriding?
Яка різниця між перевантаженням методу та перевизначенням методу?

### Method Overloading:

    Method overloading refers to the ability to define multiple methods with the same name but different parameter lists within the same class.
    In method overloading, methods must have the same name but can have different numbers or types of parameters.
    Method overloading is resolved at compile time based on the number and types of arguments provided during the method call.
    Overloaded methods can have different return types, but the return type alone is not sufficient to distinguish overloaded methods.

### Method Overriding:

    Method overriding occurs when a method in a subclass has the same signature (name and parameter list) as a method in its superclass.
    Method overriding is used to provide a new implementation for a method that is already defined in the superclass.
    In method overriding, both the method name and parameter list must match exactly in the superclass and subclass.
    Method overriding is resolved at runtime based on the actual type of the object, enabling polymorphic behavior.
    Overriding methods must have the same return type as the method being overridden, or a covariant return type (a derived type of the original return type).


## 9. What are upcasting and downcasting?
Що таке upcast і downcast?

Upcasting and downcasting are terms used in the context of inheritance and class hierarchies, particularly in object-oriented programming languages like C#.

### Upcasting:
Upcasting involves treating an object of a subclass as an object of its superclass.
It allows you to assign an instance of a derived class to a variable of its base class type.
Upcasting is always safe and implicit because a subclass inherits all the members of its superclass.

Example

```csharp
//Base class
class Animal { }

// Derived class
class Dog : Animal { }

// Upcasting: Assigning a Dog object to an Animal reference
Dog myDog = new Dog();

Animal animal = myDog;// Upcasting
```

### Downcasting:

Downcasting involves treating an object of a superclass as an object of its subclass.
It allows you to assign an instance of a base class to a variable of its derived class type.
Downcasting requires an explicit cast and can potentially throw an exception if the object being cast is not actually an instance of the target subclass.

Example

```csharp
//Base class
class Animal { }

//Derived class
class Dog: Animal { }

// Upcasting: Assigning a Dog object to an Animal reference
Dog myDog = new Dog();

//Downcasting: Casting the Animal reference back to a Dog reference
Dog myDog = (Dog)animal;//Downcasting with explicit cast
```

It's important to note that downcasting should be used carefully, and you should check the type of the object being cast before performing the cast to avoid runtime errors like InvalidCastException. C# provides the as and is operators for safer downcasting:

```csharp
//using 'as' operator for downcasting
Dog myDog = animal as Dog;
if( myDog != null)
{
    //Downcast successful
}

//Using 'is' operator for type checking before downcasting
if (animal is Dog)
{
    Dog myDog = (Dog)animal;//Downcast safely;
}
```

## 10. What are events and delegates? What is the main difference between them? How can they be used to implement callbacks in C# ?
Що таке події та делегати? Яка основна різниця між ними? Як їх використовувати для реалізації зворотного виклику в C#?

Events and delegates are important concepts in C# programming for implementing the observer pattern and enabling communication between components in a decoupled manner.

### Delegates
A delegate is a type that represents references to methods with a specific signature.
Delegates provide a way to encapsulate and pass around methods as first-class objects.
They enable the implementation of callback mechanisms and the invocation of methods asynchronously.
Delegates are declared using the delegate keyword and can hold references to one or more methods that match their signature.

### Events:
An event is a mechanism for communication between objects in C#.
It provides a way for classes to notify other classes when something of interest happens.
Events are based on delegates and encapsulate a list of subscribers (methods) that are called when the event is raised.
Events are declared using the event keyword and typically expose two special members: add to subscribe to the event and remove to unsubscribe from it.

### The main difference between events and delegates lies in their usage and abstraction level:

Delegates are low-level constructs that represent references to methods and enable callback functionality.
Events are higher-level abstractions built on top of delegates that provide a formalized way to implement the observer pattern, promoting encapsulation and decoupling.

Example

```csharp
//Define a delegate type for the callback method signature
public delegate void EventHandlet(string message);

//Publisher class that raises events
public class Publisher
{
    //Define an event based on the delegate type
    public event EventHandler MessageSent;

    //Method to send a message and raise the event
    public void SendMessage(string message)
    {
        //Raise the event by invoking the delegate
        MessageSent?.Invoke(message);

    }
}

//Subscriber class that handles event
public class Subscriber
{
    //Constructor to subsribe to the event
    public Subsriber(Publisher publisher)
    {
        //Subscribe to the event by adding a handler method
        publisher.MessageSent += HandleMessage;
    }

    //Event handler method
    public void HandleMessage(string message)
    {
        Console.WriteLine("Rceived message: " + message);
    } 
}

class Program
{
    static void Main(string[] args)
    {
        //Create instances of Publisher and Subsriber
        Publisher publisher = new Publisher();
        Subscriber subsriber = new Subsriber(publisher);

        //Send a message from the Publisher
        publisher.SendMessage("Hello Worlds!!!")
    }
}
```


## 11. What is the difference between an array (T[]) and a list (List<T>)? What are collections and how to use them
У чому різниця між масивом (T [ ]) та списком (List <T>)? Що таке колекції і як їх використовувати?

## Array (T[]) vs. List<T>:

### Array (T[])
An array is a fixed-size collection of elements of the same type. Once created, the size of an array cannot be changed. Accessing elements by index is fast, but adding or removing elements requires resizing the array, which can be inefficient.
### List<T>: List<T> 
is a dynamic-size collection provided by the .NET Framework's System.Collections.Generic namespace. It is implemented as an array internally but provides methods for adding, removing, and manipulating elements without the need for manual resizing. List<T> can dynamically grow or shrink as needed.

### Collections:
- Collections in C# are classes or interfaces that represent groups of objects.
- They provide various data structures and algorithms for storing, retrieving, and manipulating collections of items.
- Collections are part of the System.Collections and System.Collections.Generic namespaces in the .NET Framework.
- Collections offer more flexibility and functionality compared to arrays, including dynamic resizing, sorting, searching, and more.

Example

```csharp
using System;
using System. Collections.Generic;

class Program
{
    static void Main(string[] args)
    {
        //Using an array
        int[] array =  new int[3];
        array[0] = 1;
        array[1] = 2;
        array[2] = 3; 

        //Using a List<T>
        List<int> = new List<int>()
        list.Add(1);
        list.Add(2);
        list.Add(3);

        //Iterating over array
        Console.WriteLine("Array:");
        foreach(int item in array)
        {
            Console.WriteLine(item);
        }

        //Iterating over List<T>
        Console.WriteLine("\nList:");
        foreach(int item in list )
        {
            Console.WriteLine(item);
        }
    }
}
```

## 12. What is a hash table? What is a hash function? How are collisions handled in dictionaries?
Що таке хеш-таблиця? Що таке хеш-функція? Як обробляються колізії в словниках?

### Hash Table:
- A hash table is a data structure that stores key-value pairs. It uses a hash function to compute an index into an array of buckets or slots, where the desired value can be found.
- The primary advantage of a hash table is its ability to provide fast access to data. By mapping keys to indices using a hash function, it enables constant-time average-case lookup, insertion, and deletion operations.

### Hash Function:
- A hash function is a function that converts an input (or 'key') into a fixed-size numeric value, typically a hash code or hash value.
- Hash functions are designed to efficiently map data of arbitrary size to data of fixed size, which is suitable for indexing into a hash table.
- Good hash functions generate unique hash codes for different inputs and distribute hash codes evenly across the available range of bucket indices, minimizing collisions.

### Collision Handling:
- Collisions occur when two or more keys hash to the same index in the hash table, causing them to be stored in the same bucket.
- Collision handling strategies vary, but common approaches include:
    - `Separate Chaining:` Each bucket in the hash table maintains a linked list of key-value pairs. Colliding elements are added to the end of the linked list associated with their hash index.
    - `Open Addressing:` Colliding elements are placed in alternative locations within the hash table, determined by a secondary hash function or a probing sequence. This approach involves searching for an empty slot when a collision occurs.
    - `Robin Hood Hashing:` This variant of open addressing aims to minimize variance in the lengths of the probe sequences by swapping items during insertion.
    - `Linear Probing:` In this method, collisions are resolved by placing the colliding element in the next available empty slot in the hash table, moving sequentially through the table until an empty slot is found.

Regardless of the collision resolution strategy used, the goal is to ensure that the hash table maintains acceptable performance characteristics even when collisions occur, minimizing the impact on lookup times and maintaining efficient data retrieval.


## 13. What is Boxing and Unboxing in C#
Що таке Boxing і Unboxing?

### Boxing 
- is the proces of converting a value type (such as int, float, struct etc) to an object reference.
- When a value type is boxed, a new object is created on the heap to hold the value, and a reference to this object is returned.
- Boxing allows value to be treated as objects, enabling them to be stored in collections such as ArrayList, Hashable etc. which require object references.

### Unboxing
- Unboxing is the process of converting an object reference back to a value type.
- It involves extracting the value from the boxed object and assigning it to value type variable.
- Unboxing requires an explicit cast from the object type to the target value type.
- If the unboxing operation fails due to an incorrect case, an InvalidException is thrown at runtime.

Example

```csharp

using System;

class Program
{
    static void Main(string[] args)
    {
        //Boxing: Converting an inte to an object
        int number = 42;
        object boxedNumber = number;


        //Unboxing: Converting an object back to an int
        int unboxedNumber = (int)boxedNumber;

        Console.WriteLine("Original value: " +  number);
        Console.WriteLine("Boxed value: " +  boxedNumber);
        Console.WriteLine("Unboxed value: " +  unboxedNumber);
    }
}
```

## 13. What are the features of using a record and a record struct?
Які особливості використання запису (record) і запису-структури (record struct)?

In C#, records are a feature introduced in C# 9.0 to provide a concise syntax for declaring immutable data types. They are primarily used for modeling immutable data entities and are designed to simplify the creation of immutable types with minimal boilerplate code.

### Record:
- A record is a reference type that represents an immutable data structure.
- Records are declared using the record keyword followed by the name of the record and its properties.
- Records automatically generate implementations for equality members (Equals, GetHashCode), ToString, and a deconstructor.
- Records support inheritance, allowing them to derive from other classes or records.
- Records are typically used for modeling data transfer objects (DTOs), data entities, or lightweight immutable objects.

### Record Struct:
- A record struct is similar to a record but is a value type (struct) instead of a reference type.
- Record structs are declared using the record struct keywords followed by the name of the record struct and its properties.
- Like records, record structs also automatically generate implementations for equality members, ToString, and a deconstructor.
- Record structs can be used when value semantics are desired, such as for small, immutable data types that are frequently copied.
- Record structs cannot inherit from other types, including other record structs.

Example

```csharp
//Record example
public record Person(string FirstName, string LastName);

//Record struct example
public record struct Point (int X, int Y);

class Program
{
    static void Main(string[] args)
    {
        var person = new Person("John", "Doe");

        //Creating a record struct instance
        var point = new Point(10, 20);

        //Displaying record data
        Console.WriteLine($"Person: {person.FirstName}{person.LastName}");

        //Displaying record struct data
        Console.WriteLine($"Point: ({point.X}, {point.Y})");
    }
}
```

## 15. What does the 'static' keyword provide? What is the feature of static classes ?s
Що дає ключове слово «static»? Яка особливість статичних класів?

In C#, the static keyword is used to declare members that belong to the type itself, rather than to instances of the type. It provides several benefits and features:

### Static Members:
        When applied to fields, methods, properties, or events, the static keyword indicates that the member is shared among all instances of the type.
        Static members are associated with the type itself, rather than with individual instances of the type.
        They can be accessed directly through the type name, without needing to create an instance of the type.

### Static Classes:
        A static class is a class that can only contain static members (fields, methods, properties, events).
        Static classes cannot be instantiated or inherited from, as they are sealed and have a private constructor by default.
        They are typically used to define utility classes, helper methods, extension methods, or collections of related functionalities that do not require instance-specific state.