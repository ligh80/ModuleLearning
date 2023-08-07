#!/bin/bash
fun_connect(){
  sudo nmcli dev wifi connect "123" password "1231231234"
  if [ $? -eq 0 ];then
    sudo udhcpc -i enx00240501ad3a
  else
    exit
  fi
}

fun_disconnect(){
  sudo nmcli dev disconnect enx00240501ad3a
}

if [ "$1" == "off" ];then
  fun_disconnect
else
  fun_connect
fi
