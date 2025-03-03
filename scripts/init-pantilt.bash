#!/bin/bash

sudo chmod 666 /dev/ttyUSB0

echo "PP1500 *" > /dev/ttyUSB0
sleep 1
echo "PP0 *" > /dev/ttyUSB0
