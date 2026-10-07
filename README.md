# atm-simulator-c
A localized ATM simulator built in C using switch-cases, while loops, and structural state-tracking logic.
# ATM Simulator in C

An interactive, console-based **ATM Simulator** application built using C language. This project builds upon my first CLI Calculator project, focusing on intermediate control flow, state management, and real-time transaction tracking.

## 🚀 Features

- **Secure PIN Entry**: Protects account access using a 3-attempt lock mechanism.
- **Persistent Session State**: Allows seamless banking operations (checking balances, withdrawing, and depositing) without needing to re-enter your PIN for every action.
- **Indian Rupee (₹) Formatting**: Designed with localized currency displays for practical realism.
- **Transaction Cap Security**: Automatically enforces a **5-transaction limit** per session to protect the user from unauthorized card exploitation.
- **Sassy Input Validation**: Built-in protective code preventing negative numbers, overdrafts, and empty transaction attempts (with customized error humor!).

## 🛠️ Concepts Demonstrated

- **`while` Loops**: Separated into two distinct phases—Phase 1 handles secure login retries, while Phase 2 keeps the active ATM banking menu open.
- **`switch-case` Statements**: Implemented to build clean, readable routing logic for handling the core menu operations (`1` to `4`).
- **`if-else` Nesting**: Applied defensively inside banking logic to track account values, manage attempt decrements, and validate limits.

## 💻 How to Run

### Prerequisites
Ensure you have a standard C compiler installed (like `gcc` or `clang`).

### Compilation
Open your terminal, navigate to your project directory, and compile using:
```bash
gcc main.c -o atm_simulator
```

### Execution
Run the compiled executable file:
```bash
./atm_simulator
```

## 📝 Default Simulation Parameters
- **Preset PIN**: `1`
- **Starting Balance**: `₹ 12,500.00`
- **Session Max Transactions**: `5`
