# <div align="center">🛠️ clsUtil Library</div>

<div align="center">

A collection of useful helper functions designed to simplify common programming tasks in C++.

</div>

---

## 🛠️ Technologies & Tools

<div align="center">

![C++](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=cplusplus&logoColor=white)
![Visual Studio](https://img.shields.io/badge/Visual%20Studio-5C2D91?style=for-the-badge&logo=visualstudio&logoColor=white)
![Git](https://img.shields.io/badge/Git-F05032?style=for-the-badge&logo=git&logoColor=white)
![GitHub](https://img.shields.io/badge/GitHub-181717?style=for-the-badge&logo=github&logoColor=white)
![License](https://img.shields.io/badge/License-MIT-green?style=for-the-badge)

## 📌 Overview

**clsUtil** is a C++ utility library that provides a set of reusable functions for random generation, swapping values, shuffling arrays, text encryption, and more.

## ✨ Features

- 🎲 Generate random numbers and characters.
- 🔤 Generate random words and keys.
- 🔀 Swap values of different data types.
- 📊 Shuffle arrays.
- 📝 Fill arrays with random numbers, words, and keys.
- 🔒 Encrypt and decrypt text.
- 📏 Generate tab spacing.

</div>

## 📂 Project Structure

```text
clsUtil/
│
├── clsUtil.h
└── clsUtil.cpp
```

## 🚀 Usage

Include the library header file in your project:

```cpp
#include "clsUtil.h"
```

Example:

```cpp
clsUtil::Srand();

int RandomValue = clsUtil::RandomNumber(1, 100);

std::string RandomKey = clsUtil::GenerateKey();
```

---

## 👨‍💻 Author

**Mohamed Askar**

