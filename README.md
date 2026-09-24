# Real-Time Oscilloscope Using Arduino Mega 2560

## Project Overview

This project presents a low-cost, portable real-time oscilloscope prototype using an Arduino Mega 2560 and a TFT display. The system acquires an analog electrical signal and displays its waveform on the TFT screen in real time.

The project demonstrates practical embedded-systems concepts including analog signal acquisition, ADC usage, microcontroller programming, TFT display interfacing, and real-time waveform visualization.

## Objectives

- Develop a low-cost oscilloscope prototype using Arduino Mega 2560.
- Acquire analog electrical signals using the microcontroller's ADC.
- Display the acquired waveform on a TFT screen in real time.
- Demonstrate interfacing between the microcontroller and display.
- Test the system using sine, triangle, and square wave signals.

## Hardware

- Arduino Mega 2560
- 2.4-inch TFT LCD display
- XR2206 function generator
- Connecting wires and power supply

## Software

- Arduino IDE 2.3.6
- Embedded C / Arduino C/C++
- Adafruit_GFX library
- MCUFRIEND_kbv library

## Working Principle

1. An electrical test signal is provided using the XR2206 function generator.
2. The signal is connected to analog input A15 of the Arduino Mega 2560.
3. The Arduino reads the analog signal using its ADC.
4. The acquired ADC values are mapped to the TFT display coordinates.
5. The waveform is plotted on the TFT screen in real time.
6. The display grid is redrawn for the next waveform trace.

## Results

The prototype successfully demonstrates real-time visualization of sine, triangle, and square waveforms on the TFT display.

The project also provided practical experience with ADC-based signal acquisition, TFT display interfacing, waveform plotting, and embedded hardware/software integration.

## Limitations

The project report identifies limitations related to ADC voltage range, sampling/bandwidth, and waveform visualization. The prototype is intended as a low-cost educational and experimental system rather than a replacement for a laboratory-grade oscilloscope.

## Future Scope

Possible improvements described in the project report include:

- Higher sampling rate
- Multichannel signal acquisition
- Automatic scaling and triggering
- Data logging using an SD card
- PC/mobile connectivity
- Frequency and RMS measurement
- Touchscreen controls
- Custom PCB development
- Advanced signal processing and FFT
- IoT integration

## Project Files

- `Real_Time_Oscilloscope.ino` — Arduino source code
- `Real-Time Oscilloscope Project Report.pdf` — Complete project report

## Applications

The project can be used for educational laboratories, basic circuit testing, sensor signal monitoring, and DIY electronics experimentation.
