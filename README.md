# LOVE (Low-level Object Virtualization Environment)

LOVE is a lightweight, ultra-fast low-level object virtualization and bytecode simulation environment written in modern C++. It mimics a custom virtual machine (VM) core, abstracting memory objects, managing virtual registers, and executing low-level instructions with zero external framework dependencies.

## Features
- **Virtualization Core:** Simulates low-level hardware abstraction and register states.
- **Custom Instruction Processing:** Parses and executes specialized virtual operations.
- **Zero Overhead Memory:** Engineered for lightweight execution profiles and native speed.
- **Clean Architecture:** Fully written with explicit Allman-style formatting and encapsulated within custom namespaces.

## Usage
Run the executable with an optional integer to specify the number of virtual registers to initialize in the environment:
```bash
./love 8
```

## Architecture & Style
LOVE strictly follows the **KISS** (Keep It Simple, Stupid) principle and is optimized for low memory usage. The codebase uses the Allman style for bracket alignment, ensuring high readability and seamless minification for single-line deployment architectures.

## License
This project is open-source and licensed under the **GNU GPL v3.0**. See the LICENSE file for details. All rights reserved by **hypernova-developer**.
