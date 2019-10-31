case ARM::BI__builtin_arm_mve_vldrwq_gather_base_wb_f32:
case ARM::BI__builtin_arm_mve_vldrwq_gather_base_wb_s32:
case ARM::BI__builtin_arm_mve_vldrwq_gather_base_wb_u32: {
  llvm::Type * Param0;
  switch (BuiltinID) {
  case ARM::BI__builtin_arm_mve_vldrwq_gather_base_wb_f32:
    Param0 = llvm::VectorType::get(FloatTy, 4);
    break;
  case ARM::BI__builtin_arm_mve_vldrwq_gather_base_wb_s32:
    Param0 = llvm::VectorType::get(Int32Ty, 4);
    break;
  case ARM::BI__builtin_arm_mve_vldrwq_gather_base_wb_u32:
    Param0 = llvm::VectorType::get(Int32Ty, 4);
    break;
  }
  Address Val0 = EmitPointerWithAlignment(E->getArg(0));
  Value *Val1 = Builder.CreateLoad(Val0);
  Value *Val2 = EmitScalarExpr(E->getArg(1));
  Value *Val3 = Builder.CreateCall(CGM.getIntrinsic(Intrinsic::arm_mve_vldr_gather_base_wb, llvm::SmallVector<llvm::Type *, 2> {Param0, llvm::VectorType::get(Int32Ty, 4)}), llvm::SmallVector<Value *, 2> {Val1, Val2});
  Value *Val4 = Builder.CreateExtractValue(Val3, 1);
  Builder.CreateStore(Val4, Val0);
  return Builder.CreateExtractValue(Val3, 0);
}
case ARM::BI__builtin_arm_mve_vldrdq_gather_base_wb_z_s64:
case ARM::BI__builtin_arm_mve_vldrdq_gather_base_wb_z_u64: {
  Address Val0 = EmitPointerWithAlignment(E->getArg(0));
  Value *Val1 = Builder.CreateLoad(Val0);
  Value *Val2 = EmitScalarExpr(E->getArg(1));
  Value *Val3 = EmitScalarExpr(E->getArg(2));
  Value *Val4 = Builder.CreateIntCast(Val3, Int32Ty, false);
  Value *Val5 = Builder.CreateCall(CGM.getIntrinsic(Intrinsic::arm_mve_pred_i2v, llvm::SmallVector<llvm::Type *, 1> {llvm::VectorType::get(Builder.getInt1Ty(), 4)}), llvm::SmallVector<Value *, 1> {Val4});
  Value *Val6 = Builder.CreateCall(CGM.getIntrinsic(Intrinsic::arm_mve_vldr_gather_base_wb_predicated, llvm::SmallVector<llvm::Type *, 3> {llvm::VectorType::get(Int64Ty, 2), llvm::VectorType::get(Int64Ty, 2), llvm::VectorType::get(Builder.getInt1Ty(), 4)}), llvm::SmallVector<Value *, 3> {Val1, Val2, Val5});
  Value *Val7 = Builder.CreateExtractValue(Val6, 1);
  Builder.CreateStore(Val7, Val0);
  return Builder.CreateExtractValue(Val6, 0);
}
case ARM::BI__builtin_arm_mve_vld2q_f16:
case ARM::BI__builtin_arm_mve_vld2q_f32:
case ARM::BI__builtin_arm_mve_vld2q_s16:
case ARM::BI__builtin_arm_mve_vld2q_s32:
case ARM::BI__builtin_arm_mve_vld2q_s64:
case ARM::BI__builtin_arm_mve_vld2q_s8:
case ARM::BI__builtin_arm_mve_vld2q_u16:
case ARM::BI__builtin_arm_mve_vld2q_u32:
case ARM::BI__builtin_arm_mve_vld2q_u64:
case ARM::BI__builtin_arm_mve_vld2q_u8: {
  CustomCodeGenType = CustomCodeGen::VLD24;
  IRIntr = Intrinsic::arm_mve_vld2q;
  NumVectors = 2;
  break; // custom code gen
}
case ARM::BI__builtin_arm_mve_vld4q_f16:
case ARM::BI__builtin_arm_mve_vld4q_f32:
case ARM::BI__builtin_arm_mve_vld4q_s16:
case ARM::BI__builtin_arm_mve_vld4q_s32:
case ARM::BI__builtin_arm_mve_vld4q_s64:
case ARM::BI__builtin_arm_mve_vld4q_s8:
case ARM::BI__builtin_arm_mve_vld4q_u16:
case ARM::BI__builtin_arm_mve_vld4q_u32:
case ARM::BI__builtin_arm_mve_vld4q_u64:
case ARM::BI__builtin_arm_mve_vld4q_u8: {
  CustomCodeGenType = CustomCodeGen::VLD24;
  IRIntr = Intrinsic::arm_mve_vld4q;
  NumVectors = 4;
  break; // custom code gen
}
case ARM::BI__builtin_arm_mve_vst2q_f16:
case ARM::BI__builtin_arm_mve_vst2q_f32:
case ARM::BI__builtin_arm_mve_vst2q_s16:
case ARM::BI__builtin_arm_mve_vst2q_s32:
case ARM::BI__builtin_arm_mve_vst2q_s64:
case ARM::BI__builtin_arm_mve_vst2q_s8:
case ARM::BI__builtin_arm_mve_vst2q_u16:
case ARM::BI__builtin_arm_mve_vst2q_u32:
case ARM::BI__builtin_arm_mve_vst2q_u64:
case ARM::BI__builtin_arm_mve_vst2q_u8: {
  CustomCodeGenType = CustomCodeGen::VST24;
  IRIntr = Intrinsic::arm_mve_vst2q;
  NumVectors = 2;
  break; // custom code gen
}
case ARM::BI__builtin_arm_mve_vst4q_f16:
case ARM::BI__builtin_arm_mve_vst4q_f32:
case ARM::BI__builtin_arm_mve_vst4q_s16:
case ARM::BI__builtin_arm_mve_vst4q_s32:
case ARM::BI__builtin_arm_mve_vst4q_s64:
case ARM::BI__builtin_arm_mve_vst4q_s8:
case ARM::BI__builtin_arm_mve_vst4q_u16:
case ARM::BI__builtin_arm_mve_vst4q_u32:
case ARM::BI__builtin_arm_mve_vst4q_u64:
case ARM::BI__builtin_arm_mve_vst4q_u8: {
  CustomCodeGenType = CustomCodeGen::VST24;
  IRIntr = Intrinsic::arm_mve_vst4q;
  NumVectors = 4;
  break; // custom code gen
}
case ARM::BI__builtin_arm_mve_vmaxvq_s16:
case ARM::BI__builtin_arm_mve_vmaxvq_s8:
case ARM::BI__builtin_arm_mve_vmaxvq_u16:
case ARM::BI__builtin_arm_mve_vmaxvq_u8:
case ARM::BI__builtin_arm_mve_vminvq_s16:
case ARM::BI__builtin_arm_mve_vminvq_s8:
case ARM::BI__builtin_arm_mve_vminvq_u16:
case ARM::BI__builtin_arm_mve_vminvq_u8: {
  Intrinsic::ID  Param0;
  llvm::Type * Param1;
  llvm::Type * Param2;
  bool  Param3;
  switch (BuiltinID) {
  case ARM::BI__builtin_arm_mve_vmaxvq_s16:
    Param0 = Intrinsic::arm_mve_maxv_s;
    Param1 = llvm::VectorType::get(Int16Ty, 8);
    Param2 = Int16Ty;
    Param3 = true;
    break;
  case ARM::BI__builtin_arm_mve_vmaxvq_s8:
    Param0 = Intrinsic::arm_mve_maxv_s;
    Param1 = llvm::VectorType::get(Int8Ty, 16);
    Param2 = Int8Ty;
    Param3 = true;
    break;
  case ARM::BI__builtin_arm_mve_vmaxvq_u16:
    Param0 = Intrinsic::arm_mve_maxv_u;
    Param1 = llvm::VectorType::get(Int16Ty, 8);
    Param2 = Int16Ty;
    Param3 = false;
    break;
  case ARM::BI__builtin_arm_mve_vmaxvq_u8:
    Param0 = Intrinsic::arm_mve_maxv_u;
    Param1 = llvm::VectorType::get(Int8Ty, 16);
    Param2 = Int8Ty;
    Param3 = false;
    break;
  case ARM::BI__builtin_arm_mve_vminvq_s16:
    Param0 = Intrinsic::arm_mve_minv_s;
    Param1 = llvm::VectorType::get(Int16Ty, 8);
    Param2 = Int16Ty;
    Param3 = true;
    break;
  case ARM::BI__builtin_arm_mve_vminvq_s8:
    Param0 = Intrinsic::arm_mve_minv_s;
    Param1 = llvm::VectorType::get(Int8Ty, 16);
    Param2 = Int8Ty;
    Param3 = true;
    break;
  case ARM::BI__builtin_arm_mve_vminvq_u16:
    Param0 = Intrinsic::arm_mve_minv_u;
    Param1 = llvm::VectorType::get(Int16Ty, 8);
    Param2 = Int16Ty;
    Param3 = false;
    break;
  case ARM::BI__builtin_arm_mve_vminvq_u8:
    Param0 = Intrinsic::arm_mve_minv_u;
    Param1 = llvm::VectorType::get(Int8Ty, 16);
    Param2 = Int8Ty;
    Param3 = false;
    break;
  }
  Value *Val0 = EmitScalarExpr(E->getArg(0));
  Value *Val1 = Builder.CreateIntCast(Val0, Int32Ty, false);
  Value *Val2 = EmitScalarExpr(E->getArg(1));
  Value *Val3 = Builder.CreateCall(CGM.getIntrinsic(Param0, llvm::SmallVector<llvm::Type *, 1> {Param1}), llvm::SmallVector<Value *, 2> {Val1, Val2});
  return Builder.CreateIntCast(Val3, Param2, Param3);
}
case ARM::BI__builtin_arm_mve_vadcq_s32:
case ARM::BI__builtin_arm_mve_vadcq_u32: {
  Value *Val0 = EmitScalarExpr(E->getArg(0));
  Value *Val1 = EmitScalarExpr(E->getArg(1));
  Address Val2 = EmitPointerWithAlignment(E->getArg(2));
  Value *Val3 = Builder.CreateLoad(Val2);
  Value *Val4 = llvm::ConstantInt::get(Int32Ty, 29);
  Value *Val5 = Builder.CreateShl(Val3, Val4);
  Value *Val6 = Builder.CreateCall(CGM.getIntrinsic(Intrinsic::arm_mve_vadc, llvm::SmallVector<llvm::Type *, 1> {llvm::VectorType::get(Int32Ty, 4)}), llvm::SmallVector<Value *, 3> {Val0, Val1, Val5});
  Value *Val7 = llvm::ConstantInt::get(Int32Ty, 1);
  Value *Val8 = Builder.CreateExtractValue(Val6, 1);
  Value *Val9 = llvm::ConstantInt::get(Int32Ty, 29);
  Value *Val10 = Builder.CreateLShr(Val8, Val9);
  Value *Val11 = Builder.CreateAnd(Val7, Val10);
  Builder.CreateStore(Val11, Val2);
  return Builder.CreateExtractValue(Val6, 0);
}
case ARM::BI__builtin_arm_mve_vmaxvq_s32:
case ARM::BI__builtin_arm_mve_vmaxvq_u32:
case ARM::BI__builtin_arm_mve_vminvq_s32:
case ARM::BI__builtin_arm_mve_vminvq_u32: {
  Intrinsic::ID  Param0;
  bool  Param1;
  switch (BuiltinID) {
  case ARM::BI__builtin_arm_mve_vmaxvq_s32:
    Param0 = Intrinsic::arm_mve_maxv_s;
    Param1 = true;
    break;
  case ARM::BI__builtin_arm_mve_vmaxvq_u32:
    Param0 = Intrinsic::arm_mve_maxv_u;
    Param1 = false;
    break;
  case ARM::BI__builtin_arm_mve_vminvq_s32:
    Param0 = Intrinsic::arm_mve_minv_s;
    Param1 = true;
    break;
  case ARM::BI__builtin_arm_mve_vminvq_u32:
    Param0 = Intrinsic::arm_mve_minv_u;
    Param1 = false;
    break;
  }
  Value *Val0 = EmitScalarExpr(E->getArg(0));
  Value *Val1 = EmitScalarExpr(E->getArg(1));
  Value *Val2 = Builder.CreateCall(CGM.getIntrinsic(Param0, llvm::SmallVector<llvm::Type *, 1> {llvm::VectorType::get(Int32Ty, 4)}), llvm::SmallVector<Value *, 2> {Val0, Val1});
  return Builder.CreateIntCast(Val2, Int32Ty, Param1);
}
case ARM::BI__builtin_arm_mve_vadcq_m_s32:
case ARM::BI__builtin_arm_mve_vadcq_m_u32: {
  Value *Val0 = EmitScalarExpr(E->getArg(0));
  Value *Val1 = EmitScalarExpr(E->getArg(1));
  Value *Val2 = EmitScalarExpr(E->getArg(2));
  Address Val3 = EmitPointerWithAlignment(E->getArg(3));
  Value *Val4 = Builder.CreateLoad(Val3);
  Value *Val5 = llvm::ConstantInt::get(Int32Ty, 29);
  Value *Val6 = Builder.CreateShl(Val4, Val5);
  Value *Val7 = EmitScalarExpr(E->getArg(4));
  Value *Val8 = Builder.CreateIntCast(Val7, Int32Ty, false);
  Value *Val9 = Builder.CreateCall(CGM.getIntrinsic(Intrinsic::arm_mve_pred_i2v, llvm::SmallVector<llvm::Type *, 1> {llvm::VectorType::get(Builder.getInt1Ty(), 4)}), llvm::SmallVector<Value *, 1> {Val8});
  Value *Val10 = Builder.CreateCall(CGM.getIntrinsic(Intrinsic::arm_mve_vadc_predicated, llvm::SmallVector<llvm::Type *, 2> {llvm::VectorType::get(Int32Ty, 4), llvm::VectorType::get(Builder.getInt1Ty(), 4)}), llvm::SmallVector<Value *, 5> {Val0, Val1, Val2, Val6, Val9});
  Value *Val11 = llvm::ConstantInt::get(Int32Ty, 1);
  Value *Val12 = Builder.CreateExtractValue(Val10, 1);
  Value *Val13 = llvm::ConstantInt::get(Int32Ty, 29);
  Value *Val14 = Builder.CreateLShr(Val12, Val13);
  Value *Val15 = Builder.CreateAnd(Val11, Val14);
  Builder.CreateStore(Val15, Val3);
  return Builder.CreateExtractValue(Val10, 0);
}
case ARM::BI__builtin_arm_mve_vadciq_m_s32:
case ARM::BI__builtin_arm_mve_vadciq_m_u32: {
  Value *Val0 = EmitScalarExpr(E->getArg(0));
  Value *Val1 = EmitScalarExpr(E->getArg(1));
  Value *Val2 = EmitScalarExpr(E->getArg(2));
  Value *Val3 = llvm::ConstantInt::get(Int32Ty, 0);
  Value *Val4 = EmitScalarExpr(E->getArg(4));
  Value *Val5 = Builder.CreateIntCast(Val4, Int32Ty, false);
  Value *Val6 = Builder.CreateCall(CGM.getIntrinsic(Intrinsic::arm_mve_pred_i2v, llvm::SmallVector<llvm::Type *, 1> {llvm::VectorType::get(Builder.getInt1Ty(), 4)}), llvm::SmallVector<Value *, 1> {Val5});
  Value *Val7 = Builder.CreateCall(CGM.getIntrinsic(Intrinsic::arm_mve_vadc_predicated, llvm::SmallVector<llvm::Type *, 2> {llvm::VectorType::get(Int32Ty, 4), llvm::VectorType::get(Builder.getInt1Ty(), 4)}), llvm::SmallVector<Value *, 5> {Val0, Val1, Val2, Val3, Val6});
  Value *Val8 = llvm::ConstantInt::get(Int32Ty, 1);
  Value *Val9 = Builder.CreateExtractValue(Val7, 1);
  Value *Val10 = llvm::ConstantInt::get(Int32Ty, 29);
  Value *Val11 = Builder.CreateLShr(Val9, Val10);
  Value *Val12 = Builder.CreateAnd(Val8, Val11);
  Address Val13 = EmitPointerWithAlignment(E->getArg(3));
  Builder.CreateStore(Val12, Val13);
  return Builder.CreateExtractValue(Val7, 0);
}
case ARM::BI__builtin_arm_mve_vadciq_s32:
case ARM::BI__builtin_arm_mve_vadciq_u32: {
  Value *Val0 = EmitScalarExpr(E->getArg(0));
  Value *Val1 = EmitScalarExpr(E->getArg(1));
  Value *Val2 = llvm::ConstantInt::get(Int32Ty, 0);
  Value *Val3 = Builder.CreateCall(CGM.getIntrinsic(Intrinsic::arm_mve_vadc, llvm::SmallVector<llvm::Type *, 1> {llvm::VectorType::get(Int32Ty, 4)}), llvm::SmallVector<Value *, 3> {Val0, Val1, Val2});
  Value *Val4 = llvm::ConstantInt::get(Int32Ty, 1);
  Value *Val5 = Builder.CreateExtractValue(Val3, 1);
  Value *Val6 = llvm::ConstantInt::get(Int32Ty, 29);
  Value *Val7 = Builder.CreateLShr(Val5, Val6);
  Value *Val8 = Builder.CreateAnd(Val4, Val7);
  Address Val9 = EmitPointerWithAlignment(E->getArg(2));
  Builder.CreateStore(Val8, Val9);
  return Builder.CreateExtractValue(Val3, 0);
}
case ARM::BI__builtin_arm_mve_vcvtbq_m_f16_f32:
case ARM::BI__builtin_arm_mve_vcvttq_m_f16_f32: {
  uint32_t  Param0;
  switch (BuiltinID) {
  case ARM::BI__builtin_arm_mve_vcvtbq_m_f16_f32:
    Param0 = 0;
    break;
  case ARM::BI__builtin_arm_mve_vcvttq_m_f16_f32:
    Param0 = 1;
    break;
  }
  Value *Val0 = EmitScalarExpr(E->getArg(0));
  Value *Val1 = EmitScalarExpr(E->getArg(1));
  Value *Val2 = llvm::ConstantInt::get(Int32Ty, Param0);
  Value *Val3 = EmitScalarExpr(E->getArg(2));
  Value *Val4 = Builder.CreateIntCast(Val3, Int32Ty, false);
  Value *Val5 = Builder.CreateCall(CGM.getIntrinsic(Intrinsic::arm_mve_pred_i2v, llvm::SmallVector<llvm::Type *, 1> {llvm::VectorType::get(Builder.getInt1Ty(), 4)}), llvm::SmallVector<Value *, 1> {Val4});
  return Builder.CreateCall(CGM.getIntrinsic(Intrinsic::arm_mve_vcvt_narrow_predicated), llvm::SmallVector<Value *, 4> {Val0, Val1, Val2, Val5});
}
case ARM::BI__builtin_arm_mve_vcvtbq_f16_f32:
case ARM::BI__builtin_arm_mve_vcvttq_f16_f32: {
  uint32_t  Param0;
  switch (BuiltinID) {
  case ARM::BI__builtin_arm_mve_vcvtbq_f16_f32:
    Param0 = 0;
    break;
  case ARM::BI__builtin_arm_mve_vcvttq_f16_f32:
    Param0 = 1;
    break;
  }
  Value *Val0 = EmitScalarExpr(E->getArg(0));
  Value *Val1 = EmitScalarExpr(E->getArg(1));
  Value *Val2 = llvm::ConstantInt::get(Int32Ty, Param0);
  return Builder.CreateCall(CGM.getIntrinsic(Intrinsic::arm_mve_vcvt_narrow), llvm::SmallVector<Value *, 3> {Val0, Val1, Val2});
}
case ARM::BI__builtin_arm_mve_vaddq_s16:
case ARM::BI__builtin_arm_mve_vaddq_s32:
case ARM::BI__builtin_arm_mve_vaddq_s8:
case ARM::BI__builtin_arm_mve_vaddq_u16:
case ARM::BI__builtin_arm_mve_vaddq_u32:
case ARM::BI__builtin_arm_mve_vaddq_u8: {
  Value *Val0 = EmitScalarExpr(E->getArg(0));
  Value *Val1 = EmitScalarExpr(E->getArg(1));
  return Builder.CreateAdd(Val0, Val1);
}
case ARM::BI__builtin_arm_mve_vaddq_f16:
case ARM::BI__builtin_arm_mve_vaddq_f32: {
  Value *Val0 = EmitScalarExpr(E->getArg(0));
  Value *Val1 = EmitScalarExpr(E->getArg(1));
  return Builder.CreateFAdd(Val0, Val1);
}
case ARM::BI__builtin_arm_mve_vsubq_f16:
case ARM::BI__builtin_arm_mve_vsubq_f32: {
  Value *Val0 = EmitScalarExpr(E->getArg(0));
  Value *Val1 = EmitScalarExpr(E->getArg(1));
  return Builder.CreateFSub(Val0, Val1);
}
case ARM::BI__builtin_arm_mve_vsubq_s16:
case ARM::BI__builtin_arm_mve_vsubq_s32:
case ARM::BI__builtin_arm_mve_vsubq_s8:
case ARM::BI__builtin_arm_mve_vsubq_u16:
case ARM::BI__builtin_arm_mve_vsubq_u32:
case ARM::BI__builtin_arm_mve_vsubq_u8: {
  Value *Val0 = EmitScalarExpr(E->getArg(0));
  Value *Val1 = EmitScalarExpr(E->getArg(1));
  return Builder.CreateSub(Val0, Val1);
}
case ARM::BI__builtin_arm_mve_urshrl: {
  Value *Val0 = EmitScalarExpr(E->getArg(0));
  Value *Val1 = llvm::ConstantInt::get(Int64Ty, 32);
  Value *Val2 = Builder.CreateLShr(Val0, Val1);
  Value *Val3 = Builder.CreateIntCast(Val2, Int32Ty, false);
  Value *Val4 = Builder.CreateIntCast(Val0, Int32Ty, false);
  Value *Val5 = EmitScalarExpr(E->getArg(1));
  Value *Val6 = Builder.CreateCall(CGM.getIntrinsic(Intrinsic::arm_mve_urshrl), llvm::SmallVector<Value *, 3> {Val4, Val3, Val5});
  Value *Val7 = Builder.CreateExtractValue(Val6, 1);
  Value *Val8 = Builder.CreateIntCast(Val7, Int64Ty, false);
  Value *Val9 = llvm::ConstantInt::get(Int64Ty, 32);
  Value *Val10 = Builder.CreateShl(Val8, Val9);
  Value *Val11 = Builder.CreateExtractValue(Val6, 0);
  Value *Val12 = Builder.CreateIntCast(Val11, Int64Ty, false);
  return Builder.CreateOr(Val10, Val12);
}
case ARM::BI__builtin_arm_mve_vaddq_m_f16:
case ARM::BI__builtin_arm_mve_vaddq_m_f32:
case ARM::BI__builtin_arm_mve_vaddq_m_s16:
case ARM::BI__builtin_arm_mve_vaddq_m_s32:
case ARM::BI__builtin_arm_mve_vaddq_m_s8:
case ARM::BI__builtin_arm_mve_vaddq_m_u16:
case ARM::BI__builtin_arm_mve_vaddq_m_u32:
case ARM::BI__builtin_arm_mve_vaddq_m_u8:
case ARM::BI__builtin_arm_mve_vsubq_m_f16:
case ARM::BI__builtin_arm_mve_vsubq_m_f32:
case ARM::BI__builtin_arm_mve_vsubq_m_s16:
case ARM::BI__builtin_arm_mve_vsubq_m_s32:
case ARM::BI__builtin_arm_mve_vsubq_m_s8:
case ARM::BI__builtin_arm_mve_vsubq_m_u16:
case ARM::BI__builtin_arm_mve_vsubq_m_u32:
case ARM::BI__builtin_arm_mve_vsubq_m_u8: {
  llvm::Type * Param0;
  Intrinsic::ID  Param1;
  llvm::Type * Param2;
  switch (BuiltinID) {
  case ARM::BI__builtin_arm_mve_vaddq_m_f16:
    Param0 = llvm::VectorType::get(Builder.getInt1Ty(), 8);
    Param1 = Intrinsic::arm_mve_add_predicated;
    Param2 = llvm::VectorType::get(HalfTy, 8);
    break;
  case ARM::BI__builtin_arm_mve_vaddq_m_f32:
    Param0 = llvm::VectorType::get(Builder.getInt1Ty(), 4);
    Param1 = Intrinsic::arm_mve_add_predicated;
    Param2 = llvm::VectorType::get(FloatTy, 4);
    break;
  case ARM::BI__builtin_arm_mve_vaddq_m_s16:
    Param0 = llvm::VectorType::get(Builder.getInt1Ty(), 8);
    Param1 = Intrinsic::arm_mve_add_predicated;
    Param2 = llvm::VectorType::get(Int16Ty, 8);
    break;
  case ARM::BI__builtin_arm_mve_vaddq_m_s32:
    Param0 = llvm::VectorType::get(Builder.getInt1Ty(), 4);
    Param1 = Intrinsic::arm_mve_add_predicated;
    Param2 = llvm::VectorType::get(Int32Ty, 4);
    break;
  case ARM::BI__builtin_arm_mve_vaddq_m_s8:
    Param0 = llvm::VectorType::get(Builder.getInt1Ty(), 16);
    Param1 = Intrinsic::arm_mve_add_predicated;
    Param2 = llvm::VectorType::get(Int8Ty, 16);
    break;
  case ARM::BI__builtin_arm_mve_vaddq_m_u16:
    Param0 = llvm::VectorType::get(Builder.getInt1Ty(), 8);
    Param1 = Intrinsic::arm_mve_add_predicated;
    Param2 = llvm::VectorType::get(Int16Ty, 8);
    break;
  case ARM::BI__builtin_arm_mve_vaddq_m_u32:
    Param0 = llvm::VectorType::get(Builder.getInt1Ty(), 4);
    Param1 = Intrinsic::arm_mve_add_predicated;
    Param2 = llvm::VectorType::get(Int32Ty, 4);
    break;
  case ARM::BI__builtin_arm_mve_vaddq_m_u8:
    Param0 = llvm::VectorType::get(Builder.getInt1Ty(), 16);
    Param1 = Intrinsic::arm_mve_add_predicated;
    Param2 = llvm::VectorType::get(Int8Ty, 16);
    break;
  case ARM::BI__builtin_arm_mve_vsubq_m_f16:
    Param0 = llvm::VectorType::get(Builder.getInt1Ty(), 8);
    Param1 = Intrinsic::arm_mve_sub_predicated;
    Param2 = llvm::VectorType::get(HalfTy, 8);
    break;
  case ARM::BI__builtin_arm_mve_vsubq_m_f32:
    Param0 = llvm::VectorType::get(Builder.getInt1Ty(), 4);
    Param1 = Intrinsic::arm_mve_sub_predicated;
    Param2 = llvm::VectorType::get(FloatTy, 4);
    break;
  case ARM::BI__builtin_arm_mve_vsubq_m_s16:
    Param0 = llvm::VectorType::get(Builder.getInt1Ty(), 8);
    Param1 = Intrinsic::arm_mve_sub_predicated;
    Param2 = llvm::VectorType::get(Int16Ty, 8);
    break;
  case ARM::BI__builtin_arm_mve_vsubq_m_s32:
    Param0 = llvm::VectorType::get(Builder.getInt1Ty(), 4);
    Param1 = Intrinsic::arm_mve_sub_predicated;
    Param2 = llvm::VectorType::get(Int32Ty, 4);
    break;
  case ARM::BI__builtin_arm_mve_vsubq_m_s8:
    Param0 = llvm::VectorType::get(Builder.getInt1Ty(), 16);
    Param1 = Intrinsic::arm_mve_sub_predicated;
    Param2 = llvm::VectorType::get(Int8Ty, 16);
    break;
  case ARM::BI__builtin_arm_mve_vsubq_m_u16:
    Param0 = llvm::VectorType::get(Builder.getInt1Ty(), 8);
    Param1 = Intrinsic::arm_mve_sub_predicated;
    Param2 = llvm::VectorType::get(Int16Ty, 8);
    break;
  case ARM::BI__builtin_arm_mve_vsubq_m_u32:
    Param0 = llvm::VectorType::get(Builder.getInt1Ty(), 4);
    Param1 = Intrinsic::arm_mve_sub_predicated;
    Param2 = llvm::VectorType::get(Int32Ty, 4);
    break;
  case ARM::BI__builtin_arm_mve_vsubq_m_u8:
    Param0 = llvm::VectorType::get(Builder.getInt1Ty(), 16);
    Param1 = Intrinsic::arm_mve_sub_predicated;
    Param2 = llvm::VectorType::get(Int8Ty, 16);
    break;
  }
  Value *Val0 = EmitScalarExpr(E->getArg(1));
  Value *Val1 = EmitScalarExpr(E->getArg(2));
  Value *Val2 = EmitScalarExpr(E->getArg(3));
  Value *Val3 = Builder.CreateIntCast(Val2, Int32Ty, false);
  Value *Val4 = Builder.CreateCall(CGM.getIntrinsic(Intrinsic::arm_mve_pred_i2v, llvm::SmallVector<llvm::Type *, 1> {Param0}), llvm::SmallVector<Value *, 1> {Val3});
  Value *Val5 = EmitScalarExpr(E->getArg(0));
  return Builder.CreateCall(CGM.getIntrinsic(Param1, llvm::SmallVector<llvm::Type *, 2> {Param2, Param0}), llvm::SmallVector<Value *, 4> {Val0, Val1, Val4, Val5});
}
