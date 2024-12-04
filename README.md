# ANSI-ISO-CPlusPlus-Project

## Table of Contents
- [Introduction](#introduction)
- [Tech Stack](#tech-stack)
- [Features](#features)
- [Project Structure](#project-structure)
- [Getting Started](#getting-started)
  - [Prerequisites](#prerequisites)
  - [Installation](#installation)
  - [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)
- [Acknowledgments](#acknowledgments)

## Introduction

The **ANSI-ISO-CPlusPlus-Project** is a C++ based repository showcasing a variety of exercises and concepts focusing on ANSI (American National Standards Institute) and ISO (International Organization for Standardization) standards of the C++ programming language. The project covers important aspects of C++ such as object-oriented programming, data structures, algorithms, and general software engineering principles. This repository serves as a valuable resource for developers looking to dive deep into standard C++ programming practices.

## Tech Stack

- **C++**: The project is primarily built using **C++** (compliant with both ANSI and ISO C++ standards).
- **C++17**: The repository is compatible with **C++17** features and utilizes the latest standards of the language.
- **Compiler**: The project can be compiled with most modern C++ compilers such as GCC, Clang, and MSVC.

## Features

- **ANSI/ISO Standard Compliant**: All code is written in strict adherence to ANSI and ISO C++ standards.
- **Object-Oriented Programming (OOP)**: The project demonstrates key OOP concepts such as classes, inheritance, polymorphism, and encapsulation.
- **Data Structures and Algorithms**: Implementations of common data structures (e.g., linked lists, stacks, queues) and algorithms (e.g., searching, sorting).
- **Best Practices**: Emphasizes writing clean, maintainable, and efficient code.
- **Cross-Platform Compatibility**: The project is designed to be compiled and run on various platforms that support modern C++ compilers.

## Project Structure
  ```bash
  ANSI-ISO-CPlusPlus-Project/
  ├── src/                     # Source files containing implementation
  │   ├── main.cpp             # Entry point of the project
  │   ├── dataStructures.cpp   # Implementations of data structures
  │   ├── algorithms.cpp       # Common algorithm implementations
  │   └── utils.cpp            # Utility functions
  ├── include/                 # Header files with function declarations
  │   ├── dataStructures.hpp   # Header for data structures
  │   ├── algorithms.hpp       # Header for algorithms
  │   └── utils.hpp            # Header for utility functions
  ├── CMakeLists.txt           # CMake build configuration file
  ├── README.md                # Project documentation (this file)
  ├── LICENSE                  # License file
  └── .gitignore               # Git ignore configuration file
  ```

## Getting Started

### Prerequisites

Before you can build and run the project, ensure you have the following installed:

- **C++ Compiler**: A C++17-compatible compiler (e.g., GCC, Clang, MSVC).
- **CMake**: For building the project with CMake.
- **Make** (optional): If you are using a Unix-based system for building.

### Installation

To set up the project locally:

- Clone the repository:
   ```bash
   git clone https://github.com/hanzala-bhutto/ANSI-ISO-CPlusPlus-Project.git
- Navigate into the project directory:
   ```bash
   cd ANSI-ISO-CPlusPlus-Project
   
- Build the project using CMake:
    ``` bash
    cmake . -G "Unix Makefiles"  # For Linux/macOS
    make                        # To build the project

### Usage

Once the project is built, follow these steps to run the program:

- **Start the compiled application**:
   - Navigate to the directory where the compiled executable is located after building.
   - Run the executable for the project:
   ```bash
   ./your_program_name   # On Linux/macOS
   your_program_name.exe  # On Windows

- **Explore the project:**
  - You can explore and modify various data structure and algorithm implementations within the src/ directory.
  - If you want to test a specific feature or implementation, update the main.cpp file or create additional test files as needed.
 
    
## Contributing

Contributions are welcome! If you have suggestions for improvements, bug fixes, or additional features, feel free to fork the repository and submit a pull request. Please make sure your changes adhere to the following guidelines:

- Ensure your code is ANSI/ISO C++ standard compliant.
- Write clean and well-documented code.
- Add tests if you're introducing new features or fixing bugs.

Please follow these steps to contribute:

1. Fork the repository.
2. Create a new branch (`git checkout -b feature-name`).
3. Make your changes.
4. Commit your changes (`git commit -am 'Add new feature or fix bug'`).
5. Push to the branch (`git push origin feature-name`).
6. Create a new Pull Request.

We greatly appreciate all contributions, big and small!

## License

This project is licensed under the **MIT License**. See the [LICENSE](LICENSE) file for more information.

## Acknowledgments

- Special thanks to the creators of the **ISO/ANSI C++ standards** for their contributions to the evolution of the C++ language.
- Acknowledgment to various open-source contributors and C++ community members for their continuous work in improving C++ libraries and practices.
- Thanks to **Stack Overflow** and other programming communities for providing solutions and advice on C++ best practices.
- Inspiration from C++ tutorials and courses across the internet, which helped shape the understanding of ANSI and ISO standards for C++.

