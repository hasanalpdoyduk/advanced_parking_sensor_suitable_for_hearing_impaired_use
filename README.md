# Advanced Parking Sensor Suitable for Hearing Impaired Use

This is a parking sensor that detects the obstacle in front of or behind the car with an ultrasonic sensor and transmits the distance data as a flashing light and as an informative display for hearing impaired drivers.

I tested this version with a car (Ford Focus Station Wagon 2018) in various weather conditions and on various road types and did not encounter any errors.

As this is a prototype, the ultrasonic sensor has to be manually attached to the front or rear of the vehicle.

In the next version, I intend to build a wireless connection between the ultrasonic sensor and the microprocessor.

<img src="https://github.com/hasanalpdoyduk/advanced_parking_sensor_suitable_for_hearing_impaired_use/blob/main/Documentation/aps_mainpart_photo.png" width="480" height="360" align="left" >
<img src="https://github.com/hasanalpdoyduk/advanced_parking_sensor_suitable_for_hearing_impaired_use/blob/main/Documentation/aps_externalpart_photo.png" width="480" height="360" align="center" >

## Parts Required

- Arduino UNO & USB A to B
- HC-SR04 ultrasonic sensor
- 2x16 LCD screen
- Buzzer
- Led
- 330 ohm resistor x3
- Switch
- Potantiometer
- Jumper cables

## Design the Circuit

Components should be connected according to the pictures below. The ultrasonic sensor should be placed in a box so that it is not affected by various weather conditions and can be attached on the car. The parts of Arduino and components other than the switch button, led and LCD screen should be placed in a box.

![](https://github.com/hasanalpdoyduk/advanced_parking_sensor_suitable_for_hearing_impaired_use/blob/main/Documentation/advanced_parking_sensor_circuit.png)
![](https://github.com/hasanalpdoyduk/advanced_parking_sensor_suitable_for_hearing_impaired_use/blob/main/Documentation/advanced_parking_sensor_circuit2.png)

## Usage

The device must be plugged into the vehicle's 5V powerpoint. It can also be used with an external battery. By changing the red number below in the C++ code, the signal frequency can be calibrated according to the distance.

<img src="https://github.com/hasanalpdoyduk/advanced_parking_sensor_suitable_for_hearing_impaired_use/blob/main/Documentation/aps_calibration.png" height="400" align="left" >
