#ifndef CONFIG_H
#define CONFIG_H

// define pins
#define NEOPIN 8  // connect to DIN on NeoMatrix 8x8
#define RTCGND A2 // use this as DS1307 breakout ground 
#define RTCPWR A3 // use this as DS1307 breakout power

// If using three-color (RGB) LEDs in your NeoMatrix, use the following
//#define LED_CONFIG NEO_GRB + NEO_KHZ800
// If using the four-color (RGBW) LEDs in your NeoMatrix, use the following
#define LED_CONFIG NEO_GRBW + NEO_KHZ800

// Do you live in a country or territory that observes Daylight Saving Time?
// https://en.wikipedia.org/wiki/Daylight_saving_time_by_country
// Use 1 if you observe DST, 0 if you don't. This is programmed for DST in the US / Canada. If your territory's DST operates differently,
// you'll need to modify the code in the calcTheTime() function to make this work properly.
#define OBSERVE_DST 1

// Define US or EU rules for DST comment out as required. More countries could be added with different rules in DST_RTC.cpp
const char rulesDST[] = "US"; // US DST rules
// const char rulesDST[] = "EU";   // EU DST rules

// brightness based on time of day- could try warmer colors at night?
#define DAYBRIGHTNESS 40
#define NIGHTBRIGHTNESS 20

// cutoff times for day / night brightness. feel free to modify.
#define MORNINGCUTOFF 7  // when does daybrightness begin?   7am
#define NIGHTCUTOFF   22 // when does nightbrightness begin? 10pm

// define delays
#define FLASHDELAY 250  // delay for startup "flashWords" sequence
#define SHIFTDELAY 100   // controls color shifting speed

/*
    Over time, the RTC may lose accuracy. Since the Trinket
    doesn't have a Wi-Fi connection, it can't reset its own clock
    periodically. When this happens, uncomment the following line
    and deploy to the trinket. It will reset the RTC to the compile
    date and time, giving the clock a more accurate time. Once that's
    done, comment out the line again, build, and deploy the sketch to
    the trinket to reset the sketch to its original behavior.

    But, thinking of it, the sketch no longer needs the original
    code in this scenario since we've forced a time on the device,
    that code will never run again.
*/
//#define RESETCLOCK

#endif
