# 🛠️ Full Guide: Setting Up C Development Environment

This guide walks you through installing a C compiler, choosing an IDE or editor, and compiling C code on **Windows**, **macOS**, and **Linux**.

---

## 📦 Step 1: Install a C Compiler

### 🔹 Windows

#### Option 1: MinGW (GCC)
1. Download MinGW from [https://osdn.net/projects/mingw/](https://osdn.net/projects/mingw/)
2. Install and select `mingw32-gcc-g++` during setup
3. Add `C:\MinGW\bin` to your system PATH
4. Verify installation:
   ```bash
   gcc --version
   ```

#### Option 2: Microsoft Visual Studio (MSVC)
1. Download Visual Studio from [https://visualstudio.microsoft.com/](https://visualstudio.microsoft.com/)
2. During installation, select **"Desktop development with C/C++"**
3. Use the built-in compiler via the IDE or Developer Command Prompt

---

### 🔹 macOS

#### Option 1: Xcode Command Line Tools (GCC/Clang)
1. Open Terminal and run:
   ```bash
   xcode-select --install
   ```
2. Verify installation:
   ```bash
   gcc --version
   ```

#### Option 2: Homebrew (GCC)
1. Install Homebrew:
   ```bash
   /bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
   ```
2. Install GCC:
   ```bash
   brew install gcc
   ```

---

### 🔹 Linux (Ubuntu/Debian)

1. Open Terminal and run:
   ```bash
   sudo apt update
   sudo apt install build-essential
   ```
2. Verify installation:
   ```bash
   gcc --version
   ```

---

## 🖥️ Step 2: Choose an IDE or Editor

### 🔧 IDEs (Integrated Development Environments)

| IDE             | Platform      | Features                          |
|----------------|---------------|-----------------------------------|
| Visual Studio   | Windows       | Full-featured, MSVC integration   |
| Code::Blocks    | Cross-platform| Lightweight, GCC support          |
| Dev C++         | Windows       | Simple interface, beginner-friendly|

---

### 📝 Editors

| Editor          | Platform      | Features                          |
|----------------|---------------|-----------------------------------|
| VS Code         | Cross-platform| Extensions for C/C++, debugging   |
| Sublime Text    | Cross-platform| Fast, customizable                |
| Nano/Emacs       | Cross-platform| Terminal-based, powerful          |

---

## ⚙️  Step 3: Configure Your Environment

### VS Code Setup
1. Install [C/C++ extension by Microsoft](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools)
2. Configure tasks in `tasks.json` to compile code
3. Set up `launch.json` for debugging

---

### Code::Blocks / Dev C++
- Set compiler path in settings
- Create a new project and build using GUI

---

## 🚀 Step 4: Compile and Run C Code

### 🔹 Windows (MinGW)
```bash
gcc hello.c -o hello.exe
./hello.exe
```

### 🔹 Windows (MSVC via Developer Command Prompt)
```bash
cl hello.c
hello.exe
```

### 🔹 macOS (GCC/Clang)
```bash
gcc hello.c -o hello
./hello
```

### 🔹 Linux
```bash
gcc hello.c -o hello
./hello
```

---

## ✅ Sample C Program

```c
#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}
```

Save this as `hello.c` and compile using the steps above.

---

## 🧪 Verify Setup

After compiling, you should see:
```
Hello, World!
```

If you do, your environment is ready for C development!
