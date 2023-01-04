#include "serialCommand.h"
#include "Light.h"
#include "perde.h"
serialCommand sc;
Light b(5,8);
void setup {
  sc.setBautRate(115200);
  sc.setup();
  isik.setup();
  pinMode(8,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(5,OUTPUT);

}
void loop() {
  sc.read();
  if(sc.modul=="Light"&&sc.action=="salonac"&&sc.data1=="1") isik.salonac();
  if(sc.modul=="Light"&&sc.action=="salonkapat"&&sc.data1=="1") isik.salonkapat();
  if(sc.modul=="Light"&&sc.action=="mutfakac"&&sc.data1=="1") isik.mutfakac();
  if(sc.modul=="Light"&&sc.action=="mutfakkapat"&&sc.data1=="1") isik.mutfakkapat();
  if(sc.modul=="Light"&&sc.action=="balkonac"&&sc.data1=="1") isik.balkonac();
  if(sc.modul=="Light"&&sc.action=="balkonkapat"&&sc.data1=="1") isik.balkonkapat(); 
  if(sc.modul=="Light"&&sc.action=="balkonac"&&sc.data1=="1") isik.balkonac();
  if(sc.modul=="Light"&&sc.action=="balkonkapat"&&sc.data1=="1") isik.balkonkapat();

}
