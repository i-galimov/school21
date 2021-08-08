ifconfig | grep ether | tr "ether" " " | tr -d " " | tr -d "\t"
