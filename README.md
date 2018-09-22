# rgb-tk

## Dependencies:
- boost-c++ (`libboost-all-dev` on Ubuntu)
- ncurses (`libncurses5-dev` on Ubuntu)
- lirc (`liblirc-dev` on Ubuntu)

## For use on a Raspberry Pi, the relevant GPIO pins must be enabled and LIRC setup:
- change `driver=default` in `/etc/lirc/lirc_options.conf`
- add to `/etc/modules`:
    lirc_dev
    lirc_rpi gpio_in_pin=23 gpio_out_pin=22
- add to /boot/config:
    dtoverlay=lirc-rpi,gpio_in_pin=23,gpio_out_pin=22
this is assuming you attach the signal pin of the IR LED to `GPIO_22`.
- add the `44-rgb-lirc.conf` file to `/etc/lirc/lircd.conf.d`.

## Build instructions:



## Usage:

