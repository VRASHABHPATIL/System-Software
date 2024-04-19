# System-Software

## Two-Pass-Assembler

This assembler is designed to convert assembly language code into machine code in two passes.

### How it Works:

*First Pass*: In the initial pass, the assembler scans the entire source code, collecting information about labels, symbols, and addresses. It builds a symbol table and records the addresses of each instruction and data item. Any unresolved symbols are noted for later resolution in the second pass.

*Second Pass*: With the symbol table constructed in the first pass, the assembler now goes through the source code again, generating the actual machine code instructions. It resolves any unresolved symbols and translates the assembly instructions into their corresponding machine code representations.
