# Discord Bot Base

This project is a base for C++ bot developers who want to create their own Discord bots using the DPP (Discord++) library. It aims to provide an easy-to-use starting point and clean structure, saving time and effort by avoiding setup and compilation issues. The goal is to make it easier for others to get started with their own bots.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Features

- A clean base to start your Discord bot in C++.
- Provides easy-to-understand instructions on how everything works.
- Includes basic bot setup with the DPP library.
- Handles the most common problems and configurations related to C++ Discord bots.
- Allows others to expand and customize their bot with minimal effort.

## Requirements

Before you start, make sure you have the following tools installed:

- **CMake** (version 3.15 or higher)
- **GCC** or **Clang** (for compiling C++ code)
- **Git** (for version control and cloning the repository)
- **A Discord bot token** (you can get this by creating a bot on the [Discord Developer Portal](https://discord.com/developers/applications))

## Getting Started (You can skip this if you know what you are doing.)

### 1. Clone the repository

To clone the repository, open a terminal and run the following command:

```bash
git clone https://github.com/AaReXi/DPP-config.git
cd DISCORD
```

### 2. Install CMake

CMake is required to build the project. Here are the instructions for installing it on different platforms:

#### On Linux

Most Linux distributions come with CMake in their package manager. You can install it using the following commands:

For **Ubuntu** or **Debian-based systems**:

```bash
sudo apt update
sudo apt install cmake
```

For **Fedora** or **RHEL-based systems**:
```bash
sudo dnf install cmake
```

For Arch:
```bash
sudo pacman -S cmake
```

#### On Windows

- 1. Go to the [CMake Downloads page](https://cmake.org/download/).
- 2. Download the installer for Windows.
- 3. Run the installer and follow the instructions to complete the installation.
- 4. **Ensure that the option to add CMake to the system PATH is checked** during the installation.

### 3. Install VSCode CMake plugin (Skip if you **don't use** VSCode)

#### Installing CMake

- 1. Open VSCode
- 2. Go to the **Extensions** view by clicking the Extensions icon in the left sidebar or pressing `Ctrl+Shift+X`.
- 3. In the search bar, type **CMake Tools**.
- 4. Click Install on the CMake Tools extension by Microsoft.

#### Download C/C++ plugin

To enable full C++ development support, you will also need to install the C++ plugin.

- 1. Open VSCode (if not already open).
- 2. In the Extensions view, type **C++** into the search bar.
- 3. Find **C/C++** by Microsoft and click Install.

### 4. Setting up your TOKEN.

You need to provide your Discord bot token in the **TOKEN.json** file.

- 1. Go to the Discord Developer Portal.
- 2. Create a new application and a bot.
- 3. Copy your bot's token.
- 4. Open **TOKEN.json** in the project folder.
- 5. Replace the placeholder with your bot's token:

## Building the Project

After setting up the development environment, you can now build the bot. Follow these steps:

1. Open a terminal in the project folder.

2. Create a build directory:
```bash
mkdir build
cd build
```

3. Run this command:
```bash
cmake ..
```

4. After configuring compile it:
```bash
make -j12
```

This will create a **run** file in bin folder. You can run it, and see your bot come to life!

## Troubleshooting

If you encounter any issues while setting up or building the project, here are some common solutions:

- **CMake issues**: Make sure that you have installed the correct version of CMake. If you're using an older version, try updating it.
- **GCC issues**: Ensure that GCC or Clang is installed and available in your system's PATH.
- **Missing dependencies**: If any dependencies are missing, ensure that you've followed the installation steps for your platform correctly.

If you're still having trouble, feel free to open an issue on the GitHub repository.
