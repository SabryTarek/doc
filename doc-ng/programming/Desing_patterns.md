Design Patterns
================


- MVC
- MVVM

- Module
- Constructor
- reporsitry
- observer
- Builder
  
-------------------------------------------------------------------------------------------------------
>Decorator :  
- a decorator pattern is useful for when you want to allow objects to have different options









hello welcome to two minute programming
today I'm going to talk to you about
dependency injection something that's
nowhere near as hard as it sounds so I
think the first thing we need to talk
about is what dependencies are so in
dependency injection dependencies are
objects that you need to use in your
class an injection simply means passing
those dependencies into your class there
are different ways of injecting
dependencies into your classes but the
most common way is through the
constructor of your class so here's my
constructor method which will bring the
dependencies into product repository as
class properties so I can use them
throughout the class rather than
instantiating them within my class I'll
inject them when product repository is
itself instantiated the main advantage
of using dependency injection is that it
encourages modular programming in
conjunction with interfaces you can
treat your classes as black boxes where
you can change the dependencies and know
that nothing will break this is great as
your code will start to feel more like
Lego and less like spaghetti there are
many other benefits to testing becomes
easier refactoring is easier and reusing
code is easier life for the coder who
uses dependency injection is far easier
for me personally
dependency injection has improved my
code quality no end and it's certainly
worth implementing
that about wraps it up for this video
but be sure to check out the excellent
resources in the comment section below


Design patterns are solutions to software design problems you find again and again in real-world application development. Patterns are about reusable designs and interactions of objects.

The 23 Gang of Four (GoF) patterns are generally considered the foundation for all other patterns. They are categorized in three groups: Creational, Structural, and Behavioral (for a complete list see below).

To give you a head start, the C# source code for each pattern is provided in 2 forms: structural and real-world. Structural code uses type names as defined in the pattern definition and UML diagrams. Real-world code provides real-world programming situations where you may use these patterns.

A third form, .NET optimized, demonstrates design patterns that fully exploit built-in .NET 4.5 features, such as, generics, attributes, delegates, reflection, and more. These and much more are available in our .NET Design Pattern Framework 4.5. You can see the Singleton page for a .NET 4.5 Optimized example.





> Creational Patterns[5]:
  | Name              | Description                                         |
  |-------------------|-----------------------------------------------------|
  | Abstract Factory  | Creates an instance of several families of classes  |
  | Builder	Separates | object construction from its representation         |
  | Factory Method    | Creates an instance of several derived classes      |
  | Prototype         | A fully initialized instance to be copied or cloned |
  | Singleton         | A class of which only a single instance can exist   |

> Structural Patterns[7]:
  | Name      | Description                                             |
  |-----------|---------------------------------------------------------|
  | Adapter   | Match interfaces of different classes                   |
  | Bridge    | Separates an object’s interface from its implementation |
  | Composite | A tree structure of simple and composite objects        |
  | Decorator | Add responsibilities to objects dynamically             |
  | Facade    | A single class that represents an entire subsystem      |
  | Flyweight | A fine-grained instance used for efficient sharing      |
  | Proxy     | An object representing another object                   |

> Behavioral Patterns[11]:
  | Name           | Description                                                    |
  |----------------|----------------------------------------------------------------|
  | Chain of Resp. | A way of passing a request between a chain of objects          |
  | Command        | Encapsulate a command request as an object                     |
  | Interpreter    | A way to include language elements in a program                |
  | Iterator       | Sequentially access the elements of a collection               |
  | Mediator       | Defines simplified communication between classes               |
  | Memento        | Capture and restore an object's internal state                 |
  | Observer       | A way of notifying change to a number of classes               |
  | State          | Alter an object's behavior when its state changes              |
  | Strategy       | Encapsulates an algorithm inside a class                       |
  | Template       |    Method	Defer the exact steps of an algorithm to a subclass |
  | Visitor        | Defines a new operation to a class without change              |

- [dofactory](https://www.dofactory.com)
- [refactoring.guru](https://refactoring.guru)
- [sourcemaking](https://sourcemaking.com/)
- [oodesign](https://www.oodesign.com/)



Head First
    - Design Patterns -> Java