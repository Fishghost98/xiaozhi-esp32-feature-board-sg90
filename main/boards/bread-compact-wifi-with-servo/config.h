#ifndef _BOARD_CONFIG_H_
#define _BOARD_CONFIG_H_

#include <driver/gpio.h>

#define AUDIO_INPUT_SAMPLE_RATE  16000
#define AUDIO_OUTPUT_SAMPLE_RATE 24000

// 如果使用 Duplex I2S 模式，请注释下面一行
#define AUDIO_I2S_METHOD_SIMPLEX

#ifdef AUDIO_I2S_METHOD_SIMPLEX

#define AUDIO_I2S_MIC_GPIO_WS   GPIO_NUM_4
#define AUDIO_I2S_MIC_GPIO_SCK  GPIO_NUM_5
#define AUDIO_I2S_MIC_GPIO_DIN  GPIO_NUM_6
#define AUDIO_I2S_SPK_GPIO_DOUT GPIO_NUM_7
#define AUDIO_I2S_SPK_GPIO_BCLK GPIO_NUM_15
#define AUDIO_I2S_SPK_GPIO_LRCK GPIO_NUM_16

#else

#define AUDIO_I2S_GPIO_WS GPIO_NUM_4
#define AUDIO_I2S_GPIO_BCLK GPIO_NUM_5
#define AUDIO_I2S_GPIO_DIN  GPIO_NUM_6
#define AUDIO_I2S_GPIO_DOUT GPIO_NUM_7

#endif


#define BUILTIN_LED_GPIO        GPIO_NUM_48
#define BOOT_BUTTON_GPIO        GPIO_NUM_0
#define TOUCH_BUTTON_GPIO       GPIO_NUM_47
#define VOLUME_UP_BUTTON_GPIO   GPIO_NUM_40
#define VOLUME_DOWN_BUTTON_GPIO GPIO_NUM_39

#define DISPLAY_BACKLIGHT_PIN GPIO_NUM_3
#define DISPLAY_MOSI_PIN      GPIO_NUM_10
#define DISPLAY_CLK_PIN       GPIO_NUM_12
#define DISPLAY_DC_PIN        GPIO_NUM_46
#define DISPLAY_RST_PIN       GPIO_NUM_11
#define DISPLAY_CS_PIN        GPIO_NUM_9


#ifdef CONFIG_LCD_ST7789_240X320
#define LCD_TYPE_ST7789_SERIAL
#define DISPLAY_WIDTH   240
#define DISPLAY_HEIGHT  320
#define DISPLAY_MIRROR_X false
#define DISPLAY_MIRROR_Y false
#define DISPLAY_SWAP_XY false
#define DISPLAY_INVERT_COLOR    false
#define DISPLAY_RGB_ORDER  LCD_RGB_ELEMENT_ORDER_RGB
#define DISPLAY_OFFSET_X  0
#define DISPLAY_OFFSET_Y  0
#define DISPLAY_BACKLIGHT_OUTPUT_INVERT false
#define DISPLAY_SPI_MODE 0
#endif

#ifdef CONFIG_LCD_ST7789_240X320_NO_IPS
#define LCD_TYPE_ST7789_SERIAL
#define DISPLAY_WIDTH   240
#define DISPLAY_HEIGHT  320
#define DISPLAY_MIRROR_X false
#define DISPLAY_MIRROR_Y false
#define DISPLAY_SWAP_XY false
#define DISPLAY_INVERT_COLOR    false
#define DISPLAY_RGB_ORDER  LCD_RGB_ELEMENT_ORDER_RGB
#define DISPLAY_OFFSET_X  0
#define DISPLAY_OFFSET_Y  0
#define DISPLAY_BACKLIGHT_OUTPUT_INVERT false
#define DISPLAY_SPI_MODE 0
#endif

// -- Servo indexes for easy access
#define HEAD 0
#define LEFT_LEG 1
#define RIGHT_LEG 2

// SG90舵机控制引脚
#define left_leg_pin GPIO_NUM_17
#define right_leg_pin GPIO_NUM_18
#define head_pin GPIO_NUM_8

// 舵机参数配置
#define SERVO_COUNT 6
#define SERVO_MIN_PULSEWIDTH_US 500           // 最小脉宽（微秒）对应0度
#define SERVO_MAX_PULSEWIDTH_US 2500          // 最大脉宽（微秒）对应180度
#define SERVO_MIN_DEGREE 0                    // 最小角度
#define SERVO_MAX_DEGREE 180                  // 最大角度
#define SERVO_TIMEBASE_RESOLUTION_HZ 1000000  // 1MHz, 1us per tick
#define SERVO_TIMEBASE_PERIOD 20000           // 20000 ticks, 20ms (50Hz)
 
// 舵机默认位置和限制
#define SERVO_DEFAULT_ANGLE 90                // 默认中心位置
#define SERVO_MAX_SPEED_DEGREE_PER_SEC 180    // 最大转速限制

// 板子版本信息
#define BREAD_COMPACT_WIFI_WITH_SERVO_VERSION "1.0.0"

#endif // _BOARD_CONFIG_H_
