# Core Structure of a C Program
- Documentation Section
- Optional comments describing the program’s purpose.
- Helps others (or future you) understand the code.

- Preprocessor Directives
    - Start with #include to load standard libraries like:
        - <stdio.h> for input/output
        - <stdlib.h> for memory management
    - May also include macros via #define.

- Global Declarations
    - Variables or functions declared outside main() that can be accessed anywhere.

- main() Function
    - The entry point of every C program.

    - Syntax:
      ``` 
      int main() { 
         /* code */ 
          return 0; 
      }
      ```
    - Contains variable declarations, logic, and function calls.

- Variable Declarations
    - Inside main() or other functions.
    - Must be declared before use.

- Statements and Expressions
    - Actual logic: calculations, loops, conditionals, etc.
    - Each statement ends with a semicolon ;.

- Return Statement
    - Ends the main() function.
    - Typically return 0; to indicate successful execution for operating system.


## Key Syntax Rules

- Semicolons ; terminate statements.
- Braces {} define blocks of code.
- Comments use // for single-line or /* ... */ for multi-line.
- Identifiers must start with a letter or underscore, not a digit.
    - Think of Identifiers as "Names You Create"
        - Examples:
            - int score; → score is an identifier.
            - void calculateTotal() → calculateTotal is an identifier.

    - Rules for Naming Identifiers:
        - To be valid, an identifier must follow these rules:
        - Must begin with a letter (A–Z, a–z) or an underscore _
        - Can include letters, digits (0–9), and underscores
        - Cannot start with a digit
        - Cannot be a C keyword (like int, return, while)
        - Case-sensitive: total, Total, and TOTAL are all different

    - Invalid Examples:
        - 1value → starts with a digit ❌
        - float → reserved keyword ❌
        - my-name → contains a hyphen ❌

    - Naming Conventions (Optional but Helpful):
        - Use camelCase for variables and functions: totalAmount, getScore()
        - Use UPPER_SNAKE_CASE for constants: MAX_SIZE
        - Use PascalCase for structures: StudentRecord
