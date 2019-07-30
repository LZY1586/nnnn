
# DFRobot_OVERWEIGHT Library for Arduino
这是一个实习生培训用最简单的的Arduino的库
这里需要显示拍照图片，可以一张图片，可以多张图片（不要用SVG图）

如果以后有事物就在数据手册上抄一下芯片的描述
这里写模块介绍，做到读完这段，就能对模块有初步了解，让客户懂的用这个模块能干什么（数据手册通常比较官方，这里你可以举例子，更场景化）<br>
这个模块的优点，告诉用户为什么要购买这个模块
这里需要显示拍照图片，可以一张图片，可以多张图片（不要用SVG图）

![正反面svg效果图](https://github.com/ouki-wang/DFRobot_Sensor/raw/master/resources/images/SEN0245svg1.png)

## 产品链接（链接到英文商城）
    SKU：产品名称
   
## Table of Contents

* [Summary](#summary)
* [Methods](#methods)
* [History](#history)
* [Credits](#credits)
<snippet>
<content>

## Summary

这个库具有设置超重传感器重量值和读取超重传感器信息的功能

## Methods

```C++
   /**
    * @brief 构造函数
    * @param 可以对其进行重写
    */
    DFRobot_Overweight();
    /**
    * @brief 析构函数
    * @param 在程序销毁是执行
    */
    ~DFRobot_Overweight();
    /**
    * @brief 设置超重重量函数
    * @param 输入整数进行设置
    */
    void setWeight(int setWeight);
    /**
    * @brief 检验是否超重函数
    * @param 输入传感器的值
    * @return 返回0表示没有超重，返回-1表示超重
    */
    int WeightDetection(int WeightDetection)

```

## History

- data 2019-7-28
- version V1.0

## Credits
- author [LiuZhongYu  <1586254416@qq.com>]
