#include "DFRobot_Overweight.h"

DFRobot_Overweight Overweight;

void setup()
{
    Serial.begin(115200);       //设置串口波特率
    delay(100);
    Overweight.setWeight(100);  //设置重量超过100KG报警
}

int i;

void loop()
{
  i = Overweight.WeightDetection(80);
  Serial.println(i);       //串口打印报警信息  0 没有报警
  i = Overweight.WeightDetection(120);
  Serial.println(i);       //串口打印报警信息  -1 超重报警
  delay(2000);
}