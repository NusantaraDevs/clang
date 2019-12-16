/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Helper classes for BasicReaders                                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

template <class ValueType>
struct ReadDispatcher;
template <>
struct ReadDispatcher<llvm::APInt> {
  template <class BasicReader, class... Args>
  static llvm::APInt read(BasicReader &R, Args &&... args) {
    return R.readAPInt(std::forward<Args>(args)...);
  }
};
template <>
struct ReadDispatcher<llvm::APSInt> {
  template <class BasicReader, class... Args>
  static llvm::APSInt read(BasicReader &R, Args &&... args) {
    return R.readAPSInt(std::forward<Args>(args)...);
  }
};
template <>
struct ReadDispatcher<ArrayType::ArraySizeModifier> {
  template <class BasicReader, class... Args>
  static ArrayType::ArraySizeModifier read(BasicReader &R, Args &&... args) {
    return R.readArraySizeModifier(std::forward<Args>(args)...);
  }
};
template <>
struct ReadDispatcher<attr::Kind> {
  template <class BasicReader, class... Args>
  static attr::Kind read(BasicReader &R, Args &&... args) {
    return R.readAttrKind(std::forward<Args>(args)...);
  }
};
template <>
struct ReadDispatcher<AutoTypeKeyword> {
  template <class BasicReader, class... Args>
  static AutoTypeKeyword read(BasicReader &R, Args &&... args) {
    return R.readAutoTypeKeyword(std::forward<Args>(args)...);
  }
};
template <>
struct ReadDispatcher<bool> {
  template <class BasicReader, class... Args>
  static bool read(BasicReader &R, Args &&... args) {
    return R.readBool(std::forward<Args>(args)...);
  }
};
template <>
struct ReadDispatcher<BuiltinType::Kind> {
  template <class BasicReader, class... Args>
  static BuiltinType::Kind read(BasicReader &R, Args &&... args) {
    return R.readBuiltinTypeKind(std::forward<Args>(args)...);
  }
};
template <>
struct ReadDispatcher<CXXRecordDecl*> {
  template <class BasicReader, class... Args>
  static CXXRecordDecl* read(BasicReader &R, Args &&... args) {
    return R.readCXXRecordDeclRef(std::forward<Args>(args)...);
  }
};
template <>
struct ReadDispatcher<CallingConv> {
  template <class BasicReader, class... Args>
  static CallingConv read(BasicReader &R, Args &&... args) {
    return R.readCallingConv(std::forward<Args>(args)...);
  }
};
template <>
struct ReadDispatcher<Decl*> {
  template <class BasicReader, class... Args>
  static Decl* read(BasicReader &R, Args &&... args) {
    return R.readDeclRef(std::forward<Args>(args)...);
  }
};
template <>
struct ReadDispatcher<DeclarationName> {
  template <class BasicReader, class... Args>
  static DeclarationName read(BasicReader &R, Args &&... args) {
    return R.readDeclarationName(std::forward<Args>(args)...);
  }
};
template <>
struct ReadDispatcher<DeclarationName::NameKind> {
  template <class BasicReader, class... Args>
  static DeclarationName::NameKind read(BasicReader &R, Args &&... args) {
    return R.readDeclarationNameKind(std::forward<Args>(args)...);
  }
};
template <>
struct ReadDispatcher<ElaboratedTypeKeyword> {
  template <class BasicReader, class... Args>
  static ElaboratedTypeKeyword read(BasicReader &R, Args &&... args) {
    return R.readElaboratedTypeKeyword(std::forward<Args>(args)...);
  }
};
template <>
struct ReadDispatcher<FunctionProtoType::ExceptionSpecInfo> {
  template <class BasicReader, class... Args>
  static FunctionProtoType::ExceptionSpecInfo read(BasicReader &R, Args &&... args) {
    return R.readExceptionSpecInfo(std::forward<Args>(args)...);
  }
};
template <>
struct ReadDispatcher<Expr*> {
  template <class BasicReader, class... Args>
  static Expr* read(BasicReader &R, Args &&... args) {
    return R.readExprRef(std::forward<Args>(args)...);
  }
};
template <>
struct ReadDispatcher<FunctionProtoType::ExtParameterInfo> {
  template <class BasicReader, class... Args>
  static FunctionProtoType::ExtParameterInfo read(BasicReader &R, Args &&... args) {
    return R.readExtParameterInfo(std::forward<Args>(args)...);
  }
};
template <>
struct ReadDispatcher<FunctionDecl*> {
  template <class BasicReader, class... Args>
  static FunctionDecl* read(BasicReader &R, Args &&... args) {
    return R.readFunctionDeclRef(std::forward<Args>(args)...);
  }
};
template <>
struct ReadDispatcher<IdentifierInfo*> {
  template <class BasicReader, class... Args>
  static IdentifierInfo* read(BasicReader &R, Args &&... args) {
    return R.readIdentifier(std::forward<Args>(args)...);
  }
};
template <>
struct ReadDispatcher<NamedDecl*> {
  template <class BasicReader, class... Args>
  static NamedDecl* read(BasicReader &R, Args &&... args) {
    return R.readNamedDeclRef(std::forward<Args>(args)...);
  }
};
template <>
struct ReadDispatcher<NamespaceAliasDecl*> {
  template <class BasicReader, class... Args>
  static NamespaceAliasDecl* read(BasicReader &R, Args &&... args) {
    return R.readNamespaceAliasDeclRef(std::forward<Args>(args)...);
  }
};
template <>
struct ReadDispatcher<NamespaceDecl*> {
  template <class BasicReader, class... Args>
  static NamespaceDecl* read(BasicReader &R, Args &&... args) {
    return R.readNamespaceDeclRef(std::forward<Args>(args)...);
  }
};
template <>
struct ReadDispatcher<NestedNameSpecifier *> {
  template <class BasicReader, class... Args>
  static NestedNameSpecifier * read(BasicReader &R, Args &&... args) {
    return R.readNestedNameSpecifier(std::forward<Args>(args)...);
  }
};
template <>
struct ReadDispatcher<NestedNameSpecifier::SpecifierKind> {
  template <class BasicReader, class... Args>
  static NestedNameSpecifier::SpecifierKind read(BasicReader &R, Args &&... args) {
    return R.readNestedNameSpecifierKind(std::forward<Args>(args)...);
  }
};
template <>
struct ReadDispatcher<ObjCProtocolDecl*> {
  template <class BasicReader, class... Args>
  static ObjCProtocolDecl* read(BasicReader &R, Args &&... args) {
    return R.readObjCProtocolDeclRef(std::forward<Args>(args)...);
  }
};
template <>
struct ReadDispatcher<ObjCTypeParamDecl*> {
  template <class BasicReader, class... Args>
  static ObjCTypeParamDecl* read(BasicReader &R, Args &&... args) {
    return R.readObjCTypeParamDeclRef(std::forward<Args>(args)...);
  }
};
template <>
struct ReadDispatcher<OverloadedOperatorKind> {
  template <class BasicReader, class... Args>
  static OverloadedOperatorKind read(BasicReader &R, Args &&... args) {
    return R.readOverloadedOperatorKind(std::forward<Args>(args)...);
  }
};
template <>
struct ReadDispatcher<QualType> {
  template <class BasicReader, class... Args>
  static QualType read(BasicReader &R, Args &&... args) {
    return R.readQualType(std::forward<Args>(args)...);
  }
};
template <>
struct ReadDispatcher<Qualifiers> {
  template <class BasicReader, class... Args>
  static Qualifiers read(BasicReader &R, Args &&... args) {
    return R.readQualifiers(std::forward<Args>(args)...);
  }
};
template <>
struct ReadDispatcher<RefQualifierKind> {
  template <class BasicReader, class... Args>
  static RefQualifierKind read(BasicReader &R, Args &&... args) {
    return R.readRefQualifierKind(std::forward<Args>(args)...);
  }
};
template <>
struct ReadDispatcher<Selector> {
  template <class BasicReader, class... Args>
  static Selector read(BasicReader &R, Args &&... args) {
    return R.readSelector(std::forward<Args>(args)...);
  }
};
template <>
struct ReadDispatcher<SourceLocation> {
  template <class BasicReader, class... Args>
  static SourceLocation read(BasicReader &R, Args &&... args) {
    return R.readSourceLocation(std::forward<Args>(args)...);
  }
};
template <>
struct ReadDispatcher<Stmt*> {
  template <class BasicReader, class... Args>
  static Stmt* read(BasicReader &R, Args &&... args) {
    return R.readStmtRef(std::forward<Args>(args)...);
  }
};
template <>
struct ReadDispatcher<TagDecl*> {
  template <class BasicReader, class... Args>
  static TagDecl* read(BasicReader &R, Args &&... args) {
    return R.readTagDeclRef(std::forward<Args>(args)...);
  }
};
template <>
struct ReadDispatcher<TemplateArgument> {
  template <class BasicReader, class... Args>
  static TemplateArgument read(BasicReader &R, Args &&... args) {
    return R.readTemplateArgument(std::forward<Args>(args)...);
  }
};
template <>
struct ReadDispatcher<TemplateArgument::ArgKind> {
  template <class BasicReader, class... Args>
  static TemplateArgument::ArgKind read(BasicReader &R, Args &&... args) {
    return R.readTemplateArgumentKind(std::forward<Args>(args)...);
  }
};
template <>
struct ReadDispatcher<TemplateDecl*> {
  template <class BasicReader, class... Args>
  static TemplateDecl* read(BasicReader &R, Args &&... args) {
    return R.readTemplateDeclRef(std::forward<Args>(args)...);
  }
};
template <>
struct ReadDispatcher<TemplateName> {
  template <class BasicReader, class... Args>
  static TemplateName read(BasicReader &R, Args &&... args) {
    return R.readTemplateName(std::forward<Args>(args)...);
  }
};
template <>
struct ReadDispatcher<TemplateName::NameKind> {
  template <class BasicReader, class... Args>
  static TemplateName::NameKind read(BasicReader &R, Args &&... args) {
    return R.readTemplateNameKind(std::forward<Args>(args)...);
  }
};
template <>
struct ReadDispatcher<TemplateTemplateParmDecl*> {
  template <class BasicReader, class... Args>
  static TemplateTemplateParmDecl* read(BasicReader &R, Args &&... args) {
    return R.readTemplateTemplateParmDeclRef(std::forward<Args>(args)...);
  }
};
template <>
struct ReadDispatcher<TemplateTypeParmDecl*> {
  template <class BasicReader, class... Args>
  static TemplateTypeParmDecl* read(BasicReader &R, Args &&... args) {
    return R.readTemplateTypeParmDeclRef(std::forward<Args>(args)...);
  }
};
template <>
struct ReadDispatcher<uint32_t> {
  template <class BasicReader, class... Args>
  static uint32_t read(BasicReader &R, Args &&... args) {
    return R.readUInt32(std::forward<Args>(args)...);
  }
};
template <>
struct ReadDispatcher<uint64_t> {
  template <class BasicReader, class... Args>
  static uint64_t read(BasicReader &R, Args &&... args) {
    return R.readUInt64(std::forward<Args>(args)...);
  }
};
template <>
struct ReadDispatcher<UnaryTransformType::UTTKind> {
  template <class BasicReader, class... Args>
  static UnaryTransformType::UTTKind read(BasicReader &R, Args &&... args) {
    return R.readUnaryTypeTransformKind(std::forward<Args>(args)...);
  }
};
template <>
struct ReadDispatcher<ValueDecl*> {
  template <class BasicReader, class... Args>
  static ValueDecl* read(BasicReader &R, Args &&... args) {
    return R.readValueDeclRef(std::forward<Args>(args)...);
  }
};
template <>
struct ReadDispatcher<VectorType::VectorKind> {
  template <class BasicReader, class... Args>
  static VectorType::VectorKind read(BasicReader &R, Args &&... args) {
    return R.readVectorKind(std::forward<Args>(args)...);
  }
};
template <class T>
struct ReadDispatcher<llvm::ArrayRef<T>> {
  template <class BasicReader, class... Args>
  static llvm::ArrayRef<T> read(BasicReader &R, Args &&... args) {
    return R.readArray(std::forward<Args>(args)...);
  }
};
template <class T>
struct ReadDispatcher<llvm::Optional<T>> {
  template <class BasicReader, class... Args>
  static llvm::Optional<T> read(BasicReader &R, Args &&... args) {
    return R.readOptional(std::forward<Args>(args)...);
  }
};

template <class ValueType>
struct UnpackOptionalValue;
template <>
struct UnpackOptionalValue<CXXRecordDecl*> {
  static Optional<CXXRecordDecl*> unpack(CXXRecordDecl* value) {
    return value ? llvm::Optional<CXXRecordDecl*>(value) : llvm::None;
  }
};
template <>
struct UnpackOptionalValue<Decl*> {
  static Optional<Decl*> unpack(Decl* value) {
    return value ? llvm::Optional<Decl*>(value) : llvm::None;
  }
};
template <>
struct UnpackOptionalValue<Expr*> {
  static Optional<Expr*> unpack(Expr* value) {
    return value ? llvm::Optional<Expr*>(value) : llvm::None;
  }
};
template <>
struct UnpackOptionalValue<FunctionDecl*> {
  static Optional<FunctionDecl*> unpack(FunctionDecl* value) {
    return value ? llvm::Optional<FunctionDecl*>(value) : llvm::None;
  }
};
template <>
struct UnpackOptionalValue<NamedDecl*> {
  static Optional<NamedDecl*> unpack(NamedDecl* value) {
    return value ? llvm::Optional<NamedDecl*>(value) : llvm::None;
  }
};
template <>
struct UnpackOptionalValue<NamespaceAliasDecl*> {
  static Optional<NamespaceAliasDecl*> unpack(NamespaceAliasDecl* value) {
    return value ? llvm::Optional<NamespaceAliasDecl*>(value) : llvm::None;
  }
};
template <>
struct UnpackOptionalValue<NamespaceDecl*> {
  static Optional<NamespaceDecl*> unpack(NamespaceDecl* value) {
    return value ? llvm::Optional<NamespaceDecl*>(value) : llvm::None;
  }
};
template <>
struct UnpackOptionalValue<ObjCProtocolDecl*> {
  static Optional<ObjCProtocolDecl*> unpack(ObjCProtocolDecl* value) {
    return value ? llvm::Optional<ObjCProtocolDecl*>(value) : llvm::None;
  }
};
template <>
struct UnpackOptionalValue<ObjCTypeParamDecl*> {
  static Optional<ObjCTypeParamDecl*> unpack(ObjCTypeParamDecl* value) {
    return value ? llvm::Optional<ObjCTypeParamDecl*>(value) : llvm::None;
  }
};
template <>
struct UnpackOptionalValue<QualType> {
  static Optional<QualType> unpack(QualType value) {
    return value.isNull() ? llvm::None : llvm::Optional<QualType>(value);
  }
};
template <>
struct UnpackOptionalValue<Stmt*> {
  static Optional<Stmt*> unpack(Stmt* value) {
    return value ? llvm::Optional<Stmt*>(value) : llvm::None;
  }
};
template <>
struct UnpackOptionalValue<TagDecl*> {
  static Optional<TagDecl*> unpack(TagDecl* value) {
    return value ? llvm::Optional<TagDecl*>(value) : llvm::None;
  }
};
template <>
struct UnpackOptionalValue<TemplateDecl*> {
  static Optional<TemplateDecl*> unpack(TemplateDecl* value) {
    return value ? llvm::Optional<TemplateDecl*>(value) : llvm::None;
  }
};
template <>
struct UnpackOptionalValue<TemplateName> {
  static Optional<TemplateName> unpack(TemplateName value) {
    return value.isNull() ? llvm::None : llvm::Optional<TemplateName>(value);
  }
};
template <>
struct UnpackOptionalValue<TemplateTemplateParmDecl*> {
  static Optional<TemplateTemplateParmDecl*> unpack(TemplateTemplateParmDecl* value) {
    return value ? llvm::Optional<TemplateTemplateParmDecl*>(value) : llvm::None;
  }
};
template <>
struct UnpackOptionalValue<TemplateTypeParmDecl*> {
  static Optional<TemplateTypeParmDecl*> unpack(TemplateTypeParmDecl* value) {
    return value ? llvm::Optional<TemplateTypeParmDecl*>(value) : llvm::None;
  }
};
template <>
struct UnpackOptionalValue<uint32_t> {
  static Optional<uint32_t> unpack(uint32_t value) {
    return value ? llvm::Optional<uint32_t>(value - 1) : llvm::None;
  }
};
template <>
struct UnpackOptionalValue<uint64_t> {
  static Optional<uint64_t> unpack(uint64_t value) {
    return value ? llvm::Optional<uint64_t>(value - 1) : llvm::None;
  }
};
template <>
struct UnpackOptionalValue<ValueDecl*> {
  static Optional<ValueDecl*> unpack(ValueDecl* value) {
    return value ? llvm::Optional<ValueDecl*>(value) : llvm::None;
  }
};

template <class Impl>
class BasicReaderBase {
  ASTContext &C;
protected:
  BasicReaderBase(ASTContext &ctx) : C(ctx) {}
public:
  ASTContext &getASTContext() { return C; }
  Impl &asImpl() { return static_cast<Impl&>(*this); }
  ArrayType::ArraySizeModifier readArraySizeModifier() {
    return ArrayType::ArraySizeModifier(asImpl().readUInt32());
  }
  attr::Kind readAttrKind() {
    return attr::Kind(asImpl().readUInt32());
  }
  AutoTypeKeyword readAutoTypeKeyword() {
    return AutoTypeKeyword(asImpl().readUInt32());
  }
  BuiltinType::Kind readBuiltinTypeKind() {
    return BuiltinType::Kind(asImpl().readUInt32());
  }
  CXXRecordDecl* readCXXRecordDeclRef() {
    return cast_or_null<CXXRecordDecl>(asImpl().readDeclRef());
  }
  CallingConv readCallingConv() {
    return CallingConv(asImpl().readUInt32());
  }
  DeclarationName::NameKind readDeclarationNameKind() {
    return DeclarationName::NameKind(asImpl().readUInt32());
  }
  ElaboratedTypeKeyword readElaboratedTypeKeyword() {
    return ElaboratedTypeKeyword(asImpl().readUInt32());
  }
  Expr* readExprRef() {
    return cast_or_null<Expr>(asImpl().readStmtRef());
  }
  FunctionDecl* readFunctionDeclRef() {
    return cast_or_null<FunctionDecl>(asImpl().readDeclRef());
  }
  NamedDecl* readNamedDeclRef() {
    return cast_or_null<NamedDecl>(asImpl().readDeclRef());
  }
  NamespaceAliasDecl* readNamespaceAliasDeclRef() {
    return cast_or_null<NamespaceAliasDecl>(asImpl().readDeclRef());
  }
  NamespaceDecl* readNamespaceDeclRef() {
    return cast_or_null<NamespaceDecl>(asImpl().readDeclRef());
  }
  NestedNameSpecifier::SpecifierKind readNestedNameSpecifierKind() {
    return NestedNameSpecifier::SpecifierKind(asImpl().readUInt32());
  }
  ObjCProtocolDecl* readObjCProtocolDeclRef() {
    return cast_or_null<ObjCProtocolDecl>(asImpl().readDeclRef());
  }
  ObjCTypeParamDecl* readObjCTypeParamDeclRef() {
    return cast_or_null<ObjCTypeParamDecl>(asImpl().readDeclRef());
  }
  OverloadedOperatorKind readOverloadedOperatorKind() {
    return OverloadedOperatorKind(asImpl().readUInt32());
  }
  RefQualifierKind readRefQualifierKind() {
    return RefQualifierKind(asImpl().readUInt32());
  }
  TagDecl* readTagDeclRef() {
    return cast_or_null<TagDecl>(asImpl().readDeclRef());
  }
  TemplateArgument::ArgKind readTemplateArgumentKind() {
    return TemplateArgument::ArgKind(asImpl().readUInt32());
  }
  TemplateDecl* readTemplateDeclRef() {
    return cast_or_null<TemplateDecl>(asImpl().readDeclRef());
  }
  TemplateName::NameKind readTemplateNameKind() {
    return TemplateName::NameKind(asImpl().readUInt32());
  }
  TemplateTemplateParmDecl* readTemplateTemplateParmDeclRef() {
    return cast_or_null<TemplateTemplateParmDecl>(asImpl().readDeclRef());
  }
  TemplateTypeParmDecl* readTemplateTypeParmDeclRef() {
    return cast_or_null<TemplateTypeParmDecl>(asImpl().readDeclRef());
  }
  UnaryTransformType::UTTKind readUnaryTypeTransformKind() {
    return UnaryTransformType::UTTKind(asImpl().readUInt32());
  }
  ValueDecl* readValueDeclRef() {
    return cast_or_null<ValueDecl>(asImpl().readDeclRef());
  }
  VectorType::VectorKind readVectorKind() {
    return VectorType::VectorKind(asImpl().readUInt32());
  }
};

