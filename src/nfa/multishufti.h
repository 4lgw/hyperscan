/*
 * Copyright (c) 2015-2016, Intel Corporation
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 *  * Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *  * Neither the name of Intel Corporation nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

/** \file
 * \brief Multishufti: multibyte version of Shufti
 *
 * Utilises the SSSE3 pshufb shuffle instruction
 */

#ifndef MULTISHUFTI_H
#define MULTISHUFTI_H

#include "ue2common.h"
#include "util/simd_types.h"

#ifdef __cplusplus
extern "C"
{
#endif

const u8 *long_shuftiExec(m128 mask_lo, m128 mask_hi, const u8 *buf,
                          const u8 *buf_end, const u8 run_len);

const u8 *longgrab_shuftiExec(m128 mask_lo, m128 mask_hi, const u8 *buf,
                              const u8 *buf_end, const u8 run_len);

const u8 *shift_shuftiExec(m128 mask_lo, m128 mask_hi, const u8 *buf,
                           const u8 *buf_end, const u8 run_len);

const u8 *shiftgrab_shuftiExec(m128 mask_lo, m128 mask_hi, const u8 *buf,
                               const u8 *buf_end, const u8 run_len);

const u8 *doubleshift_shuftiExec(m128 mask_lo, m128 mask_hi, const u8 *buf,
                                 const u8 *buf_end, const u8 run_len,
                                 const u8 run2_len);

const u8 *doubleshiftgrab_shuftiExec(m128 mask_lo, m128 mask_hi, const u8 *buf,
                                     const u8 *buf_end, const u8 run_len,
                                     const u8 run2_len);

#ifdef __cplusplus
}
#endif

#endif
