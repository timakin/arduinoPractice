# -*- coding: utf-8 -*-
import sys
sys.path.append("/usr/local/lib/python2.7/site-packages")
sys.path.append("/usr/local/lib/python3.4/site-packages")
import serial
 
com_num = 6 # Arduinoを繋いでるCOMポート番号
 
def main():
 
    ser = serial.Serial('/dev/tty.usbmodem1411', 9600, timeout=1)
    while True:
        flag = raw_input()
        ser.write(flag+".")
        if(flag == 'a'): # aが入力されたら通信終了
            break;
    ser.close()
 
# -----------------------
if __name__ == '__main__':
    main()