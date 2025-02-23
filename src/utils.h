#pragma once
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

typedef int8_t i8;
typedef uint8_t u8;
typedef int16_t i16;
typedef uint16_t u16;
typedef int32_t i32;
typedef uint32_t u32;
typedef int64_t i64;
typedef uint64_t u64;
typedef size_t usize;
typedef intptr_t iptr;
typedef float f32;
typedef double f64;

typedef union v2 {
    struct {
        f32 x, y;
    };
    f32 e[2];
} v2;
