## ATM Machine in C

This project is a simple ATM Machine program developed using C language. It allows users to withdraw money and calculates the required currency notes based on the available ATM stock.

### 1. ATM Machine Declaration

The ATM Machine project demonstrates how a basic ATM withdrawal system works. It checks the withdrawal amount, verifies available funds, calculates notes, and updates the remaining note stock.

### 2. Concepts Used

- C Programming
- Variables and Data Types
- Global and Local Variables
- Input and Output (`printf`, `scanf`)
- Conditional Statements (`if-else`)
- Arithmetic Operators
- Modulus Operator (`%`)
- Integer Division
- Basic ATM Note Management

### 3. ATM Machine Maximum Limit

Initially, the ATM contains the following notes:

| Note Value | Number of Notes | Total Amount |
|---|---:|---:|
| ₹100 | 1000 | ₹1,00,000 |
| ₹200 | 1000 | ₹2,00,000 |
| ₹500 | 1000 | ₹5,00,000 |
| ₹2000 | 1000 | ₹20,00,000 |
| **Total** | **4000** | **₹28,00,000** |

**Maximum available amount: ₹28,00,000 (₹28 lakh)**

The withdrawal amount must be a positive multiple of ₹100. The ATM checks its available stock before completing a withdrawal.

### 4. Future Features and Improvements

I will continue improving this project as I learn new C programming concepts.

Planned improvements:

- **Loops:** Allow multiple transactions without restarting the program.
- **File Handling:** Save ATM note stock and transaction details in files.
- **Functions:** Divide the program into smaller, reusable functions.
- **User Authentication:** Add a basic PIN verification system.
- **Balance Management:** Track and display the remaining ATM cash.
- **Improved Validation:** Handle invalid inputs and insufficient note availability.
