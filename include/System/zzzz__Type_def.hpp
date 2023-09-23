#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System::Reflection {
class Assembly;
}
namespace System::Reflection {
class Module;
}
namespace System {
struct RuntimeTypeHandle;
}
namespace System::Reflection {
struct BindingFlags;
}
namespace System {
template<typename T1,typename T2,typename T3,typename TResult>
class Func_4;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System {
struct Guid;
}
namespace System::Reflection {
struct TypeAttributes;
}
namespace System::Reflection {
struct MemberTypes;
}
namespace System {
struct TypeCode;
}
namespace System::Reflection {
class MemberFilter;
}
namespace System::Reflection {
class AssemblyName;
}
namespace System::Reflection {
class MemberInfo;
}
namespace System::Reflection {
struct ParameterModifier;
}
namespace System::Reflection {
struct GenericParameterAttributes;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System {
class Array;
}
namespace System::Reflection {
class Binder;
}
namespace System::Reflection {
class PropertyInfo;
}
namespace System::Reflection {
class MethodBase;
}
namespace System::Reflection {
class EventInfo;
}
namespace System::Reflection {
struct CallingConventions;
}
namespace System::Reflection {
class ConstructorInfo;
}
namespace System::Reflection {
class FieldInfo;
}
// Forward declare root types
namespace System {
class Type;
}
// Type: System::Type
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3466))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2493))
// CS Name: System.Type
class CORDL_TYPE Type : public System::Reflection::MemberInfo {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Type() = default;

// Ctor Parameters [CppParam { name: "", ty: "Type", modifiers: " const&", def_value: None }]
constexpr Type(Type const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Type", modifiers: "&&", def_value: None }]
constexpr Type(Type&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Type(void* ptr) noexcept : System::Reflection::MemberInfo(ptr) {
}


  constexpr Type& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Type& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Type& operator=(Type&& o) noexcept = default;
  constexpr Type& operator=(Type const& o) noexcept = default;
                


// Fields

static System::Reflection::Binder __declspec(property(get=__get_s_defaultBinder, put=__set_s_defaultBinder))  s_defaultBinder;

static void __set_s_defaultBinder(System::Reflection::Binder value) ;

static System::Reflection::Binder __get_s_defaultBinder() ;

static char16_t __declspec(property(get=__get_Delimiter, put=__set_Delimiter))  Delimiter;

static void __set_Delimiter(char16_t value) ;

static char16_t __get_Delimiter() ;

static ::ArrayW<System::Type> __declspec(property(get=__get_EmptyTypes, put=__set_EmptyTypes))  EmptyTypes;

static void __set_EmptyTypes(::ArrayW<System::Type> value) ;

static ::ArrayW<System::Type> __get_EmptyTypes() ;

static ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_Missing, put=__set_Missing))  Missing;

static void __set_Missing(::bs_hook::Il2CppWrapperType value) ;

static ::bs_hook::Il2CppWrapperType __get_Missing() ;

static System::Reflection::MemberFilter __declspec(property(get=__get_FilterAttribute, put=__set_FilterAttribute))  FilterAttribute;

static void __set_FilterAttribute(System::Reflection::MemberFilter value) ;

static System::Reflection::MemberFilter __get_FilterAttribute() ;

static System::Reflection::MemberFilter __declspec(property(get=__get_FilterName, put=__set_FilterName))  FilterName;

static void __set_FilterName(System::Reflection::MemberFilter value) ;

static System::Reflection::MemberFilter __get_FilterName() ;

static System::Reflection::MemberFilter __declspec(property(get=__get_FilterNameIgnoreCase, put=__set_FilterNameIgnoreCase))  FilterNameIgnoreCase;

static void __set_FilterNameIgnoreCase(System::Reflection::MemberFilter value) ;

static System::Reflection::MemberFilter __get_FilterNameIgnoreCase() ;

/// @brief Field DefaultLookup offset 0
static System::Reflection::BindingFlags const DefaultLookup;

 System::RuntimeTypeHandle __declspec(property(get=__get__impl, put=__set__impl))  _impl;

constexpr void __set__impl(System::RuntimeTypeHandle value) ;

constexpr System::RuntimeTypeHandle __get__impl() const;

/// @brief Field DefaultTypeNameWhenMissingMetadata offset 0
static constexpr ::ConstString  DefaultTypeNameWhenMissingMetadata{u"UnknownType"};


// Properties

 bool __declspec(property(get=get_IsSerializable))  IsSerializable;

 bool __declspec(property(get=get_ContainsGenericParameters))  ContainsGenericParameters;

 bool __declspec(property(get=get_IsVisible))  IsVisible;

 System::Reflection::MemberTypes __declspec(property(get=get_MemberType))  MemberType;

 ::StringW __declspec(property(get=get_Namespace))  Namespace;

 ::StringW __declspec(property(get=get_AssemblyQualifiedName))  AssemblyQualifiedName;

 ::StringW __declspec(property(get=get_FullName))  FullName;

 System::Reflection::Assembly __declspec(property(get=get_Assembly))  Assembly;

 System::Reflection::Module __declspec(property(get=get_Module))  Module;

 bool __declspec(property(get=get_IsNested))  IsNested;

 System::Type __declspec(property(get=get_DeclaringType))  DeclaringType;

 System::Reflection::MethodBase __declspec(property(get=get_DeclaringMethod))  DeclaringMethod;

 System::Type __declspec(property(get=get_ReflectedType))  ReflectedType;

 System::Type __declspec(property(get=get_UnderlyingSystemType))  UnderlyingSystemType;

 bool __declspec(property(get=get_IsArray))  IsArray;

 bool __declspec(property(get=get_IsByRef))  IsByRef;

 bool __declspec(property(get=get_IsPointer))  IsPointer;

 bool __declspec(property(get=get_IsConstructedGenericType))  IsConstructedGenericType;

 bool __declspec(property(get=get_IsGenericParameter))  IsGenericParameter;

 bool __declspec(property(get=get_IsGenericMethodParameter))  IsGenericMethodParameter;

 bool __declspec(property(get=get_IsGenericType))  IsGenericType;

 bool __declspec(property(get=get_IsGenericTypeDefinition))  IsGenericTypeDefinition;

 bool __declspec(property(get=get_IsSZArray))  IsSZArray;

 bool __declspec(property(get=get_IsVariableBoundArray))  IsVariableBoundArray;

 bool __declspec(property(get=get_HasElementType))  HasElementType;

 ::ArrayW<System::Type> __declspec(property(get=get_GenericTypeArguments))  GenericTypeArguments;

 int32_t __declspec(property(get=get_GenericParameterPosition))  GenericParameterPosition;

 System::Reflection::GenericParameterAttributes __declspec(property(get=get_GenericParameterAttributes))  GenericParameterAttributes;

 System::Reflection::TypeAttributes __declspec(property(get=get_Attributes))  Attributes;

 bool __declspec(property(get=get_IsAbstract))  IsAbstract;

 bool __declspec(property(get=get_IsSealed))  IsSealed;

 bool __declspec(property(get=get_IsClass))  IsClass;

 bool __declspec(property(get=get_IsNestedAssembly))  IsNestedAssembly;

 bool __declspec(property(get=get_IsNestedPublic))  IsNestedPublic;

 bool __declspec(property(get=get_IsNotPublic))  IsNotPublic;

 bool __declspec(property(get=get_IsPublic))  IsPublic;

 bool __declspec(property(get=get_IsExplicitLayout))  IsExplicitLayout;

 bool __declspec(property(get=get_IsCOMObject))  IsCOMObject;

 bool __declspec(property(get=get_IsContextful))  IsContextful;

 bool __declspec(property(get=get_IsEnum))  IsEnum;

 bool __declspec(property(get=get_IsMarshalByRef))  IsMarshalByRef;

 bool __declspec(property(get=get_IsPrimitive))  IsPrimitive;

 bool __declspec(property(get=get_IsValueType))  IsValueType;

 bool __declspec(property(get=get_IsSignatureType))  IsSignatureType;

 System::RuntimeTypeHandle __declspec(property(get=get_TypeHandle))  TypeHandle;

 System::Guid __declspec(property(get=get_GUID))  GUID;

 System::Type __declspec(property(get=get_BaseType))  BaseType;

static System::Reflection::Binder __declspec(property(get=get_DefaultBinder))  DefaultBinder;

 bool __declspec(property(get=get_IsSzArray))  IsSzArray;

 bool __declspec(property(get=get_IsInterface))  IsInterface;

 ::StringW __declspec(property(get=get_FullNameOrDefault))  FullNameOrDefault;

 ::StringW __declspec(property(get=get_InternalNameIfAvailable))  InternalNameIfAvailable;

 ::StringW __declspec(property(get=get_NameOrDefault))  NameOrDefault;


// Methods

/// @brief Method IsEnumDefined addr 0x2458fc8 size 0x38c virtual true final false
 bool IsEnumDefined(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method GetEnumName addr 0x2459740 size 0x1fc virtual true final false
 ::StringW GetEnumName(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method GetEnumNames addr 0x245993c size 0xa8 virtual true final false
 ::ArrayW<::StringW> GetEnumNames() ;

/// @brief Method GetEnumRawConstantValues addr 0x24595e0 size 0x24 virtual false final false
 System::Array GetEnumRawConstantValues() ;

/// @brief Method GetEnumData addr 0x24599e4 size 0x3bc virtual false final false
 void GetEnumData(ByRef<::ArrayW<::StringW>> enumNames, ByRef<System::Array> enumValues) ;

/// @brief Method BinarySearch addr 0x2459604 size 0x13c virtual false final false
static int32_t BinarySearch(System::Array array, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method IsIntegerType addr 0x2459360 size 0x280 virtual false final false
static bool IsIntegerType(System::Type t) ;

/// @brief Method get_IsSerializable addr 0x2459f74 size 0x13c virtual true final false
 bool get_IsSerializable() ;

/// @brief Method get_ContainsGenericParameters addr 0x245a148 size 0xf8 virtual true final false
 bool get_ContainsGenericParameters() ;

/// @brief Method GetRootElementType addr 0x245a250 size 0x50 virtual false final false
 System::Type GetRootElementType() ;

/// @brief Method get_IsVisible addr 0x245a2a0 size 0x160 virtual false final false
 bool get_IsVisible() ;

/// @brief Method IsSubclassOf addr 0x245a4c0 size 0xb8 virtual true final false
 bool IsSubclassOf(System::Type c) ;

/// @brief Method IsAssignableFrom addr 0x245a578 size 0x1a4 virtual true final false
 bool IsAssignableFrom(System::Type c) ;

/// @brief Method ImplementInterface addr 0x245a7e0 size 0x148 virtual false final false
 bool ImplementInterface(System::Type ifaceType) ;

/// @brief Method FilterAttributeImpl addr 0x245a928 size 0x358 virtual false final false
static bool FilterAttributeImpl(System::Reflection::MemberInfo m, ::bs_hook::Il2CppWrapperType filterCriteria) ;

/// @brief Method FilterNameImpl addr 0x245ac80 size 0x180 virtual false final false
static bool FilterNameImpl(System::Reflection::MemberInfo m, ::bs_hook::Il2CppWrapperType filterCriteria) ;

/// @brief Method FilterNameIgnoreCaseImpl addr 0x245ae00 size 0x194 virtual false final false
static bool FilterNameIgnoreCaseImpl(System::Reflection::MemberInfo m, ::bs_hook::Il2CppWrapperType filterCriteria) ;

// Ctor Parameters []
explicit Type() ;

/// @brief Method .ctor addr 0x245af94 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method get_MemberType addr 0x245af9c size 0x8 virtual true final false
 System::Reflection::MemberTypes get_MemberType() ;

/// @brief Method GetType addr 0x245afa4 size 0x8 virtual true final true
 System::Type GetType() ;

/// @brief Method get_Namespace addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_Namespace() ;

/// @brief Method get_AssemblyQualifiedName addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_AssemblyQualifiedName() ;

/// @brief Method get_FullName addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_FullName() ;

/// @brief Method get_Assembly addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Reflection::Assembly get_Assembly() ;

/// @brief Method get_Module addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Reflection::Module get_Module() ;

/// @brief Method get_IsNested addr 0x245a428 size 0x70 virtual false final false
 bool get_IsNested() ;

/// @brief Method get_DeclaringType addr 0x245afac size 0x8 virtual true final false
 System::Type get_DeclaringType() ;

/// @brief Method get_DeclaringMethod addr 0x245afb4 size 0x8 virtual true final false
 System::Reflection::MethodBase get_DeclaringMethod() ;

/// @brief Method get_ReflectedType addr 0x245afbc size 0x8 virtual true final false
 System::Type get_ReflectedType() ;

/// @brief Method get_UnderlyingSystemType addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Type get_UnderlyingSystemType() ;

/// @brief Method get_IsArray addr 0x245afc4 size 0x10 virtual true final true
 bool get_IsArray() ;

/// @brief Method IsArrayImpl addr 0x0 size 0xffffffffffffffff virtual true final false
 bool IsArrayImpl() ;

/// @brief Method get_IsByRef addr 0x245afd4 size 0x10 virtual true final true
 bool get_IsByRef() ;

/// @brief Method IsByRefImpl addr 0x0 size 0xffffffffffffffff virtual true final false
 bool IsByRefImpl() ;

/// @brief Method get_IsPointer addr 0x245afe4 size 0x10 virtual true final true
 bool get_IsPointer() ;

/// @brief Method IsPointerImpl addr 0x0 size 0xffffffffffffffff virtual true final false
 bool IsPointerImpl() ;

/// @brief Method get_IsConstructedGenericType addr 0x245aff4 size 0x24 virtual true final false
 bool get_IsConstructedGenericType() ;

/// @brief Method get_IsGenericParameter addr 0x245b074 size 0x8 virtual true final false
 bool get_IsGenericParameter() ;

/// @brief Method get_IsGenericMethodParameter addr 0x245b07c size 0x4c virtual true final false
 bool get_IsGenericMethodParameter() ;

/// @brief Method get_IsGenericType addr 0x245b0c8 size 0x8 virtual true final false
 bool get_IsGenericType() ;

/// @brief Method get_IsGenericTypeDefinition addr 0x245b0d0 size 0x8 virtual true final false
 bool get_IsGenericTypeDefinition() ;

/// @brief Method get_IsSZArray addr 0x245b0d8 size 0x24 virtual true final false
 bool get_IsSZArray() ;

/// @brief Method get_IsVariableBoundArray addr 0x245b0fc size 0x48 virtual true final false
 bool get_IsVariableBoundArray() ;

/// @brief Method get_HasElementType addr 0x245a240 size 0x10 virtual true final true
 bool get_HasElementType() ;

/// @brief Method HasElementTypeImpl addr 0x0 size 0xffffffffffffffff virtual true final false
 bool HasElementTypeImpl() ;

/// @brief Method GetElementType addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Type GetElementType() ;

/// @brief Method GetArrayRank addr 0x245b144 size 0x50 virtual true final false
 int32_t GetArrayRank() ;

/// @brief Method GetGenericTypeDefinition addr 0x245b194 size 0x50 virtual true final false
 System::Type GetGenericTypeDefinition() ;

/// @brief Method get_GenericTypeArguments addr 0x245b1e4 size 0xcc virtual true final false
 ::ArrayW<System::Type> get_GenericTypeArguments() ;

/// @brief Method GetGenericArguments addr 0x245b2b0 size 0x50 virtual true final false
 ::ArrayW<System::Type> GetGenericArguments() ;

/// @brief Method get_GenericParameterPosition addr 0x245b300 size 0x50 virtual true final false
 int32_t get_GenericParameterPosition() ;

/// @brief Method get_GenericParameterAttributes addr 0x245b350 size 0x40 virtual true final false
 System::Reflection::GenericParameterAttributes get_GenericParameterAttributes() ;

/// @brief Method GetGenericParameterConstraints addr 0x245b390 size 0x80 virtual true final false
 ::ArrayW<System::Type> GetGenericParameterConstraints() ;

/// @brief Method get_Attributes addr 0x245b410 size 0x10 virtual true final true
 System::Reflection::TypeAttributes get_Attributes() ;

/// @brief Method GetAttributeFlagsImpl addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Reflection::TypeAttributes GetAttributeFlagsImpl() ;

/// @brief Method get_IsAbstract addr 0x245b420 size 0x20 virtual true final true
 bool get_IsAbstract() ;

/// @brief Method get_IsSealed addr 0x245b440 size 0x20 virtual true final true
 bool get_IsSealed() ;

/// @brief Method get_IsClass addr 0x245b460 size 0x48 virtual true final true
 bool get_IsClass() ;

/// @brief Method get_IsNestedAssembly addr 0x245b4b8 size 0x28 virtual true final true
 bool get_IsNestedAssembly() ;

/// @brief Method get_IsNestedPublic addr 0x245a400 size 0x28 virtual true final true
 bool get_IsNestedPublic() ;

/// @brief Method get_IsNotPublic addr 0x245b4e0 size 0x24 virtual true final true
 bool get_IsNotPublic() ;

/// @brief Method get_IsPublic addr 0x245a498 size 0x28 virtual true final true
 bool get_IsPublic() ;

/// @brief Method get_IsExplicitLayout addr 0x245b504 size 0x28 virtual true final true
 bool get_IsExplicitLayout() ;

/// @brief Method get_IsCOMObject addr 0x245b52c size 0x10 virtual true final true
 bool get_IsCOMObject() ;

/// @brief Method IsCOMObjectImpl addr 0x0 size 0xffffffffffffffff virtual true final false
 bool IsCOMObjectImpl() ;

/// @brief Method get_IsContextful addr 0x245b53c size 0x10 virtual true final true
 bool get_IsContextful() ;

/// @brief Method IsContextfulImpl addr 0x245b54c size 0x90 virtual true final false
 bool IsContextfulImpl() ;

/// @brief Method get_IsEnum addr 0x245b5dc size 0x8c virtual true final false
 bool get_IsEnum() ;

/// @brief Method get_IsMarshalByRef addr 0x245b668 size 0x10 virtual true final true
 bool get_IsMarshalByRef() ;

/// @brief Method IsMarshalByRefImpl addr 0x245b678 size 0x90 virtual true final false
 bool IsMarshalByRefImpl() ;

/// @brief Method get_IsPrimitive addr 0x245b708 size 0x10 virtual true final true
 bool get_IsPrimitive() ;

/// @brief Method IsPrimitiveImpl addr 0x0 size 0xffffffffffffffff virtual true final false
 bool IsPrimitiveImpl() ;

/// @brief Method get_IsValueType addr 0x245b4a8 size 0x10 virtual true final true
 bool get_IsValueType() ;

/// @brief Method IsValueTypeImpl addr 0x245b718 size 0x8c virtual true final false
 bool IsValueTypeImpl() ;

/// @brief Method get_IsSignatureType addr 0x245b7a4 size 0x8 virtual true final false
 bool get_IsSignatureType() ;

/// @brief Method GetConstructor addr 0x245b7ac size 0x18 virtual true final true
 System::Reflection::ConstructorInfo GetConstructor(::ArrayW<System::Type> types) ;

/// @brief Method GetConstructor addr 0x245b7c4 size 0x10 virtual true final true
 System::Reflection::ConstructorInfo GetConstructor(System::Reflection::BindingFlags bindingAttr, System::Reflection::Binder binder, ::ArrayW<System::Type> types, ::ArrayW<System::Reflection::ParameterModifier> modifiers) ;

/// @brief Method GetConstructor addr 0x245b7d4 size 0x130 virtual true final true
 System::Reflection::ConstructorInfo GetConstructor(System::Reflection::BindingFlags bindingAttr, System::Reflection::Binder binder, System::Reflection::CallingConventions callConvention, ::ArrayW<System::Type> types, ::ArrayW<System::Reflection::ParameterModifier> modifiers) ;

/// @brief Method GetConstructorImpl addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Reflection::ConstructorInfo GetConstructorImpl(System::Reflection::BindingFlags bindingAttr, System::Reflection::Binder binder, System::Reflection::CallingConventions callConvention, ::ArrayW<System::Type> types, ::ArrayW<System::Reflection::ParameterModifier> modifiers) ;

/// @brief Method GetConstructors addr 0x245b904 size 0x14 virtual true final true
 ::ArrayW<System::Reflection::ConstructorInfo> GetConstructors() ;

/// @brief Method GetConstructors addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<System::Reflection::ConstructorInfo> GetConstructors(System::Reflection::BindingFlags bindingAttr) ;

/// @brief Method GetEvent addr 0x245b918 size 0x14 virtual true final true
 System::Reflection::EventInfo GetEvent(::StringW name) ;

/// @brief Method GetEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Reflection::EventInfo GetEvent(::StringW name, System::Reflection::BindingFlags bindingAttr) ;

/// @brief Method GetEvents addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<System::Reflection::EventInfo> GetEvents(System::Reflection::BindingFlags bindingAttr) ;

/// @brief Method GetField addr 0x245b92c size 0x14 virtual true final true
 System::Reflection::FieldInfo GetField(::StringW name) ;

/// @brief Method GetField addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Reflection::FieldInfo GetField(::StringW name, System::Reflection::BindingFlags bindingAttr) ;

/// @brief Method GetFields addr 0x245b940 size 0x14 virtual true final true
 ::ArrayW<System::Reflection::FieldInfo> GetFields() ;

/// @brief Method GetFields addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<System::Reflection::FieldInfo> GetFields(System::Reflection::BindingFlags bindingAttr) ;

/// @brief Method GetMember addr 0x245b954 size 0x14 virtual true final true
 ::ArrayW<System::Reflection::MemberInfo> GetMember(::StringW name) ;

/// @brief Method GetMember addr 0x245b968 size 0x18 virtual true final false
 ::ArrayW<System::Reflection::MemberInfo> GetMember(::StringW name, System::Reflection::BindingFlags bindingAttr) ;

/// @brief Method GetMember addr 0x245b980 size 0x50 virtual true final false
 ::ArrayW<System::Reflection::MemberInfo> GetMember(::StringW name, System::Reflection::MemberTypes type, System::Reflection::BindingFlags bindingAttr) ;

/// @brief Method GetMethod addr 0x245b9d0 size 0x8 virtual true final true
 System::Reflection::MethodInfo GetMethod(::StringW name) ;

/// @brief Method GetMethod addr 0x245b9d8 size 0x78 virtual true final true
 System::Reflection::MethodInfo GetMethod(::StringW name, System::Reflection::BindingFlags bindingAttr) ;

/// @brief Method GetMethod addr 0x245ba50 size 0x18 virtual true final true
 System::Reflection::MethodInfo GetMethod(::StringW name, ::ArrayW<System::Type> types) ;

/// @brief Method GetMethod addr 0x245ba68 size 0x18 virtual true final true
 System::Reflection::MethodInfo GetMethod(::StringW name, ::ArrayW<System::Type> types, ::ArrayW<System::Reflection::ParameterModifier> modifiers) ;

/// @brief Method GetMethod addr 0x245ba80 size 0x10 virtual true final true
 System::Reflection::MethodInfo GetMethod(::StringW name, System::Reflection::BindingFlags bindingAttr, System::Reflection::Binder binder, ::ArrayW<System::Type> types, ::ArrayW<System::Reflection::ParameterModifier> modifiers) ;

/// @brief Method GetMethod addr 0x245ba90 size 0x160 virtual true final true
 System::Reflection::MethodInfo GetMethod(::StringW name, System::Reflection::BindingFlags bindingAttr, System::Reflection::Binder binder, System::Reflection::CallingConventions callConvention, ::ArrayW<System::Type> types, ::ArrayW<System::Reflection::ParameterModifier> modifiers) ;

/// @brief Method GetMethodImpl addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Reflection::MethodInfo GetMethodImpl(::StringW name, System::Reflection::BindingFlags bindingAttr, System::Reflection::Binder binder, System::Reflection::CallingConventions callConvention, ::ArrayW<System::Type> types, ::ArrayW<System::Reflection::ParameterModifier> modifiers) ;

/// @brief Method GetMethods addr 0x245bbf0 size 0x14 virtual true final true
 ::ArrayW<System::Reflection::MethodInfo> GetMethods() ;

/// @brief Method GetMethods addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<System::Reflection::MethodInfo> GetMethods(System::Reflection::BindingFlags bindingAttr) ;

/// @brief Method GetNestedType addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Type GetNestedType(::StringW name, System::Reflection::BindingFlags bindingAttr) ;

/// @brief Method GetProperty addr 0x245bc04 size 0x8 virtual true final true
 System::Reflection::PropertyInfo GetProperty(::StringW name) ;

/// @brief Method GetProperty addr 0x245bc0c size 0x78 virtual true final true
 System::Reflection::PropertyInfo GetProperty(::StringW name, System::Reflection::BindingFlags bindingAttr) ;

/// @brief Method GetProperty addr 0x245bc84 size 0x100 virtual true final true
 System::Reflection::PropertyInfo GetProperty(::StringW name, System::Type returnType) ;

/// @brief Method GetProperty addr 0x245bd84 size 0x18 virtual true final true
 System::Reflection::PropertyInfo GetProperty(::StringW name, System::Type returnType, ::ArrayW<System::Type> types) ;

/// @brief Method GetProperty addr 0x245bd9c size 0x18 virtual true final true
 System::Reflection::PropertyInfo GetProperty(::StringW name, System::Type returnType, ::ArrayW<System::Type> types, ::ArrayW<System::Reflection::ParameterModifier> modifiers) ;

/// @brief Method GetProperty addr 0x245bdb4 size 0x90 virtual true final true
 System::Reflection::PropertyInfo GetProperty(::StringW name, System::Reflection::BindingFlags bindingAttr, System::Reflection::Binder binder, System::Type returnType, ::ArrayW<System::Type> types, ::ArrayW<System::Reflection::ParameterModifier> modifiers) ;

/// @brief Method GetPropertyImpl addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Reflection::PropertyInfo GetPropertyImpl(::StringW name, System::Reflection::BindingFlags bindingAttr, System::Reflection::Binder binder, System::Type returnType, ::ArrayW<System::Type> types, ::ArrayW<System::Reflection::ParameterModifier> modifiers) ;

/// @brief Method GetProperties addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<System::Reflection::PropertyInfo> GetProperties(System::Reflection::BindingFlags bindingAttr) ;

/// @brief Method get_TypeHandle addr 0x245be44 size 0x40 virtual true final false
 System::RuntimeTypeHandle get_TypeHandle() ;

/// @brief Method GetTypeHandle addr 0x245be84 size 0x7c virtual false final false
static System::RuntimeTypeHandle GetTypeHandle(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method GetTypeCode addr 0x245bf00 size 0x78 virtual false final false
static System::TypeCode GetTypeCode(System::Type type) ;

/// @brief Method GetTypeCodeImpl addr 0x245bf78 size 0xe8 virtual true final false
 System::TypeCode GetTypeCodeImpl() ;

/// @brief Method get_GUID addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Guid get_GUID() ;

/// @brief Method GetTypeFromCLSID addr 0x245c060 size 0x6c virtual false final false
static System::Type GetTypeFromCLSID(System::Guid clsid) ;

/// @brief Method get_BaseType addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Type get_BaseType() ;

/// @brief Method InvokeMember addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType InvokeMember(::StringW name, System::Reflection::BindingFlags invokeAttr, System::Reflection::Binder binder, ::bs_hook::Il2CppWrapperType target, ::ArrayW<::bs_hook::Il2CppWrapperType> args, ::ArrayW<System::Reflection::ParameterModifier> modifiers, System::Globalization::CultureInfo culture, ::ArrayW<::StringW> namedParameters) ;

/// @brief Method GetInterfaces addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<System::Type> GetInterfaces() ;

/// @brief Method IsInstanceOfType addr 0x245c14c size 0x3c virtual true final false
 bool IsInstanceOfType(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method IsEquivalentTo addr 0x245c188 size 0x64 virtual true final false
 bool IsEquivalentTo(System::Type other) ;

/// @brief Method GetEnumUnderlyingType addr 0x245c1ec size 0xf0 virtual true final false
 System::Type GetEnumUnderlyingType() ;

/// @brief Method GetEnumValues addr 0x245c2dc size 0x88 virtual true final false
 System::Array GetEnumValues() ;

/// @brief Method MakeArrayType addr 0x245c364 size 0x40 virtual true final false
 System::Type MakeArrayType() ;

/// @brief Method MakeArrayType addr 0x245c3a4 size 0x40 virtual true final false
 System::Type MakeArrayType(int32_t rank) ;

/// @brief Method MakeByRefType addr 0x245c3e4 size 0x40 virtual true final false
 System::Type MakeByRefType() ;

/// @brief Method MakeGenericType addr 0x245c424 size 0x50 virtual true final false
 System::Type MakeGenericType(::ArrayW<System::Type> typeArguments) ;

/// @brief Method MakePointerType addr 0x245c474 size 0x40 virtual true final false
 System::Type MakePointerType() ;

/// @brief Method MakeGenericSignatureType addr 0x245c4b4 size 0x74 virtual false final false
static System::Type MakeGenericSignatureType(System::Type genericTypeDefinition, ::ArrayW<System::Type> typeArguments) ;

/// @brief Method ToString addr 0x245c528 size 0x60 virtual true final false
 ::StringW ToString() ;

/// @brief Method Equals addr 0x245c588 size 0x9c virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method GetHashCode addr 0x245c624 size 0x48 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Equals addr 0x245c66c size 0xa0 virtual true final false
 bool Equals(System::Type o) ;

/// @brief Method get_DefaultBinder addr 0x245c70c size 0xd8 virtual false final false
static System::Reflection::Binder get_DefaultBinder() ;

/// @brief Method GetTypeFromHandle addr 0x244f938 size 0x94 virtual false final false
static System::Type GetTypeFromHandle(System::RuntimeTypeHandle handle) ;

/// @brief Method internal_from_handle addr 0x245c7e4 size 0x4 virtual false final false
static System::Type internal_from_handle(::cordl_internals::intptr_t handle) ;

/// @brief Method get_IsSzArray addr 0x245c7e8 size 0x8 virtual true final false
 bool get_IsSzArray() ;

/// @brief Method FormatTypeName addr 0x245c7f0 size 0x14 virtual false final false
 ::StringW FormatTypeName() ;

/// @brief Method FormatTypeName addr 0x245c804 size 0x40 virtual true final false
 ::StringW FormatTypeName(bool serialization) ;

/// @brief Method get_IsInterface addr 0x245a71c size 0xc4 virtual true final true
 bool get_IsInterface() ;

/// @brief Method GetType addr 0x245c844 size 0x8c virtual false final false
static System::Type GetType(::StringW typeName, bool throwOnError, bool ignoreCase) ;

/// @brief Method GetType addr 0x245c8d0 size 0x80 virtual false final false
static System::Type GetType(::StringW typeName, bool throwOnError) ;

/// @brief Method GetType addr 0x245c950 size 0x7c virtual false final false
static System::Type GetType(::StringW typeName) ;

/// @brief Method GetType addr 0x245c9cc size 0x28 virtual false final false
static System::Type GetType(::StringW typeName, System::Func_2<System::Reflection::AssemblyName,System::Reflection::Assembly> assemblyResolver, System::Func_4<System::Reflection::Assembly,::StringW,bool,System::Type> typeResolver, bool throwOnError) ;

/// @brief Method op_Equality addr 0x2459354 size 0xc virtual false final false
static bool op_Equality(System::Type left, System::Type right) ;

/// @brief Method op_Inequality addr 0x245a13c size 0xc virtual false final false
static bool op_Inequality(System::Type left, System::Type right) ;

/// @brief Method GetTypeFromCLSID addr 0x245c0cc size 0x80 virtual false final false
static System::Type GetTypeFromCLSID(System::Guid clsid, ::StringW server, bool throwOnError) ;

/// @brief Method get_FullNameOrDefault addr 0x245c9f4 size 0xf8 virtual false final false
 ::StringW get_FullNameOrDefault() ;

/// @brief Method IsRuntimeImplemented addr 0x245a0b0 size 0x8c virtual false final false
 bool IsRuntimeImplemented() ;

/// @brief Method InternalGetNameIfAvailable addr 0x245cb10 size 0xc virtual true final false
 ::StringW InternalGetNameIfAvailable(ByRef<System::Type> rootCauseForFailure) ;

/// @brief Method get_InternalNameIfAvailable addr 0x245caec size 0x24 virtual false final false
 ::StringW get_InternalNameIfAvailable() ;

/// @brief Method get_NameOrDefault addr 0x245cb1c size 0x70 virtual false final false
 ::StringW get_NameOrDefault() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::Type);
DEFINE_IL2CPP_ARG_TYPE(System::Type, "System", "Type");
