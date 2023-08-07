#!/bin/bash
demoFun(){
  if [ "$1" == "on" ]
  then
  echo "demoFun argument is ON!"
  elif [ "$1" == "off" ]
  then
  echo "demoFun argument is OFF!"
  else 
  echo "unkonw argument!"
  fi
}
echo "funtction begin...the first argument is $1"
demoFun $1
echo "Function end!"

funsumreturn(){
  echo -n "input first number"
  read anum
  echo -n "input another number"
  read anothernum
  echo "the two numbers are $anum and $anothernum!"
  return $(($anum+$anothernum))
}
funsumreturn
echo "the sum of two number is $? !"


