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

## 14. What are the features of using a record and a record struct?
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
- When applied to fields, methods, properties, or events, the static keyword indicates that the member is shared among all instances of the type.
- Static members are associated with the type itself, rather than with individual instances of the type.
- They can be accessed directly through the type name, without needing to create an instance of the type.

### Static Classes:
- A static class is a class that can only contain static members (fields, methods, properties, events).
- Static classes cannot be instantiated or inherited from, as they are sealed and have a private constructor by default.
- They are typically used to define utility classes, helper methods, extension methods, or collections of related functionalities that do not require instance-specific state.


```csharp
using System;

public class MathUtils
{
    //Static method to calculate the square of a number
    public static int Square(int x)
    {
        return x * x;
    }

    //Static property to get the value of pi
    public static double Pi => Math.PI;
}

public static class Logger
{
    //Static method to log messages
    public static void Log(string message)
    {
        Console.WriteLine($"[LOG] {message}");
    }
}

class Program
{
    static void Main(string[] args)
    {

        //Accessing static members directly through the type name
        int squareResult = MathUtils.Square(5);
        Console.WriteLine($"Square of 5: {squareResult}");

        double piValue = MathUtils.Pi;
        Console.WriteLine($"Value of Pi: {piValue}");

        //Calling static method of staic class
        Logger.Log("Hello world!");
    }
}

```


## 16. What does the 'sealed' keyword provide?
Що дає ключове слово «sealed»?

In C#, the sealed keyword is used to prevent inheritance of a class or specific class members. Here's what it provides:

- Prevents Inheritance: When applied to a class, the sealed keyword prevents other classes from inheriting from it. In other words, it makes the class final and not extendable.
- Prevents Method Overriding: When applied to methods, properties, or events within a class, the sealed keyword prevents derived classes from overriding those members. It ensures that the behavior of the member remains unchanged in derived classes.

Example
```csharp
public sealed class SealedClass
{
    //Sealed method that cannot be overridden
    public sealed void SealedMethod()
    {
        Console.WriteLine("This method cannot be overridden.");
    }
}

public class DerivedClass //Error: Cannot inherti from sealed class 'SealedClass'
{
    //Attemping to inherit from a sealed class results in compile-time errors

}

public class AnotherDerivedClass: SealedClass
{
    //Error: Cannot override sealed method 'SealedMethod'
    public override void SealedMethod(){
        //Attempting to override a sealed method result in a compile-time error
    }
}
```


## 17. What is the difference between value types and reference types? When is it appropriate to use each type? Provide examples of incorrect usage of reference types.
Яка різниця між типами значень і типами посилань? Коли який тип доцільно використовувати? Наведіть приклади неправильного використання типу посилання.

### Value types:
- Value types directly contatin their data and are stored on the stack or inline within other objects.
- Examples of value types include primitive types (int, float, double, bool) structs and enums.
- When you assign a value type variable to another variable or pass it to a method, a copy of the value is created.
- Operations on value types typically involve working with the actual data rather than references.

### Reference Types:
- Reference types store a reference to the data's memory location, which is stored on the heap.
- Example of reference types include classes, interfaces, arrays, delegates, and strings.
- When you assign a reference type variable to another variable or pass it to a method, you're copying the reference, not the actual data.
- Operations on reference types involve working with reference to the data rather than the data itself.

### Appropriate Usge:
- Use value types when you need lightweight object that can be copied efficiently, or when you want the data to be stored directly where it's declared.
- Use reference type when you need objects to be shared among multiple parts of the program, or when you need to represent complex or mutable data structures.

### Examples of Incorrect Usage of Reference Types:

- Unintentional Sharing State: When multiple object inadvertently share the same mutable state due to using reference tpyes
```csharp
//Incorrect usage: Sharing mutable state among multiple objects
class MyClass
{
    public List<int> Numbers { get; set;}

}

MyClass obj1 = new MyClass();
MyClass obj2 = obj1; //Both obj1 and obj2 now share the same list instance

obj1.Numbers.Add(19);
//Output: 1(unexpected behavoir)
Console.WriteLine(obj2.Numbers.Count);
```
Premature Modification of Shared State: When modifying a shared reference type instance unexpectedly affects other parts of the program. For example:

```csharp
//Incorrect usage: Modifying shared state unexpectedly
List<int> numbers = new List<int>(){1, 2, 3};
SomeMethod(numbers);
Console.WriteLine(numbers.Count); // Output: 4 (unexpected behavior)
void SomeMethod(List<int> list)
{
    list.Add(4); // Modifying the shared list unexpectedly affects the caller
}
```

Incorrect Comparison of Reference Types: When comparing reference types using the equality operator (==) when semantic equality should be checked instead.

```csharp
Incorrect usage: Incorrectly comparing reference types
string str1 = "hello";
string str2 = "hello";
bool areEqual = str1= str2;//Incorrect comparison
```

## 18. What data types are available in C#? And what is the difference between them?
Які типи даних доступні в C#? І в чому різниця між ними?

### Primitive Data Types
- Primitive data types are the most basic data types provided by the language.
- They include integral types (such as int, byte, short, long), floating-point types (float, double), character type (char), and boolean type (bool).
- Primitive data types represent simple values directly, and they are stored directly in memory.
- They have predefined ranges and sizes, and their values are typically passed by value.

### Derived Data Types:
- Derived data types are constructed from one or more primitive or other derived data types.
- They include arrays, structures (structs), enumerations (enums), and nullable types (T?).
- Arrays allow you to store multiple values of the same type sequentially in memory.
- Structures are lightweight data types that can contain a collection of related fields.
- Enumerations define a set of named constants representing integer values.
- Nullable types allow you to assign additional value (null) to value types.

### Reference Types:
- Reference types store references to the data's memory location, rather than storing the actual data directly.
- They include classes, interfaces, delegates, and strings.
- Reference types are stored on the heap, and multiple variables can reference the same object instance.
- They support inheritance, polymorphism, and dynamic memory allocation.

### User-Defined Types:
- User-defined types are types defined by the user using the struct and class keywords.
- They allow developers to define custom data structures and behaviors tailored to their specific needs.
- User-defined types can incorporate elements of primitive, derived, and reference types.

The main differences between these data types lie in their storage location, memory management, behavior, and usage patterns. Primitive types are simple and stored directly in memory, while reference types are stored on the heap and involve memory management by the garbage collector. Derived and user-defined types provide additional flexibility and customization options for modeling complex data structures and behaviors.

## 19. What is the difference between structs and classes in C#?
У чому різниця між структурами та класами в C#?

In C#, both structs and classes are used to define custom data types, but they have several differences in terms of their behavior, usage, and memory management

### Definition

- `Structs:` Structs are value types that represent lightweight data structures. They are defined using the `struct` keyword.
- `Classes` Classes are reference types that represent more complex objects with behavior and data. They are defined using the `class` keyword.

### Memory Allocation

- `Structs:` Structs are allocated on the stack or inline within other objects. They are typically used for small, simple data structures.
- `Classes` Classes are allocated on the heap and managed by the garbage collector. They are suitable for larger, more comple objects with dynamic memory requirements.

### Copying

- `Structs` When a struct is assigned to another variable or passed as method argument, a copy of the struct is created.
- `Classes` When a class instance is assigned to anothe variable or passed as a method argument, only the reference to the object is copied, not the object itself. Multiple variable can reference the same object intance.

### Inheritance
- `Structs` Struct cannot inherit from other structs or classes. They do not support inheritance.
- `Classes` Classes support single inheritance and can inherit from one base class. They can also implement multiple interfaces.

### Default Constructor
- `Structs` Structs have a default parameterless constructor that initializes all fields to their default values.
- `Classes` Classes have a default constructor if no constructors are explicitly defines. Fields are initialized to their default values or to the values specified in the constructor.

## Use Cases
- `Structs` Structs are typcally used for small, immutable data structures that do not require inheritance or polymorphism. They are suitable for representing simple entities such as points, coordinates, and other value types.
- `Classes` Classes are used for more complex object with behavior and state. They support inheritance, encapsulation, and polymorphism, making them suitable for modeling real-worlds entities, business logic and application components.

## 20. What is the difference between the stack and the heap?
У чому різниця між стеком і купою (heap)?

In computer science and programming, the stack and the heap are both areas of memory used for different purposes. Here's the difference between them:

### Stack:
- The stack is a region of memory that stores variables created by each function or method call in a program.
- It operates in a Last-In, First-Out (LIFO) manner, meaning that the most recently called function is the first to finish and be removed from the stack.
- Each time a function is called, a new stack frame is created to store local variables, function parameters, return addresses, and other function-related information.
- Stack memory is typically limited in size and has a fixed maximum size determined by the operating system or runtime environment.
- Access to stack memory is faster than heap memory due to its sequential nature and limited size.

### Heap:
- The heap is a region of memory used for dynamic memory allocation, where objects or data structures can be allocated and deallocated at runtime.
- Unlike the stack, the heap memory is not organized in a specific order, and memory allocation and deallocation can occur in any order.
- Memory allocated on the heap remains allocated until explicitly deallocated by the programmer or until the program terminates.
- Heap memory is typically larger than stack memory and is dynamically managed by the operating system or runtime environment.
- Access to heap memory is slower than stack memory due to its dynamic nature and potential fragmentation.

## 21. What is type casting? What is the difference between explicit and implicit type casting?
Що таке приведення типів? Яка різниця між явним і неявним приведенням типів?

In programming, type casting refers to the process of converting a value from one data type to another. This is necessary when you want to treat a value of one type as if it were another type. There are two main types of type casting:

### Implicit Type Casting:

- Implicit type casting, also known as implicit conversion, occurs automatically when there is no risk of data loss or precision loss during the conversion.
- It is performed by the compiler without the need for explicit syntax.
- Implicit type casting typically occurs when converting from a smaller data type to a larger data type, or when converting between compatible data types.
- For example, converting an integer to a floating-point number, or assigning an enum value to an integer.

### Explicit Type Casting:

- Explicit type casting, also known as explicit conversion, requires the use of explicit syntax to perform the conversion.
- It is used when there is a risk of data loss or precision loss during the conversion, or when converting between incompatible data types.
- Explicit type casting is performed using casting operators such as (type) value in C#.
- It is the programmer's responsibility to ensure that the conversion is valid and that data loss or precision loss is acceptable.
- For example, converting a double to an int, or converting an object reference to a specific class type.

Example
```csharp
class Program
{
    static void Main(string[] args)
    {
        //Implicit type casting (int to double)
        int intValue = 10;
        double doubleValue = intValue;
        Console.WriteLine($"Implicit conversion: {doubleValue}");

        // Explicit type casting (double to int)
        double floatValue = 3.14;
        int truncatedValue = (int)floatValue; // Explicit conversion
        Console.WriteLine($"Explicit conversion: {truncatedValue}");

    }
}
```

## 22. How to implement the Singleton pattern in C#, and what are its advantages and disadvantages?
Як реалізувати патерн Singleton в C# та які його переваги й недоліки?

In software engineering, the Singleton pattern is a creational design pattern that ensures a class has only one instance and provides a global point of access to that instance. Here's how you can implement the Singleton pattern in C#:

Example

```csharp
public class Singleton
{
    private static Singleton instance;
    private static readonly object lockObject = new object();

    //Private constructor to prevent instatiation
    private Singleton(){ }

    //Lazy initialization with double-check locking
    public static Singleton Intance
    {
        get
        {
            if(instance == null)
            {
                lock(lockObject)
                {
                    if(instance == null)
                    {
                        instance = new Singleton();
                    }
                }
            }
            return isntance
        }
    }
}
```

### Advantages:
- Control Access
it provides a global access point to the instance, allowing controlled access to the sing instance throughout the application.
- Memory Efficiency
it ensures that only one instance of the class is created, saving memory resources.
- Lazy initialization
It supports lazy initialization, meaning the instance is created only when it is first accessed, improving performance.
- Thread Safety 
it provides thread safety, especially when implement with double check locking or other synchronization mechanisms.

### Disadvantages 
- Global State
It introduces global state into the application, which can make code harder to understand and maintain.
- Testing Challenges
It can make unit testing more difficult due to the dependency on the Singleton intance throughout the codebase.
- Potential for abuse
It can be overused, leading to code coupling and decreased flexibility.

## 23. What are LINQ queries?
Що таке LINQ-запити?

LINQ (Language Integrated Query) queries are a feature introduced in C# that provides a uniform way to query data from different data sources, such as collections, arrays, databases, XML, and more, using a syntax similar to SQL (Structured Query Language). LINQ queries enable developers to write expressive and concise code for data manipulation and retrieval.

## Here's an overview of LINQ queries:

`Syntax:` LINQ queries are written using query expressions, which resemble SQL syntax. They consist of clauses such as from, where, orderby, select, and groupby.

`Data Sources:` LINQ queries can be applied to various data sources, including in-memory collections (such as arrays, lists, and dictionaries), database tables (using LINQ to SQL or Entity Framework), XML documents, and more.

`Deferred Execution:` LINQ queries use deferred execution, meaning that they are not executed immediately when defined. Instead, the query is executed when the result is needed, such as when iterating over the query result or performing an aggregation operation.

`Type Safety:` LINQ queries are type-safe, meaning that the compiler checks query expressions for type correctness at compile time, reducing the likelihood of runtime errors.

`Integration with Language Features:` LINQ queries are integrated into the C# language syntax and can seamlessly work with other language features such as lambda expressions, anonymous types, and extension methods.

```csharp
using System;
using System.Linq;

class Program
{
    static void Main(string[] args)
    {
        int[] numbers = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

        // LINQ query to filter even numbers and project squared values
        var query = from num in numbers
                    where num % 2 == 0
                    select num * num;

        // Execute the query and print the results
        foreach (var result in query)
        {
            Console.WriteLine(result);
        }
    }
}
```

## 24. Explain the difference between LINQ methods First vs FirstOrDefault vs Single vs SingleOrDefault.
Поясніть різницю між методами LINQ First vs FirstOrDefault vs Single vs SingleOrDefault.

In LINQ (Language Integrated Query), several methods are available for retrieving elements from a sequence. Here's the difference between First, FirstOrDefault, Single, and SingleOrDefault:

### First:

- The First method returns the first element of a sequence that satisfies a specified condition.
- If no element in the sequence satisfies the condition, it throws an exception (InvalidOperationException).
- It is commonly used when you expect the sequence to contain at least one element that matches the condition, and you want to retrieve the first occurrence.

### FirstOrDefault:

- The FirstOrDefault method returns the first element of a sequence that satisfies a specified condition, or a default value if no such element is found.
- It does not throw an exception if no matching element is found; instead, it returns the default value for the element type (null for reference types, 0 for numeric types, etc.).
- It is commonly used when you want to retrieve the first occurrence if it exists, but you can handle the case where no matching element is found gracefully.

### Single:

- The Single method returns the only element of a sequence that satisfies a specified condition.
- If no matching element is found or more than one matching element is found, it throws an exception (InvalidOperationException or NotSupportedException).
- It is commonly used when you expect the sequence to contain exactly one element that matches the condition, and you want to retrieve that element.

### SingleOrDefault:
- The SingleOrDefault method returns the only element of a sequence that satisfies a specified condition, or a default value if no such element is found.
- If more than one matching element is found, it throws an exception (InvalidOperationException or NotSupportedException).
- It is commonly used when you expect the sequence to contain at most one element that matches the condition, and you want to retrieve that element if it exists.

## 25. What are exceptions and how to handle them in C#? How to create custom exceptions?
Що таке винятки (exceptions) і як їх обробляти в C#? Як створити свої винятки (custom exceptions)?

In programming, exceptions are unexpected or exceptional events that occur during the execution of a program, disrupting the normal flow of execution. In C#, exceptions are objects that represent errors or exceptional conditions encountered during runtime. They provide a mechanism for signaling and handling errors in a structured and controlled manner.

### How to handle exceptions in C#:

#### Try-Catch Blocks:
- Use a try-catch block to handle exceptions. Surround the code that may throw an exception with a try block, and catch the exception in a catch block.
- The catch block specifies the type of exception to catch, allowing you to handle different types of exceptions differently.
- You can have multiple catch blocks to handle different types of exceptions or different error scenarios.

#### Finally Block:
- Optionally, you can include a finally block after the catch block. Code in the finally block is executed regardless of whether an exception occurred or not.
- Finally blocks are commonly used for cleanup tasks such as closing files or releasing resources.

#### Throwing Exceptions:
- Use the throw statement to explicitly throw an exception. You can throw built-in exceptions or custom exceptions (more on custom exceptions below).
- Throwing an exception halts the normal flow of execution and transfers control to the nearest catch block.

### To create custom exceptions in C#, follow these steps:

#### Create a Custom Exception Class:
- Define a new class that derives from the Exception class or one of its derived classes (such as ApplicationException).
- Optionally, add constructors to the custom exception class to initialize properties or provide additional context for the exception.

#### Throw the Custom Exception:
- Use the throw statement to throw an instance of your custom exception class when the specific error condition occurs in your code.


```csharp
using System;

//Custom exception class
public class CustomException: Exception
{
    //Custom constructor with a message
    public CustomException(string message) : base(message)
    {
    }
}

class Program
{
    static void Main(string[] args)
    {
        try
        {
            //Code that may throw an exception
            int result = Divide(10, 0);
            Console.WriteLine($"Result: {result}");
        }
        catch (DivideByZeroException ex)
        {
            Console.WriteLine("Error: Division by zero");
        }
        catch(CustomException ex)
        {
            Console.WriteLine($"Custom Error: {ex.Mesage}");
        }
        catch(Exception ex)
        {
            Console.WriteLine($"Error: {ex.Message}");
        }
        finally
        {
            Console.WriteLine("Cleanup tasks");
        }
    }

    //Method that throws a custom exception
    static int Divide(int dividend, int divisor)
    {
        if(divisor == 0)
        {
            throw new CustomException("Divisor cannot be zero");
        }
        return divided/ divisor;
    }
}
```

## 26. What are try, catch, finally used for? In which cases may the finally block not be executed? What is the difference between throw; vs throw ex; vs throw new Exception(); if the exception is caught in the catch block?
Для чого використовуються try, catch, finally? У яких випадках блок finally може не виконатися? Яка різниця між throw; vs throw ex; vs throw new Exception();, якщо виняток перехоплено у блоку catch?

### What are try, catch, finally used for?

`try:` Used to enclose the code that may potentially throw an exception.
`catch:` Used to handle exceptions thrown within the corresponding `try block.` It allows specifying how to handle specific types of exceptions or perform cleanup tasks.
`finally:` Used to execute cleanup code that should always run, regardless of whether an exception occurs or not. Typically used for releasing resources or performing cleanup tasks.

### Cases when the finally block may not be executed:

- If the process is terminated abruptly, such as by calling Environment.FailFast, or if the application crashes due to an unhandled exception.
- If the thread is aborted forcefully using Thread.Abort.

### Difference between throw; vs throw ex; vs throw new Exception();:

`throw;:` Rethrows the same exception caught by the catch block. Preserves the original stack trace of the exception.
`throw ex;:` Rethrows the caught exception passed as an argument (ex). Resets the stack trace, potentially making debugging challenging.
`throw new Exception();:` Creates and throws a new instance of the specified exception type. Discards the original exception caught in the catch block.

## 27. What is the conditional operator, and how to use it?
Що таке умовний оператор і як його використовувати?

In programming, the conditional operator is a ternary operator that allows you to make decisions based on a condition. It is denoted by the ? : syntax and is also known as the ternary conditional operator.

Example

```csharp
condition ? expression1 : expression2
```

`condition:` A boolean expression that determines which of the two expressions (expression1 or expression2) is evaluated.
`expression1:` The expression to evaluate if the condition is true.
`expression2:` The expression to evaluate if the condition is false.

The conditional operator evaluates the condition. If the condition is true, it evaluates and returns expression1; otherwise, it evaluates and returns expression2.


```csharp
int x = 10;
int y = 20;

// Using conditional operator to determine the maximum value
int max = (x > y) ? x : y;

Console.WriteLine("The maximum value is: " + max);

```

## 28. What is the for loop, and how to use it for repeated actions?
Що таке цикл for і як його використовувати для повторюваних дій?

In programming, the for loop is a control flow statement that allows you to execute a block of code repeatedly based on a specified condition. It is particularly useful when you know the number of iterations in advance.

Example

```csharp
for (initialization; condition; increment/decrement)
{
    // Code block to be executed repeatedly
}
```

`Initialization:` This part is executed once before the loop begins. It typically initializes a loop control variable.
`Condition:` This part specifies the condition for continuing the loop. If the condition evaluates to true, the loop continues; otherwise, it terminates.
`Increment/Decrement:` This part is executed after each iteration of the loop. It typically updates the loop control variable.
`Code Block:` This is the block of code that is executed repeatedly as long as the condition is true.

Example

```csharp
// Print numbers from 1 to 5 using a for loop
for (int i = 1; i <= 5; i++)
{
    Console.WriteLine(i);
}
```

## 29. What are the access modifiers in C# and what do they mean?
Які є типи доступу (access modifiers) в C# і що вони означають?

In C#, access modifiers are keywords used to specify the accessibility or visibility of types and members (fields, methods, properties, etc.) within a program. They control which parts of a program can access or modify certain types or members. There are five main access modifiers in C#:

### public:
        The public access modifier makes types and members accessible from any other code in the same assembly or in other assemblies that reference the assembly containing the public type or member.
        Public types and members can be accessed from anywhere, including outside the defining class or assembly.

### private:
        The private access modifier restricts access to types and members to only within the containing class or struct.
        Private types and members are not accessible from outside the class or struct in which they are declared.
### protected:
        The protected access modifier allows access to types and members within the containing class or struct and by derived classes.
        Protected types and members are accessible from within the defining class or struct and from derived classes.

### internal:
        The internal access modifier restricts access to types and members to within the same assembly.
        Internal types and members are accessible from any code within the same assembly, but not from outside the assembly.

### protected internal:
        The protected internal access modifier combines the accessibility of protected and internal.
        Protected internal types and members are accessible from within the same assembly and by derived classes, regardless of the assembly in which the derived class resides.

## 30. What is method overloading? What are optional parameters in methods and how does their usage differ from method overloading? What is the difference between method override and new method?
Що таке перевантаження методів? Що таке необов’язкові параметри у методах і в чому різниця їх використання від перевантаження методів? Чим відрізняється перевизначення методу (method override) від методу new?

Method Overloading:

Method overloading in C# allows defining multiple methods in the same class with the same name but with different parameter lists. These methods can have different numbers or types of parameters. When calling an overloaded method, the compiler determines which version of the method to invoke based on the arguments provided. Method overloading is primarily used to provide multiple ways to call a method with different parameter combinations.
Optional Parameters:

Optional parameters in C# allow specifying default values for method parameters. They enable calling methods with fewer arguments than the total number of parameters defined, as long as the omitted parameters have default values. Optional parameters are specified by providing a default value in the method signature. They provide flexibility when calling methods and can simplify method calls by reducing the need for method overloading.
Difference between Optional Parameters and Method Overloading:

    Optional parameters allow specifying default values for method parameters, while method overloading involves defining multiple methods with different parameter lists.
    With optional parameters, you can call a method with fewer arguments by relying on default values, whereas method overloading requires explicitly defining different method signatures for different parameter combinations.
    Optional parameters are useful when the method behavior can be customized by omitting certain arguments, while method overloading is useful when there are distinct variations of a method that require different parameter lists.

Method Override vs. New Method:

    Method Override: Method override is used in inheritance scenarios, where a derived class provides a specific implementation for a method defined in a base class. It allows a derived class to replace the implementation of an inherited method with its own implementation. Method override is indicated using the override keyword and is part of polymorphism in object-oriented programming.
    New Method: The new keyword in C# allows hiding an inherited member (including methods) from the base class. When a method is marked with new, it creates a new member in the derived class with the same name as the base class method, effectively hiding the base class method. However, this does not override the base class method behavior; instead, it introduces a new method in the derived class. The new method is invoked only when the reference to the object is of the derived class type. It's important to note that using new to hide methods can lead to confusion and should be used with caution.

## 31.What is a namespace, and how to use it to organize code in C#
Що таке простір імен (namespace) і як його використовувати для організації коду в C#?

In C#, a namespace is a way to organize and group related code elements, such as classes, interfaces, enumerations, and other namespaces, into a logical hierarchy. Namespaces help prevent naming conflicts and provide a way to organize code into manageable and logical units.

### Here's how to use namespaces to organize code in C#:

1. Defining a Namespace:
- You can define a namespace using the namespace keyword followed by the namespace name. Namespaces can be nested within other namespaces to create a hierarchical structure.

```csharp
namespace MyNamespace
{
    // Code elements (classes, interfaces, etc.) go here
}

```

2. Declaring Code Elements within a Namespace:

- Within a namespace block, you can declare various code elements such as classes, interfaces, enumerations, and other namespaces.

```csharp
namespace MyNamespace
{
    class MyClass
    {
        // Class members and methods go here
    }

    interface IMyInterface
    {
        // Interface members go here
    }

    enum MyEnum
    {
        // Enum values go here
    }
}

```

3. Using Namespaces:

- To use types declared within a namespace, you can either fully qualify the type name with its namespace or import the namespace using the using directive.

```csharp
using MyNamespace;

class Program
{
    static void Main(string[] args)
    {
        // Using fully qualified type name
        MyNamespace.MyClass obj1 = new MyNamespace.MyClass();

        // Using imported namespace
        MyClass obj2 = new MyClass();
    }
}

```

4. Avoiding Naming Conflicts:

- Namespaces help avoid naming conflicts by allowing you to define multiple types with the same name in different namespaces. When using types, you can specify the namespace to disambiguate between types with the same name.

```csharp
namespace CompanyA
{
    class MyClass { }
}

namespace CompanyB
{
    class MyClass { }
}

class Program
{
    static void Main(string[] args)
    {
        // Using types from different namespaces
        CompanyA.MyClass obj1 = new CompanyA.MyClass();
        CompanyB.MyClass obj2 = new CompanyB.MyClass();
    }
}

```

## 32.
Чим є Common Type System? Що таке анонімні типи, загальні типи (generics), кортежі (tuples)?