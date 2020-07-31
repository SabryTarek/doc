$ git clone https://github.com/TunSafe/TunSafe.git
$ cd TunSafe
$ sudo apt install clang-6.0
$ sudo make&& make install



$ sudo tunsafe start -d TunSafe.conf
$ sudo tunsafe show
$ sudo tunsafe stop tun0


ssh -f ip172-18-0-20-bnqc4m0t969000bvu5s0@direct.labs.play-with-docker.com -L 8000:[::1]:32772 -N
