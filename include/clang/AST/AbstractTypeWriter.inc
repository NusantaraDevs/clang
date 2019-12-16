/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* A CRTP writer for Clang Type nodes                                         *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

template <class PropertyWriter>
class AbstractTypeWriter {
public:
  PropertyWriter &W;

  AbstractTypeWriter(PropertyWriter &W) : W(W) {}

  void write(const Type *node) {
    switch (node->getTypeClass()) {
    case Type::Adjusted:
      return writeAdjustedType(static_cast<const AdjustedType *>(node));
    case Type::Decayed:
      return writeDecayedType(static_cast<const DecayedType *>(node));
    case Type::ConstantArray:
      return writeConstantArrayType(static_cast<const ConstantArrayType *>(node));
    case Type::DependentSizedArray:
      return writeDependentSizedArrayType(static_cast<const DependentSizedArrayType *>(node));
    case Type::IncompleteArray:
      return writeIncompleteArrayType(static_cast<const IncompleteArrayType *>(node));
    case Type::VariableArray:
      return writeVariableArrayType(static_cast<const VariableArrayType *>(node));
    case Type::Atomic:
      return writeAtomicType(static_cast<const AtomicType *>(node));
    case Type::Attributed:
      return writeAttributedType(static_cast<const AttributedType *>(node));
    case Type::BlockPointer:
      return writeBlockPointerType(static_cast<const BlockPointerType *>(node));
    case Type::Builtin:
      return writeBuiltinType(static_cast<const BuiltinType *>(node));
    case Type::Complex:
      return writeComplexType(static_cast<const ComplexType *>(node));
    case Type::Decltype:
      return writeDecltypeType(static_cast<const DecltypeType *>(node));
    case Type::Auto:
      return writeAutoType(static_cast<const AutoType *>(node));
    case Type::DeducedTemplateSpecialization:
      return writeDeducedTemplateSpecializationType(static_cast<const DeducedTemplateSpecializationType *>(node));
    case Type::DependentAddressSpace:
      return writeDependentAddressSpaceType(static_cast<const DependentAddressSpaceType *>(node));
    case Type::DependentName:
      return writeDependentNameType(static_cast<const DependentNameType *>(node));
    case Type::DependentSizedExtVector:
      return writeDependentSizedExtVectorType(static_cast<const DependentSizedExtVectorType *>(node));
    case Type::DependentTemplateSpecialization:
      return writeDependentTemplateSpecializationType(static_cast<const DependentTemplateSpecializationType *>(node));
    case Type::DependentVector:
      return writeDependentVectorType(static_cast<const DependentVectorType *>(node));
    case Type::Elaborated:
      return writeElaboratedType(static_cast<const ElaboratedType *>(node));
    case Type::FunctionNoProto:
      return writeFunctionNoProtoType(static_cast<const FunctionNoProtoType *>(node));
    case Type::FunctionProto:
      return writeFunctionProtoType(static_cast<const FunctionProtoType *>(node));
    case Type::InjectedClassName:
      return writeInjectedClassNameType(static_cast<const InjectedClassNameType *>(node));
    case Type::MacroQualified:
      return writeMacroQualifiedType(static_cast<const MacroQualifiedType *>(node));
    case Type::MemberPointer:
      return writeMemberPointerType(static_cast<const MemberPointerType *>(node));
    case Type::ObjCObjectPointer:
      return writeObjCObjectPointerType(static_cast<const ObjCObjectPointerType *>(node));
    case Type::ObjCObject:
      return writeObjCObjectType(static_cast<const ObjCObjectType *>(node));
    case Type::ObjCInterface:
      return writeObjCInterfaceType(static_cast<const ObjCInterfaceType *>(node));
    case Type::ObjCTypeParam:
      return writeObjCTypeParamType(static_cast<const ObjCTypeParamType *>(node));
    case Type::PackExpansion:
      return writePackExpansionType(static_cast<const PackExpansionType *>(node));
    case Type::Paren:
      return writeParenType(static_cast<const ParenType *>(node));
    case Type::Pipe:
      return writePipeType(static_cast<const PipeType *>(node));
    case Type::Pointer:
      return writePointerType(static_cast<const PointerType *>(node));
    case Type::LValueReference:
      return writeLValueReferenceType(static_cast<const LValueReferenceType *>(node));
    case Type::RValueReference:
      return writeRValueReferenceType(static_cast<const RValueReferenceType *>(node));
    case Type::SubstTemplateTypeParmPack:
      return writeSubstTemplateTypeParmPackType(static_cast<const SubstTemplateTypeParmPackType *>(node));
    case Type::SubstTemplateTypeParm:
      return writeSubstTemplateTypeParmType(static_cast<const SubstTemplateTypeParmType *>(node));
    case Type::Enum:
      return writeEnumType(static_cast<const EnumType *>(node));
    case Type::Record:
      return writeRecordType(static_cast<const RecordType *>(node));
    case Type::TemplateSpecialization:
      return writeTemplateSpecializationType(static_cast<const TemplateSpecializationType *>(node));
    case Type::TemplateTypeParm:
      return writeTemplateTypeParmType(static_cast<const TemplateTypeParmType *>(node));
    case Type::TypeOfExpr:
      return writeTypeOfExprType(static_cast<const TypeOfExprType *>(node));
    case Type::TypeOf:
      return writeTypeOfType(static_cast<const TypeOfType *>(node));
    case Type::Typedef:
      return writeTypedefType(static_cast<const TypedefType *>(node));
    case Type::UnaryTransform:
      return writeUnaryTransformType(static_cast<const UnaryTransformType *>(node));
    case Type::UnresolvedUsing:
      return writeUnresolvedUsingType(static_cast<const UnresolvedUsingType *>(node));
    case Type::Vector:
      return writeVectorType(static_cast<const VectorType *>(node));
    case Type::ExtVector:
      return writeExtVectorType(static_cast<const ExtVectorType *>(node));
    }
    llvm_unreachable("bad kind");
  }

  void writeAdjustedType(const AdjustedType *node) {
    W.find("originalType").writeQualType( node->getOriginalType() );
    W.find("adjustedType").writeQualType( node->getAdjustedType() );
  }

  void writeDecayedType(const DecayedType *node) {
    W.find("originalType").writeQualType( node->getOriginalType() );
  }

  void writeConstantArrayType(const ConstantArrayType *node) {
    W.find("sizeValue").writeAPInt( node->getSize() );
    W.find("size").writeExprRef( node->getSizeExpr() );
    W.find("elementType").writeQualType( node->getElementType() );
    W.find("sizeModifier").writeArraySizeModifier( node->getSizeModifier() );
    W.find("indexQualifiers").writeQualifiers( Qualifiers::fromCVRMask(node->getIndexTypeCVRQualifiers()) );
  }

  void writeDependentSizedArrayType(const DependentSizedArrayType *node) {
    W.find("size").writeExprRef( node->getSizeExpr() );
    W.find("leftBracketLoc").writeSourceLocation( node->getLBracketLoc() );
    W.find("rightBracketLoc").writeSourceLocation( node->getRBracketLoc() );
    W.find("elementType").writeQualType( node->getElementType() );
    W.find("sizeModifier").writeArraySizeModifier( node->getSizeModifier() );
    W.find("indexQualifiers").writeQualifiers( Qualifiers::fromCVRMask(node->getIndexTypeCVRQualifiers()) );
  }

  void writeIncompleteArrayType(const IncompleteArrayType *node) {
    W.find("elementType").writeQualType( node->getElementType() );
    W.find("sizeModifier").writeArraySizeModifier( node->getSizeModifier() );
    W.find("indexQualifiers").writeQualifiers( Qualifiers::fromCVRMask(node->getIndexTypeCVRQualifiers()) );
  }

  void writeVariableArrayType(const VariableArrayType *node) {
    W.find("leftBracketLoc").writeSourceLocation( node->getLBracketLoc() );
    W.find("rightBracketLoc").writeSourceLocation( node->getRBracketLoc() );
    W.find("size").writeExprRef( node->getSizeExpr() );
    W.find("elementType").writeQualType( node->getElementType() );
    W.find("sizeModifier").writeArraySizeModifier( node->getSizeModifier() );
    W.find("indexQualifiers").writeQualifiers( Qualifiers::fromCVRMask(node->getIndexTypeCVRQualifiers()) );
  }

  void writeAtomicType(const AtomicType *node) {
    W.find("valueType").writeQualType( node->getValueType() );
  }

  void writeAttributedType(const AttributedType *node) {
    W.find("modifiedType").writeQualType( node->getModifiedType() );
    W.find("equivalentType").writeQualType( node->getEquivalentType() );
    W.find("attribute").writeAttrKind( node->getAttrKind() );
  }

  void writeBlockPointerType(const BlockPointerType *node) {
    W.find("pointeeType").writeQualType( node->getPointeeType() );
  }

  void writeBuiltinType(const BuiltinType *node) {
    W.find("kind").writeBuiltinTypeKind( node->getKind() );
  }

  void writeComplexType(const ComplexType *node) {
    W.find("elementType").writeQualType( node->getElementType() );
  }

  void writeDecltypeType(const DecltypeType *node) {
    W.find("underlyingType").writeQualType( node->getUnderlyingType() );
    W.find("expression").writeExprRef( node->getUnderlyingExpr() );
  }

  void writeAutoType(const AutoType *node) {
    W.find("deducedType").writeOptional( makeOptionalFromNullable(node->getDeducedType()) );
    W.find("keyword").writeAutoTypeKeyword( node->getKeyword() );
    W.find("dependence").writeUInt32( !node->getDeducedType().isNull() ? 0 :
                  node->containsUnexpandedParameterPack() ? 2 :
                  node->isDependentType() ? 1 : 0 );
  }

  void writeDeducedTemplateSpecializationType(const DeducedTemplateSpecializationType *node) {
    W.find("templateName").writeOptional( makeOptionalFromNullable(node->getTemplateName()) );
    W.find("deducedType").writeQualType( node->getDeducedType() );
    W.find("dependent").writeBool( !node->getDeducedType().isNull()
                    ? false : node->isDependentType() );
  }

  void writeDependentAddressSpaceType(const DependentAddressSpaceType *node) {
    W.find("pointeeType").writeQualType( node->getPointeeType() );
    W.find("addressSpace").writeExprRef( node->getAddrSpaceExpr() );
    W.find("attributeLoc").writeSourceLocation( node->getAttributeLoc() );
  }

  void writeDependentNameType(const DependentNameType *node) {
    W.find("keyword").writeElaboratedTypeKeyword( node->getKeyword() );
    W.find("qualifier").writeNestedNameSpecifier( node->getQualifier() );
    W.find("name").writeIdentifier( node->getIdentifier() );
    W.find("underlyingType").writeOptional(
    	node->isCanonicalUnqualified()
    		? llvm::None
    		: llvm::Optional<QualType>(node->getCanonicalTypeInternal())
    );
  }

  void writeDependentSizedExtVectorType(const DependentSizedExtVectorType *node) {
    W.find("elementType").writeQualType( node->getElementType() );
    W.find("size").writeExprRef( node->getSizeExpr() );
    W.find("attributeLoc").writeSourceLocation( node->getAttributeLoc() );
  }

  void writeDependentTemplateSpecializationType(const DependentTemplateSpecializationType *node) {
    W.find("keyword").writeElaboratedTypeKeyword( node->getKeyword() );
    W.find("qualifier").writeNestedNameSpecifier( node->getQualifier() );
    W.find("name").writeIdentifier( node->getIdentifier() );
    W.find("templateArguments").writeArray( node->template_arguments() );
  }

  void writeDependentVectorType(const DependentVectorType *node) {
    W.find("elementType").writeQualType( node->getElementType() );
    W.find("size").writeExprRef( node->getSizeExpr() );
    W.find("attributeLoc").writeSourceLocation( node->getAttributeLoc() );
    W.find("vectorKind").writeVectorKind( node->getVectorKind() );
  }

  void writeElaboratedType(const ElaboratedType *node) {
    W.find("qualifier").writeNestedNameSpecifier( node->getQualifier() );
    W.find("namedType").writeQualType( node->getNamedType() );
    W.find("ownedTag").writeOptional( makeOptionalFromPointer(node->getOwnedTagDecl()) );
    W.find("keyword").writeElaboratedTypeKeyword( node->getKeyword() );
  }

  void writeFunctionNoProtoType(const FunctionNoProtoType *node) {
    W.find("returnType").writeQualType( node->getReturnType() );
    W.find("noReturn").writeBool( node->getExtInfo().getNoReturn() );
    W.find("hasRegParm").writeBool( node->getExtInfo().getHasRegParm() );
    W.find("regParm").writeUInt32( node->getExtInfo().getRegParm() );
    W.find("callingConvention").writeCallingConv( node->getExtInfo().getCC() );
    W.find("producesResult").writeBool( node->getExtInfo().getProducesResult() );
    W.find("noCallerSavedRegs").writeBool( node->getExtInfo().getNoCallerSavedRegs() );
    W.find("noCfCheck").writeBool( node->getExtInfo().getNoCfCheck() );
  }

  void writeFunctionProtoType(const FunctionProtoType *node) {
    W.find("variadic").writeBool( node->isVariadic() );
    W.find("trailingReturn").writeBool( node->hasTrailingReturn() );
    W.find("methodQualifiers").writeQualifiers( node->getMethodQuals() );
    W.find("refQualifier").writeRefQualifierKind( node->getRefQualifier() );
    W.find("exceptionSpecifier").writeExceptionSpecInfo( node->getExceptionSpecInfo() );
    W.find("parameters").writeArray( node->getParamTypes() );
    W.find("extParameterInfo").writeArray( node->hasExtParameterInfos()
                    ? node->getExtParameterInfos()
                    : llvm::ArrayRef<FunctionProtoType::ExtParameterInfo>() );
    W.find("returnType").writeQualType( node->getReturnType() );
    W.find("noReturn").writeBool( node->getExtInfo().getNoReturn() );
    W.find("hasRegParm").writeBool( node->getExtInfo().getHasRegParm() );
    W.find("regParm").writeUInt32( node->getExtInfo().getRegParm() );
    W.find("callingConvention").writeCallingConv( node->getExtInfo().getCC() );
    W.find("producesResult").writeBool( node->getExtInfo().getProducesResult() );
    W.find("noCallerSavedRegs").writeBool( node->getExtInfo().getNoCallerSavedRegs() );
    W.find("noCfCheck").writeBool( node->getExtInfo().getNoCfCheck() );
  }

  void writeInjectedClassNameType(const InjectedClassNameType *node) {
    W.find("declaration").writeDeclRef( node->getDecl()->getCanonicalDecl() );
    W.find("injectedSpecializationType").writeQualType( node->getInjectedSpecializationType() );
  }

  void writeMacroQualifiedType(const MacroQualifiedType *node) {
    W.find("underlyingType").writeQualType( node->getUnderlyingType() );
    W.find("macroIdentifier").writeIdentifier( node->getMacroIdentifier() );
  }

  void writeMemberPointerType(const MemberPointerType *node) {
    W.find("pointeeType").writeQualType( node->getPointeeType() );
    W.find("baseType").writeQualType( QualType(node->getClass(), 0) );
  }

  void writeObjCObjectPointerType(const ObjCObjectPointerType *node) {
    W.find("pointeeType").writeQualType( node->getPointeeType() );
  }

  void writeObjCObjectType(const ObjCObjectType *node) {
    W.find("baseType").writeQualType( node->getBaseType() );
    W.find("typeArgsAsWritten").writeArray( node->getTypeArgsAsWritten() );
    W.find("qualifiers").writeArray( node->getProtocols() );
    W.find("isKindOfTypeAsWritten").writeBool( node->isKindOfTypeAsWritten() );
  }

  void writeObjCInterfaceType(const ObjCInterfaceType *node) {
    W.find("declaration").writeDeclRef( node->getDecl()->getCanonicalDecl() );
  }

  void writeObjCTypeParamType(const ObjCTypeParamType *node) {
    W.find("declaration").writeObjCTypeParamDeclRef( node->getDecl() );
    W.find("qualifiers").writeArray( node->getProtocols() );
  }

  void writePackExpansionType(const PackExpansionType *node) {
    W.find("pattern").writeQualType( node->getPattern() );
    W.find("numExpansions").writeOptional( node->getNumExpansions() );
  }

  void writeParenType(const ParenType *node) {
    W.find("innerType").writeQualType( node->getInnerType() );
  }

  void writePipeType(const PipeType *node) {
    W.find("elementType").writeQualType( node->getElementType() );
    W.find("isReadOnly").writeBool( node->isReadOnly() );
  }

  void writePointerType(const PointerType *node) {
    W.find("pointeeType").writeQualType( node->getPointeeType() );
  }

  void writeLValueReferenceType(const LValueReferenceType *node) {
    W.find("isSpelledAsLValue").writeBool( node->isSpelledAsLValue() );
    W.find("pointeeTypeAsWritten").writeQualType( node->getPointeeTypeAsWritten() );
  }

  void writeRValueReferenceType(const RValueReferenceType *node) {
    W.find("pointeeTypeAsWritten").writeQualType( node->getPointeeTypeAsWritten() );
  }

  void writeSubstTemplateTypeParmPackType(const SubstTemplateTypeParmPackType *node) {
    W.find("replacedParameter").writeQualType( QualType(node->getReplacedParameter(), 0) );
    W.find("replacementPack").writeTemplateArgument( node->getArgumentPack() );
  }

  void writeSubstTemplateTypeParmType(const SubstTemplateTypeParmType *node) {
    W.find("replacedParameter").writeQualType( QualType(node->getReplacedParameter(), 0) );
    W.find("replacementType").writeQualType( node->getReplacementType() );
  }

  void writeEnumType(const EnumType *node) {
    W.find("dependent").writeBool( node->isDependentType() );
    W.find("declaration").writeDeclRef( node->getDecl()->getCanonicalDecl() );
  }

  void writeRecordType(const RecordType *node) {
    W.find("dependent").writeBool( node->isDependentType() );
    W.find("declaration").writeDeclRef( node->getDecl()->getCanonicalDecl() );
  }

  void writeTemplateSpecializationType(const TemplateSpecializationType *node) {
    W.find("dependent").writeBool( node->isDependentType() );
    W.find("templateName").writeTemplateName( node->getTemplateName() );
    W.find("templateArguments").writeArray( node->template_arguments() );
    W.find("underlyingType").writeOptional(
    	node->isTypeAlias()
    		? llvm::Optional<QualType>(node->getAliasedType())
    		: node->isCanonicalUnqualified()
        		? llvm::None
        		: llvm::Optional<QualType>(node->getCanonicalTypeInternal())
    );
  }

  void writeTemplateTypeParmType(const TemplateTypeParmType *node) {
    W.find("depth").writeUInt32( node->getDepth() );
    W.find("index").writeUInt32( node->getIndex() );
    W.find("isParameterPack").writeBool( node->isParameterPack() );
    W.find("declaration").writeOptional( makeOptionalFromPointer(node->getDecl()) );
  }

  void writeTypeOfExprType(const TypeOfExprType *node) {
    W.find("expression").writeExprRef( node->getUnderlyingExpr() );
  }

  void writeTypeOfType(const TypeOfType *node) {
    W.find("underlyingType").writeQualType( node->getUnderlyingType() );
  }

  void writeTypedefType(const TypedefType *node) {
    W.find("declaration").writeDeclRef( node->getDecl() );
    W.find("canonicalType").writeOptional( makeOptionalFromNullable(node->getCanonicalTypeInternal()) );
  }

  void writeUnaryTransformType(const UnaryTransformType *node) {
    W.find("baseType").writeQualType( node->getBaseType() );
    W.find("underlyingType").writeQualType( node->getUnderlyingType() );
    W.find("transform").writeUnaryTypeTransformKind( node->getUTTKind() );
  }

  void writeUnresolvedUsingType(const UnresolvedUsingType *node) {
    W.find("declaration").writeDeclRef( node->getDecl() );
  }

  void writeVectorType(const VectorType *node) {
    W.find("elementType").writeQualType( node->getElementType() );
    W.find("numElements").writeUInt32( node->getNumElements() );
    W.find("vectorKind").writeVectorKind( node->getVectorKind() );
  }

  void writeExtVectorType(const ExtVectorType *node) {
    W.find("elementType").writeQualType( node->getElementType() );
    W.find("numElements").writeUInt32( node->getNumElements() );
  }

};

