# Memory Management in C

This project demonstrates **dynamic memory allocation**, **bit manipulation**, and **modular program design** using the C programming language.  
It simulates a simple photo processing system that converts, compresses, and displays pixel data using ASCII representation.

---

## Features
- Modular architecture with separate `.c` and `.h` files  
- Dynamic arrays for handling photo data  
- Bit packing and unpacking for compression  
- ASCII visualization of photos  
- Custom error handling

---

## File Overview
| File | Description |
|------|--------------|
| **main.c** | Controls the program flow — loads, prints, and compresses photos |
| **photo.c** | Implements photo manipulation functions |
| **photo.h** | Contains function declarations and error codes |
| **camera.h** | Provides camera simulation and constants for photo size |

---

## Technologies Used
- **C Language**
- **Standard I/O**
- **Pointers & Arrays**
- **Memory Management**

---
**Gana Said**  
Bachelor of Computer Science (AI Stream) – Carleton University  
📧 [janasaid@cmail.carleton.ca](mailto:janasaid@cmail.carleton.ca)

---

## 🧩 How to Run
1. Compile the program:
   ```bash
   gcc main.c photo.c -o memory_project
