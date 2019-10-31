case ARM::BI__builtin_arm_mve_vldrwq_gather_base_wb_f32:
case ARM::BI__builtin_arm_mve_vldrwq_gather_base_wb_s32:
case ARM::BI__builtin_arm_mve_vldrwq_gather_base_wb_u32:
  return SemaBuiltinConstantArgRange(TheCall, 1, 0x0, 0x1FC) ||
         SemaBuiltinConstantArgMultiple(TheCall, 1, 4);
case ARM::BI__builtin_arm_mve_vldrdq_gather_base_wb_z_s64:
case ARM::BI__builtin_arm_mve_vldrdq_gather_base_wb_z_u64:
  return SemaBuiltinConstantArgRange(TheCall, 1, 0x0, 0x3F8) ||
         SemaBuiltinConstantArgMultiple(TheCall, 1, 8);
case ARM::BI__builtin_arm_mve_urshrl:
  return SemaBuiltinConstantArgRange(TheCall, 1, 0x1, 0x20);
