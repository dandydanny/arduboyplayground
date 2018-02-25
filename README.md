# Arduboy Playground

### What?
Project snippets that support my experimentations with the [Arduboy](https://arduboy.com/), an 8-bit, Arduino-compatible handheld game console

### Why?
I've always been wanting to get into game development. 8-bit low-poly... uh, pixel, games have a special appeal to me.

### Requirements
1. Arduino IDE
1. Arduboy console (TODO: there may be a web-based emulator somewhere: include a link)

### Setup
1. Install [Arduino IDE](https://www.arduino.cc/en/Main/Software#download)
2. Install required libraries
	* Sketch > Include Library > Manage Libraries
	* Search for `Arduboy`
	* Install _all_ the libraries ;)
	* Connect Arduboy to development machine via USB
	* Set board type:
		* Tools > Board > Arduino Leonardo
	* Select port:
		* Tools > Port > COM# (Arduino Leonardo)
	* Load or paste in a sketch
	* Click on the upload button to upload the code; Arduboy will reboot and execute the newly uploaded code
