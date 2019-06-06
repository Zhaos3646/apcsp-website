#!/bin/bash

echo -e "Content-type: text/html\n\n"

PIES='rpi22 rpi01 rpi02 rpi03 rpi04 rpi05 rpi06 rpi07 rpi08 rpi09 rpi10 rpi11 rpi12 rpi13 rpi14 rpi15 rpi16 rpi17 rpi18 rpi19 rpi20'
    if [ -z '$*' ]; then
	PIES=$PIES
    else
	PIES=$*
fi
for a in $PIES ; do
    ping $a -c 1 -w 10 &> /dev/null
    if [ $? -eq 0 ]; then
	echo "<p>$(echo $a 'is alive')</p>"
    else
	echo $a 'is not alive'
    fi
done

