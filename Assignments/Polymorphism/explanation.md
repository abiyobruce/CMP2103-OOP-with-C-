## Explanation of the program

1. Base class `Employee`: Contains the `salary` data member and the virtual function `calculateBonus()`.
2. Derived class `PermanentEmployee`: Overrides `calculateBonus()` to calculate 10% of the salary.
3. Derived class `ContractEmployee`: Overrides `calculateBonus()` to calculate 5% of the salary.
4. Base-class pointer `ptr`: Can point to objects of either derived class because both inherit from `Employee`.
5. When `ptr` points to `emp1`, the call `ptr->calculateBonus()` executes the permanent employee's version.
6. When `ptr` points to `emp2`, the same function call executes the contract employee's version.

The keyword `virtual` enables runtime polymorphism, while `override` indicates that a derived-class function is intended to override a virtual function in the base class.