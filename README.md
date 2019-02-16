# rgb-tk

A toolkit for controlling those infrared RGB LED controllers. Best used with a SBC with GPIO pins for IR output.

## Build instructions (Linux)

### Building for x86

Dependencies:

- *boost-c++* (`libboost-all-dev` on Ubuntu)
- *ncurses* (`libncurses5-dev` and `libncurses6-dbg` on Ubuntu)
- *lirc* (`liblirc-dev` on Ubuntu)

Build script (change the `export`s to point to your version of the relevant libraries):
```bash
git clone git@github.com:oliverjd/rgb-tk.git && cd rgb-tk

export CURSES_LIBRARY_X86=/usr/lib/x86_64-linux-gnu/libncurses.so
export BOOST_DIR=~/cpplibs/boost/

mkdir -p build-x86 && cd build-x86
/usr/bin/cmake -DCMAKE_TOOLCHAIN_FILE=x86.cmake --target rgb-tk-x86 ..
make rgb-tk-x86 -j4
```

### Building for ARM (e.g. Raspberry Pi)

Dependencies:

- versions of *boost-c++*, *ncurses* and *lirc* built for ARM

Build script (change the `export`s to point to your version of the relevant libraries):
```bash
git clone git@github.com:oliverjd/rgb-tk.git && cd rgb-tk

export BOOST_DIR=~/cpplibs/boost/
export CURSES_LIBRARY_ARMHF=~/cpplibs/ncurses_arm/lib/libncurses.a
export LIRC_DIR=~/cpplibs/lirc/

mkdir -p build-armhf && cd build-armhf
/usr/bin/cmake -DCMAKE_TOOLCHAIN_FILE=armhf.cmake --target rgb-tk-armhf ..
make rgb-tk-armhf -j4
```
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
