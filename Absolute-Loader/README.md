## Absolute Loader

An absolute loader is a fundamental component of system software responsible for loading executable programs into a computer's memory for execution. Unlike relocating loaders or linkers, absolute loaders do not perform any relocation of program code or data. Instead, they directly load the program into memory at a fixed address without any modifications. This process involves reading header information from the program file to determine its size and starting address. Once this information is obtained, the loader allocates memory space accordingly and copies the contents of the program file into the allocated memory, starting at the specified address. After successful loading, control is transferred to the starting address of the program, initiating its execution. While absolute loaders were commonly used in early computer systems due to their simplicity, they have been largely replaced by more advanced loading techniques in modern operating systems. One of the main limitations of absolute loaders is their lack of flexibility, as programs must be loaded into memory at fixed addresses, which can lead to issues such as memory fragmentation and difficulty in managing multiple programs simultaneously. Despite their historical significance, absolute loaders are now primarily of interest in understanding the evolution of system software.

## Algorithm


<img src="https://github.com/VRASHABHPATIL/System-Software/assets/105427388/7e3b07e0-af5e-4767-86ae-4b3fd4729f1f" height="500" width="800"/>

