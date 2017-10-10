import paho.mqtt.client as mqtt 
import webbrowser
import string
from time import sleep

client=mqtt.Client()
client.connect('iot.eclipse.org',1883)
client.subscribe('iot/mad')


def on_message(client, userdata, msg):

	print "Topic: ", msg.topic+'\nMessage received: '+str(msg.payload)
	value=msg.payload
	print "Opening: Firefox "
	if(value == "1Clap"):
		urL = 'http://www.accuweather.com/en/de/duisburg/47051/weather-forecast/170371'

	if(value == "2Clap"):
		urL = 'https://www.google.com'

	if(value == "3Clap"):
		urL = 'https://www.nytimes.com/'

	webbrowser.get('firefox').open_new_tab(urL)
    
client.on_message = on_message
client.loop_forever()
