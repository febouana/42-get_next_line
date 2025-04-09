# 🧩 42-get_next_line - Mastering File Reading in C

Welcome to my implementation of the `get_next_line` project for the 42 curriculum! This repository contains the project aimed at mastering file reading in C.

---

## **📜 Project Overview**
The goal of this project is to create a function in C that reads and returns a line from a file descriptor. Each successive call to the `get_next_line()` function should allow reading the next line of the file. This project helps in understanding file handling, memory management, and buffer usage in C.

### **Key Concepts**
This project targets specific concepts in C:
- **File I/O:** Reading from file descriptors.
- **Memory Management:** Dynamic memory allocation and management.
- **Buffer Handling:** Efficiently managing buffers to read data.

### **Features**
The project includes:
- **Detailed Implementation:** A step-by-step implementation of the `get_next_line` function.
- **Example Usage:** Sample usage to help you understand how to use the function.
- **Test Cases:** Sample test cases to validate the implementation.

### **Requirements**
- No memory leaks allowed.
- The project must include:
  - **Makefile** with rules:
    - `all` (compile project)
    - `clean` (remove object files)
    - `fclean` (remove object files & executable)
    - `re` (recompile everything)
  - Detailed comments and documentation for code clarity.
 
### **🎯 Bonus Part**
The bonus tasks for the `get_next_line` project involve two enhancements:
  1. Implement `get_next_line()` using only one static variable.
  2. Modify the function to handle multiple file descriptors

---

## 📂 Project Structure

```plaintext
42-get_next_line/
├── get_next_line.c         # Implementation of the get_next_line function
├── get_next_line.h         # Header file for the function
├── get_next_line_utils.c   # Utility functions used by get_next_line
├── main.c                  # Main file to test the function
├── Makefile                # Makefile to build the project
└── README.md               # This file
```
---

### **🛠️ Installation & Usage**
To compile and run the project, clone the repository and use the provided Makefile.

### **📥 Clone & Compile**
```sh
git clone https://github.com/febouana/42-get_next_line.git
cd 42-get_next_line
make
```
### **🚀 Running the program**
```
./get_next_line [file_descriptor]
```
