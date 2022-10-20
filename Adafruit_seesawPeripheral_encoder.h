#include "RotaryEncoder.h"

#if CONFIG_NUM_ENCODERS > 0

volatile int32_t g_encoder_deltas[CONFIG_NUM_ENCODERS] = {};
volatile bool g_encoder_interrupt_enabled[CONFIG_NUM_ENCODERS] = {};
RotaryEncoder* g_encoders[CONFIG_NUM_ENCODERS];

#endif
