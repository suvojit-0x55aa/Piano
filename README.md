# Piano Application

## Overview

This project is a simple piano application built using the `<graphics.h>` library. It allows users to play musical notes by pressing keys on the keyboard. The application has two versions: **Piano v0.1** and **Piano v1.0**. Each version has its own features and improvements.

## Piano v0.1

### Features

- Basic piano functionality with a limited set of keys.
- Each key corresponds to a musical note, which is played when the key is pressed.
- The piano keys are drawn on the screen, and pressing a key fills it with white color temporarily.
- The application clears the screen and redraws the keys after each note is played.

### Code Structure

- **Includes**: Standard libraries for input/output, graphics, and DOS functions.
- **Functions**:
  - `pno(int)`: Plays a sound at a specified frequency.
  - `pnobody(void)`: Draws the piano keys and background.
- **Main Loop**: Listens for key presses and plays corresponding notes.

### Example Key Mappings

- Pressing 'q' plays note C4.
- Pressing 'w' plays note D4.
- Pressing '1' plays note C3.

### Limitations

- The piano keys are hardcoded with specific positions, making it less flexible.
- Limited visual feedback; keys are only filled with white when pressed.

## Piano v1.0

### Improvements

- Enhanced graphics and user interface.
- More keys available for playing, including both letters and numbers.
- Each key press provides visual feedback with different colors (e.g., red, green, yellow).
- The application maintains a more organized structure and improved readability.

### Code Structure

- **Includes**: Same as v0.1, but with additional graphics for better visuals.
- **Functions**:
  - `pno(int)`: Plays a sound at a specified frequency, with a longer duration.
  - `pnobody(void)`: Draws the piano keys and background with improved graphics.
- **Main Loop**: Similar to v0.1 but includes more key mappings and better visual feedback.

### Example Key Mappings

- Pressing 'q' plays note C4.
- Pressing 'w' plays note D4.
- Pressing '1' plays note C3.
- Pressing '2' plays note D3.
- Pressing '8' plays note F4.

### New Features

- The addition of more keys allows for a wider range of notes.
- Visual feedback is enhanced with different colors for each key.
- The application is more responsive and visually appealing.

## Conclusion

Both versions of the piano application provide a fun way to interact with music through keyboard input. While `Piano v0.1` serves as a basic implementation, `Piano v1.0` introduces significant improvements in functionality, usability, and visual appeal. Users are encouraged to explore both versions to understand the evolution of the application and its capabilities.

## Usage

To run the application, ensure you have the necessary graphics library set up in your development environment. Compile the desired version and execute it to start playing the piano!
