case ARM::BI__builtin_arm_mve_urshrl:
  return AliasName == "urshrl";
case ARM::BI__builtin_arm_mve_vadciq_m_s32:
  return AliasName == "vadciq_m_s32" || AliasName == "vadciq_m";
case ARM::BI__builtin_arm_mve_vadciq_m_u32:
  return AliasName == "vadciq_m_u32" || AliasName == "vadciq_m";
case ARM::BI__builtin_arm_mve_vadciq_s32:
  return AliasName == "vadciq_s32" || AliasName == "vadciq";
case ARM::BI__builtin_arm_mve_vadciq_u32:
  return AliasName == "vadciq_u32" || AliasName == "vadciq";
case ARM::BI__builtin_arm_mve_vadcq_m_s32:
  return AliasName == "vadcq_m_s32" || AliasName == "vadcq_m";
case ARM::BI__builtin_arm_mve_vadcq_m_u32:
  return AliasName == "vadcq_m_u32" || AliasName == "vadcq_m";
case ARM::BI__builtin_arm_mve_vadcq_s32:
  return AliasName == "vadcq_s32" || AliasName == "vadcq";
case ARM::BI__builtin_arm_mve_vadcq_u32:
  return AliasName == "vadcq_u32" || AliasName == "vadcq";
case ARM::BI__builtin_arm_mve_vaddq_f16:
  return AliasName == "vaddq_f16" || AliasName == "vaddq";
case ARM::BI__builtin_arm_mve_vaddq_f32:
  return AliasName == "vaddq_f32" || AliasName == "vaddq";
case ARM::BI__builtin_arm_mve_vaddq_m_f16:
  return AliasName == "vaddq_m_f16" || AliasName == "vaddq_m";
case ARM::BI__builtin_arm_mve_vaddq_m_f32:
  return AliasName == "vaddq_m_f32" || AliasName == "vaddq_m";
case ARM::BI__builtin_arm_mve_vaddq_m_s16:
  return AliasName == "vaddq_m_s16" || AliasName == "vaddq_m";
case ARM::BI__builtin_arm_mve_vaddq_m_s32:
  return AliasName == "vaddq_m_s32" || AliasName == "vaddq_m";
case ARM::BI__builtin_arm_mve_vaddq_m_s8:
  return AliasName == "vaddq_m_s8" || AliasName == "vaddq_m";
case ARM::BI__builtin_arm_mve_vaddq_m_u16:
  return AliasName == "vaddq_m_u16" || AliasName == "vaddq_m";
case ARM::BI__builtin_arm_mve_vaddq_m_u32:
  return AliasName == "vaddq_m_u32" || AliasName == "vaddq_m";
case ARM::BI__builtin_arm_mve_vaddq_m_u8:
  return AliasName == "vaddq_m_u8" || AliasName == "vaddq_m";
case ARM::BI__builtin_arm_mve_vaddq_s16:
  return AliasName == "vaddq_s16" || AliasName == "vaddq";
case ARM::BI__builtin_arm_mve_vaddq_s32:
  return AliasName == "vaddq_s32" || AliasName == "vaddq";
case ARM::BI__builtin_arm_mve_vaddq_s8:
  return AliasName == "vaddq_s8" || AliasName == "vaddq";
case ARM::BI__builtin_arm_mve_vaddq_u16:
  return AliasName == "vaddq_u16" || AliasName == "vaddq";
case ARM::BI__builtin_arm_mve_vaddq_u32:
  return AliasName == "vaddq_u32" || AliasName == "vaddq";
case ARM::BI__builtin_arm_mve_vaddq_u8:
  return AliasName == "vaddq_u8" || AliasName == "vaddq";
case ARM::BI__builtin_arm_mve_vcvtbq_f16_f32:
  return AliasName == "vcvtbq_f16_f32";
case ARM::BI__builtin_arm_mve_vcvtbq_m_f16_f32:
  return AliasName == "vcvtbq_m_f16_f32";
case ARM::BI__builtin_arm_mve_vcvttq_f16_f32:
  return AliasName == "vcvttq_f16_f32";
case ARM::BI__builtin_arm_mve_vcvttq_m_f16_f32:
  return AliasName == "vcvttq_m_f16_f32";
case ARM::BI__builtin_arm_mve_vld2q_f16:
  return AliasName == "vld2q_f16" || AliasName == "vld2q";
case ARM::BI__builtin_arm_mve_vld2q_f32:
  return AliasName == "vld2q_f32" || AliasName == "vld2q";
case ARM::BI__builtin_arm_mve_vld2q_s16:
  return AliasName == "vld2q_s16" || AliasName == "vld2q";
case ARM::BI__builtin_arm_mve_vld2q_s32:
  return AliasName == "vld2q_s32" || AliasName == "vld2q";
case ARM::BI__builtin_arm_mve_vld2q_s64:
  return AliasName == "vld2q_s64" || AliasName == "vld2q";
case ARM::BI__builtin_arm_mve_vld2q_s8:
  return AliasName == "vld2q_s8" || AliasName == "vld2q";
case ARM::BI__builtin_arm_mve_vld2q_u16:
  return AliasName == "vld2q_u16" || AliasName == "vld2q";
case ARM::BI__builtin_arm_mve_vld2q_u32:
  return AliasName == "vld2q_u32" || AliasName == "vld2q";
case ARM::BI__builtin_arm_mve_vld2q_u64:
  return AliasName == "vld2q_u64" || AliasName == "vld2q";
case ARM::BI__builtin_arm_mve_vld2q_u8:
  return AliasName == "vld2q_u8" || AliasName == "vld2q";
case ARM::BI__builtin_arm_mve_vld4q_f16:
  return AliasName == "vld4q_f16" || AliasName == "vld4q";
case ARM::BI__builtin_arm_mve_vld4q_f32:
  return AliasName == "vld4q_f32" || AliasName == "vld4q";
case ARM::BI__builtin_arm_mve_vld4q_s16:
  return AliasName == "vld4q_s16" || AliasName == "vld4q";
case ARM::BI__builtin_arm_mve_vld4q_s32:
  return AliasName == "vld4q_s32" || AliasName == "vld4q";
case ARM::BI__builtin_arm_mve_vld4q_s64:
  return AliasName == "vld4q_s64" || AliasName == "vld4q";
case ARM::BI__builtin_arm_mve_vld4q_s8:
  return AliasName == "vld4q_s8" || AliasName == "vld4q";
case ARM::BI__builtin_arm_mve_vld4q_u16:
  return AliasName == "vld4q_u16" || AliasName == "vld4q";
case ARM::BI__builtin_arm_mve_vld4q_u32:
  return AliasName == "vld4q_u32" || AliasName == "vld4q";
case ARM::BI__builtin_arm_mve_vld4q_u64:
  return AliasName == "vld4q_u64" || AliasName == "vld4q";
case ARM::BI__builtin_arm_mve_vld4q_u8:
  return AliasName == "vld4q_u8" || AliasName == "vld4q";
case ARM::BI__builtin_arm_mve_vldrdq_gather_base_wb_z_s64:
  return AliasName == "vldrdq_gather_base_wb_z_s64";
case ARM::BI__builtin_arm_mve_vldrdq_gather_base_wb_z_u64:
  return AliasName == "vldrdq_gather_base_wb_z_u64";
case ARM::BI__builtin_arm_mve_vldrwq_gather_base_wb_f32:
  return AliasName == "vldrwq_gather_base_wb_f32";
case ARM::BI__builtin_arm_mve_vldrwq_gather_base_wb_s32:
  return AliasName == "vldrwq_gather_base_wb_s32";
case ARM::BI__builtin_arm_mve_vldrwq_gather_base_wb_u32:
  return AliasName == "vldrwq_gather_base_wb_u32";
case ARM::BI__builtin_arm_mve_vmaxvq_s16:
  return AliasName == "vmaxvq_s16" || AliasName == "vmaxvq";
case ARM::BI__builtin_arm_mve_vmaxvq_s32:
  return AliasName == "vmaxvq_s32" || AliasName == "vmaxvq";
case ARM::BI__builtin_arm_mve_vmaxvq_s8:
  return AliasName == "vmaxvq_s8" || AliasName == "vmaxvq";
case ARM::BI__builtin_arm_mve_vmaxvq_u16:
  return AliasName == "vmaxvq_u16" || AliasName == "vmaxvq";
case ARM::BI__builtin_arm_mve_vmaxvq_u32:
  return AliasName == "vmaxvq_u32" || AliasName == "vmaxvq";
case ARM::BI__builtin_arm_mve_vmaxvq_u8:
  return AliasName == "vmaxvq_u8" || AliasName == "vmaxvq";
case ARM::BI__builtin_arm_mve_vminvq_s16:
  return AliasName == "vminvq_s16" || AliasName == "vminvq";
case ARM::BI__builtin_arm_mve_vminvq_s32:
  return AliasName == "vminvq_s32" || AliasName == "vminvq";
case ARM::BI__builtin_arm_mve_vminvq_s8:
  return AliasName == "vminvq_s8" || AliasName == "vminvq";
case ARM::BI__builtin_arm_mve_vminvq_u16:
  return AliasName == "vminvq_u16" || AliasName == "vminvq";
case ARM::BI__builtin_arm_mve_vminvq_u32:
  return AliasName == "vminvq_u32" || AliasName == "vminvq";
case ARM::BI__builtin_arm_mve_vminvq_u8:
  return AliasName == "vminvq_u8" || AliasName == "vminvq";
case ARM::BI__builtin_arm_mve_vst2q_f16:
  return AliasName == "vst2q_f16" || AliasName == "vst2q";
case ARM::BI__builtin_arm_mve_vst2q_f32:
  return AliasName == "vst2q_f32" || AliasName == "vst2q";
case ARM::BI__builtin_arm_mve_vst2q_s16:
  return AliasName == "vst2q_s16" || AliasName == "vst2q";
case ARM::BI__builtin_arm_mve_vst2q_s32:
  return AliasName == "vst2q_s32" || AliasName == "vst2q";
case ARM::BI__builtin_arm_mve_vst2q_s64:
  return AliasName == "vst2q_s64" || AliasName == "vst2q";
case ARM::BI__builtin_arm_mve_vst2q_s8:
  return AliasName == "vst2q_s8" || AliasName == "vst2q";
case ARM::BI__builtin_arm_mve_vst2q_u16:
  return AliasName == "vst2q_u16" || AliasName == "vst2q";
case ARM::BI__builtin_arm_mve_vst2q_u32:
  return AliasName == "vst2q_u32" || AliasName == "vst2q";
case ARM::BI__builtin_arm_mve_vst2q_u64:
  return AliasName == "vst2q_u64" || AliasName == "vst2q";
case ARM::BI__builtin_arm_mve_vst2q_u8:
  return AliasName == "vst2q_u8" || AliasName == "vst2q";
case ARM::BI__builtin_arm_mve_vst4q_f16:
  return AliasName == "vst4q_f16" || AliasName == "vst4q";
case ARM::BI__builtin_arm_mve_vst4q_f32:
  return AliasName == "vst4q_f32" || AliasName == "vst4q";
case ARM::BI__builtin_arm_mve_vst4q_s16:
  return AliasName == "vst4q_s16" || AliasName == "vst4q";
case ARM::BI__builtin_arm_mve_vst4q_s32:
  return AliasName == "vst4q_s32" || AliasName == "vst4q";
case ARM::BI__builtin_arm_mve_vst4q_s64:
  return AliasName == "vst4q_s64" || AliasName == "vst4q";
case ARM::BI__builtin_arm_mve_vst4q_s8:
  return AliasName == "vst4q_s8" || AliasName == "vst4q";
case ARM::BI__builtin_arm_mve_vst4q_u16:
  return AliasName == "vst4q_u16" || AliasName == "vst4q";
case ARM::BI__builtin_arm_mve_vst4q_u32:
  return AliasName == "vst4q_u32" || AliasName == "vst4q";
case ARM::BI__builtin_arm_mve_vst4q_u64:
  return AliasName == "vst4q_u64" || AliasName == "vst4q";
case ARM::BI__builtin_arm_mve_vst4q_u8:
  return AliasName == "vst4q_u8" || AliasName == "vst4q";
case ARM::BI__builtin_arm_mve_vsubq_f16:
  return AliasName == "vsubq_f16" || AliasName == "vsubq";
case ARM::BI__builtin_arm_mve_vsubq_f32:
  return AliasName == "vsubq_f32" || AliasName == "vsubq";
case ARM::BI__builtin_arm_mve_vsubq_m_f16:
  return AliasName == "vsubq_m_f16" || AliasName == "vsubq_m";
case ARM::BI__builtin_arm_mve_vsubq_m_f32:
  return AliasName == "vsubq_m_f32" || AliasName == "vsubq_m";
case ARM::BI__builtin_arm_mve_vsubq_m_s16:
  return AliasName == "vsubq_m_s16" || AliasName == "vsubq_m";
case ARM::BI__builtin_arm_mve_vsubq_m_s32:
  return AliasName == "vsubq_m_s32" || AliasName == "vsubq_m";
case ARM::BI__builtin_arm_mve_vsubq_m_s8:
  return AliasName == "vsubq_m_s8" || AliasName == "vsubq_m";
case ARM::BI__builtin_arm_mve_vsubq_m_u16:
  return AliasName == "vsubq_m_u16" || AliasName == "vsubq_m";
case ARM::BI__builtin_arm_mve_vsubq_m_u32:
  return AliasName == "vsubq_m_u32" || AliasName == "vsubq_m";
case ARM::BI__builtin_arm_mve_vsubq_m_u8:
  return AliasName == "vsubq_m_u8" || AliasName == "vsubq_m";
case ARM::BI__builtin_arm_mve_vsubq_s16:
  return AliasName == "vsubq_s16" || AliasName == "vsubq";
case ARM::BI__builtin_arm_mve_vsubq_s32:
  return AliasName == "vsubq_s32" || AliasName == "vsubq";
case ARM::BI__builtin_arm_mve_vsubq_s8:
  return AliasName == "vsubq_s8" || AliasName == "vsubq";
case ARM::BI__builtin_arm_mve_vsubq_u16:
  return AliasName == "vsubq_u16" || AliasName == "vsubq";
case ARM::BI__builtin_arm_mve_vsubq_u32:
  return AliasName == "vsubq_u32" || AliasName == "vsubq";
case ARM::BI__builtin_arm_mve_vsubq_u8:
  return AliasName == "vsubq_u8" || AliasName == "vsubq";
