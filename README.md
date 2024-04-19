# System-Software

## Two-Pass-Assembler

This assembler is designed to convert assembly language code into machine code in two passes.

### How it Works:


**First Pass** : In the initial pass, the assembler scans the entire source code, collecting information about labels, symbols, and addresses. It builds a symbol table and records the addresses of each instruction and data item. Any unresolved symbols are noted for later resolution in the second pass.

**Second Pass**: With the symbol table constructed in the first pass, the assembler now goes through the source code again, generating the actual machine code instructions. It resolves any unresolved symbols and translates the assembly instructions into their corresponding machine code representations.

### Pass-1

In the first pass of our Two-Pass Assembler, the primary goal is to scan the entire assembly language source code and gather essential information about labels, symbols, and addresses. This pass sets the foundation for the subsequent translation process in the second pass.

#### Key Steps in Pass 1:

**Reading Source Code**: The assembler reads the assembly language source code line by line, analyzing each instruction and data declaration.
Parsing Instructions: Each line of code is parsed to identify labels, mnemonic instructions, operands, and directives.

**Building Symbol Table**: As the assembler encounters labels and symbols, it constructs a symbol table. This table maps each symbol to its corresponding address or value. Labels are associated with the memory addresses where they are defined, allowing for easy reference during the second pass.

**Assigning Addresses**: During the first pass, memory addresses for instructions and data items are determined. The assembler calculates the addresses based on the instruction size and the memory layout specified by directives such as ORG (origin).

**Error Detection**: Pass 1 also performs preliminary error detection. It checks for syntax errors, undefined symbols, duplicate labels, or other issues that may hinder the assembly process. Any errors encountered are reported to the user for correction.

**Handling Pseudo-Operations**: Pseudo-operations, such as EQU (equation) and DS (define storage), are processed in this pass. These directives may affect the symbol table or memory allocation.

##### Algorithm


![pass1](https://github.com/VRASHABHPATIL/System-Software/assets/105427388/c577fb5c-022a-47b2-a0e9-07f547529c34)
