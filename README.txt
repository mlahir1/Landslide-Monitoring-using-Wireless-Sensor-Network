README for Lsndslide detection using WSN's

Landslides cause significant damages to civil infrastructure. Over the years, methods and
technologies have been proposed to determine the risk of landslides and to detect hazardous
slope movements. There have been increasing interests in developing landslide monitoring
systems to observe movements using sensors installed on the slope. Although providing
accurate data, many landslide monitoring systems are not operating in an automated fashion
and lack the ability to analyze the collected data in a timely manner. In this project, we made
an autonomous landslide monitoring system based on wireless sensor networks using multi
hop communication.
IRIS- XM2110 are used as nodes programmed using the tiny-os are used as a wireless network
which will sense the occurrence of the land slide. In cooperation with each other, the nodes
are continuously collecting and analyzing sensor data like vertical-ground acceleration. If land
slide movements are observed, the collected sensor data are transmitted to the base node or
sink for further diagnosis using multi hop communication. The current monitoring system
provides real-time information about the current state of the monitoring slope. A demo of
the current system is scheduled to validate the reliability and the performance of the
monitoring system.


Components Used:
Sensors -> MTS 310 -> Acclerometer
Mote -> IRIS Mote XM2110

Prerequisites:
1. Need tinyOS opearting System.
2. Java
3. Python
4. Node JS with Express framework

Running the Code.
1. go to the "multihop_serialport_listner" directory
2. make iris
3. make make iris install,<node id> mib520,/dev/ttyUSB0
	Give a number for Node Id, Make sure Base stations has node id as "0" and keep incrementing the node id for other nodes.
4. run the following command in parallel terminal for the base station to send the pckest to the server (in the present case your base station is the server)
>java net.tinyos.sf.SerialForwarder -comm serial@/dev/ttyUSB1:iris
5. go the "multihop_serialport_listner/java" dir and do a make.
>make
6. Now you can run the Oscilloscope application.
>./run
7. In order to run the server, open another terminal in the directory, "node_server" and runn the app.js code (make sure you set the node path before doing this)
>node app.js
8. Runn the python http server to access the webpage all across the network. Run this command from the directory "node_server\WSN_page"
> python -m SimpleHTTPServer 8000
9. Go to the browser and type in <yout ip address>:8000 to access your web page.
