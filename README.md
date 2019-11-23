# IOTProject
Internet of things project based on a sound sensor that gets the sound of a some noise in the arduino and creates an event that sends the client in the raspberryPi to open a web page browser in the server (in my case the laptop running the server)

IoT project in which an arduino with some sound sensors will communicate the possible sounds via 

## Prerequesites

## Install

## Deployment


1-The arduino has to be connected to a clap senson in a motherboard in order the catch the sounds and transform them into an event that will process the raspberry into an event in the MQTT cloud. The arduino has to be connected to the raspberry via USB

2-Run the client in the raspberry that will connect to the MQTT cloud which will send all the information to the server (running in your laptop, for instance) which is already listening to the cloud. 

NOTE: run the server listening before the client sending!!

## Author

* **Álvaro Teruel Cañones** - *Initial work* - [alteruca](https://github.com/alteruca)
