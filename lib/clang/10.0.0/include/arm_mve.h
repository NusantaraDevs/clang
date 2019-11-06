/*===---- arm_mve.h - ARM MVE intrinsics -----------------------------------===
 *
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */

#ifndef __ARM_MVE_H
#define __ARM_MVE_H

#if !__ARM_FEATURE_MVE
#error "MVE support not enabled"
#endif

#include <stdint.h>

typedef uint16_t mve_pred16_t;
typedef __attribute__((neon_vector_type(8))) int16_t int16x8_t;
typedef struct { int16x8_t val[2]; } int16x8x2_t;
typedef struct { int16x8_t val[4]; } int16x8x4_t;
typedef __attribute__((neon_vector_type(4))) int32_t int32x4_t;
typedef struct { int32x4_t val[2]; } int32x4x2_t;
typedef struct { int32x4_t val[4]; } int32x4x4_t;
typedef __attribute__((neon_vector_type(2))) int64_t int64x2_t;
typedef struct { int64x2_t val[2]; } int64x2x2_t;
typedef struct { int64x2_t val[4]; } int64x2x4_t;
typedef __attribute__((neon_vector_type(16))) int8_t int8x16_t;
typedef struct { int8x16_t val[2]; } int8x16x2_t;
typedef struct { int8x16_t val[4]; } int8x16x4_t;
typedef __attribute__((neon_vector_type(8))) uint16_t uint16x8_t;
typedef struct { uint16x8_t val[2]; } uint16x8x2_t;
typedef struct { uint16x8_t val[4]; } uint16x8x4_t;
typedef __attribute__((neon_vector_type(4))) uint32_t uint32x4_t;
typedef struct { uint32x4_t val[2]; } uint32x4x2_t;
typedef struct { uint32x4_t val[4]; } uint32x4x4_t;
typedef __attribute__((neon_vector_type(2))) uint64_t uint64x2_t;
typedef struct { uint64x2_t val[2]; } uint64x2x2_t;
typedef struct { uint64x2_t val[4]; } uint64x2x4_t;
typedef __attribute__((neon_vector_type(16))) uint8_t uint8x16_t;
typedef struct { uint8x16_t val[2]; } uint8x16x2_t;
typedef struct { uint8x16_t val[4]; } uint8x16x4_t;

static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_urshrl)))
uint64_t __arm_urshrl(uint64_t, uint32_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vadciq_m_s32)))
int32x4_t __arm_vadciq_m_s32(int32x4_t, int32x4_t, int32x4_t, unsigned *, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vadciq_m_s32)))
int32x4_t __arm_vadciq_m(int32x4_t, int32x4_t, int32x4_t, unsigned *, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vadciq_m_u32)))
uint32x4_t __arm_vadciq_m_u32(uint32x4_t, uint32x4_t, uint32x4_t, unsigned *, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vadciq_m_u32)))
uint32x4_t __arm_vadciq_m(uint32x4_t, uint32x4_t, uint32x4_t, unsigned *, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vadciq_s32)))
int32x4_t __arm_vadciq_s32(int32x4_t, int32x4_t, unsigned *);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vadciq_s32)))
int32x4_t __arm_vadciq(int32x4_t, int32x4_t, unsigned *);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vadciq_u32)))
uint32x4_t __arm_vadciq_u32(uint32x4_t, uint32x4_t, unsigned *);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vadciq_u32)))
uint32x4_t __arm_vadciq(uint32x4_t, uint32x4_t, unsigned *);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vadcq_m_s32)))
int32x4_t __arm_vadcq_m_s32(int32x4_t, int32x4_t, int32x4_t, unsigned *, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vadcq_m_s32)))
int32x4_t __arm_vadcq_m(int32x4_t, int32x4_t, int32x4_t, unsigned *, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vadcq_m_u32)))
uint32x4_t __arm_vadcq_m_u32(uint32x4_t, uint32x4_t, uint32x4_t, unsigned *, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vadcq_m_u32)))
uint32x4_t __arm_vadcq_m(uint32x4_t, uint32x4_t, uint32x4_t, unsigned *, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vadcq_s32)))
int32x4_t __arm_vadcq_s32(int32x4_t, int32x4_t, unsigned *);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vadcq_s32)))
int32x4_t __arm_vadcq(int32x4_t, int32x4_t, unsigned *);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vadcq_u32)))
uint32x4_t __arm_vadcq_u32(uint32x4_t, uint32x4_t, unsigned *);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vadcq_u32)))
uint32x4_t __arm_vadcq(uint32x4_t, uint32x4_t, unsigned *);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vaddq_m_s16)))
int16x8_t __arm_vaddq_m_s16(int16x8_t, int16x8_t, int16x8_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vaddq_m_s16)))
int16x8_t __arm_vaddq_m(int16x8_t, int16x8_t, int16x8_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vaddq_m_s32)))
int32x4_t __arm_vaddq_m_s32(int32x4_t, int32x4_t, int32x4_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vaddq_m_s32)))
int32x4_t __arm_vaddq_m(int32x4_t, int32x4_t, int32x4_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vaddq_m_s8)))
int8x16_t __arm_vaddq_m_s8(int8x16_t, int8x16_t, int8x16_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vaddq_m_s8)))
int8x16_t __arm_vaddq_m(int8x16_t, int8x16_t, int8x16_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vaddq_m_u16)))
uint16x8_t __arm_vaddq_m_u16(uint16x8_t, uint16x8_t, uint16x8_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vaddq_m_u16)))
uint16x8_t __arm_vaddq_m(uint16x8_t, uint16x8_t, uint16x8_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vaddq_m_u32)))
uint32x4_t __arm_vaddq_m_u32(uint32x4_t, uint32x4_t, uint32x4_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vaddq_m_u32)))
uint32x4_t __arm_vaddq_m(uint32x4_t, uint32x4_t, uint32x4_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vaddq_m_u8)))
uint8x16_t __arm_vaddq_m_u8(uint8x16_t, uint8x16_t, uint8x16_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vaddq_m_u8)))
uint8x16_t __arm_vaddq_m(uint8x16_t, uint8x16_t, uint8x16_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vaddq_s16)))
int16x8_t __arm_vaddq_s16(int16x8_t, int16x8_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vaddq_s16)))
int16x8_t __arm_vaddq(int16x8_t, int16x8_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vaddq_s32)))
int32x4_t __arm_vaddq_s32(int32x4_t, int32x4_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vaddq_s32)))
int32x4_t __arm_vaddq(int32x4_t, int32x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vaddq_s8)))
int8x16_t __arm_vaddq_s8(int8x16_t, int8x16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vaddq_s8)))
int8x16_t __arm_vaddq(int8x16_t, int8x16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vaddq_u16)))
uint16x8_t __arm_vaddq_u16(uint16x8_t, uint16x8_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vaddq_u16)))
uint16x8_t __arm_vaddq(uint16x8_t, uint16x8_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vaddq_u32)))
uint32x4_t __arm_vaddq_u32(uint32x4_t, uint32x4_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vaddq_u32)))
uint32x4_t __arm_vaddq(uint32x4_t, uint32x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vaddq_u8)))
uint8x16_t __arm_vaddq_u8(uint8x16_t, uint8x16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vaddq_u8)))
uint8x16_t __arm_vaddq(uint8x16_t, uint8x16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vld2q_s16)))
int16x8x2_t __arm_vld2q_s16(const int16_t *);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vld2q_s16)))
int16x8x2_t __arm_vld2q(const int16_t *);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vld2q_s32)))
int32x4x2_t __arm_vld2q_s32(const int32_t *);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vld2q_s32)))
int32x4x2_t __arm_vld2q(const int32_t *);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vld2q_s8)))
int8x16x2_t __arm_vld2q_s8(const int8_t *);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vld2q_s8)))
int8x16x2_t __arm_vld2q(const int8_t *);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vld2q_u16)))
uint16x8x2_t __arm_vld2q_u16(const uint16_t *);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vld2q_u16)))
uint16x8x2_t __arm_vld2q(const uint16_t *);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vld2q_u32)))
uint32x4x2_t __arm_vld2q_u32(const uint32_t *);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vld2q_u32)))
uint32x4x2_t __arm_vld2q(const uint32_t *);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vld2q_u8)))
uint8x16x2_t __arm_vld2q_u8(const uint8_t *);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vld2q_u8)))
uint8x16x2_t __arm_vld2q(const uint8_t *);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vld4q_s16)))
int16x8x4_t __arm_vld4q_s16(const int16_t *);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vld4q_s16)))
int16x8x4_t __arm_vld4q(const int16_t *);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vld4q_s32)))
int32x4x4_t __arm_vld4q_s32(const int32_t *);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vld4q_s32)))
int32x4x4_t __arm_vld4q(const int32_t *);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vld4q_s8)))
int8x16x4_t __arm_vld4q_s8(const int8_t *);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vld4q_s8)))
int8x16x4_t __arm_vld4q(const int8_t *);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vld4q_u16)))
uint16x8x4_t __arm_vld4q_u16(const uint16_t *);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vld4q_u16)))
uint16x8x4_t __arm_vld4q(const uint16_t *);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vld4q_u32)))
uint32x4x4_t __arm_vld4q_u32(const uint32_t *);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vld4q_u32)))
uint32x4x4_t __arm_vld4q(const uint32_t *);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vld4q_u8)))
uint8x16x4_t __arm_vld4q_u8(const uint8_t *);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vld4q_u8)))
uint8x16x4_t __arm_vld4q(const uint8_t *);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrbq_gather_offset_s16)))
int16x8_t __arm_vldrbq_gather_offset_s16(const int8_t *, uint16x8_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrbq_gather_offset_s16)))
int16x8_t __arm_vldrbq_gather_offset(const int8_t *, uint16x8_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrbq_gather_offset_s32)))
int32x4_t __arm_vldrbq_gather_offset_s32(const int8_t *, uint32x4_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrbq_gather_offset_s32)))
int32x4_t __arm_vldrbq_gather_offset(const int8_t *, uint32x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrbq_gather_offset_s8)))
int8x16_t __arm_vldrbq_gather_offset_s8(const int8_t *, uint8x16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrbq_gather_offset_s8)))
int8x16_t __arm_vldrbq_gather_offset(const int8_t *, uint8x16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrbq_gather_offset_u16)))
uint16x8_t __arm_vldrbq_gather_offset_u16(const uint8_t *, uint16x8_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrbq_gather_offset_u16)))
uint16x8_t __arm_vldrbq_gather_offset(const uint8_t *, uint16x8_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrbq_gather_offset_u32)))
uint32x4_t __arm_vldrbq_gather_offset_u32(const uint8_t *, uint32x4_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrbq_gather_offset_u32)))
uint32x4_t __arm_vldrbq_gather_offset(const uint8_t *, uint32x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrbq_gather_offset_u8)))
uint8x16_t __arm_vldrbq_gather_offset_u8(const uint8_t *, uint8x16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrbq_gather_offset_u8)))
uint8x16_t __arm_vldrbq_gather_offset(const uint8_t *, uint8x16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrbq_gather_offset_z_s16)))
int16x8_t __arm_vldrbq_gather_offset_z_s16(const int8_t *, uint16x8_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrbq_gather_offset_z_s16)))
int16x8_t __arm_vldrbq_gather_offset_z(const int8_t *, uint16x8_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrbq_gather_offset_z_s32)))
int32x4_t __arm_vldrbq_gather_offset_z_s32(const int8_t *, uint32x4_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrbq_gather_offset_z_s32)))
int32x4_t __arm_vldrbq_gather_offset_z(const int8_t *, uint32x4_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrbq_gather_offset_z_s8)))
int8x16_t __arm_vldrbq_gather_offset_z_s8(const int8_t *, uint8x16_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrbq_gather_offset_z_s8)))
int8x16_t __arm_vldrbq_gather_offset_z(const int8_t *, uint8x16_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrbq_gather_offset_z_u16)))
uint16x8_t __arm_vldrbq_gather_offset_z_u16(const uint8_t *, uint16x8_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrbq_gather_offset_z_u16)))
uint16x8_t __arm_vldrbq_gather_offset_z(const uint8_t *, uint16x8_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrbq_gather_offset_z_u32)))
uint32x4_t __arm_vldrbq_gather_offset_z_u32(const uint8_t *, uint32x4_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrbq_gather_offset_z_u32)))
uint32x4_t __arm_vldrbq_gather_offset_z(const uint8_t *, uint32x4_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrbq_gather_offset_z_u8)))
uint8x16_t __arm_vldrbq_gather_offset_z_u8(const uint8_t *, uint8x16_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrbq_gather_offset_z_u8)))
uint8x16_t __arm_vldrbq_gather_offset_z(const uint8_t *, uint8x16_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrdq_gather_base_s64)))
int64x2_t __arm_vldrdq_gather_base_s64(uint64x2_t, int);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrdq_gather_base_u64)))
uint64x2_t __arm_vldrdq_gather_base_u64(uint64x2_t, int);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrdq_gather_base_wb_s64)))
int64x2_t __arm_vldrdq_gather_base_wb_s64(uint64x2_t *, int);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrdq_gather_base_wb_u64)))
uint64x2_t __arm_vldrdq_gather_base_wb_u64(uint64x2_t *, int);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrdq_gather_base_wb_z_s64)))
int64x2_t __arm_vldrdq_gather_base_wb_z_s64(uint64x2_t *, int, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrdq_gather_base_wb_z_u64)))
uint64x2_t __arm_vldrdq_gather_base_wb_z_u64(uint64x2_t *, int, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrdq_gather_base_z_s64)))
int64x2_t __arm_vldrdq_gather_base_z_s64(uint64x2_t, int, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrdq_gather_base_z_u64)))
uint64x2_t __arm_vldrdq_gather_base_z_u64(uint64x2_t, int, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrdq_gather_offset_s64)))
int64x2_t __arm_vldrdq_gather_offset_s64(const int64_t *, uint64x2_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrdq_gather_offset_s64)))
int64x2_t __arm_vldrdq_gather_offset(const int64_t *, uint64x2_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrdq_gather_offset_u64)))
uint64x2_t __arm_vldrdq_gather_offset_u64(const uint64_t *, uint64x2_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrdq_gather_offset_u64)))
uint64x2_t __arm_vldrdq_gather_offset(const uint64_t *, uint64x2_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrdq_gather_offset_z_s64)))
int64x2_t __arm_vldrdq_gather_offset_z_s64(const int64_t *, uint64x2_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrdq_gather_offset_z_s64)))
int64x2_t __arm_vldrdq_gather_offset_z(const int64_t *, uint64x2_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrdq_gather_offset_z_u64)))
uint64x2_t __arm_vldrdq_gather_offset_z_u64(const uint64_t *, uint64x2_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrdq_gather_offset_z_u64)))
uint64x2_t __arm_vldrdq_gather_offset_z(const uint64_t *, uint64x2_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrdq_gather_shifted_offset_s64)))
int64x2_t __arm_vldrdq_gather_shifted_offset_s64(const int64_t *, uint64x2_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrdq_gather_shifted_offset_s64)))
int64x2_t __arm_vldrdq_gather_shifted_offset(const int64_t *, uint64x2_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrdq_gather_shifted_offset_u64)))
uint64x2_t __arm_vldrdq_gather_shifted_offset_u64(const uint64_t *, uint64x2_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrdq_gather_shifted_offset_u64)))
uint64x2_t __arm_vldrdq_gather_shifted_offset(const uint64_t *, uint64x2_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrdq_gather_shifted_offset_z_s64)))
int64x2_t __arm_vldrdq_gather_shifted_offset_z_s64(const int64_t *, uint64x2_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrdq_gather_shifted_offset_z_s64)))
int64x2_t __arm_vldrdq_gather_shifted_offset_z(const int64_t *, uint64x2_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrdq_gather_shifted_offset_z_u64)))
uint64x2_t __arm_vldrdq_gather_shifted_offset_z_u64(const uint64_t *, uint64x2_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrdq_gather_shifted_offset_z_u64)))
uint64x2_t __arm_vldrdq_gather_shifted_offset_z(const uint64_t *, uint64x2_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrhq_gather_offset_s16)))
int16x8_t __arm_vldrhq_gather_offset_s16(const int16_t *, uint16x8_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrhq_gather_offset_s16)))
int16x8_t __arm_vldrhq_gather_offset(const int16_t *, uint16x8_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrhq_gather_offset_s32)))
int32x4_t __arm_vldrhq_gather_offset_s32(const int16_t *, uint32x4_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrhq_gather_offset_s32)))
int32x4_t __arm_vldrhq_gather_offset(const int16_t *, uint32x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrhq_gather_offset_u16)))
uint16x8_t __arm_vldrhq_gather_offset_u16(const uint16_t *, uint16x8_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrhq_gather_offset_u16)))
uint16x8_t __arm_vldrhq_gather_offset(const uint16_t *, uint16x8_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrhq_gather_offset_u32)))
uint32x4_t __arm_vldrhq_gather_offset_u32(const uint16_t *, uint32x4_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrhq_gather_offset_u32)))
uint32x4_t __arm_vldrhq_gather_offset(const uint16_t *, uint32x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrhq_gather_offset_z_s16)))
int16x8_t __arm_vldrhq_gather_offset_z_s16(const int16_t *, uint16x8_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrhq_gather_offset_z_s16)))
int16x8_t __arm_vldrhq_gather_offset_z(const int16_t *, uint16x8_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrhq_gather_offset_z_s32)))
int32x4_t __arm_vldrhq_gather_offset_z_s32(const int16_t *, uint32x4_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrhq_gather_offset_z_s32)))
int32x4_t __arm_vldrhq_gather_offset_z(const int16_t *, uint32x4_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrhq_gather_offset_z_u16)))
uint16x8_t __arm_vldrhq_gather_offset_z_u16(const uint16_t *, uint16x8_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrhq_gather_offset_z_u16)))
uint16x8_t __arm_vldrhq_gather_offset_z(const uint16_t *, uint16x8_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrhq_gather_offset_z_u32)))
uint32x4_t __arm_vldrhq_gather_offset_z_u32(const uint16_t *, uint32x4_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrhq_gather_offset_z_u32)))
uint32x4_t __arm_vldrhq_gather_offset_z(const uint16_t *, uint32x4_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrhq_gather_shifted_offset_s16)))
int16x8_t __arm_vldrhq_gather_shifted_offset_s16(const int16_t *, uint16x8_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrhq_gather_shifted_offset_s16)))
int16x8_t __arm_vldrhq_gather_shifted_offset(const int16_t *, uint16x8_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrhq_gather_shifted_offset_s32)))
int32x4_t __arm_vldrhq_gather_shifted_offset_s32(const int16_t *, uint32x4_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrhq_gather_shifted_offset_s32)))
int32x4_t __arm_vldrhq_gather_shifted_offset(const int16_t *, uint32x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrhq_gather_shifted_offset_u16)))
uint16x8_t __arm_vldrhq_gather_shifted_offset_u16(const uint16_t *, uint16x8_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrhq_gather_shifted_offset_u16)))
uint16x8_t __arm_vldrhq_gather_shifted_offset(const uint16_t *, uint16x8_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrhq_gather_shifted_offset_u32)))
uint32x4_t __arm_vldrhq_gather_shifted_offset_u32(const uint16_t *, uint32x4_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrhq_gather_shifted_offset_u32)))
uint32x4_t __arm_vldrhq_gather_shifted_offset(const uint16_t *, uint32x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrhq_gather_shifted_offset_z_s16)))
int16x8_t __arm_vldrhq_gather_shifted_offset_z_s16(const int16_t *, uint16x8_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrhq_gather_shifted_offset_z_s16)))
int16x8_t __arm_vldrhq_gather_shifted_offset_z(const int16_t *, uint16x8_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrhq_gather_shifted_offset_z_s32)))
int32x4_t __arm_vldrhq_gather_shifted_offset_z_s32(const int16_t *, uint32x4_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrhq_gather_shifted_offset_z_s32)))
int32x4_t __arm_vldrhq_gather_shifted_offset_z(const int16_t *, uint32x4_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrhq_gather_shifted_offset_z_u16)))
uint16x8_t __arm_vldrhq_gather_shifted_offset_z_u16(const uint16_t *, uint16x8_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrhq_gather_shifted_offset_z_u16)))
uint16x8_t __arm_vldrhq_gather_shifted_offset_z(const uint16_t *, uint16x8_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrhq_gather_shifted_offset_z_u32)))
uint32x4_t __arm_vldrhq_gather_shifted_offset_z_u32(const uint16_t *, uint32x4_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrhq_gather_shifted_offset_z_u32)))
uint32x4_t __arm_vldrhq_gather_shifted_offset_z(const uint16_t *, uint32x4_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrwq_gather_base_s32)))
int32x4_t __arm_vldrwq_gather_base_s32(uint32x4_t, int);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrwq_gather_base_u32)))
uint32x4_t __arm_vldrwq_gather_base_u32(uint32x4_t, int);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrwq_gather_base_wb_s32)))
int32x4_t __arm_vldrwq_gather_base_wb_s32(uint32x4_t *, int);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrwq_gather_base_wb_u32)))
uint32x4_t __arm_vldrwq_gather_base_wb_u32(uint32x4_t *, int);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrwq_gather_base_wb_z_s32)))
int32x4_t __arm_vldrwq_gather_base_wb_z_s32(uint32x4_t *, int, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrwq_gather_base_wb_z_u32)))
uint32x4_t __arm_vldrwq_gather_base_wb_z_u32(uint32x4_t *, int, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrwq_gather_base_z_s32)))
int32x4_t __arm_vldrwq_gather_base_z_s32(uint32x4_t, int, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrwq_gather_base_z_u32)))
uint32x4_t __arm_vldrwq_gather_base_z_u32(uint32x4_t, int, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrwq_gather_offset_s32)))
int32x4_t __arm_vldrwq_gather_offset_s32(const int32_t *, uint32x4_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrwq_gather_offset_s32)))
int32x4_t __arm_vldrwq_gather_offset(const int32_t *, uint32x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrwq_gather_offset_u32)))
uint32x4_t __arm_vldrwq_gather_offset_u32(const uint32_t *, uint32x4_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrwq_gather_offset_u32)))
uint32x4_t __arm_vldrwq_gather_offset(const uint32_t *, uint32x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrwq_gather_offset_z_s32)))
int32x4_t __arm_vldrwq_gather_offset_z_s32(const int32_t *, uint32x4_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrwq_gather_offset_z_s32)))
int32x4_t __arm_vldrwq_gather_offset_z(const int32_t *, uint32x4_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrwq_gather_offset_z_u32)))
uint32x4_t __arm_vldrwq_gather_offset_z_u32(const uint32_t *, uint32x4_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrwq_gather_offset_z_u32)))
uint32x4_t __arm_vldrwq_gather_offset_z(const uint32_t *, uint32x4_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrwq_gather_shifted_offset_s32)))
int32x4_t __arm_vldrwq_gather_shifted_offset_s32(const int32_t *, uint32x4_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrwq_gather_shifted_offset_s32)))
int32x4_t __arm_vldrwq_gather_shifted_offset(const int32_t *, uint32x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrwq_gather_shifted_offset_u32)))
uint32x4_t __arm_vldrwq_gather_shifted_offset_u32(const uint32_t *, uint32x4_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrwq_gather_shifted_offset_u32)))
uint32x4_t __arm_vldrwq_gather_shifted_offset(const uint32_t *, uint32x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrwq_gather_shifted_offset_z_s32)))
int32x4_t __arm_vldrwq_gather_shifted_offset_z_s32(const int32_t *, uint32x4_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrwq_gather_shifted_offset_z_s32)))
int32x4_t __arm_vldrwq_gather_shifted_offset_z(const int32_t *, uint32x4_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrwq_gather_shifted_offset_z_u32)))
uint32x4_t __arm_vldrwq_gather_shifted_offset_z_u32(const uint32_t *, uint32x4_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrwq_gather_shifted_offset_z_u32)))
uint32x4_t __arm_vldrwq_gather_shifted_offset_z(const uint32_t *, uint32x4_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vmaxvq_s16)))
int16_t __arm_vmaxvq_s16(int16_t, int16x8_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vmaxvq_s16)))
int16_t __arm_vmaxvq(int16_t, int16x8_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vmaxvq_s32)))
int32_t __arm_vmaxvq_s32(int32_t, int32x4_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vmaxvq_s32)))
int32_t __arm_vmaxvq(int32_t, int32x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vmaxvq_s8)))
int8_t __arm_vmaxvq_s8(int8_t, int8x16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vmaxvq_s8)))
int8_t __arm_vmaxvq(int8_t, int8x16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vmaxvq_u16)))
uint16_t __arm_vmaxvq_u16(uint16_t, uint16x8_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vmaxvq_u16)))
uint16_t __arm_vmaxvq(uint16_t, uint16x8_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vmaxvq_u32)))
uint32_t __arm_vmaxvq_u32(uint32_t, uint32x4_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vmaxvq_u32)))
uint32_t __arm_vmaxvq(uint32_t, uint32x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vmaxvq_u8)))
uint8_t __arm_vmaxvq_u8(uint8_t, uint8x16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vmaxvq_u8)))
uint8_t __arm_vmaxvq(uint8_t, uint8x16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vminvq_s16)))
int16_t __arm_vminvq_s16(int16_t, int16x8_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vminvq_s16)))
int16_t __arm_vminvq(int16_t, int16x8_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vminvq_s32)))
int32_t __arm_vminvq_s32(int32_t, int32x4_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vminvq_s32)))
int32_t __arm_vminvq(int32_t, int32x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vminvq_s8)))
int8_t __arm_vminvq_s8(int8_t, int8x16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vminvq_s8)))
int8_t __arm_vminvq(int8_t, int8x16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vminvq_u16)))
uint16_t __arm_vminvq_u16(uint16_t, uint16x8_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vminvq_u16)))
uint16_t __arm_vminvq(uint16_t, uint16x8_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vminvq_u32)))
uint32_t __arm_vminvq_u32(uint32_t, uint32x4_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vminvq_u32)))
uint32_t __arm_vminvq(uint32_t, uint32x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vminvq_u8)))
uint8_t __arm_vminvq_u8(uint8_t, uint8x16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vminvq_u8)))
uint8_t __arm_vminvq(uint8_t, uint8x16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vst2q_s16)))
void __arm_vst2q_s16(int16_t *, int16x8x2_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vst2q_s16)))
void __arm_vst2q(int16_t *, int16x8x2_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vst2q_s32)))
void __arm_vst2q_s32(int32_t *, int32x4x2_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vst2q_s32)))
void __arm_vst2q(int32_t *, int32x4x2_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vst2q_s8)))
void __arm_vst2q_s8(int8_t *, int8x16x2_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vst2q_s8)))
void __arm_vst2q(int8_t *, int8x16x2_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vst2q_u16)))
void __arm_vst2q_u16(uint16_t *, uint16x8x2_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vst2q_u16)))
void __arm_vst2q(uint16_t *, uint16x8x2_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vst2q_u32)))
void __arm_vst2q_u32(uint32_t *, uint32x4x2_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vst2q_u32)))
void __arm_vst2q(uint32_t *, uint32x4x2_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vst2q_u8)))
void __arm_vst2q_u8(uint8_t *, uint8x16x2_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vst2q_u8)))
void __arm_vst2q(uint8_t *, uint8x16x2_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vst4q_s16)))
void __arm_vst4q_s16(int16_t *, int16x8x4_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vst4q_s16)))
void __arm_vst4q(int16_t *, int16x8x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vst4q_s32)))
void __arm_vst4q_s32(int32_t *, int32x4x4_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vst4q_s32)))
void __arm_vst4q(int32_t *, int32x4x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vst4q_s8)))
void __arm_vst4q_s8(int8_t *, int8x16x4_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vst4q_s8)))
void __arm_vst4q(int8_t *, int8x16x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vst4q_u16)))
void __arm_vst4q_u16(uint16_t *, uint16x8x4_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vst4q_u16)))
void __arm_vst4q(uint16_t *, uint16x8x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vst4q_u32)))
void __arm_vst4q_u32(uint32_t *, uint32x4x4_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vst4q_u32)))
void __arm_vst4q(uint32_t *, uint32x4x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vst4q_u8)))
void __arm_vst4q_u8(uint8_t *, uint8x16x4_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vst4q_u8)))
void __arm_vst4q(uint8_t *, uint8x16x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrbq_scatter_offset_p_s16)))
void __arm_vstrbq_scatter_offset_p_s16(int8_t *, uint16x8_t, int16x8_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrbq_scatter_offset_p_s16)))
void __arm_vstrbq_scatter_offset_p(int8_t *, uint16x8_t, int16x8_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrbq_scatter_offset_p_s32)))
void __arm_vstrbq_scatter_offset_p_s32(int8_t *, uint32x4_t, int32x4_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrbq_scatter_offset_p_s32)))
void __arm_vstrbq_scatter_offset_p(int8_t *, uint32x4_t, int32x4_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrbq_scatter_offset_p_s8)))
void __arm_vstrbq_scatter_offset_p_s8(int8_t *, uint8x16_t, int8x16_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrbq_scatter_offset_p_s8)))
void __arm_vstrbq_scatter_offset_p(int8_t *, uint8x16_t, int8x16_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrbq_scatter_offset_p_u16)))
void __arm_vstrbq_scatter_offset_p_u16(uint8_t *, uint16x8_t, uint16x8_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrbq_scatter_offset_p_u16)))
void __arm_vstrbq_scatter_offset_p(uint8_t *, uint16x8_t, uint16x8_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrbq_scatter_offset_p_u32)))
void __arm_vstrbq_scatter_offset_p_u32(uint8_t *, uint32x4_t, uint32x4_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrbq_scatter_offset_p_u32)))
void __arm_vstrbq_scatter_offset_p(uint8_t *, uint32x4_t, uint32x4_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrbq_scatter_offset_p_u8)))
void __arm_vstrbq_scatter_offset_p_u8(uint8_t *, uint8x16_t, uint8x16_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrbq_scatter_offset_p_u8)))
void __arm_vstrbq_scatter_offset_p(uint8_t *, uint8x16_t, uint8x16_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrbq_scatter_offset_s16)))
void __arm_vstrbq_scatter_offset_s16(int8_t *, uint16x8_t, int16x8_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrbq_scatter_offset_s16)))
void __arm_vstrbq_scatter_offset(int8_t *, uint16x8_t, int16x8_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrbq_scatter_offset_s32)))
void __arm_vstrbq_scatter_offset_s32(int8_t *, uint32x4_t, int32x4_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrbq_scatter_offset_s32)))
void __arm_vstrbq_scatter_offset(int8_t *, uint32x4_t, int32x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrbq_scatter_offset_s8)))
void __arm_vstrbq_scatter_offset_s8(int8_t *, uint8x16_t, int8x16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrbq_scatter_offset_s8)))
void __arm_vstrbq_scatter_offset(int8_t *, uint8x16_t, int8x16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrbq_scatter_offset_u16)))
void __arm_vstrbq_scatter_offset_u16(uint8_t *, uint16x8_t, uint16x8_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrbq_scatter_offset_u16)))
void __arm_vstrbq_scatter_offset(uint8_t *, uint16x8_t, uint16x8_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrbq_scatter_offset_u32)))
void __arm_vstrbq_scatter_offset_u32(uint8_t *, uint32x4_t, uint32x4_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrbq_scatter_offset_u32)))
void __arm_vstrbq_scatter_offset(uint8_t *, uint32x4_t, uint32x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrbq_scatter_offset_u8)))
void __arm_vstrbq_scatter_offset_u8(uint8_t *, uint8x16_t, uint8x16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrbq_scatter_offset_u8)))
void __arm_vstrbq_scatter_offset(uint8_t *, uint8x16_t, uint8x16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrdq_scatter_base_p_s64)))
void __arm_vstrdq_scatter_base_p_s64(uint64x2_t, int, int64x2_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrdq_scatter_base_p_s64)))
void __arm_vstrdq_scatter_base_p(uint64x2_t, int, int64x2_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrdq_scatter_base_p_u64)))
void __arm_vstrdq_scatter_base_p_u64(uint64x2_t, int, uint64x2_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrdq_scatter_base_p_u64)))
void __arm_vstrdq_scatter_base_p(uint64x2_t, int, uint64x2_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrdq_scatter_base_s64)))
void __arm_vstrdq_scatter_base_s64(uint64x2_t, int, int64x2_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrdq_scatter_base_s64)))
void __arm_vstrdq_scatter_base(uint64x2_t, int, int64x2_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrdq_scatter_base_u64)))
void __arm_vstrdq_scatter_base_u64(uint64x2_t, int, uint64x2_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrdq_scatter_base_u64)))
void __arm_vstrdq_scatter_base(uint64x2_t, int, uint64x2_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrdq_scatter_base_wb_p_s64)))
void __arm_vstrdq_scatter_base_wb_p_s64(uint64x2_t *, int, int64x2_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrdq_scatter_base_wb_p_s64)))
void __arm_vstrdq_scatter_base_wb_p(uint64x2_t *, int, int64x2_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrdq_scatter_base_wb_p_u64)))
void __arm_vstrdq_scatter_base_wb_p_u64(uint64x2_t *, int, uint64x2_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrdq_scatter_base_wb_p_u64)))
void __arm_vstrdq_scatter_base_wb_p(uint64x2_t *, int, uint64x2_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrdq_scatter_base_wb_s64)))
void __arm_vstrdq_scatter_base_wb_s64(uint64x2_t *, int, int64x2_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrdq_scatter_base_wb_s64)))
void __arm_vstrdq_scatter_base_wb(uint64x2_t *, int, int64x2_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrdq_scatter_base_wb_u64)))
void __arm_vstrdq_scatter_base_wb_u64(uint64x2_t *, int, uint64x2_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrdq_scatter_base_wb_u64)))
void __arm_vstrdq_scatter_base_wb(uint64x2_t *, int, uint64x2_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrdq_scatter_offset_p_s64)))
void __arm_vstrdq_scatter_offset_p_s64(int64_t *, uint64x2_t, int64x2_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrdq_scatter_offset_p_s64)))
void __arm_vstrdq_scatter_offset_p(int64_t *, uint64x2_t, int64x2_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrdq_scatter_offset_p_u64)))
void __arm_vstrdq_scatter_offset_p_u64(uint64_t *, uint64x2_t, uint64x2_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrdq_scatter_offset_p_u64)))
void __arm_vstrdq_scatter_offset_p(uint64_t *, uint64x2_t, uint64x2_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrdq_scatter_offset_s64)))
void __arm_vstrdq_scatter_offset_s64(int64_t *, uint64x2_t, int64x2_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrdq_scatter_offset_s64)))
void __arm_vstrdq_scatter_offset(int64_t *, uint64x2_t, int64x2_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrdq_scatter_offset_u64)))
void __arm_vstrdq_scatter_offset_u64(uint64_t *, uint64x2_t, uint64x2_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrdq_scatter_offset_u64)))
void __arm_vstrdq_scatter_offset(uint64_t *, uint64x2_t, uint64x2_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrdq_scatter_shifted_offset_p_s64)))
void __arm_vstrdq_scatter_shifted_offset_p_s64(int64_t *, uint64x2_t, int64x2_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrdq_scatter_shifted_offset_p_s64)))
void __arm_vstrdq_scatter_shifted_offset_p(int64_t *, uint64x2_t, int64x2_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrdq_scatter_shifted_offset_p_u64)))
void __arm_vstrdq_scatter_shifted_offset_p_u64(uint64_t *, uint64x2_t, uint64x2_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrdq_scatter_shifted_offset_p_u64)))
void __arm_vstrdq_scatter_shifted_offset_p(uint64_t *, uint64x2_t, uint64x2_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrdq_scatter_shifted_offset_s64)))
void __arm_vstrdq_scatter_shifted_offset_s64(int64_t *, uint64x2_t, int64x2_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrdq_scatter_shifted_offset_s64)))
void __arm_vstrdq_scatter_shifted_offset(int64_t *, uint64x2_t, int64x2_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrdq_scatter_shifted_offset_u64)))
void __arm_vstrdq_scatter_shifted_offset_u64(uint64_t *, uint64x2_t, uint64x2_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrdq_scatter_shifted_offset_u64)))
void __arm_vstrdq_scatter_shifted_offset(uint64_t *, uint64x2_t, uint64x2_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrhq_scatter_offset_p_s16)))
void __arm_vstrhq_scatter_offset_p_s16(int16_t *, uint16x8_t, int16x8_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrhq_scatter_offset_p_s16)))
void __arm_vstrhq_scatter_offset_p(int16_t *, uint16x8_t, int16x8_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrhq_scatter_offset_p_s32)))
void __arm_vstrhq_scatter_offset_p_s32(int16_t *, uint32x4_t, int32x4_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrhq_scatter_offset_p_s32)))
void __arm_vstrhq_scatter_offset_p(int16_t *, uint32x4_t, int32x4_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrhq_scatter_offset_p_u16)))
void __arm_vstrhq_scatter_offset_p_u16(uint16_t *, uint16x8_t, uint16x8_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrhq_scatter_offset_p_u16)))
void __arm_vstrhq_scatter_offset_p(uint16_t *, uint16x8_t, uint16x8_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrhq_scatter_offset_p_u32)))
void __arm_vstrhq_scatter_offset_p_u32(uint16_t *, uint32x4_t, uint32x4_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrhq_scatter_offset_p_u32)))
void __arm_vstrhq_scatter_offset_p(uint16_t *, uint32x4_t, uint32x4_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrhq_scatter_offset_s16)))
void __arm_vstrhq_scatter_offset_s16(int16_t *, uint16x8_t, int16x8_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrhq_scatter_offset_s16)))
void __arm_vstrhq_scatter_offset(int16_t *, uint16x8_t, int16x8_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrhq_scatter_offset_s32)))
void __arm_vstrhq_scatter_offset_s32(int16_t *, uint32x4_t, int32x4_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrhq_scatter_offset_s32)))
void __arm_vstrhq_scatter_offset(int16_t *, uint32x4_t, int32x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrhq_scatter_offset_u16)))
void __arm_vstrhq_scatter_offset_u16(uint16_t *, uint16x8_t, uint16x8_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrhq_scatter_offset_u16)))
void __arm_vstrhq_scatter_offset(uint16_t *, uint16x8_t, uint16x8_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrhq_scatter_offset_u32)))
void __arm_vstrhq_scatter_offset_u32(uint16_t *, uint32x4_t, uint32x4_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrhq_scatter_offset_u32)))
void __arm_vstrhq_scatter_offset(uint16_t *, uint32x4_t, uint32x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrhq_scatter_shifted_offset_p_s16)))
void __arm_vstrhq_scatter_shifted_offset_p_s16(int16_t *, uint16x8_t, int16x8_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrhq_scatter_shifted_offset_p_s16)))
void __arm_vstrhq_scatter_shifted_offset_p(int16_t *, uint16x8_t, int16x8_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrhq_scatter_shifted_offset_p_s32)))
void __arm_vstrhq_scatter_shifted_offset_p_s32(int16_t *, uint32x4_t, int32x4_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrhq_scatter_shifted_offset_p_s32)))
void __arm_vstrhq_scatter_shifted_offset_p(int16_t *, uint32x4_t, int32x4_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrhq_scatter_shifted_offset_p_u16)))
void __arm_vstrhq_scatter_shifted_offset_p_u16(uint16_t *, uint16x8_t, uint16x8_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrhq_scatter_shifted_offset_p_u16)))
void __arm_vstrhq_scatter_shifted_offset_p(uint16_t *, uint16x8_t, uint16x8_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrhq_scatter_shifted_offset_p_u32)))
void __arm_vstrhq_scatter_shifted_offset_p_u32(uint16_t *, uint32x4_t, uint32x4_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrhq_scatter_shifted_offset_p_u32)))
void __arm_vstrhq_scatter_shifted_offset_p(uint16_t *, uint32x4_t, uint32x4_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrhq_scatter_shifted_offset_s16)))
void __arm_vstrhq_scatter_shifted_offset_s16(int16_t *, uint16x8_t, int16x8_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrhq_scatter_shifted_offset_s16)))
void __arm_vstrhq_scatter_shifted_offset(int16_t *, uint16x8_t, int16x8_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrhq_scatter_shifted_offset_s32)))
void __arm_vstrhq_scatter_shifted_offset_s32(int16_t *, uint32x4_t, int32x4_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrhq_scatter_shifted_offset_s32)))
void __arm_vstrhq_scatter_shifted_offset(int16_t *, uint32x4_t, int32x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrhq_scatter_shifted_offset_u16)))
void __arm_vstrhq_scatter_shifted_offset_u16(uint16_t *, uint16x8_t, uint16x8_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrhq_scatter_shifted_offset_u16)))
void __arm_vstrhq_scatter_shifted_offset(uint16_t *, uint16x8_t, uint16x8_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrhq_scatter_shifted_offset_u32)))
void __arm_vstrhq_scatter_shifted_offset_u32(uint16_t *, uint32x4_t, uint32x4_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrhq_scatter_shifted_offset_u32)))
void __arm_vstrhq_scatter_shifted_offset(uint16_t *, uint32x4_t, uint32x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrwq_scatter_base_p_s32)))
void __arm_vstrwq_scatter_base_p_s32(uint32x4_t, int, int32x4_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrwq_scatter_base_p_s32)))
void __arm_vstrwq_scatter_base_p(uint32x4_t, int, int32x4_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrwq_scatter_base_p_u32)))
void __arm_vstrwq_scatter_base_p_u32(uint32x4_t, int, uint32x4_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrwq_scatter_base_p_u32)))
void __arm_vstrwq_scatter_base_p(uint32x4_t, int, uint32x4_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrwq_scatter_base_s32)))
void __arm_vstrwq_scatter_base_s32(uint32x4_t, int, int32x4_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrwq_scatter_base_s32)))
void __arm_vstrwq_scatter_base(uint32x4_t, int, int32x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrwq_scatter_base_u32)))
void __arm_vstrwq_scatter_base_u32(uint32x4_t, int, uint32x4_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrwq_scatter_base_u32)))
void __arm_vstrwq_scatter_base(uint32x4_t, int, uint32x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrwq_scatter_base_wb_p_s32)))
void __arm_vstrwq_scatter_base_wb_p_s32(uint32x4_t *, int, int32x4_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrwq_scatter_base_wb_p_s32)))
void __arm_vstrwq_scatter_base_wb_p(uint32x4_t *, int, int32x4_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrwq_scatter_base_wb_p_u32)))
void __arm_vstrwq_scatter_base_wb_p_u32(uint32x4_t *, int, uint32x4_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrwq_scatter_base_wb_p_u32)))
void __arm_vstrwq_scatter_base_wb_p(uint32x4_t *, int, uint32x4_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrwq_scatter_base_wb_s32)))
void __arm_vstrwq_scatter_base_wb_s32(uint32x4_t *, int, int32x4_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrwq_scatter_base_wb_s32)))
void __arm_vstrwq_scatter_base_wb(uint32x4_t *, int, int32x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrwq_scatter_base_wb_u32)))
void __arm_vstrwq_scatter_base_wb_u32(uint32x4_t *, int, uint32x4_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrwq_scatter_base_wb_u32)))
void __arm_vstrwq_scatter_base_wb(uint32x4_t *, int, uint32x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrwq_scatter_offset_p_s32)))
void __arm_vstrwq_scatter_offset_p_s32(int32_t *, uint32x4_t, int32x4_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrwq_scatter_offset_p_s32)))
void __arm_vstrwq_scatter_offset_p(int32_t *, uint32x4_t, int32x4_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrwq_scatter_offset_p_u32)))
void __arm_vstrwq_scatter_offset_p_u32(uint32_t *, uint32x4_t, uint32x4_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrwq_scatter_offset_p_u32)))
void __arm_vstrwq_scatter_offset_p(uint32_t *, uint32x4_t, uint32x4_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrwq_scatter_offset_s32)))
void __arm_vstrwq_scatter_offset_s32(int32_t *, uint32x4_t, int32x4_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrwq_scatter_offset_s32)))
void __arm_vstrwq_scatter_offset(int32_t *, uint32x4_t, int32x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrwq_scatter_offset_u32)))
void __arm_vstrwq_scatter_offset_u32(uint32_t *, uint32x4_t, uint32x4_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrwq_scatter_offset_u32)))
void __arm_vstrwq_scatter_offset(uint32_t *, uint32x4_t, uint32x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrwq_scatter_shifted_offset_p_s32)))
void __arm_vstrwq_scatter_shifted_offset_p_s32(int32_t *, uint32x4_t, int32x4_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrwq_scatter_shifted_offset_p_s32)))
void __arm_vstrwq_scatter_shifted_offset_p(int32_t *, uint32x4_t, int32x4_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrwq_scatter_shifted_offset_p_u32)))
void __arm_vstrwq_scatter_shifted_offset_p_u32(uint32_t *, uint32x4_t, uint32x4_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrwq_scatter_shifted_offset_p_u32)))
void __arm_vstrwq_scatter_shifted_offset_p(uint32_t *, uint32x4_t, uint32x4_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrwq_scatter_shifted_offset_s32)))
void __arm_vstrwq_scatter_shifted_offset_s32(int32_t *, uint32x4_t, int32x4_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrwq_scatter_shifted_offset_s32)))
void __arm_vstrwq_scatter_shifted_offset(int32_t *, uint32x4_t, int32x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrwq_scatter_shifted_offset_u32)))
void __arm_vstrwq_scatter_shifted_offset_u32(uint32_t *, uint32x4_t, uint32x4_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrwq_scatter_shifted_offset_u32)))
void __arm_vstrwq_scatter_shifted_offset(uint32_t *, uint32x4_t, uint32x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vsubq_m_s16)))
int16x8_t __arm_vsubq_m_s16(int16x8_t, int16x8_t, int16x8_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vsubq_m_s16)))
int16x8_t __arm_vsubq_m(int16x8_t, int16x8_t, int16x8_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vsubq_m_s32)))
int32x4_t __arm_vsubq_m_s32(int32x4_t, int32x4_t, int32x4_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vsubq_m_s32)))
int32x4_t __arm_vsubq_m(int32x4_t, int32x4_t, int32x4_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vsubq_m_s8)))
int8x16_t __arm_vsubq_m_s8(int8x16_t, int8x16_t, int8x16_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vsubq_m_s8)))
int8x16_t __arm_vsubq_m(int8x16_t, int8x16_t, int8x16_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vsubq_m_u16)))
uint16x8_t __arm_vsubq_m_u16(uint16x8_t, uint16x8_t, uint16x8_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vsubq_m_u16)))
uint16x8_t __arm_vsubq_m(uint16x8_t, uint16x8_t, uint16x8_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vsubq_m_u32)))
uint32x4_t __arm_vsubq_m_u32(uint32x4_t, uint32x4_t, uint32x4_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vsubq_m_u32)))
uint32x4_t __arm_vsubq_m(uint32x4_t, uint32x4_t, uint32x4_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vsubq_m_u8)))
uint8x16_t __arm_vsubq_m_u8(uint8x16_t, uint8x16_t, uint8x16_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vsubq_m_u8)))
uint8x16_t __arm_vsubq_m(uint8x16_t, uint8x16_t, uint8x16_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vsubq_s16)))
int16x8_t __arm_vsubq_s16(int16x8_t, int16x8_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vsubq_s16)))
int16x8_t __arm_vsubq(int16x8_t, int16x8_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vsubq_s32)))
int32x4_t __arm_vsubq_s32(int32x4_t, int32x4_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vsubq_s32)))
int32x4_t __arm_vsubq(int32x4_t, int32x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vsubq_s8)))
int8x16_t __arm_vsubq_s8(int8x16_t, int8x16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vsubq_s8)))
int8x16_t __arm_vsubq(int8x16_t, int8x16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vsubq_u16)))
uint16x8_t __arm_vsubq_u16(uint16x8_t, uint16x8_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vsubq_u16)))
uint16x8_t __arm_vsubq(uint16x8_t, uint16x8_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vsubq_u32)))
uint32x4_t __arm_vsubq_u32(uint32x4_t, uint32x4_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vsubq_u32)))
uint32x4_t __arm_vsubq(uint32x4_t, uint32x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vsubq_u8)))
uint8x16_t __arm_vsubq_u8(uint8x16_t, uint8x16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vsubq_u8)))
uint8x16_t __arm_vsubq(uint8x16_t, uint8x16_t);

#if (__ARM_FEATURE_MVE & 2)

typedef __fp16 float16_t;
typedef float float32_t;
typedef __attribute__((neon_vector_type(8))) float16_t float16x8_t;
typedef struct { float16x8_t val[2]; } float16x8x2_t;
typedef struct { float16x8_t val[4]; } float16x8x4_t;
typedef __attribute__((neon_vector_type(4))) float32_t float32x4_t;
typedef struct { float32x4_t val[2]; } float32x4x2_t;
typedef struct { float32x4_t val[4]; } float32x4x4_t;

static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vaddq_f16)))
float16x8_t __arm_vaddq_f16(float16x8_t, float16x8_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vaddq_f16)))
float16x8_t __arm_vaddq(float16x8_t, float16x8_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vaddq_f32)))
float32x4_t __arm_vaddq_f32(float32x4_t, float32x4_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vaddq_f32)))
float32x4_t __arm_vaddq(float32x4_t, float32x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vaddq_m_f16)))
float16x8_t __arm_vaddq_m_f16(float16x8_t, float16x8_t, float16x8_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vaddq_m_f16)))
float16x8_t __arm_vaddq_m(float16x8_t, float16x8_t, float16x8_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vaddq_m_f32)))
float32x4_t __arm_vaddq_m_f32(float32x4_t, float32x4_t, float32x4_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vaddq_m_f32)))
float32x4_t __arm_vaddq_m(float32x4_t, float32x4_t, float32x4_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vcvtbq_f16_f32)))
float16x8_t __arm_vcvtbq_f16_f32(float16x8_t, float32x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vcvtbq_m_f16_f32)))
float16x8_t __arm_vcvtbq_m_f16_f32(float16x8_t, float32x4_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vcvttq_f16_f32)))
float16x8_t __arm_vcvttq_f16_f32(float16x8_t, float32x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vcvttq_m_f16_f32)))
float16x8_t __arm_vcvttq_m_f16_f32(float16x8_t, float32x4_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vld2q_f16)))
float16x8x2_t __arm_vld2q_f16(const float16_t *);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vld2q_f16)))
float16x8x2_t __arm_vld2q(const float16_t *);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vld2q_f32)))
float32x4x2_t __arm_vld2q_f32(const float32_t *);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vld2q_f32)))
float32x4x2_t __arm_vld2q(const float32_t *);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vld4q_f16)))
float16x8x4_t __arm_vld4q_f16(const float16_t *);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vld4q_f16)))
float16x8x4_t __arm_vld4q(const float16_t *);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vld4q_f32)))
float32x4x4_t __arm_vld4q_f32(const float32_t *);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vld4q_f32)))
float32x4x4_t __arm_vld4q(const float32_t *);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrhq_gather_offset_f16)))
float16x8_t __arm_vldrhq_gather_offset_f16(const float16_t *, uint16x8_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrhq_gather_offset_f16)))
float16x8_t __arm_vldrhq_gather_offset(const float16_t *, uint16x8_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrhq_gather_offset_z_f16)))
float16x8_t __arm_vldrhq_gather_offset_z_f16(const float16_t *, uint16x8_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrhq_gather_offset_z_f16)))
float16x8_t __arm_vldrhq_gather_offset_z(const float16_t *, uint16x8_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrhq_gather_shifted_offset_f16)))
float16x8_t __arm_vldrhq_gather_shifted_offset_f16(const float16_t *, uint16x8_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrhq_gather_shifted_offset_f16)))
float16x8_t __arm_vldrhq_gather_shifted_offset(const float16_t *, uint16x8_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrhq_gather_shifted_offset_z_f16)))
float16x8_t __arm_vldrhq_gather_shifted_offset_z_f16(const float16_t *, uint16x8_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrhq_gather_shifted_offset_z_f16)))
float16x8_t __arm_vldrhq_gather_shifted_offset_z(const float16_t *, uint16x8_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrwq_gather_base_f32)))
float32x4_t __arm_vldrwq_gather_base_f32(uint32x4_t, int);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrwq_gather_base_wb_f32)))
float32x4_t __arm_vldrwq_gather_base_wb_f32(uint32x4_t *, int);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrwq_gather_base_wb_z_f32)))
float32x4_t __arm_vldrwq_gather_base_wb_z_f32(uint32x4_t *, int, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrwq_gather_base_z_f32)))
float32x4_t __arm_vldrwq_gather_base_z_f32(uint32x4_t, int, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrwq_gather_offset_f32)))
float32x4_t __arm_vldrwq_gather_offset_f32(const float32_t *, uint32x4_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrwq_gather_offset_f32)))
float32x4_t __arm_vldrwq_gather_offset(const float32_t *, uint32x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrwq_gather_offset_z_f32)))
float32x4_t __arm_vldrwq_gather_offset_z_f32(const float32_t *, uint32x4_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrwq_gather_offset_z_f32)))
float32x4_t __arm_vldrwq_gather_offset_z(const float32_t *, uint32x4_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrwq_gather_shifted_offset_f32)))
float32x4_t __arm_vldrwq_gather_shifted_offset_f32(const float32_t *, uint32x4_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrwq_gather_shifted_offset_f32)))
float32x4_t __arm_vldrwq_gather_shifted_offset(const float32_t *, uint32x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrwq_gather_shifted_offset_z_f32)))
float32x4_t __arm_vldrwq_gather_shifted_offset_z_f32(const float32_t *, uint32x4_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrwq_gather_shifted_offset_z_f32)))
float32x4_t __arm_vldrwq_gather_shifted_offset_z(const float32_t *, uint32x4_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vst2q_f16)))
void __arm_vst2q_f16(float16_t *, float16x8x2_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vst2q_f16)))
void __arm_vst2q(float16_t *, float16x8x2_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vst2q_f32)))
void __arm_vst2q_f32(float32_t *, float32x4x2_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vst2q_f32)))
void __arm_vst2q(float32_t *, float32x4x2_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vst4q_f16)))
void __arm_vst4q_f16(float16_t *, float16x8x4_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vst4q_f16)))
void __arm_vst4q(float16_t *, float16x8x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vst4q_f32)))
void __arm_vst4q_f32(float32_t *, float32x4x4_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vst4q_f32)))
void __arm_vst4q(float32_t *, float32x4x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrhq_scatter_offset_f16)))
void __arm_vstrhq_scatter_offset_f16(float16_t *, uint16x8_t, float16x8_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrhq_scatter_offset_f16)))
void __arm_vstrhq_scatter_offset(float16_t *, uint16x8_t, float16x8_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrhq_scatter_offset_p_f16)))
void __arm_vstrhq_scatter_offset_p_f16(float16_t *, uint16x8_t, float16x8_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrhq_scatter_offset_p_f16)))
void __arm_vstrhq_scatter_offset_p(float16_t *, uint16x8_t, float16x8_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrhq_scatter_shifted_offset_f16)))
void __arm_vstrhq_scatter_shifted_offset_f16(float16_t *, uint16x8_t, float16x8_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrhq_scatter_shifted_offset_f16)))
void __arm_vstrhq_scatter_shifted_offset(float16_t *, uint16x8_t, float16x8_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrhq_scatter_shifted_offset_p_f16)))
void __arm_vstrhq_scatter_shifted_offset_p_f16(float16_t *, uint16x8_t, float16x8_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrhq_scatter_shifted_offset_p_f16)))
void __arm_vstrhq_scatter_shifted_offset_p(float16_t *, uint16x8_t, float16x8_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrwq_scatter_base_f32)))
void __arm_vstrwq_scatter_base_f32(uint32x4_t, int, float32x4_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrwq_scatter_base_f32)))
void __arm_vstrwq_scatter_base(uint32x4_t, int, float32x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrwq_scatter_base_p_f32)))
void __arm_vstrwq_scatter_base_p_f32(uint32x4_t, int, float32x4_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrwq_scatter_base_p_f32)))
void __arm_vstrwq_scatter_base_p(uint32x4_t, int, float32x4_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrwq_scatter_base_wb_f32)))
void __arm_vstrwq_scatter_base_wb_f32(uint32x4_t *, int, float32x4_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrwq_scatter_base_wb_f32)))
void __arm_vstrwq_scatter_base_wb(uint32x4_t *, int, float32x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrwq_scatter_base_wb_p_f32)))
void __arm_vstrwq_scatter_base_wb_p_f32(uint32x4_t *, int, float32x4_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrwq_scatter_base_wb_p_f32)))
void __arm_vstrwq_scatter_base_wb_p(uint32x4_t *, int, float32x4_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrwq_scatter_offset_f32)))
void __arm_vstrwq_scatter_offset_f32(float32_t *, uint32x4_t, float32x4_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrwq_scatter_offset_f32)))
void __arm_vstrwq_scatter_offset(float32_t *, uint32x4_t, float32x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrwq_scatter_offset_p_f32)))
void __arm_vstrwq_scatter_offset_p_f32(float32_t *, uint32x4_t, float32x4_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrwq_scatter_offset_p_f32)))
void __arm_vstrwq_scatter_offset_p(float32_t *, uint32x4_t, float32x4_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrwq_scatter_shifted_offset_f32)))
void __arm_vstrwq_scatter_shifted_offset_f32(float32_t *, uint32x4_t, float32x4_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrwq_scatter_shifted_offset_f32)))
void __arm_vstrwq_scatter_shifted_offset(float32_t *, uint32x4_t, float32x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrwq_scatter_shifted_offset_p_f32)))
void __arm_vstrwq_scatter_shifted_offset_p_f32(float32_t *, uint32x4_t, float32x4_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrwq_scatter_shifted_offset_p_f32)))
void __arm_vstrwq_scatter_shifted_offset_p(float32_t *, uint32x4_t, float32x4_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vsubq_f16)))
float16x8_t __arm_vsubq_f16(float16x8_t, float16x8_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vsubq_f16)))
float16x8_t __arm_vsubq(float16x8_t, float16x8_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vsubq_f32)))
float32x4_t __arm_vsubq_f32(float32x4_t, float32x4_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vsubq_f32)))
float32x4_t __arm_vsubq(float32x4_t, float32x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vsubq_m_f16)))
float16x8_t __arm_vsubq_m_f16(float16x8_t, float16x8_t, float16x8_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vsubq_m_f16)))
float16x8_t __arm_vsubq_m(float16x8_t, float16x8_t, float16x8_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vsubq_m_f32)))
float32x4_t __arm_vsubq_m_f32(float32x4_t, float32x4_t, float32x4_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vsubq_m_f32)))
float32x4_t __arm_vsubq_m(float32x4_t, float32x4_t, float32x4_t, mve_pred16_t);

#endif /* (__ARM_FEATURE_MVE & 2) */

#if (!defined __ARM_MVE_PRESERVE_USER_NAMESPACE)

static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_urshrl)))
uint64_t urshrl(uint64_t, uint32_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vadciq_m_s32)))
int32x4_t vadciq_m_s32(int32x4_t, int32x4_t, int32x4_t, unsigned *, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vadciq_m_s32)))
int32x4_t vadciq_m(int32x4_t, int32x4_t, int32x4_t, unsigned *, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vadciq_m_u32)))
uint32x4_t vadciq_m_u32(uint32x4_t, uint32x4_t, uint32x4_t, unsigned *, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vadciq_m_u32)))
uint32x4_t vadciq_m(uint32x4_t, uint32x4_t, uint32x4_t, unsigned *, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vadciq_s32)))
int32x4_t vadciq_s32(int32x4_t, int32x4_t, unsigned *);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vadciq_s32)))
int32x4_t vadciq(int32x4_t, int32x4_t, unsigned *);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vadciq_u32)))
uint32x4_t vadciq_u32(uint32x4_t, uint32x4_t, unsigned *);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vadciq_u32)))
uint32x4_t vadciq(uint32x4_t, uint32x4_t, unsigned *);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vadcq_m_s32)))
int32x4_t vadcq_m_s32(int32x4_t, int32x4_t, int32x4_t, unsigned *, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vadcq_m_s32)))
int32x4_t vadcq_m(int32x4_t, int32x4_t, int32x4_t, unsigned *, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vadcq_m_u32)))
uint32x4_t vadcq_m_u32(uint32x4_t, uint32x4_t, uint32x4_t, unsigned *, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vadcq_m_u32)))
uint32x4_t vadcq_m(uint32x4_t, uint32x4_t, uint32x4_t, unsigned *, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vadcq_s32)))
int32x4_t vadcq_s32(int32x4_t, int32x4_t, unsigned *);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vadcq_s32)))
int32x4_t vadcq(int32x4_t, int32x4_t, unsigned *);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vadcq_u32)))
uint32x4_t vadcq_u32(uint32x4_t, uint32x4_t, unsigned *);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vadcq_u32)))
uint32x4_t vadcq(uint32x4_t, uint32x4_t, unsigned *);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vaddq_m_s16)))
int16x8_t vaddq_m_s16(int16x8_t, int16x8_t, int16x8_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vaddq_m_s16)))
int16x8_t vaddq_m(int16x8_t, int16x8_t, int16x8_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vaddq_m_s32)))
int32x4_t vaddq_m_s32(int32x4_t, int32x4_t, int32x4_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vaddq_m_s32)))
int32x4_t vaddq_m(int32x4_t, int32x4_t, int32x4_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vaddq_m_s8)))
int8x16_t vaddq_m_s8(int8x16_t, int8x16_t, int8x16_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vaddq_m_s8)))
int8x16_t vaddq_m(int8x16_t, int8x16_t, int8x16_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vaddq_m_u16)))
uint16x8_t vaddq_m_u16(uint16x8_t, uint16x8_t, uint16x8_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vaddq_m_u16)))
uint16x8_t vaddq_m(uint16x8_t, uint16x8_t, uint16x8_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vaddq_m_u32)))
uint32x4_t vaddq_m_u32(uint32x4_t, uint32x4_t, uint32x4_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vaddq_m_u32)))
uint32x4_t vaddq_m(uint32x4_t, uint32x4_t, uint32x4_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vaddq_m_u8)))
uint8x16_t vaddq_m_u8(uint8x16_t, uint8x16_t, uint8x16_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vaddq_m_u8)))
uint8x16_t vaddq_m(uint8x16_t, uint8x16_t, uint8x16_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vaddq_s16)))
int16x8_t vaddq_s16(int16x8_t, int16x8_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vaddq_s16)))
int16x8_t vaddq(int16x8_t, int16x8_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vaddq_s32)))
int32x4_t vaddq_s32(int32x4_t, int32x4_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vaddq_s32)))
int32x4_t vaddq(int32x4_t, int32x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vaddq_s8)))
int8x16_t vaddq_s8(int8x16_t, int8x16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vaddq_s8)))
int8x16_t vaddq(int8x16_t, int8x16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vaddq_u16)))
uint16x8_t vaddq_u16(uint16x8_t, uint16x8_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vaddq_u16)))
uint16x8_t vaddq(uint16x8_t, uint16x8_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vaddq_u32)))
uint32x4_t vaddq_u32(uint32x4_t, uint32x4_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vaddq_u32)))
uint32x4_t vaddq(uint32x4_t, uint32x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vaddq_u8)))
uint8x16_t vaddq_u8(uint8x16_t, uint8x16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vaddq_u8)))
uint8x16_t vaddq(uint8x16_t, uint8x16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vld2q_s16)))
int16x8x2_t vld2q_s16(const int16_t *);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vld2q_s16)))
int16x8x2_t vld2q(const int16_t *);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vld2q_s32)))
int32x4x2_t vld2q_s32(const int32_t *);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vld2q_s32)))
int32x4x2_t vld2q(const int32_t *);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vld2q_s8)))
int8x16x2_t vld2q_s8(const int8_t *);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vld2q_s8)))
int8x16x2_t vld2q(const int8_t *);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vld2q_u16)))
uint16x8x2_t vld2q_u16(const uint16_t *);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vld2q_u16)))
uint16x8x2_t vld2q(const uint16_t *);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vld2q_u32)))
uint32x4x2_t vld2q_u32(const uint32_t *);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vld2q_u32)))
uint32x4x2_t vld2q(const uint32_t *);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vld2q_u8)))
uint8x16x2_t vld2q_u8(const uint8_t *);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vld2q_u8)))
uint8x16x2_t vld2q(const uint8_t *);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vld4q_s16)))
int16x8x4_t vld4q_s16(const int16_t *);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vld4q_s16)))
int16x8x4_t vld4q(const int16_t *);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vld4q_s32)))
int32x4x4_t vld4q_s32(const int32_t *);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vld4q_s32)))
int32x4x4_t vld4q(const int32_t *);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vld4q_s8)))
int8x16x4_t vld4q_s8(const int8_t *);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vld4q_s8)))
int8x16x4_t vld4q(const int8_t *);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vld4q_u16)))
uint16x8x4_t vld4q_u16(const uint16_t *);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vld4q_u16)))
uint16x8x4_t vld4q(const uint16_t *);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vld4q_u32)))
uint32x4x4_t vld4q_u32(const uint32_t *);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vld4q_u32)))
uint32x4x4_t vld4q(const uint32_t *);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vld4q_u8)))
uint8x16x4_t vld4q_u8(const uint8_t *);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vld4q_u8)))
uint8x16x4_t vld4q(const uint8_t *);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrbq_gather_offset_s16)))
int16x8_t vldrbq_gather_offset_s16(const int8_t *, uint16x8_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrbq_gather_offset_s16)))
int16x8_t vldrbq_gather_offset(const int8_t *, uint16x8_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrbq_gather_offset_s32)))
int32x4_t vldrbq_gather_offset_s32(const int8_t *, uint32x4_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrbq_gather_offset_s32)))
int32x4_t vldrbq_gather_offset(const int8_t *, uint32x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrbq_gather_offset_s8)))
int8x16_t vldrbq_gather_offset_s8(const int8_t *, uint8x16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrbq_gather_offset_s8)))
int8x16_t vldrbq_gather_offset(const int8_t *, uint8x16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrbq_gather_offset_u16)))
uint16x8_t vldrbq_gather_offset_u16(const uint8_t *, uint16x8_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrbq_gather_offset_u16)))
uint16x8_t vldrbq_gather_offset(const uint8_t *, uint16x8_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrbq_gather_offset_u32)))
uint32x4_t vldrbq_gather_offset_u32(const uint8_t *, uint32x4_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrbq_gather_offset_u32)))
uint32x4_t vldrbq_gather_offset(const uint8_t *, uint32x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrbq_gather_offset_u8)))
uint8x16_t vldrbq_gather_offset_u8(const uint8_t *, uint8x16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrbq_gather_offset_u8)))
uint8x16_t vldrbq_gather_offset(const uint8_t *, uint8x16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrbq_gather_offset_z_s16)))
int16x8_t vldrbq_gather_offset_z_s16(const int8_t *, uint16x8_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrbq_gather_offset_z_s16)))
int16x8_t vldrbq_gather_offset_z(const int8_t *, uint16x8_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrbq_gather_offset_z_s32)))
int32x4_t vldrbq_gather_offset_z_s32(const int8_t *, uint32x4_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrbq_gather_offset_z_s32)))
int32x4_t vldrbq_gather_offset_z(const int8_t *, uint32x4_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrbq_gather_offset_z_s8)))
int8x16_t vldrbq_gather_offset_z_s8(const int8_t *, uint8x16_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrbq_gather_offset_z_s8)))
int8x16_t vldrbq_gather_offset_z(const int8_t *, uint8x16_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrbq_gather_offset_z_u16)))
uint16x8_t vldrbq_gather_offset_z_u16(const uint8_t *, uint16x8_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrbq_gather_offset_z_u16)))
uint16x8_t vldrbq_gather_offset_z(const uint8_t *, uint16x8_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrbq_gather_offset_z_u32)))
uint32x4_t vldrbq_gather_offset_z_u32(const uint8_t *, uint32x4_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrbq_gather_offset_z_u32)))
uint32x4_t vldrbq_gather_offset_z(const uint8_t *, uint32x4_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrbq_gather_offset_z_u8)))
uint8x16_t vldrbq_gather_offset_z_u8(const uint8_t *, uint8x16_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrbq_gather_offset_z_u8)))
uint8x16_t vldrbq_gather_offset_z(const uint8_t *, uint8x16_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrdq_gather_base_s64)))
int64x2_t vldrdq_gather_base_s64(uint64x2_t, int);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrdq_gather_base_u64)))
uint64x2_t vldrdq_gather_base_u64(uint64x2_t, int);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrdq_gather_base_wb_s64)))
int64x2_t vldrdq_gather_base_wb_s64(uint64x2_t *, int);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrdq_gather_base_wb_u64)))
uint64x2_t vldrdq_gather_base_wb_u64(uint64x2_t *, int);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrdq_gather_base_wb_z_s64)))
int64x2_t vldrdq_gather_base_wb_z_s64(uint64x2_t *, int, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrdq_gather_base_wb_z_u64)))
uint64x2_t vldrdq_gather_base_wb_z_u64(uint64x2_t *, int, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrdq_gather_base_z_s64)))
int64x2_t vldrdq_gather_base_z_s64(uint64x2_t, int, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrdq_gather_base_z_u64)))
uint64x2_t vldrdq_gather_base_z_u64(uint64x2_t, int, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrdq_gather_offset_s64)))
int64x2_t vldrdq_gather_offset_s64(const int64_t *, uint64x2_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrdq_gather_offset_s64)))
int64x2_t vldrdq_gather_offset(const int64_t *, uint64x2_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrdq_gather_offset_u64)))
uint64x2_t vldrdq_gather_offset_u64(const uint64_t *, uint64x2_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrdq_gather_offset_u64)))
uint64x2_t vldrdq_gather_offset(const uint64_t *, uint64x2_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrdq_gather_offset_z_s64)))
int64x2_t vldrdq_gather_offset_z_s64(const int64_t *, uint64x2_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrdq_gather_offset_z_s64)))
int64x2_t vldrdq_gather_offset_z(const int64_t *, uint64x2_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrdq_gather_offset_z_u64)))
uint64x2_t vldrdq_gather_offset_z_u64(const uint64_t *, uint64x2_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrdq_gather_offset_z_u64)))
uint64x2_t vldrdq_gather_offset_z(const uint64_t *, uint64x2_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrdq_gather_shifted_offset_s64)))
int64x2_t vldrdq_gather_shifted_offset_s64(const int64_t *, uint64x2_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrdq_gather_shifted_offset_s64)))
int64x2_t vldrdq_gather_shifted_offset(const int64_t *, uint64x2_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrdq_gather_shifted_offset_u64)))
uint64x2_t vldrdq_gather_shifted_offset_u64(const uint64_t *, uint64x2_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrdq_gather_shifted_offset_u64)))
uint64x2_t vldrdq_gather_shifted_offset(const uint64_t *, uint64x2_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrdq_gather_shifted_offset_z_s64)))
int64x2_t vldrdq_gather_shifted_offset_z_s64(const int64_t *, uint64x2_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrdq_gather_shifted_offset_z_s64)))
int64x2_t vldrdq_gather_shifted_offset_z(const int64_t *, uint64x2_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrdq_gather_shifted_offset_z_u64)))
uint64x2_t vldrdq_gather_shifted_offset_z_u64(const uint64_t *, uint64x2_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrdq_gather_shifted_offset_z_u64)))
uint64x2_t vldrdq_gather_shifted_offset_z(const uint64_t *, uint64x2_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrhq_gather_offset_s16)))
int16x8_t vldrhq_gather_offset_s16(const int16_t *, uint16x8_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrhq_gather_offset_s16)))
int16x8_t vldrhq_gather_offset(const int16_t *, uint16x8_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrhq_gather_offset_s32)))
int32x4_t vldrhq_gather_offset_s32(const int16_t *, uint32x4_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrhq_gather_offset_s32)))
int32x4_t vldrhq_gather_offset(const int16_t *, uint32x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrhq_gather_offset_u16)))
uint16x8_t vldrhq_gather_offset_u16(const uint16_t *, uint16x8_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrhq_gather_offset_u16)))
uint16x8_t vldrhq_gather_offset(const uint16_t *, uint16x8_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrhq_gather_offset_u32)))
uint32x4_t vldrhq_gather_offset_u32(const uint16_t *, uint32x4_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrhq_gather_offset_u32)))
uint32x4_t vldrhq_gather_offset(const uint16_t *, uint32x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrhq_gather_offset_z_s16)))
int16x8_t vldrhq_gather_offset_z_s16(const int16_t *, uint16x8_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrhq_gather_offset_z_s16)))
int16x8_t vldrhq_gather_offset_z(const int16_t *, uint16x8_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrhq_gather_offset_z_s32)))
int32x4_t vldrhq_gather_offset_z_s32(const int16_t *, uint32x4_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrhq_gather_offset_z_s32)))
int32x4_t vldrhq_gather_offset_z(const int16_t *, uint32x4_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrhq_gather_offset_z_u16)))
uint16x8_t vldrhq_gather_offset_z_u16(const uint16_t *, uint16x8_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrhq_gather_offset_z_u16)))
uint16x8_t vldrhq_gather_offset_z(const uint16_t *, uint16x8_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrhq_gather_offset_z_u32)))
uint32x4_t vldrhq_gather_offset_z_u32(const uint16_t *, uint32x4_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrhq_gather_offset_z_u32)))
uint32x4_t vldrhq_gather_offset_z(const uint16_t *, uint32x4_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrhq_gather_shifted_offset_s16)))
int16x8_t vldrhq_gather_shifted_offset_s16(const int16_t *, uint16x8_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrhq_gather_shifted_offset_s16)))
int16x8_t vldrhq_gather_shifted_offset(const int16_t *, uint16x8_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrhq_gather_shifted_offset_s32)))
int32x4_t vldrhq_gather_shifted_offset_s32(const int16_t *, uint32x4_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrhq_gather_shifted_offset_s32)))
int32x4_t vldrhq_gather_shifted_offset(const int16_t *, uint32x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrhq_gather_shifted_offset_u16)))
uint16x8_t vldrhq_gather_shifted_offset_u16(const uint16_t *, uint16x8_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrhq_gather_shifted_offset_u16)))
uint16x8_t vldrhq_gather_shifted_offset(const uint16_t *, uint16x8_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrhq_gather_shifted_offset_u32)))
uint32x4_t vldrhq_gather_shifted_offset_u32(const uint16_t *, uint32x4_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrhq_gather_shifted_offset_u32)))
uint32x4_t vldrhq_gather_shifted_offset(const uint16_t *, uint32x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrhq_gather_shifted_offset_z_s16)))
int16x8_t vldrhq_gather_shifted_offset_z_s16(const int16_t *, uint16x8_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrhq_gather_shifted_offset_z_s16)))
int16x8_t vldrhq_gather_shifted_offset_z(const int16_t *, uint16x8_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrhq_gather_shifted_offset_z_s32)))
int32x4_t vldrhq_gather_shifted_offset_z_s32(const int16_t *, uint32x4_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrhq_gather_shifted_offset_z_s32)))
int32x4_t vldrhq_gather_shifted_offset_z(const int16_t *, uint32x4_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrhq_gather_shifted_offset_z_u16)))
uint16x8_t vldrhq_gather_shifted_offset_z_u16(const uint16_t *, uint16x8_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrhq_gather_shifted_offset_z_u16)))
uint16x8_t vldrhq_gather_shifted_offset_z(const uint16_t *, uint16x8_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrhq_gather_shifted_offset_z_u32)))
uint32x4_t vldrhq_gather_shifted_offset_z_u32(const uint16_t *, uint32x4_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrhq_gather_shifted_offset_z_u32)))
uint32x4_t vldrhq_gather_shifted_offset_z(const uint16_t *, uint32x4_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrwq_gather_base_s32)))
int32x4_t vldrwq_gather_base_s32(uint32x4_t, int);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrwq_gather_base_u32)))
uint32x4_t vldrwq_gather_base_u32(uint32x4_t, int);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrwq_gather_base_wb_s32)))
int32x4_t vldrwq_gather_base_wb_s32(uint32x4_t *, int);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrwq_gather_base_wb_u32)))
uint32x4_t vldrwq_gather_base_wb_u32(uint32x4_t *, int);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrwq_gather_base_wb_z_s32)))
int32x4_t vldrwq_gather_base_wb_z_s32(uint32x4_t *, int, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrwq_gather_base_wb_z_u32)))
uint32x4_t vldrwq_gather_base_wb_z_u32(uint32x4_t *, int, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrwq_gather_base_z_s32)))
int32x4_t vldrwq_gather_base_z_s32(uint32x4_t, int, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrwq_gather_base_z_u32)))
uint32x4_t vldrwq_gather_base_z_u32(uint32x4_t, int, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrwq_gather_offset_s32)))
int32x4_t vldrwq_gather_offset_s32(const int32_t *, uint32x4_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrwq_gather_offset_s32)))
int32x4_t vldrwq_gather_offset(const int32_t *, uint32x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrwq_gather_offset_u32)))
uint32x4_t vldrwq_gather_offset_u32(const uint32_t *, uint32x4_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrwq_gather_offset_u32)))
uint32x4_t vldrwq_gather_offset(const uint32_t *, uint32x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrwq_gather_offset_z_s32)))
int32x4_t vldrwq_gather_offset_z_s32(const int32_t *, uint32x4_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrwq_gather_offset_z_s32)))
int32x4_t vldrwq_gather_offset_z(const int32_t *, uint32x4_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrwq_gather_offset_z_u32)))
uint32x4_t vldrwq_gather_offset_z_u32(const uint32_t *, uint32x4_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrwq_gather_offset_z_u32)))
uint32x4_t vldrwq_gather_offset_z(const uint32_t *, uint32x4_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrwq_gather_shifted_offset_s32)))
int32x4_t vldrwq_gather_shifted_offset_s32(const int32_t *, uint32x4_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrwq_gather_shifted_offset_s32)))
int32x4_t vldrwq_gather_shifted_offset(const int32_t *, uint32x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrwq_gather_shifted_offset_u32)))
uint32x4_t vldrwq_gather_shifted_offset_u32(const uint32_t *, uint32x4_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrwq_gather_shifted_offset_u32)))
uint32x4_t vldrwq_gather_shifted_offset(const uint32_t *, uint32x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrwq_gather_shifted_offset_z_s32)))
int32x4_t vldrwq_gather_shifted_offset_z_s32(const int32_t *, uint32x4_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrwq_gather_shifted_offset_z_s32)))
int32x4_t vldrwq_gather_shifted_offset_z(const int32_t *, uint32x4_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrwq_gather_shifted_offset_z_u32)))
uint32x4_t vldrwq_gather_shifted_offset_z_u32(const uint32_t *, uint32x4_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrwq_gather_shifted_offset_z_u32)))
uint32x4_t vldrwq_gather_shifted_offset_z(const uint32_t *, uint32x4_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vmaxvq_s16)))
int16_t vmaxvq_s16(int16_t, int16x8_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vmaxvq_s16)))
int16_t vmaxvq(int16_t, int16x8_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vmaxvq_s32)))
int32_t vmaxvq_s32(int32_t, int32x4_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vmaxvq_s32)))
int32_t vmaxvq(int32_t, int32x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vmaxvq_s8)))
int8_t vmaxvq_s8(int8_t, int8x16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vmaxvq_s8)))
int8_t vmaxvq(int8_t, int8x16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vmaxvq_u16)))
uint16_t vmaxvq_u16(uint16_t, uint16x8_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vmaxvq_u16)))
uint16_t vmaxvq(uint16_t, uint16x8_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vmaxvq_u32)))
uint32_t vmaxvq_u32(uint32_t, uint32x4_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vmaxvq_u32)))
uint32_t vmaxvq(uint32_t, uint32x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vmaxvq_u8)))
uint8_t vmaxvq_u8(uint8_t, uint8x16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vmaxvq_u8)))
uint8_t vmaxvq(uint8_t, uint8x16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vminvq_s16)))
int16_t vminvq_s16(int16_t, int16x8_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vminvq_s16)))
int16_t vminvq(int16_t, int16x8_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vminvq_s32)))
int32_t vminvq_s32(int32_t, int32x4_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vminvq_s32)))
int32_t vminvq(int32_t, int32x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vminvq_s8)))
int8_t vminvq_s8(int8_t, int8x16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vminvq_s8)))
int8_t vminvq(int8_t, int8x16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vminvq_u16)))
uint16_t vminvq_u16(uint16_t, uint16x8_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vminvq_u16)))
uint16_t vminvq(uint16_t, uint16x8_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vminvq_u32)))
uint32_t vminvq_u32(uint32_t, uint32x4_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vminvq_u32)))
uint32_t vminvq(uint32_t, uint32x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vminvq_u8)))
uint8_t vminvq_u8(uint8_t, uint8x16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vminvq_u8)))
uint8_t vminvq(uint8_t, uint8x16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vst2q_s16)))
void vst2q_s16(int16_t *, int16x8x2_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vst2q_s16)))
void vst2q(int16_t *, int16x8x2_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vst2q_s32)))
void vst2q_s32(int32_t *, int32x4x2_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vst2q_s32)))
void vst2q(int32_t *, int32x4x2_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vst2q_s8)))
void vst2q_s8(int8_t *, int8x16x2_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vst2q_s8)))
void vst2q(int8_t *, int8x16x2_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vst2q_u16)))
void vst2q_u16(uint16_t *, uint16x8x2_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vst2q_u16)))
void vst2q(uint16_t *, uint16x8x2_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vst2q_u32)))
void vst2q_u32(uint32_t *, uint32x4x2_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vst2q_u32)))
void vst2q(uint32_t *, uint32x4x2_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vst2q_u8)))
void vst2q_u8(uint8_t *, uint8x16x2_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vst2q_u8)))
void vst2q(uint8_t *, uint8x16x2_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vst4q_s16)))
void vst4q_s16(int16_t *, int16x8x4_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vst4q_s16)))
void vst4q(int16_t *, int16x8x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vst4q_s32)))
void vst4q_s32(int32_t *, int32x4x4_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vst4q_s32)))
void vst4q(int32_t *, int32x4x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vst4q_s8)))
void vst4q_s8(int8_t *, int8x16x4_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vst4q_s8)))
void vst4q(int8_t *, int8x16x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vst4q_u16)))
void vst4q_u16(uint16_t *, uint16x8x4_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vst4q_u16)))
void vst4q(uint16_t *, uint16x8x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vst4q_u32)))
void vst4q_u32(uint32_t *, uint32x4x4_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vst4q_u32)))
void vst4q(uint32_t *, uint32x4x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vst4q_u8)))
void vst4q_u8(uint8_t *, uint8x16x4_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vst4q_u8)))
void vst4q(uint8_t *, uint8x16x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrbq_scatter_offset_p_s16)))
void vstrbq_scatter_offset_p_s16(int8_t *, uint16x8_t, int16x8_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrbq_scatter_offset_p_s16)))
void vstrbq_scatter_offset_p(int8_t *, uint16x8_t, int16x8_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrbq_scatter_offset_p_s32)))
void vstrbq_scatter_offset_p_s32(int8_t *, uint32x4_t, int32x4_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrbq_scatter_offset_p_s32)))
void vstrbq_scatter_offset_p(int8_t *, uint32x4_t, int32x4_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrbq_scatter_offset_p_s8)))
void vstrbq_scatter_offset_p_s8(int8_t *, uint8x16_t, int8x16_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrbq_scatter_offset_p_s8)))
void vstrbq_scatter_offset_p(int8_t *, uint8x16_t, int8x16_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrbq_scatter_offset_p_u16)))
void vstrbq_scatter_offset_p_u16(uint8_t *, uint16x8_t, uint16x8_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrbq_scatter_offset_p_u16)))
void vstrbq_scatter_offset_p(uint8_t *, uint16x8_t, uint16x8_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrbq_scatter_offset_p_u32)))
void vstrbq_scatter_offset_p_u32(uint8_t *, uint32x4_t, uint32x4_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrbq_scatter_offset_p_u32)))
void vstrbq_scatter_offset_p(uint8_t *, uint32x4_t, uint32x4_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrbq_scatter_offset_p_u8)))
void vstrbq_scatter_offset_p_u8(uint8_t *, uint8x16_t, uint8x16_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrbq_scatter_offset_p_u8)))
void vstrbq_scatter_offset_p(uint8_t *, uint8x16_t, uint8x16_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrbq_scatter_offset_s16)))
void vstrbq_scatter_offset_s16(int8_t *, uint16x8_t, int16x8_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrbq_scatter_offset_s16)))
void vstrbq_scatter_offset(int8_t *, uint16x8_t, int16x8_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrbq_scatter_offset_s32)))
void vstrbq_scatter_offset_s32(int8_t *, uint32x4_t, int32x4_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrbq_scatter_offset_s32)))
void vstrbq_scatter_offset(int8_t *, uint32x4_t, int32x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrbq_scatter_offset_s8)))
void vstrbq_scatter_offset_s8(int8_t *, uint8x16_t, int8x16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrbq_scatter_offset_s8)))
void vstrbq_scatter_offset(int8_t *, uint8x16_t, int8x16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrbq_scatter_offset_u16)))
void vstrbq_scatter_offset_u16(uint8_t *, uint16x8_t, uint16x8_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrbq_scatter_offset_u16)))
void vstrbq_scatter_offset(uint8_t *, uint16x8_t, uint16x8_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrbq_scatter_offset_u32)))
void vstrbq_scatter_offset_u32(uint8_t *, uint32x4_t, uint32x4_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrbq_scatter_offset_u32)))
void vstrbq_scatter_offset(uint8_t *, uint32x4_t, uint32x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrbq_scatter_offset_u8)))
void vstrbq_scatter_offset_u8(uint8_t *, uint8x16_t, uint8x16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrbq_scatter_offset_u8)))
void vstrbq_scatter_offset(uint8_t *, uint8x16_t, uint8x16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrdq_scatter_base_p_s64)))
void vstrdq_scatter_base_p_s64(uint64x2_t, int, int64x2_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrdq_scatter_base_p_s64)))
void vstrdq_scatter_base_p(uint64x2_t, int, int64x2_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrdq_scatter_base_p_u64)))
void vstrdq_scatter_base_p_u64(uint64x2_t, int, uint64x2_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrdq_scatter_base_p_u64)))
void vstrdq_scatter_base_p(uint64x2_t, int, uint64x2_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrdq_scatter_base_s64)))
void vstrdq_scatter_base_s64(uint64x2_t, int, int64x2_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrdq_scatter_base_s64)))
void vstrdq_scatter_base(uint64x2_t, int, int64x2_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrdq_scatter_base_u64)))
void vstrdq_scatter_base_u64(uint64x2_t, int, uint64x2_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrdq_scatter_base_u64)))
void vstrdq_scatter_base(uint64x2_t, int, uint64x2_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrdq_scatter_base_wb_p_s64)))
void vstrdq_scatter_base_wb_p_s64(uint64x2_t *, int, int64x2_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrdq_scatter_base_wb_p_s64)))
void vstrdq_scatter_base_wb_p(uint64x2_t *, int, int64x2_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrdq_scatter_base_wb_p_u64)))
void vstrdq_scatter_base_wb_p_u64(uint64x2_t *, int, uint64x2_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrdq_scatter_base_wb_p_u64)))
void vstrdq_scatter_base_wb_p(uint64x2_t *, int, uint64x2_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrdq_scatter_base_wb_s64)))
void vstrdq_scatter_base_wb_s64(uint64x2_t *, int, int64x2_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrdq_scatter_base_wb_s64)))
void vstrdq_scatter_base_wb(uint64x2_t *, int, int64x2_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrdq_scatter_base_wb_u64)))
void vstrdq_scatter_base_wb_u64(uint64x2_t *, int, uint64x2_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrdq_scatter_base_wb_u64)))
void vstrdq_scatter_base_wb(uint64x2_t *, int, uint64x2_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrdq_scatter_offset_p_s64)))
void vstrdq_scatter_offset_p_s64(int64_t *, uint64x2_t, int64x2_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrdq_scatter_offset_p_s64)))
void vstrdq_scatter_offset_p(int64_t *, uint64x2_t, int64x2_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrdq_scatter_offset_p_u64)))
void vstrdq_scatter_offset_p_u64(uint64_t *, uint64x2_t, uint64x2_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrdq_scatter_offset_p_u64)))
void vstrdq_scatter_offset_p(uint64_t *, uint64x2_t, uint64x2_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrdq_scatter_offset_s64)))
void vstrdq_scatter_offset_s64(int64_t *, uint64x2_t, int64x2_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrdq_scatter_offset_s64)))
void vstrdq_scatter_offset(int64_t *, uint64x2_t, int64x2_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrdq_scatter_offset_u64)))
void vstrdq_scatter_offset_u64(uint64_t *, uint64x2_t, uint64x2_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrdq_scatter_offset_u64)))
void vstrdq_scatter_offset(uint64_t *, uint64x2_t, uint64x2_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrdq_scatter_shifted_offset_p_s64)))
void vstrdq_scatter_shifted_offset_p_s64(int64_t *, uint64x2_t, int64x2_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrdq_scatter_shifted_offset_p_s64)))
void vstrdq_scatter_shifted_offset_p(int64_t *, uint64x2_t, int64x2_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrdq_scatter_shifted_offset_p_u64)))
void vstrdq_scatter_shifted_offset_p_u64(uint64_t *, uint64x2_t, uint64x2_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrdq_scatter_shifted_offset_p_u64)))
void vstrdq_scatter_shifted_offset_p(uint64_t *, uint64x2_t, uint64x2_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrdq_scatter_shifted_offset_s64)))
void vstrdq_scatter_shifted_offset_s64(int64_t *, uint64x2_t, int64x2_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrdq_scatter_shifted_offset_s64)))
void vstrdq_scatter_shifted_offset(int64_t *, uint64x2_t, int64x2_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrdq_scatter_shifted_offset_u64)))
void vstrdq_scatter_shifted_offset_u64(uint64_t *, uint64x2_t, uint64x2_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrdq_scatter_shifted_offset_u64)))
void vstrdq_scatter_shifted_offset(uint64_t *, uint64x2_t, uint64x2_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrhq_scatter_offset_p_s16)))
void vstrhq_scatter_offset_p_s16(int16_t *, uint16x8_t, int16x8_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrhq_scatter_offset_p_s16)))
void vstrhq_scatter_offset_p(int16_t *, uint16x8_t, int16x8_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrhq_scatter_offset_p_s32)))
void vstrhq_scatter_offset_p_s32(int16_t *, uint32x4_t, int32x4_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrhq_scatter_offset_p_s32)))
void vstrhq_scatter_offset_p(int16_t *, uint32x4_t, int32x4_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrhq_scatter_offset_p_u16)))
void vstrhq_scatter_offset_p_u16(uint16_t *, uint16x8_t, uint16x8_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrhq_scatter_offset_p_u16)))
void vstrhq_scatter_offset_p(uint16_t *, uint16x8_t, uint16x8_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrhq_scatter_offset_p_u32)))
void vstrhq_scatter_offset_p_u32(uint16_t *, uint32x4_t, uint32x4_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrhq_scatter_offset_p_u32)))
void vstrhq_scatter_offset_p(uint16_t *, uint32x4_t, uint32x4_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrhq_scatter_offset_s16)))
void vstrhq_scatter_offset_s16(int16_t *, uint16x8_t, int16x8_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrhq_scatter_offset_s16)))
void vstrhq_scatter_offset(int16_t *, uint16x8_t, int16x8_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrhq_scatter_offset_s32)))
void vstrhq_scatter_offset_s32(int16_t *, uint32x4_t, int32x4_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrhq_scatter_offset_s32)))
void vstrhq_scatter_offset(int16_t *, uint32x4_t, int32x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrhq_scatter_offset_u16)))
void vstrhq_scatter_offset_u16(uint16_t *, uint16x8_t, uint16x8_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrhq_scatter_offset_u16)))
void vstrhq_scatter_offset(uint16_t *, uint16x8_t, uint16x8_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrhq_scatter_offset_u32)))
void vstrhq_scatter_offset_u32(uint16_t *, uint32x4_t, uint32x4_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrhq_scatter_offset_u32)))
void vstrhq_scatter_offset(uint16_t *, uint32x4_t, uint32x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrhq_scatter_shifted_offset_p_s16)))
void vstrhq_scatter_shifted_offset_p_s16(int16_t *, uint16x8_t, int16x8_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrhq_scatter_shifted_offset_p_s16)))
void vstrhq_scatter_shifted_offset_p(int16_t *, uint16x8_t, int16x8_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrhq_scatter_shifted_offset_p_s32)))
void vstrhq_scatter_shifted_offset_p_s32(int16_t *, uint32x4_t, int32x4_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrhq_scatter_shifted_offset_p_s32)))
void vstrhq_scatter_shifted_offset_p(int16_t *, uint32x4_t, int32x4_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrhq_scatter_shifted_offset_p_u16)))
void vstrhq_scatter_shifted_offset_p_u16(uint16_t *, uint16x8_t, uint16x8_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrhq_scatter_shifted_offset_p_u16)))
void vstrhq_scatter_shifted_offset_p(uint16_t *, uint16x8_t, uint16x8_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrhq_scatter_shifted_offset_p_u32)))
void vstrhq_scatter_shifted_offset_p_u32(uint16_t *, uint32x4_t, uint32x4_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrhq_scatter_shifted_offset_p_u32)))
void vstrhq_scatter_shifted_offset_p(uint16_t *, uint32x4_t, uint32x4_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrhq_scatter_shifted_offset_s16)))
void vstrhq_scatter_shifted_offset_s16(int16_t *, uint16x8_t, int16x8_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrhq_scatter_shifted_offset_s16)))
void vstrhq_scatter_shifted_offset(int16_t *, uint16x8_t, int16x8_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrhq_scatter_shifted_offset_s32)))
void vstrhq_scatter_shifted_offset_s32(int16_t *, uint32x4_t, int32x4_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrhq_scatter_shifted_offset_s32)))
void vstrhq_scatter_shifted_offset(int16_t *, uint32x4_t, int32x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrhq_scatter_shifted_offset_u16)))
void vstrhq_scatter_shifted_offset_u16(uint16_t *, uint16x8_t, uint16x8_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrhq_scatter_shifted_offset_u16)))
void vstrhq_scatter_shifted_offset(uint16_t *, uint16x8_t, uint16x8_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrhq_scatter_shifted_offset_u32)))
void vstrhq_scatter_shifted_offset_u32(uint16_t *, uint32x4_t, uint32x4_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrhq_scatter_shifted_offset_u32)))
void vstrhq_scatter_shifted_offset(uint16_t *, uint32x4_t, uint32x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrwq_scatter_base_p_s32)))
void vstrwq_scatter_base_p_s32(uint32x4_t, int, int32x4_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrwq_scatter_base_p_s32)))
void vstrwq_scatter_base_p(uint32x4_t, int, int32x4_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrwq_scatter_base_p_u32)))
void vstrwq_scatter_base_p_u32(uint32x4_t, int, uint32x4_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrwq_scatter_base_p_u32)))
void vstrwq_scatter_base_p(uint32x4_t, int, uint32x4_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrwq_scatter_base_s32)))
void vstrwq_scatter_base_s32(uint32x4_t, int, int32x4_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrwq_scatter_base_s32)))
void vstrwq_scatter_base(uint32x4_t, int, int32x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrwq_scatter_base_u32)))
void vstrwq_scatter_base_u32(uint32x4_t, int, uint32x4_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrwq_scatter_base_u32)))
void vstrwq_scatter_base(uint32x4_t, int, uint32x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrwq_scatter_base_wb_p_s32)))
void vstrwq_scatter_base_wb_p_s32(uint32x4_t *, int, int32x4_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrwq_scatter_base_wb_p_s32)))
void vstrwq_scatter_base_wb_p(uint32x4_t *, int, int32x4_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrwq_scatter_base_wb_p_u32)))
void vstrwq_scatter_base_wb_p_u32(uint32x4_t *, int, uint32x4_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrwq_scatter_base_wb_p_u32)))
void vstrwq_scatter_base_wb_p(uint32x4_t *, int, uint32x4_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrwq_scatter_base_wb_s32)))
void vstrwq_scatter_base_wb_s32(uint32x4_t *, int, int32x4_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrwq_scatter_base_wb_s32)))
void vstrwq_scatter_base_wb(uint32x4_t *, int, int32x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrwq_scatter_base_wb_u32)))
void vstrwq_scatter_base_wb_u32(uint32x4_t *, int, uint32x4_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrwq_scatter_base_wb_u32)))
void vstrwq_scatter_base_wb(uint32x4_t *, int, uint32x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrwq_scatter_offset_p_s32)))
void vstrwq_scatter_offset_p_s32(int32_t *, uint32x4_t, int32x4_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrwq_scatter_offset_p_s32)))
void vstrwq_scatter_offset_p(int32_t *, uint32x4_t, int32x4_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrwq_scatter_offset_p_u32)))
void vstrwq_scatter_offset_p_u32(uint32_t *, uint32x4_t, uint32x4_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrwq_scatter_offset_p_u32)))
void vstrwq_scatter_offset_p(uint32_t *, uint32x4_t, uint32x4_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrwq_scatter_offset_s32)))
void vstrwq_scatter_offset_s32(int32_t *, uint32x4_t, int32x4_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrwq_scatter_offset_s32)))
void vstrwq_scatter_offset(int32_t *, uint32x4_t, int32x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrwq_scatter_offset_u32)))
void vstrwq_scatter_offset_u32(uint32_t *, uint32x4_t, uint32x4_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrwq_scatter_offset_u32)))
void vstrwq_scatter_offset(uint32_t *, uint32x4_t, uint32x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrwq_scatter_shifted_offset_p_s32)))
void vstrwq_scatter_shifted_offset_p_s32(int32_t *, uint32x4_t, int32x4_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrwq_scatter_shifted_offset_p_s32)))
void vstrwq_scatter_shifted_offset_p(int32_t *, uint32x4_t, int32x4_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrwq_scatter_shifted_offset_p_u32)))
void vstrwq_scatter_shifted_offset_p_u32(uint32_t *, uint32x4_t, uint32x4_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrwq_scatter_shifted_offset_p_u32)))
void vstrwq_scatter_shifted_offset_p(uint32_t *, uint32x4_t, uint32x4_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrwq_scatter_shifted_offset_s32)))
void vstrwq_scatter_shifted_offset_s32(int32_t *, uint32x4_t, int32x4_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrwq_scatter_shifted_offset_s32)))
void vstrwq_scatter_shifted_offset(int32_t *, uint32x4_t, int32x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrwq_scatter_shifted_offset_u32)))
void vstrwq_scatter_shifted_offset_u32(uint32_t *, uint32x4_t, uint32x4_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrwq_scatter_shifted_offset_u32)))
void vstrwq_scatter_shifted_offset(uint32_t *, uint32x4_t, uint32x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vsubq_m_s16)))
int16x8_t vsubq_m_s16(int16x8_t, int16x8_t, int16x8_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vsubq_m_s16)))
int16x8_t vsubq_m(int16x8_t, int16x8_t, int16x8_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vsubq_m_s32)))
int32x4_t vsubq_m_s32(int32x4_t, int32x4_t, int32x4_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vsubq_m_s32)))
int32x4_t vsubq_m(int32x4_t, int32x4_t, int32x4_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vsubq_m_s8)))
int8x16_t vsubq_m_s8(int8x16_t, int8x16_t, int8x16_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vsubq_m_s8)))
int8x16_t vsubq_m(int8x16_t, int8x16_t, int8x16_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vsubq_m_u16)))
uint16x8_t vsubq_m_u16(uint16x8_t, uint16x8_t, uint16x8_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vsubq_m_u16)))
uint16x8_t vsubq_m(uint16x8_t, uint16x8_t, uint16x8_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vsubq_m_u32)))
uint32x4_t vsubq_m_u32(uint32x4_t, uint32x4_t, uint32x4_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vsubq_m_u32)))
uint32x4_t vsubq_m(uint32x4_t, uint32x4_t, uint32x4_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vsubq_m_u8)))
uint8x16_t vsubq_m_u8(uint8x16_t, uint8x16_t, uint8x16_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vsubq_m_u8)))
uint8x16_t vsubq_m(uint8x16_t, uint8x16_t, uint8x16_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vsubq_s16)))
int16x8_t vsubq_s16(int16x8_t, int16x8_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vsubq_s16)))
int16x8_t vsubq(int16x8_t, int16x8_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vsubq_s32)))
int32x4_t vsubq_s32(int32x4_t, int32x4_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vsubq_s32)))
int32x4_t vsubq(int32x4_t, int32x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vsubq_s8)))
int8x16_t vsubq_s8(int8x16_t, int8x16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vsubq_s8)))
int8x16_t vsubq(int8x16_t, int8x16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vsubq_u16)))
uint16x8_t vsubq_u16(uint16x8_t, uint16x8_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vsubq_u16)))
uint16x8_t vsubq(uint16x8_t, uint16x8_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vsubq_u32)))
uint32x4_t vsubq_u32(uint32x4_t, uint32x4_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vsubq_u32)))
uint32x4_t vsubq(uint32x4_t, uint32x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vsubq_u8)))
uint8x16_t vsubq_u8(uint8x16_t, uint8x16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vsubq_u8)))
uint8x16_t vsubq(uint8x16_t, uint8x16_t);

#endif /* (!defined __ARM_MVE_PRESERVE_USER_NAMESPACE) */

#if (__ARM_FEATURE_MVE & 2) && (!defined __ARM_MVE_PRESERVE_USER_NAMESPACE)

static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vaddq_f16)))
float16x8_t vaddq_f16(float16x8_t, float16x8_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vaddq_f16)))
float16x8_t vaddq(float16x8_t, float16x8_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vaddq_f32)))
float32x4_t vaddq_f32(float32x4_t, float32x4_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vaddq_f32)))
float32x4_t vaddq(float32x4_t, float32x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vaddq_m_f16)))
float16x8_t vaddq_m_f16(float16x8_t, float16x8_t, float16x8_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vaddq_m_f16)))
float16x8_t vaddq_m(float16x8_t, float16x8_t, float16x8_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vaddq_m_f32)))
float32x4_t vaddq_m_f32(float32x4_t, float32x4_t, float32x4_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vaddq_m_f32)))
float32x4_t vaddq_m(float32x4_t, float32x4_t, float32x4_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vcvtbq_f16_f32)))
float16x8_t vcvtbq_f16_f32(float16x8_t, float32x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vcvtbq_m_f16_f32)))
float16x8_t vcvtbq_m_f16_f32(float16x8_t, float32x4_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vcvttq_f16_f32)))
float16x8_t vcvttq_f16_f32(float16x8_t, float32x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vcvttq_m_f16_f32)))
float16x8_t vcvttq_m_f16_f32(float16x8_t, float32x4_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vld2q_f16)))
float16x8x2_t vld2q_f16(const float16_t *);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vld2q_f16)))
float16x8x2_t vld2q(const float16_t *);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vld2q_f32)))
float32x4x2_t vld2q_f32(const float32_t *);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vld2q_f32)))
float32x4x2_t vld2q(const float32_t *);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vld4q_f16)))
float16x8x4_t vld4q_f16(const float16_t *);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vld4q_f16)))
float16x8x4_t vld4q(const float16_t *);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vld4q_f32)))
float32x4x4_t vld4q_f32(const float32_t *);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vld4q_f32)))
float32x4x4_t vld4q(const float32_t *);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrhq_gather_offset_f16)))
float16x8_t vldrhq_gather_offset_f16(const float16_t *, uint16x8_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrhq_gather_offset_f16)))
float16x8_t vldrhq_gather_offset(const float16_t *, uint16x8_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrhq_gather_offset_z_f16)))
float16x8_t vldrhq_gather_offset_z_f16(const float16_t *, uint16x8_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrhq_gather_offset_z_f16)))
float16x8_t vldrhq_gather_offset_z(const float16_t *, uint16x8_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrhq_gather_shifted_offset_f16)))
float16x8_t vldrhq_gather_shifted_offset_f16(const float16_t *, uint16x8_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrhq_gather_shifted_offset_f16)))
float16x8_t vldrhq_gather_shifted_offset(const float16_t *, uint16x8_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrhq_gather_shifted_offset_z_f16)))
float16x8_t vldrhq_gather_shifted_offset_z_f16(const float16_t *, uint16x8_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrhq_gather_shifted_offset_z_f16)))
float16x8_t vldrhq_gather_shifted_offset_z(const float16_t *, uint16x8_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrwq_gather_base_f32)))
float32x4_t vldrwq_gather_base_f32(uint32x4_t, int);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrwq_gather_base_wb_f32)))
float32x4_t vldrwq_gather_base_wb_f32(uint32x4_t *, int);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrwq_gather_base_wb_z_f32)))
float32x4_t vldrwq_gather_base_wb_z_f32(uint32x4_t *, int, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrwq_gather_base_z_f32)))
float32x4_t vldrwq_gather_base_z_f32(uint32x4_t, int, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrwq_gather_offset_f32)))
float32x4_t vldrwq_gather_offset_f32(const float32_t *, uint32x4_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrwq_gather_offset_f32)))
float32x4_t vldrwq_gather_offset(const float32_t *, uint32x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrwq_gather_offset_z_f32)))
float32x4_t vldrwq_gather_offset_z_f32(const float32_t *, uint32x4_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrwq_gather_offset_z_f32)))
float32x4_t vldrwq_gather_offset_z(const float32_t *, uint32x4_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrwq_gather_shifted_offset_f32)))
float32x4_t vldrwq_gather_shifted_offset_f32(const float32_t *, uint32x4_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrwq_gather_shifted_offset_f32)))
float32x4_t vldrwq_gather_shifted_offset(const float32_t *, uint32x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vldrwq_gather_shifted_offset_z_f32)))
float32x4_t vldrwq_gather_shifted_offset_z_f32(const float32_t *, uint32x4_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vldrwq_gather_shifted_offset_z_f32)))
float32x4_t vldrwq_gather_shifted_offset_z(const float32_t *, uint32x4_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vst2q_f16)))
void vst2q_f16(float16_t *, float16x8x2_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vst2q_f16)))
void vst2q(float16_t *, float16x8x2_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vst2q_f32)))
void vst2q_f32(float32_t *, float32x4x2_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vst2q_f32)))
void vst2q(float32_t *, float32x4x2_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vst4q_f16)))
void vst4q_f16(float16_t *, float16x8x4_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vst4q_f16)))
void vst4q(float16_t *, float16x8x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vst4q_f32)))
void vst4q_f32(float32_t *, float32x4x4_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vst4q_f32)))
void vst4q(float32_t *, float32x4x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrhq_scatter_offset_f16)))
void vstrhq_scatter_offset_f16(float16_t *, uint16x8_t, float16x8_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrhq_scatter_offset_f16)))
void vstrhq_scatter_offset(float16_t *, uint16x8_t, float16x8_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrhq_scatter_offset_p_f16)))
void vstrhq_scatter_offset_p_f16(float16_t *, uint16x8_t, float16x8_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrhq_scatter_offset_p_f16)))
void vstrhq_scatter_offset_p(float16_t *, uint16x8_t, float16x8_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrhq_scatter_shifted_offset_f16)))
void vstrhq_scatter_shifted_offset_f16(float16_t *, uint16x8_t, float16x8_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrhq_scatter_shifted_offset_f16)))
void vstrhq_scatter_shifted_offset(float16_t *, uint16x8_t, float16x8_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrhq_scatter_shifted_offset_p_f16)))
void vstrhq_scatter_shifted_offset_p_f16(float16_t *, uint16x8_t, float16x8_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrhq_scatter_shifted_offset_p_f16)))
void vstrhq_scatter_shifted_offset_p(float16_t *, uint16x8_t, float16x8_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrwq_scatter_base_f32)))
void vstrwq_scatter_base_f32(uint32x4_t, int, float32x4_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrwq_scatter_base_f32)))
void vstrwq_scatter_base(uint32x4_t, int, float32x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrwq_scatter_base_p_f32)))
void vstrwq_scatter_base_p_f32(uint32x4_t, int, float32x4_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrwq_scatter_base_p_f32)))
void vstrwq_scatter_base_p(uint32x4_t, int, float32x4_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrwq_scatter_base_wb_f32)))
void vstrwq_scatter_base_wb_f32(uint32x4_t *, int, float32x4_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrwq_scatter_base_wb_f32)))
void vstrwq_scatter_base_wb(uint32x4_t *, int, float32x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrwq_scatter_base_wb_p_f32)))
void vstrwq_scatter_base_wb_p_f32(uint32x4_t *, int, float32x4_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrwq_scatter_base_wb_p_f32)))
void vstrwq_scatter_base_wb_p(uint32x4_t *, int, float32x4_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrwq_scatter_offset_f32)))
void vstrwq_scatter_offset_f32(float32_t *, uint32x4_t, float32x4_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrwq_scatter_offset_f32)))
void vstrwq_scatter_offset(float32_t *, uint32x4_t, float32x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrwq_scatter_offset_p_f32)))
void vstrwq_scatter_offset_p_f32(float32_t *, uint32x4_t, float32x4_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrwq_scatter_offset_p_f32)))
void vstrwq_scatter_offset_p(float32_t *, uint32x4_t, float32x4_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrwq_scatter_shifted_offset_f32)))
void vstrwq_scatter_shifted_offset_f32(float32_t *, uint32x4_t, float32x4_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrwq_scatter_shifted_offset_f32)))
void vstrwq_scatter_shifted_offset(float32_t *, uint32x4_t, float32x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vstrwq_scatter_shifted_offset_p_f32)))
void vstrwq_scatter_shifted_offset_p_f32(float32_t *, uint32x4_t, float32x4_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vstrwq_scatter_shifted_offset_p_f32)))
void vstrwq_scatter_shifted_offset_p(float32_t *, uint32x4_t, float32x4_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vsubq_f16)))
float16x8_t vsubq_f16(float16x8_t, float16x8_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vsubq_f16)))
float16x8_t vsubq(float16x8_t, float16x8_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vsubq_f32)))
float32x4_t vsubq_f32(float32x4_t, float32x4_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vsubq_f32)))
float32x4_t vsubq(float32x4_t, float32x4_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vsubq_m_f16)))
float16x8_t vsubq_m_f16(float16x8_t, float16x8_t, float16x8_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vsubq_m_f16)))
float16x8_t vsubq_m(float16x8_t, float16x8_t, float16x8_t, mve_pred16_t);
static __inline__ __attribute__((__clang_arm_mve_alias(__builtin_arm_mve_vsubq_m_f32)))
float32x4_t vsubq_m_f32(float32x4_t, float32x4_t, float32x4_t, mve_pred16_t);
static __inline__ __attribute__((overloadable, __clang_arm_mve_alias(__builtin_arm_mve_vsubq_m_f32)))
float32x4_t vsubq_m(float32x4_t, float32x4_t, float32x4_t, mve_pred16_t);

#endif /* (__ARM_FEATURE_MVE & 2) && (!defined __ARM_MVE_PRESERVE_USER_NAMESPACE) */

#endif /* __ARM_MVE_H */
