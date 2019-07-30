/*!
 * @file DFRobot_OVERWEIGHT.cpp
 * @brief DFRobot's Infrared Sensor
 * @n Distance Measuring Sensor Unit
 *
 * @copyright	[DFRobot](http://www.dfrobot.com), 2017
 * @copyright	GNU Lesser General Public License
 *
 * @author [LiuZhongYu]
 * @version  V1.0
 * @date  2017-6-22
 */

#include <DFRobot_Overweight.h>

void DFRobot_Overweight::setWeight(int setWeight)
{
  _weight = setWeight;
}

int DFRobot_Overweight::WeightDetection(int WeightDetection)
{
  if(WeightDetection > _weight){
    return Overweight;
  }
  return Normal;
}