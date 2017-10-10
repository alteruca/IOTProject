# IOTProject
Internet of things project about a sound sensor that catches the sound  of a clap in the arduino and creates an event that sends the client in the raspberryPi to open a web page browser in the server (in my case the laptop running the server)

1-The arduino has to be connected to a clap senson in a motherboard in order the catch the sounds and transform them into an event that will process the raspberry into an event in the MQTT cloud. The arduino has to be connected to the raspberry via USB

2-Run the client in the raspberry that will connect to the MQTT cloud which will send all the information to the server (running in your laptop, for instance) which is already listening to the cloud. 

NOTE: run the server listening before the client sending!!

