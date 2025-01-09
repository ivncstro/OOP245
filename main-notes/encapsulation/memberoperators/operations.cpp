// Scenario Without Overloading:

// Imagine two students, harry and backup.
// Both have a pointer to their grades array.
// Assigning harry = backup; without overloading would make both pointers point to the same grades array.
// Problem: If one student modifies the grades, the other sees the change. Deleting one student's grades would leave the other with a dangling pointer, causing potential crashes.
// Solution with Overloading:

// Overloaded = Operator: Ensures that when harry = backup; is executed, a new grades array is created for harry, copying the grades from backup.
// Benefit: Each student manages their own grades independently, preventing shared references and related issues.

// The operator keyword
// The operation symbol
// The type of its right operand, if any
// The const status of the operation


#if 0

#endif