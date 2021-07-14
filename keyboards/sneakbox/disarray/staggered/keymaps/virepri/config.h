/* Change the LED to caps lock */
#undef LED_NUM_LOCK_PIN
#define LED_CAPS_LOCK_PIN B1

/* Makes it so that LT based keys don't hold for quite as long */
#define TAPPING_TERM 175

/* Defines a per-key leading timeout */
#define LEADER_PER_KEY_TIMING
#define LEADER_TIMEOUT 350
