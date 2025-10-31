
```markdown
# 🏦 Bank Account Management System (C++)

A simple **Bank Account Management System** written in **C++**.  
This program allows users to create an account, deposit and withdraw money,  
and view account details using a menu-driven interface.

---

## 🚀 Features
✅ Create a new account with a name, account number, and initial balance  
✅ Deposit money safely  
✅ Withdraw money with balance check  
✅ View account details anytime  
✅ Menu-based navigation for ease of use  

---

## 🧠 Concepts Used
- Classes and Objects  
- Constructors  
- Data Encapsulation (private data members)  
- Switch-case control structure  
- Input/Output handling  

---

## 📁 Project Structure
```

bank-account/
│
├── bank_account.cpp   # Main C++ source code
└── README.md          # Project documentation

````

---

## 💻 How to Run

### 🧰 Using Command Line
1. Save the file as **`bank_account.cpp`**  
2. Open terminal or command prompt in that folder  
3. Compile the program:
   ```bash
   g++ bank_account.cpp -o bank_account
````

4. Run the executable:

   ```bash
   ./bank_account
   ```

---

## 🧪 Sample Output

```
Enter account holder name: Rahul Sharma
Enter account number: 10245
Enter initial balance: ₹1000

=== Bank Account Menu ===
1. Deposit Money
2. Withdraw Money
3. View Account Details
4. Exit
Enter your choice: 1
Enter amount to deposit: ₹500
Deposited: ₹500

Enter your choice: 3
===== Account Details =====
Account Holder: Rahul Sharma
Account Number: 10245
Current Balance: ₹1500
=============================
```

---

## 🛠️ Requirements

* Any C++ compiler (e.g., GCC, MinGW, Turbo C++, Code::Blocks)
* Basic knowledge of object-oriented programming

---

## 📅 Future Enhancements

* 🔐 Add login system using PIN
* 👥 Support multiple user accounts
* 💾 Store account data in files for persistence

Would you like me to make a **multi-user version** of this Bank Account program next (where multiple accounts can be created and stored in an array/vector)? It’s a great next step for a C++ mini project.
```
