/*!
 
* @file DFRobot_OVERWEIGHT_Sensor.h
 * @brief 这是一个超重传感器
 * @copyright	Copyright (c) 2010 DFRobot Co.Ltd (http://www.dfrobot.com)
 * @licence     The MIT License (MIT)
 * @author [LiuZhongYu][1586254416@qq.com]
 * @version  V1.0
 * @date  2019-7-28
 * @https://github.com/LZY1586/DFRobot_Sensor
 */

#ifndef DFROBOT_OVERWEIGHT_H
#define DFROBOT_OVERWEIGHT_H

#include <Wire.h>
#include <Arduino.h>

#define Overweight -1  //超重
#define Normal 0      //正常

class DFRobot_Overweight {
public:
  void setWeight(int setWeight);
  int WeightDetection(int WeightDetection);
  DFRobot_Overweight(){};
  ~DFRobot_Overweight(){};
private:
  int _weight;
};

#endif