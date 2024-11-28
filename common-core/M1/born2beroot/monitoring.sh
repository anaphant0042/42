#!/bin/bash

#Variables for Memory Usage calculation
USED_MEM=$(free -m | awk '/^Mem/{print $3}')
AVAIL_MEM=$(free -m | awk '/^Mem/{print $2}')
PER_USED_MEM=$((100 * USED_MEM/AVAIL_MEM))

#Variables for Disk Usage calculation
TOTAL_CAPACITY_M=$(df -m | grep '^/dev/mapper' | awk '{ft += $2} END {printf("%i"), ft}')
TOTAL_CAPACITY_G=$((TOTAL_CAPACITY_M/1024))
TOTAL_DISK_USE=$(df -m | grep '^/dev/mapper' | awk '{ut += $3} END {printf("%i"), ut}')
PERCENTAGE_DISK_USE=$((TOTAL_CAPACITY_M / TOTAL_DISK_USE))

#Variables for CPU load calculation
CPU_LOAD_US=$(vmstat | awk 'FNR == 3 {print $13}')
CPU_LOAD_SY=$(vmstat | awk 'FNR == 3 {print $14}')
CPU_LOAD=$((CPU_LOAD_US + CPU_LOAD_SY))

#Conditional to chek LVM use
LVM_USE=$(if [ $(lsblk | grep lvm | wc -l) -eq 0 ]; then echo NO; else echo YES; fi)

echo "#Architecture: $(uname -a)"
echo "#CPU physical: $(grep 'core id' /proc/cpuinfo | sort -u | wc -l)"
echo "#vCPU: $(grep -c '^procesor' /proc/cpuinfo)"
echo "#Memory Usage: $USED_MEM/$AVAIL_MEM MB ($PER_USED_MEM%)"
echo "#Disk Usage: $TOTAL_DISK_USE/$TOTAL_CAPACITY_G Gb ($PERCENTAGE_DISK_USE)%"
echo "#CPU load : $CPU_LOAD%"
echo "#Last boot: $(who -b | awk '{print $3, $4}')"
echo "#LVM use: $LVM_USE"
echo "#connections TCP: $(grep ' 01 ' /proc/net/tcp | wc -l) ESTABLISHED"
echo "#User log: $(who | awk '{print $1}'| sort -u | wc -l)"
echo "#Network: $(hostname -I)($(ip addr | grep "link/ether" | awk '{print $2}'))"
echo "#Sudo: $(journalctl _COMM=sudo -q | grep COMMAND | wc -l) cmd"
