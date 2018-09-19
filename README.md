# rgbtk

## Build instructions:

- lirc must be installed.
- For use on a Raspberry Pi, the relevant GPIO pins must be enabled:
- change `driver=default` in `/etc/lirc/lirc_options.conf`
- add to `/etc/modules`:
    lirc_dev
    lirc_rpi gpio_in_pin=23 gpio_out_pin=22
- add to /boot/config:
    dtoverlay=lirc-rpi,gpio_in_pin=23,gpio_out_pin=22
this is assuming you attach the signal pin of the IR LED to `GPIO_22`.
- add the `44-rgb-lirc.conf` file to `/etc/lirc/lircd.conf.d`.

- If building, required libraries for linkage are ncurses (which requires python to build) and lirc. These must be built on the destination platform so if used on an ARM board like a Raspberry Pi you must obtain or build the correct binaries built for your specific platform.

## Usage:

