import serial
import paho.mqtt.client as mqtt


client=mqtt.Client()
client.connect('iot.eclipse.org',1883)

ser=serial.Serial('/dev/ttyACM0',9600)
while 1 :
    
    value = ser.readline()
    print(value)
    if value[0]=="1":
        client.publish('iot/mad','1Clap',0)
    if value[0]=="2":
        client.publish('iot/mad','2Clap',0)
    if value[0]=="3":
        client.publish('iot/mad','3Clap',0)
        

    