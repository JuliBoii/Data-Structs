# Recursion

---

## Types of Recursion

- Tail Recursion
- Head Recursion
- Tree Recursion
- Indirect Recursion
- Nested Recursion

---

## Tail Recursion

```c++
void func(const int& n) {
    if (n > 0) {
        std::cout << n << '\n';
        func(n-1);
    }
}
```

### What does the code mean?

If a recursive function is calling itself and that call is the last statement in a function, then we refer to it as a *
*tail recursion**

Meaning that _**everything is performed at calling time only**_.

_**However**_, this is recursive implementation is similar to a standard loop. So, _what is the difference between tail
recursion and a loop?_

| For a Loop |          | For Tail Recursion |          |
|:----------:|:---------|:------------------:|:---------|
|    Time    | **O(n)** |        Time        | **O(n)** |
|   Space    | **O(1)** |       Space        | **O(n)** |

The loop will take less space in memory since it only has to be generated once when compiled. On the other hand, for tail recursion, each time the function is called, a new activation recored is made in the stack. Making _**n**_ copies until the recursion ends.

_Therefore_, if you have to write a tail recursion, **it is better to rewrite it as a loop**, which is more space efficent.

**This is not the case for all types of recursion.**

---

## Head Recursion

``` c++
void func(const int& n) {
    if (n > 0) {
        func(n-1);
        std::cout << n << '\n';
    }
}
```

### What does the code mean?

It _**means that the function does not have to process or perform any operation at the time of calling**_. So, it has to do everything at the time of returning. All processing is done at returning time.

Going off of the previous recursion, could we also rewrite head recursive functions into loops for better space efficency. **The short answer is no**. But, it is possible to make some head recursive functions into loops, they would just take far more effort, or have to be written differently compared to a simple conversion.

---

## Tree Recursion

To start off this topic, we want to compare linear recursion and tree recursion:

### Linear Recursion

``` c++
func(const int& n) {
    if (n > 0) {
        ----;
        ----;
        func(n - 1);
        ----;
        ----;
    }
}
```

- If the recursive function is **_calling itself only once_**, then it is a Linear Recursion.
- So, looking at Head and Tail Recursion, we can see they are linear
  - but in the example above we can see that there is some processing before and after the call
  - So, it is categorized as a recurive call.

### Tree Recursion

``` c++
func(const int& n) {
    if (n > 0) {
        ----;
        ----;
        func(n - 1);
        ----;
        ----;
        func(n - 1);
        ----;
        ----;
    }
}
```

- If the recursive function is **_calling itself more than once_**, then it is a Tree Recursion.