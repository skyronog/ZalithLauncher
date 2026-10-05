#pragma once
#include <android/log.h>
#ifndef LOG_TO_I
#define LOG_TO_I(...) __android_log_print(ANDROID_LOG_INFO, "Zalith", __VA_ARGS__)
#define LOG_TO_W(...) __android_log_print(ANDROID_LOG_WARN, "Zalith", __VA_ARGS__)
#define LOG_TO_E(...) __android_log_print(ANDROID_LOG_ERROR, "Zalith", __VA_ARGS__)
#endif
