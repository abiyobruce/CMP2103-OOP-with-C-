## Explanation of the program

1. `Person` is the base class. It defines `name`, `age`, and `displayPerson()`.
2. `Student : public Person` inherits the public members of `Person` and adds `studentNumber` and `displayStudent()`.
3. `EngineeringStudent : public Student` inherits the public members of `Student`, including the members it inherited from `Person`. It also defines `course` and `displayEngineering()`.
4. In `main()`, an object `engStudent` of type `EngineeringStudent` is created.
5. The object uses members from all three classes, demonstrating multilevel inheritance.