概述
    本升级方案，硬件平台：STM32F207 软件平台APP STM32F207+LWIP+FreeRTOS(comsis-os)  软件平台BootLoader STM32F207裸机编程

    支持离线串口升级和在线网络升级和MD5数据完整性校验。整个程序分为BootLoader+APP两个部分，离线升级是在BootLoader中进行Bin数据的接收和烧写(由上位机进行数据下发) 网络升级部分，bin文件的接收则是在APP中进行数据的接收与MD5校验，然后软重启单片机，进入Bootloader进行烧写
    
离线串口升级: 
  串口升级协议，采用类似Ymode-1K的方式进行传输,串口升级不支持MD5校验
  
在线网络升级: 
 当触发网络升级时(比如屏幕点击 检查版本更新)，设备先向后台拉取当前后台最新的Bin文件版本，然后与本地的文件进行对比，如果本地版本较低则再从文件服务器拉取bin文件
 
 
