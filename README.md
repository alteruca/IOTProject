# IoT Raspberry pi - Arduino Uno connection via mqtr protocol

Internet of things project based on a sound sensor that gets the sound of a some noise in the arduino and creates an event that sends the client in the raspberryPi to open a web page browser in the server (in my case the laptop running the server)

IoT project in which an arduino with sound sensors will communicate the possible matches via serial library so the raspi can read the input and analise what kind of event we want to generate.

Example: One clap will display a web browser in the subscriber, two claps will set an alarm on the laptop.

The raspi running the publisher code will publish via mqtt protocol an event, depending on the event received in the subscriber, the laptop running the subscriber python code will execute the different tasks.

## Prerequesites

* Arduino Uno
* Sound sensor, in my case I used [this one](https://www.google.com/imgres?imgurl=https%3A%2F%2Fleantec.es%2Fwp-content%2Fuploads%2F2018%2F02%2Fp_2_1_7_0_2170-Detector-de-sonido-Chip-LM393-Modulo-Microfono-para-Arduino.jpg&imgrefurl=https%3A%2F%2Fleantec.es%2Ftienda%2Fdetector-de-sonido-chip-lm393-modulo-microfono-para-arduino%2F&docid=2j7GZDZtMvUZwM&tbnid=a5Pxw5mhb6JtUM%3A&vet=10ahUKEwjruLfIsYDmAhUSGewKHWwfAKsQMwi2ASgGMAY..i&w=1500&h=1500&safe=off&client=firefox-b-d&bih=813&biw=1400&q=lm393&ved=0ahUKEwjruLfIsYDmAhUSGewKHWwfAKsQMwi2ASgGMAY&iact=mrc&uact=8)

* Motherboard
* Raspberry Pi
* Computer with any operating system with Python installed so it can run the subscriber script

## Install

In the picture below you can see the connection of the sensor into the motherboard 

![alt text](IMG_20170721_184207.jpg)

And the connection between the motherboard and the arduino to get the signal

![alt text](IMG_20170721_184152.jpg)

## Deployment

1- Prepare de connections between the arduino and the sensors as shown in the images.
2- Run the program arduino.ino to write in the serial
3- Run the program easy.py in the raspi to listen the serial and also publish the events with mqtt
4- Run the program mqtt_sub.py in another computer in which you want to receive the event from the mqtt server of the subscription.

**NOTE: Run the program mqtt_sub.py before easy.py or you may lose the first events sended!!**

## Author

* **Álvaro Teruel Cañones** - *Initial work* - [alteruca](https://github.com/alteruca)
