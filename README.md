# rgb-tk

A toolkit for controlling those infrared RGB LED controllers. Best used with a SBC with GPIO pins for IR output.

## Dependencies:
- boost-c++ (`libboost-all-dev` on Ubuntu)
- ncurses (`libncurses5-dev` and `libncurses6-dbg` on Ubuntu)
- lirc (`liblirc-dev` on Ubuntu)

## Setup for use on a Raspberry Pi
- the relevant GPIO pins must be enabled and LIRC setup
- change `driver=default` in `/etc/lirc/lirc_options.conf`
- add these lines to `/etc/modules`:
    - `lirc_dev`
    - `lirc_rpi gpio_in_pin=23 gpio_out_pin=22`
- add this line to `/boot/config`:
    - `dtoverlay=lirc-rpi,gpio_in_pin=23,gpio_out_pin=22`
    - (this is assuming you attach the signal pin of the IR LED to `GPIO_22`)
- add the relevant config file, e.g. `44-rgb-lirc.conf`, to `/etc/lirc/lircd.conf.d/`

## Build instructions:

### Building for x86



### Building for ARM (e.g. Raspberry Pi)

- g++-arm-linux-gnueabihf Ubuntu package
- you may have to build ncurses for ARM


## Usage:

