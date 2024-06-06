## Project Milestones, Releases, and Branching Strategy

#### Milestone 1: Project Initialization and Basic Setup
* **Duration**: 2 days
* **Tasks**:
    * Set up the development environment (VS Code, Git).
    * Initialize the Git repository.
    * Create the basic project structure:
        * `src/`: Source code files.
        * `include/`: Header files.
        * `bin/`: Compiled binaries.
    * Create a simple "Hello, World!" program to verify the setup.
* **Branch**: `main`

#### Milestone 2: Core Temperature Control Functions
* **Duration**: 3 days
* **Tasks**:
    * Implement `setRoomTemperature` function.
    * Implement `adjustRoomTemperature` function.
    * Test core functionalities.
* **Branch**: `feature/temperature-control`
* **Merge**: After testing, merge `feature/temperature-control` into `main`.

#### Milestone 3: Light Control Functions
* **Duration**: 2 days
* **Tasks**:
    * Implement `turnOnLight`, `turnOffLight`, and `toggleLight` functions.
    * Implement `displayLightStatus` function to show the current status of the lights.
    * Test light control functionalities.
* **Branch**: `feature/light-control`
* **Merge**: After testing, merge `feature/light-control` into `main`.

#### Milestone 4: Security System Control
* **Duration**: 2 days
* **Tasks**:
    * Implement basic security system control functions (e.g., `armSystem`, `disarmSystem`, `checkSystemStatus`).
    * Implement function to display security system status.
    * Test security system functionalities.
* **Branch**: `feature/security-control`
* **Merge**: After testing, merge `feature/security-control` into `main`.

#### Milestone 5: User Interface and Display Integration
* **Duration**: 2 days
* **Tasks**:
    * Integrate functions to display current temperature, AC state, light status, and security system status.
    * Ensure real-time updates in the main program.
* **Branch**: `feature/user-interface`
* **Merge**: After testing, merge `feature/user-interface` into `main`.

#### Milestone 6: Final Review and Optimization
* **Duration**: 2 days
* **Tasks**:
    * Conduct a code review.
    * Optimize code for performance and readability.
    * Ensure all functions are well-documented.
* **Branch**: `final-optimization`
* **Merge**: After testing, merge `final-optimization` into `main`.
