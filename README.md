# Wizuall Compiler

**Wizuall** is a custom programming language designed for easy data visualization.  
This project builds a **Lex and Bison-based compiler** that parses Wizuall code and generates **Python scripts** to visualize data from **CSV files**.

---

## Project Structure

- **Lexer**: Built with **Flex**, handles tokenization of Wizuall syntax.
- **Parser**: Built with **Bison**, parses Wizuall grammar into an abstract syntax tree (AST).
- **Code Generator**: Converts parsed Wizuall programs into Python code using libraries like `matplotlib` and `pandas`.
- **Input Data**: Visualization input is provided through CSV files.

---

## Example Flow

1. Write your Wizuall program (`.wiz` file).
2. Run the compiler to generate Python code.
3. Execute the Python script to visualize your data.

---
### System Dependencies

Make sure you run the setup script
```python
bash setup.sh
