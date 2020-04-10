#!/bin/ash
busybox mount /dev/block/system /system;
busybox mount /dev/block/mmcblk0p1 /sdcard/;
busybox mv -n /system/bin/dig /system/bin/_dig;
busybox cp /usbstick/pandory/dig /system/bin/dig;
busybox cp /usbstick/pandory/pandory.sh /system/bin/pandory.sh;
busybox mv -n /system/etc/bootvideo /system/etc/_bootvideo;
busybox cp /usbstick/pandory/bootvideo /system/etc/bootvideo;
busybox chown root:shell /system/bin/dig;
busybox chown root:shell /system/bin/pandory.sh;
busybox chmod 755 /system/bin/dig;
busybox chmod 755 /system/bin/pandory.sh;
busybox rm -rf /sdcard/skin;
busybox cp -R /usbstick/pandory/skin/ /sdcard/;
busybox rm -rf /usbstick/pandory*;
busybox echo am start -n com.android.launcher/com.android.launcher2.Launcher >> /usbstick/pandory.sh;
busybox touch /system/pandory_was_here;
busybox umount /system;
busybox umount /sdcard;
busybox rm -rf /usbstick/update.sh;
busybox sleep 5;
busybox reboot;

