# ATM Simulation

##  Description
This project is a simple ATM simulation program written in C++. It allows users to perform basic banking operations such as checking balance, depositing money, and withdrawing money. The program runs in a loop until the user chooses to exit.

---

##  Features
- Check account balance
- Deposit money
- Withdraw money
- Input validation for invalid and insufficient amounts
- Menu-driven interface

---

##  Program Structure

### Class: ATM
- **balance** → stores the account balance
- **deposit(amount)** → adds money to balance
- **withdraw(amount)** → withdraws money with validation
- **checkBalance()** → displays current balance

---

##  How to Run

### Compile
```bash
g++ atm.cpp -o atm
