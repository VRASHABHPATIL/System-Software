# System-Software

## Two-Pass-Assembler

This assembler is designed to convert assembly language code into machine code in two passes.

### How it Works:


**First Pass** : In the initial pass, the assembler scans the entire source code, collecting information about labels, symbols, and addresses. It builds a symbol table and records the addresses of each instruction and data item. Any unresolved symbols are noted for later resolution in the second pass.

**Second Pass**: With the symbol table constructed in the first pass, the assembler now goes through the source code again, generating the actual machine code instructions. It resolves any unresolved symbols and translates the assembly instructions into their corresponding machine code representations.

### Pass-1

In the first pass of our Two-Pass Assembler, the primary goal is to scan the entire assembly language source code and gather essential information about labels, symbols, and addresses. This pass sets the foundation for the subsequent translation process in the second pass.

### Key Steps in Pass 1:

**Reading Source Code**: The assembler reads the assembly language source code line by line, analyzing each instruction and data declaration.
Parsing Instructions: Each line of code is parsed to identify labels, mnemonic instructions, operands, and directives.

**Building Symbol Table**: As the assembler encounters labels and symbols, it constructs a symbol table. This table maps each symbol to its corresponding address or value. Labels are associated with the memory addresses where they are defined, allowing for easy reference during the second pass.

**Assigning Addresses**: During the first pass, memory addresses for instructions and data items are determined. The assembler calculates the addresses based on the instruction size and the memory layout specified by directives such as ORG (origin).

**Error Detection**: Pass 1 also performs preliminary error detection. It checks for syntax errors, undefined symbols, duplicate labels, or other issues that may hinder the assembly process. Any errors encountered are reported to the user for correction.

**Handling Pseudo-Operations**: Pseudo-operations, such as EQU (equation) and DS (define storage), are processed in this pass. These directives may affect the symbol table or memory allocation.

### Algorithm


![pass1](https://github.com/VRASHABHPATIL/System-Software/assets/105427388/c577fb5c-022a-47b2-a0e9-07f547529c34)

### Pass-2

In the second pass of our Two-Pass Assembler, the assembler utilizes the information collected in the first pass to translate the assembly language source code into machine code instructions. This pass focuses on generating the actual binary representation of each instruction and data item.

### Key Steps in Pass 2:

**Reading Source Code**: Similar to Pass 1, the assembler reads the assembly language source code line by line.

**Parsing Instructions**: Each line of code is parsed again to identify labels, mnemonic instructions, operands, and directives. However, in this pass, the assembler focuses on translating these elements into machine code.

**Translating Instructions**: Using the symbol table constructed in Pass 1, the assembler translates mnemonic instructions into their corresponding binary representations. It replaces symbolic operands with their resolved memory addresses or immediate values.

**Generating Object Code**: As instructions are translated, the assembler generates the object code, which consists of binary representations of each instruction and data item. This object code represents the executable machine instructions that will be loaded into memory for execution.

**Error Handling**: Pass 2 continues error detection and reporting. It verifies the correctness of the generated machine code and ensures that all instructions are properly translated. Any errors encountered, such as invalid instructions or unresolved symbols, are reported to the user for resolution.

**Output Generation**: Once the entire source code is processed, the assembler produces the final output, which may include the generated machine code, symbol table, and any additional diagnostic messages or reports.

### Algorithm

![pass2](https://github.com/VRASHABHPATIL/System-Software/assets/105427388/41613356-80f4-47c5-b7f8-ed9384af4403)
