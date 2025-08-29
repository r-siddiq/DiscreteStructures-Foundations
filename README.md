# Discrete Structures

A collection of C++ console programs written for **CS 131: Discrete Structures**.  
Each file builds into its own executable and demonstrates a core concept from the course: logic, sets, functions, recursion, permutations, and probability.

> **Tooling:** CMake creates one executable per `*.cpp` (named after the file). The project targets **C++20**.

---

## 📁 Project Layout

```
discrete-structures/
├─ CMakeLists.txt
├─ README.md
├─ AsymptoticComplexity.cpp   # O(n), O(log n), O(n^2) growth demo
├─ BoolLogic.cpp              # Boolean function evaluator f(x,y,z)
├─ DeMorgansLaws.cpp          # Verify De Morgan’s Laws
├─ DirectProofs.cpp           # Direct proof with perfect squares
├─ FloorCeilRounding.cpp      # Floor and ceiling of real numbers
├─ nPrPermutations.cpp        # Recursive factorial for permutations
├─ QuantsContas.cpp           # Quantifiers and contrapositives
├─ RandomProbability.cpp      # Probability of random matches
├─ RecursiveCounter.cpp       # Recursively count digits of a number
└─ SetOperations.cpp          # Union and intersection of sets
```

---

## 🛠️ Prerequisites

- CMake **≥ 3.25**
- A C++20 compiler  
  - Windows: MSVC (Visual Studio 2022)  
  - macOS: Apple Clang (Xcode tools)  
  - Linux: GCC 12+ or Clang 15+  

No third-party libraries are required.

---

## 🚀 Build Once, Run Any Program

From the repository root:

### Windows (Visual Studio generator)
```powershell
cmake -S . -B build -G "Visual Studio 17 2022"
cmake --build build --config Release
# Run executables:
.\build\Release\DeMorgansLaws.exe
.\build\Release\QuantsContas.exe
.\build\Release\SetOperations.exe
# ... etc.
```

### macOS / Linux (default Makefiles or Ninja)
```bash
cmake -S . -B build
cmake --build build -j
# Run executables:
./build/DeMorgansLaws
./build/QuantsContas
./build/SetOperations
# ... etc.
```

💡 Add a new `Foo.cpp` and rerun the two CMake commands above—CMake will generate a `Foo` executable automatically.

---

## 📚 Program Index

| Executable (target)       | What it does | Core topics | Typical interaction |
|---------------------------|--------------|-------------|----------------------|
| `DeMorgansLaws`           | Demonstrates De Morgan’s laws with integer predicates. | Boolean algebra, logic laws | Prompts for 4 integers (x,y,i,j) |
| `QuantsContas`            | Tests universal quantifiers and contrapositives (odd/even). | Quantifiers, logic | Prompts for integer n |
| `DirectProofs`            | Proves that product of two perfect squares is a square. | Direct proof, square roots | Prompts for integers m, n |
| `SetOperations`           | Computes union & intersection of two sets (size 4 each). | Sets, algorithms | Prompts for elements of two sets |
| `FloorCeilRounding`       | Displays floor and ceiling of real numbers. | Floor/ceil functions | Prompts for 4 doubles |
| `BoolLogic`               | Evaluates a custom Boolean function f(x,y,z). | Boolean functions | Prompts for true/false inputs |
| `AsymptoticComplexity`    | Shows examples of O(n), O(log n), and O(n^2). | Asymptotic growth | Prompts for integer n |
| `RecursiveCounter`        | Recursively counts the digits of a number. | Recursion | Prompts for an integer |
| `nPrPermutations`         | Computes permutations P(n,r) with recursion. | Factorial, recursion | Prompts for n and r |
| `RandomProbability`       | Generates 3 random numbers and computes match probability. | Probability, random | Prompts for lower/upper bounds |

---

## 🔧 Building Tips

- If you add new `.cpp` files at the top level, CMake will automatically create a new executable for each on the next configure/generate step.
- On Windows, the built executables live under `build\{Debug|Release}\` when using Visual Studio generators.
- If a program appears to “hang,” it’s usually waiting for input—check the “Typical interaction” column above.

---

## ✅ License / Usage

These are educational lab exercises; feel free to use, modify, and extend for learning purposes.
