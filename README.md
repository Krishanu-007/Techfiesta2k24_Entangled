# Ultrasonic Maze Solver

## Introduction

This repository contains the codes, circuit diagrams, and schematics for the basic elements of an ultrasonic-based Maze solver. The project utilizes various components such as DC motors, Ultrasonic Sensor, and L293D IC.

## Elements Used

The following elements are used in the Maze Solver project:

- DC Motor
- Ultrasonic Sensor
- L293D IC

## Table of Contents

- [Installation](#installation)
- [Usage](#usage)
  - [Usage of Ultrasonic Sensor](#usage-of-ultrasonic-sensor)
    - [Use of a Single Ultrasonic Sensor](#use-of-a-single-ultrasonic-sensor)
    - [Use of Multiple Ultrasonic Sensors](#use-of-multiple-ultrasonic-sensors)
  - [Control of DC Motors](#control-of-dc-motors)
    - [Control of a Single DC Motor using L293D](#control-of-a-single-dc-motor-using-l293d)
    - [Control of Multiple DC Motors using L293D](#control-of-multiple-dc-motors-using-l293d)
  - [Control of DC and Servo Motors](#control-of-dc-and-servo-motors)
    - [Control of DC Motor by Ultrasonic Sensor](#control-of-dc-motor-by-ultrasonic-sensor)
    - [Control of Servo Motor by Ultrasonic Sensor](#control-of-servo-motor-by-ultrasonic-sensor)
- [Contributing](#contributing)
- [License](#license)

## Installation

### Required Libraries to be Installed

To use this project, you'll need to install the following libraries:

- **NewPing**: This library provides an easy-to-use interface for the HC-SR04 ultrasonic sensor.
- **AFmotor**: This library is used to control DC motors with the Adafruit Motor Shield.
- **Servo**: This library allows for easy control of servo motors.

You can install these libraries using the Arduino Library Manager or by manually downloading and installing them from their respective sources.

## Usage

### Usage of Ultrasonic Sensor

#### Use of a Single Ultrasonic Sensor

The circuit diagram alogn with the code and schematics for interfacing a  single ultrasonic sensor with Arduino Uno has been provided.

#### Use of Multiple Ultrasonic Sensors

The idea of communicating multiple ultrasonic sensors and making the necessary judgement has been implemented.

### Control of DC Motors

#### Control of a Single DC Motor using L293D

How does a DC motor is control with micro-controller using IC L293D is shown.

#### Control of Multiple DC Motors using L293D

Extending the controlling part and utilising the full potential of L293D for controlling 4 DC motors.

### Control of DC and Servo Motors

#### Control of DC Motor by Ultrasonic Sensor

Based on the sensor reading, the speed and the direction of rotation of DC motor is shown.

#### Control of Servo Motor by Ultrasonic Sensor

Based on the sensor reading, the direction of servo motor control is shown.

## Contributing

Feel Free to do the little tinkerings and changes with the codes wherever you feel improvement can be done.
## License

MIT License
