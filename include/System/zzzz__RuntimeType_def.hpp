#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/Reflection/zzzz__TypeInfo_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System {
class Array;
}
namespace System::Reflection {
class RuntimePropertyInfo;
}
namespace System {
struct System__RuntimeType__MemberListType;
}
namespace System::Threading {
struct StackCrawlMark;
}
namespace System::Reflection {
class Assembly;
}
namespace System::Reflection {
class RuntimeConstructorInfo;
}
namespace System {
struct TypeCode;
}
namespace System::Reflection {
class MemberInfo;
}
namespace System::Reflection {
class EventInfo;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System {
struct Guid;
}
namespace System::Reflection {
struct BindingFlags;
}
namespace System::Reflection {
class FieldInfo;
}
namespace System::Reflection {
class RuntimeAssembly;
}
namespace System::Reflection {
class RuntimeEventInfo;
}
namespace System::Reflection {
struct MemberTypes;
}
namespace System {
class Type;
}
namespace System::Reflection {
class PropertyInfo;
}
namespace System::Reflection {
class RuntimeMethodInfo;
}
namespace System::Reflection {
struct ParameterModifier;
}
namespace System {
struct RuntimeTypeHandle;
}
namespace System::Reflection {
class Module;
}
namespace System::Reflection {
class RuntimeFieldInfo;
}
namespace System {
class MonoTypeInfo;
}
namespace System::Reflection {
class ConstructorInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
struct TypeNameKind;
}
namespace System::Reflection {
struct GenericParameterAttributes;
}
namespace System::Reflection {
struct TypeAttributes;
}
namespace System {
template<typename T>
struct System__RuntimeType__ListBuilder_1;
}
namespace System::Reflection {
class RuntimeModule;
}
namespace System::Reflection {
struct CallingConventions;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System {
class ICloneable;
}
namespace System::Reflection {
class MethodBase;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System {
template<typename T1,typename T2,typename TResult>
class Func_3;
}
namespace System::Reflection {
class Binder;
}
namespace System::Globalization {
class CultureInfo;
}
// Forward declare root types
namespace System {
struct System__RuntimeType__MemberListType;
}
namespace System {
class RuntimeType;
}
namespace System {
template<typename T>
struct System__RuntimeType__ListBuilder_1;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T>
struct System__RuntimeType__ListBuilder_1<T>;
}
// Type: ::MemberListType
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2564))
// CS Name: System.RuntimeType::MemberListType
struct CORDL_TYPE System__RuntimeType__MemberListType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr System__RuntimeType__MemberListType(int32_t value__) noexcept;


                    constexpr System__RuntimeType__MemberListType(System__RuntimeType__MemberListType const&) = default;
                    constexpr System__RuntimeType__MemberListType(System__RuntimeType__MemberListType&&) = default;
                    constexpr System__RuntimeType__MemberListType& operator=(System__RuntimeType__MemberListType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__RuntimeType__MemberListType& operator=(System__RuntimeType__MemberListType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__RuntimeType__MemberListType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __System__RuntimeType__MemberListType_Unwrapped : int32_t {
__All = 0,
__CaseSensitive = 1,
__CaseInsensitive = 2,
__HandleToInfo = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __System__RuntimeType__MemberListType_Unwrapped () const noexcept {
return std::bit_cast<__System__RuntimeType__MemberListType_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field All offset 0
static System::System__RuntimeType__MemberListType const All;

/// @brief Field CaseSensitive offset 0
static System::System__RuntimeType__MemberListType const CaseSensitive;

/// @brief Field CaseInsensitive offset 0
static System::System__RuntimeType__MemberListType const CaseInsensitive;

/// @brief Field HandleToInfo offset 0
static System::System__RuntimeType__MemberListType const HandleToInfo;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: ::ListBuilder`1
// Type: System::RuntimeType
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3494))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2566))
// CS Name: System.RuntimeType
class CORDL_TYPE RuntimeType : public System::Reflection::TypeInfo {
public:
// Declarations
template<typename T>
using ListBuilder_1 = System::System__RuntimeType__ListBuilder_1<T>;

using MemberListType = System::System__RuntimeType__MemberListType;

/// @brief Convert operator to System::Runtime::Serialization::ISerializable
constexpr operator  System::Runtime::Serialization::ISerializable() const noexcept;

/// @brief Convert operator to System::ICloneable
constexpr operator  System::ICloneable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~RuntimeType() = default;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeType", modifiers: " const&", def_value: None }]
constexpr RuntimeType(RuntimeType const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeType", modifiers: "&&", def_value: None }]
constexpr RuntimeType(RuntimeType&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RuntimeType(void* ptr) noexcept : System::Reflection::TypeInfo(ptr) {
}


  constexpr RuntimeType& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RuntimeType& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RuntimeType& operator=(RuntimeType&& o) noexcept = default;
  constexpr RuntimeType& operator=(RuntimeType const& o) noexcept = default;
                


// Fields

static System::RuntimeType __declspec(property(get=__get_ValueType, put=__set_ValueType))  ValueType;

static void __set_ValueType(System::RuntimeType value) ;

static System::RuntimeType __get_ValueType() ;

static System::RuntimeType __declspec(property(get=__get_EnumType, put=__set_EnumType))  EnumType;

static void __set_EnumType(System::RuntimeType value) ;

static System::RuntimeType __get_EnumType() ;

static System::RuntimeType __declspec(property(get=__get_ObjectType, put=__set_ObjectType))  ObjectType;

static void __set_ObjectType(System::RuntimeType value) ;

static System::RuntimeType __get_ObjectType() ;

static System::RuntimeType __declspec(property(get=__get_StringType, put=__set_StringType))  StringType;

static void __set_StringType(System::RuntimeType value) ;

static System::RuntimeType __get_StringType() ;

static System::RuntimeType __declspec(property(get=__get_DelegateType, put=__set_DelegateType))  DelegateType;

static void __set_DelegateType(System::RuntimeType value) ;

static System::RuntimeType __get_DelegateType() ;

static ::ArrayW<System::Type> __declspec(property(get=__get_s_SICtorParamTypes, put=__set_s_SICtorParamTypes))  s_SICtorParamTypes;

static void __set_s_SICtorParamTypes(::ArrayW<System::Type> value) ;

static ::ArrayW<System::Type> __get_s_SICtorParamTypes() ;

static System::Func_3<System::Type,::ArrayW<System::Type>,System::Type> __declspec(property(get=__get_MakeTypeBuilderInstantiation, put=__set_MakeTypeBuilderInstantiation))  MakeTypeBuilderInstantiation;

static void __set_MakeTypeBuilderInstantiation(System::Func_3<System::Type,::ArrayW<System::Type>,System::Type> value) ;

static System::Func_3<System::Type,::ArrayW<System::Type>,System::Type> __get_MakeTypeBuilderInstantiation() ;

/// @brief Field MemberBindingMask offset 0
static System::Reflection::BindingFlags const MemberBindingMask;

/// @brief Field InvocationMask offset 0
static System::Reflection::BindingFlags const InvocationMask;

/// @brief Field BinderNonCreateInstance offset 0
static System::Reflection::BindingFlags const BinderNonCreateInstance;

/// @brief Field BinderGetSetProperty offset 0
static System::Reflection::BindingFlags const BinderGetSetProperty;

/// @brief Field BinderSetInvokeProperty offset 0
static System::Reflection::BindingFlags const BinderSetInvokeProperty;

/// @brief Field BinderGetSetField offset 0
static System::Reflection::BindingFlags const BinderGetSetField;

/// @brief Field BinderSetInvokeField offset 0
static System::Reflection::BindingFlags const BinderSetInvokeField;

/// @brief Field BinderNonFieldGetSet offset 0
static System::Reflection::BindingFlags const BinderNonFieldGetSet;

/// @brief Field ClassicBindingMask offset 0
static System::Reflection::BindingFlags const ClassicBindingMask;

static System::RuntimeType __declspec(property(get=__get_s_typedRef, put=__set_s_typedRef))  s_typedRef;

static void __set_s_typedRef(System::RuntimeType value) ;

static System::RuntimeType __get_s_typedRef() ;

 System::MonoTypeInfo __declspec(property(get=__get_type_info, put=__set_type_info))  type_info;

constexpr void __set_type_info(System::MonoTypeInfo value) ;

constexpr System::MonoTypeInfo __get_type_info() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_GenericCache, put=__set_GenericCache))  GenericCache;

constexpr void __set_GenericCache(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_GenericCache() const;

 System::Reflection::RuntimeConstructorInfo __declspec(property(get=__get_m_serializationCtor, put=__set_m_serializationCtor))  m_serializationCtor;

constexpr void __set_m_serializationCtor(System::Reflection::RuntimeConstructorInfo value) ;

constexpr System::Reflection::RuntimeConstructorInfo __get_m_serializationCtor() const;

/// @brief Field GenericParameterCountAny offset 0
static constexpr int32_t  GenericParameterCountAny{-1};


// Properties

 System::Reflection::Module __declspec(property(get=get_Module))  Module;

 System::Reflection::Assembly __declspec(property(get=get_Assembly))  Assembly;

 System::RuntimeTypeHandle __declspec(property(get=get_TypeHandle))  TypeHandle;

 System::Type __declspec(property(get=get_BaseType))  BaseType;

 System::Type __declspec(property(get=get_UnderlyingSystemType))  UnderlyingSystemType;

 bool __declspec(property(get=get_IsEnum))  IsEnum;

 System::Reflection::GenericParameterAttributes __declspec(property(get=get_GenericParameterAttributes))  GenericParameterAttributes;

 bool __declspec(property(get=get_IsSzArray))  IsSzArray;

 bool __declspec(property(get=get_IsGenericTypeDefinition))  IsGenericTypeDefinition;

 bool __declspec(property(get=get_IsGenericParameter))  IsGenericParameter;

 int32_t __declspec(property(get=get_GenericParameterPosition))  GenericParameterPosition;

 bool __declspec(property(get=get_IsGenericType))  IsGenericType;

 bool __declspec(property(get=get_IsConstructedGenericType))  IsConstructedGenericType;

 System::Reflection::MemberTypes __declspec(property(get=get_MemberType))  MemberType;

 System::Type __declspec(property(get=get_ReflectedType))  ReflectedType;

 int32_t __declspec(property(get=get_MetadataToken))  MetadataToken;

 bool __declspec(property(get=get_ContainsGenericParameters))  ContainsGenericParameters;

 System::Guid __declspec(property(get=get_GUID))  GUID;

 System::Reflection::MethodBase __declspec(property(get=get_DeclaringMethod))  DeclaringMethod;

 ::StringW __declspec(property(get=get_AssemblyQualifiedName))  AssemblyQualifiedName;

 System::Type __declspec(property(get=get_DeclaringType))  DeclaringType;

 ::StringW __declspec(property(get=get_Name))  Name;

 ::StringW __declspec(property(get=get_Namespace))  Namespace;

 ::StringW __declspec(property(get=get_FullName))  FullName;

 bool __declspec(property(get=get_IsSZArray))  IsSZArray;


// Methods

/// @brief Method GetType addr 0x2479b70 size 0x6c virtual false final false
static System::RuntimeType GetType(::StringW typeName, bool throwOnError, bool ignoreCase, bool reflectionOnly, ByRef<System::Threading::StackCrawlMark> stackMark) ;

/// @brief Method ThrowIfTypeNeverValidGenericArgument addr 0x2479bdc size 0x164 virtual false final false
static void ThrowIfTypeNeverValidGenericArgument(System::RuntimeType type) ;

/// @brief Method SanityCheckGenericArguments addr 0x2479d40 size 0x224 virtual false final false
static void SanityCheckGenericArguments(::ArrayW<System::RuntimeType> genericArguments, ::ArrayW<System::RuntimeType> genericParamters) ;

/// @brief Method SplitName addr 0x2479f64 size 0xec virtual false final false
static void SplitName(::StringW fullname, ByRef<::StringW> name, ByRef<::StringW> ns) ;

/// @brief Method FilterPreCalculate addr 0x247a050 size 0x3c virtual false final false
static System::Reflection::BindingFlags FilterPreCalculate(bool isPublic, bool isInherited, bool isStatic) ;

/// @brief Method FilterHelper addr 0x247a08c size 0x120 virtual false final false
static void FilterHelper(System::Reflection::BindingFlags bindingFlags, ByRef<::StringW> name, bool allowPrefixLookup, ByRef<bool> prefixLookup, ByRef<bool> ignoreCase, ByRef<System::System__RuntimeType__MemberListType> listType) ;

/// @brief Method FilterHelper addr 0x247a1ac size 0x8c virtual false final false
static void FilterHelper(System::Reflection::BindingFlags bindingFlags, ByRef<::StringW> name, ByRef<bool> ignoreCase, ByRef<System::System__RuntimeType__MemberListType> listType) ;

/// @brief Method FilterApplyPrefixLookup addr 0x247a238 size 0x60 virtual false final false
static bool FilterApplyPrefixLookup(System::Reflection::MemberInfo memberInfo, ::StringW name, bool ignoreCase) ;

/// @brief Method FilterApplyBase addr 0x247a298 size 0x1dc virtual false final false
static bool FilterApplyBase(System::Reflection::MemberInfo memberInfo, System::Reflection::BindingFlags bindingFlags, bool isPublic, bool isNonProtectedInternal, bool isStatic, ::StringW name, bool prefixLookup) ;

/// @brief Method FilterApplyType addr 0x247a474 size 0x118 virtual false final false
static bool FilterApplyType(System::Type type, System::Reflection::BindingFlags bindingFlags, ::StringW name, bool prefixLookup, ::StringW ns) ;

/// @brief Method FilterApplyMethodInfo addr 0x247a58c size 0x88 virtual false final false
static bool FilterApplyMethodInfo(System::Reflection::RuntimeMethodInfo method, System::Reflection::BindingFlags bindingFlags, System::Reflection::CallingConventions callConv, ::ArrayW<System::Type> argumentTypes) ;

/// @brief Method FilterApplyConstructorInfo addr 0x247a86c size 0x88 virtual false final false
static bool FilterApplyConstructorInfo(System::Reflection::RuntimeConstructorInfo constructor, System::Reflection::BindingFlags bindingFlags, System::Reflection::CallingConventions callConv, ::ArrayW<System::Type> argumentTypes) ;

/// @brief Method FilterApplyMethodBase addr 0x247a614 size 0x258 virtual false final false
static bool FilterApplyMethodBase(System::Reflection::MethodBase methodBase, System::Reflection::BindingFlags methodFlags, System::Reflection::BindingFlags bindingFlags, System::Reflection::CallingConventions callConv, ::ArrayW<System::Type> argumentTypes) ;

static System::RuntimeType New_ctor() ;

/// @brief Method .ctor addr 0x247a8f4 size 0x48 virtual false final false
 void _ctor() ;

/// @brief Method GetMethodCandidates addr 0x247a93c size 0x258 virtual false final false
 System::System__RuntimeType__ListBuilder_1<System::Reflection::MethodInfo> GetMethodCandidates(::StringW name, System::Reflection::BindingFlags bindingAttr, System::Reflection::CallingConventions callConv, ::ArrayW<System::Type> types, int32_t genericParamCount, bool allowPrefixLookup) ;

/// @brief Method GetConstructorCandidates addr 0x247ae80 size 0x27c virtual false final false
 System::System__RuntimeType__ListBuilder_1<System::Reflection::ConstructorInfo> GetConstructorCandidates(::StringW name, System::Reflection::BindingFlags bindingAttr, System::Reflection::CallingConventions callConv, ::ArrayW<System::Type> types, bool allowPrefixLookup) ;

/// @brief Method GetPropertyCandidates addr 0x247b334 size 0x20c virtual false final false
 System::System__RuntimeType__ListBuilder_1<System::Reflection::PropertyInfo> GetPropertyCandidates(::StringW name, System::Reflection::BindingFlags bindingAttr, ::ArrayW<System::Type> types, bool allowPrefixLookup) ;

/// @brief Method GetEventCandidates addr 0x247b82c size 0x1d0 virtual false final false
 System::System__RuntimeType__ListBuilder_1<System::Reflection::EventInfo> GetEventCandidates(::StringW name, System::Reflection::BindingFlags bindingAttr, bool allowPrefixLookup) ;

/// @brief Method GetFieldCandidates addr 0x247bca8 size 0x1d4 virtual false final false
 System::System__RuntimeType__ListBuilder_1<System::Reflection::FieldInfo> GetFieldCandidates(::StringW name, System::Reflection::BindingFlags bindingAttr, bool allowPrefixLookup) ;

/// @brief Method GetNestedTypeCandidates addr 0x247c168 size 0x1bc virtual false final false
 System::System__RuntimeType__ListBuilder_1<System::Type> GetNestedTypeCandidates(::StringW fullname, System::Reflection::BindingFlags bindingAttr, bool allowPrefixLookup) ;

/// @brief Method GetMethods addr 0x247c6b4 size 0x8c virtual true final false
 ::ArrayW<System::Reflection::MethodInfo> GetMethods(System::Reflection::BindingFlags bindingAttr) ;

/// @brief Method GetConstructors addr 0x247c740 size 0x98 virtual true final false
 ::ArrayW<System::Reflection::ConstructorInfo> GetConstructors(System::Reflection::BindingFlags bindingAttr) ;

/// @brief Method GetProperties addr 0x247c7d8 size 0x84 virtual true final false
 ::ArrayW<System::Reflection::PropertyInfo> GetProperties(System::Reflection::BindingFlags bindingAttr) ;

/// @brief Method GetEvents addr 0x247c85c size 0x80 virtual true final false
 ::ArrayW<System::Reflection::EventInfo> GetEvents(System::Reflection::BindingFlags bindingAttr) ;

/// @brief Method GetFields addr 0x247c8dc size 0x80 virtual true final false
 ::ArrayW<System::Reflection::FieldInfo> GetFields(System::Reflection::BindingFlags bindingAttr) ;

/// @brief Method GetConstructorImpl addr 0x247c95c size 0x224 virtual true final false
 System::Reflection::ConstructorInfo GetConstructorImpl(System::Reflection::BindingFlags bindingAttr, System::Reflection::Binder binder, System::Reflection::CallingConventions callConvention, ::ArrayW<System::Type> types, ::ArrayW<System::Reflection::ParameterModifier> modifiers) ;

/// @brief Method GetPropertyImpl addr 0x247cb80 size 0x29c virtual true final false
 System::Reflection::PropertyInfo GetPropertyImpl(::StringW name, System::Reflection::BindingFlags bindingAttr, System::Reflection::Binder binder, System::Type returnType, ::ArrayW<System::Type> types, ::ArrayW<System::Reflection::ParameterModifier> modifiers) ;

/// @brief Method GetEvent addr 0x247ce1c size 0x1d0 virtual true final false
 System::Reflection::EventInfo GetEvent(::StringW name, System::Reflection::BindingFlags bindingAttr) ;

/// @brief Method GetField addr 0x247cfec size 0x2f4 virtual true final false
 System::Reflection::FieldInfo GetField(::StringW name, System::Reflection::BindingFlags bindingAttr) ;

/// @brief Method GetNestedType addr 0x247d2e0 size 0x200 virtual true final false
 System::Type GetNestedType(::StringW fullname, System::Reflection::BindingFlags bindingAttr) ;

/// @brief Method GetMember addr 0x247d4e0 size 0x4f0 virtual true final false
 ::ArrayW<System::Reflection::MemberInfo> GetMember(::StringW name, System::Reflection::MemberTypes type, System::Reflection::BindingFlags bindingAttr) ;

/// @brief Method get_Module addr 0x247d9d0 size 0x8 virtual true final false
 System::Reflection::Module get_Module() ;

/// @brief Method GetRuntimeModule addr 0x247d9d8 size 0x8 virtual false final false
 System::Reflection::RuntimeModule GetRuntimeModule() ;

/// @brief Method get_Assembly addr 0x247d9e0 size 0x8 virtual true final false
 System::Reflection::Assembly get_Assembly() ;

/// @brief Method GetRuntimeAssembly addr 0x247d9e8 size 0x8 virtual false final false
 System::Reflection::RuntimeAssembly GetRuntimeAssembly() ;

/// @brief Method get_TypeHandle addr 0x247d9f0 size 0x24 virtual true final false
 System::RuntimeTypeHandle get_TypeHandle() ;

/// @brief Method IsInstanceOfType addr 0x247da14 size 0x8 virtual true final false
 bool IsInstanceOfType(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method IsAssignableFrom addr 0x247da1c size 0xd8 virtual true final false
 bool IsAssignableFrom(System::Type c) ;

/// @brief Method IsEquivalentTo addr 0x247daf4 size 0xb0 virtual true final false
 bool IsEquivalentTo(System::Type other) ;

/// @brief Method get_BaseType addr 0x247dba4 size 0x4 virtual true final false
 System::Type get_BaseType() ;

/// @brief Method GetBaseType addr 0x247dba8 size 0x1e0 virtual false final false
 System::RuntimeType GetBaseType() ;

/// @brief Method get_UnderlyingSystemType addr 0x247dd88 size 0x4 virtual true final false
 System::Type get_UnderlyingSystemType() ;

/// @brief Method GetAttributeFlagsImpl addr 0x247dd8c size 0x8 virtual true final false
 System::Reflection::TypeAttributes GetAttributeFlagsImpl() ;

/// @brief Method IsContextfulImpl addr 0x247dd94 size 0x8 virtual true final false
 bool IsContextfulImpl() ;

/// @brief Method IsByRefImpl addr 0x247dd9c size 0x8 virtual true final false
 bool IsByRefImpl() ;

/// @brief Method IsPrimitiveImpl addr 0x247dda4 size 0x8 virtual true final false
 bool IsPrimitiveImpl() ;

/// @brief Method IsPointerImpl addr 0x247ddac size 0x8 virtual true final false
 bool IsPointerImpl() ;

/// @brief Method IsCOMObjectImpl addr 0x247ddb4 size 0xc virtual true final false
 bool IsCOMObjectImpl() ;

/// @brief Method IsValueTypeImpl addr 0x247ddc0 size 0x120 virtual true final false
 bool IsValueTypeImpl() ;

/// @brief Method get_IsEnum addr 0x247dee0 size 0x74 virtual true final false
 bool get_IsEnum() ;

/// @brief Method HasElementTypeImpl addr 0x247df54 size 0x8 virtual true final false
 bool HasElementTypeImpl() ;

/// @brief Method get_GenericParameterAttributes addr 0x247df5c size 0x88 virtual true final false
 System::Reflection::GenericParameterAttributes get_GenericParameterAttributes() ;

/// @brief Method get_IsSzArray addr 0x247e028 size 0x8 virtual true final false
 bool get_IsSzArray() ;

/// @brief Method IsArrayImpl addr 0x247e030 size 0x8 virtual true final false
 bool IsArrayImpl() ;

/// @brief Method GetArrayRank addr 0x247e038 size 0x8c virtual true final false
 int32_t GetArrayRank() ;

/// @brief Method GetElementType addr 0x247e0c4 size 0x8 virtual true final false
 System::Type GetElementType() ;

/// @brief Method GetEnumNames addr 0x247e0cc size 0x120 virtual true final false
 ::ArrayW<::StringW> GetEnumNames() ;

/// @brief Method GetEnumValues addr 0x247e1ec size 0x178 virtual true final false
 System::Array GetEnumValues() ;

/// @brief Method GetEnumUnderlyingType addr 0x247e364 size 0xd4 virtual true final false
 System::Type GetEnumUnderlyingType() ;

/// @brief Method IsEnumDefined addr 0x247e438 size 0x52c virtual true final false
 bool IsEnumDefined(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method GetEnumName addr 0x247e964 size 0x1f0 virtual true final false
 ::StringW GetEnumName(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method GetGenericArgumentsInternal addr 0x247eb54 size 0x70 virtual false final false
 ::ArrayW<System::RuntimeType> GetGenericArgumentsInternal() ;

/// @brief Method GetGenericArguments addr 0x247ebcc size 0x90 virtual true final false
 ::ArrayW<System::Type> GetGenericArguments() ;

/// @brief Method MakeGenericType addr 0x247ec5c size 0x508 virtual true final false
 System::Type MakeGenericType(::ArrayW<System::Type> instantiation) ;

/// @brief Method get_IsGenericTypeDefinition addr 0x247f168 size 0x8 virtual true final false
 bool get_IsGenericTypeDefinition() ;

/// @brief Method get_IsGenericParameter addr 0x247f170 size 0x8 virtual true final false
 bool get_IsGenericParameter() ;

/// @brief Method get_GenericParameterPosition addr 0x247f178 size 0x88 virtual true final false
 int32_t get_GenericParameterPosition() ;

/// @brief Method GetGenericTypeDefinition addr 0x247f204 size 0x8c virtual true final false
 System::Type GetGenericTypeDefinition() ;

/// @brief Method get_IsGenericType addr 0x247f290 size 0x8 virtual true final false
 bool get_IsGenericType() ;

/// @brief Method get_IsConstructedGenericType addr 0x247f298 size 0x48 virtual true final false
 bool get_IsConstructedGenericType() ;

/// @brief Method InvokeMember addr 0x247f2e0 size 0x11cc virtual true final false
 ::bs_hook::Il2CppWrapperType InvokeMember(::StringW name, System::Reflection::BindingFlags bindingFlags, System::Reflection::Binder binder, ::bs_hook::Il2CppWrapperType target, ::ArrayW<::bs_hook::Il2CppWrapperType> providedArgs, ::ArrayW<System::Reflection::ParameterModifier> modifiers, System::Globalization::CultureInfo culture, ::ArrayW<::StringW> namedParams) ;

/// @brief Method Equals addr 0x2480598 size 0xc virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method op_Equality addr 0x246abe0 size 0xc virtual false final false
static bool op_Equality(System::RuntimeType left, System::RuntimeType right) ;

/// @brief Method op_Inequality addr 0x246d794 size 0xc virtual false final false
static bool op_Inequality(System::RuntimeType left, System::RuntimeType right) ;

/// @brief Method Clone addr 0x24805a4 size 0x4 virtual true final true
 ::bs_hook::Il2CppWrapperType Clone() ;

/// @brief Method GetObjectData addr 0x24805a8 size 0x68 virtual true final true
 void GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method GetCustomAttributes addr 0x2480610 size 0xa0 virtual true final false
 ::ArrayW<::bs_hook::Il2CppWrapperType> GetCustomAttributes(bool inherit) ;

/// @brief Method GetCustomAttributes addr 0x24806b0 size 0x19c virtual true final false
 ::ArrayW<::bs_hook::Il2CppWrapperType> GetCustomAttributes(System::Type attributeType, bool inherit) ;

/// @brief Method IsDefined addr 0x248084c size 0x19c virtual true final false
 bool IsDefined(System::Type attributeType, bool inherit) ;

/// @brief Method FormatTypeName addr 0x24809e8 size 0x18c virtual true final false
 ::StringW FormatTypeName(bool serialization) ;

/// @brief Method get_MemberType addr 0x2480bcc size 0x44 virtual true final false
 System::Reflection::MemberTypes get_MemberType() ;

/// @brief Method get_ReflectedType addr 0x2480c10 size 0xc virtual true final false
 System::Type get_ReflectedType() ;

/// @brief Method get_MetadataToken addr 0x2480c1c size 0x8 virtual true final false
 int32_t get_MetadataToken() ;

/// @brief Method CreateInstanceCheckThis addr 0x2480c24 size 0x220 virtual false final false
 void CreateInstanceCheckThis() ;

/// @brief Method CreateInstanceImpl addr 0x246abec size 0x98c virtual false final false
 ::bs_hook::Il2CppWrapperType CreateInstanceImpl(System::Reflection::BindingFlags bindingAttr, System::Reflection::Binder binder, ::ArrayW<::bs_hook::Il2CppWrapperType> args, System::Globalization::CultureInfo culture, ::ArrayW<::bs_hook::Il2CppWrapperType> activationAttributes, ByRef<System::Threading::StackCrawlMark> stackMark) ;

/// @brief Method CreateInstanceDefaultCtor addr 0x246b740 size 0x12c virtual false final false
 ::bs_hook::Il2CppWrapperType CreateInstanceDefaultCtor(bool publicOnly, bool skipCheckThis, bool fillCache, bool wrapExceptions, ByRef<System::Threading::StackCrawlMark> stackMark) ;

/// @brief Method GetDefaultConstructor addr 0x2480e88 size 0x198 virtual false final false
 System::Reflection::RuntimeConstructorInfo GetDefaultConstructor() ;

/// @brief Method GetDefaultMemberName addr 0x24804ac size 0xec virtual false final false
 ::StringW GetDefaultMemberName() ;

/// @brief Method GetSerializationCtor addr 0x2481020 size 0x1e4 virtual false final false
 System::Reflection::RuntimeConstructorInfo GetSerializationCtor() ;

/// @brief Method CreateInstanceSlow addr 0x2480e4c size 0x3c virtual false final false
 ::bs_hook::Il2CppWrapperType CreateInstanceSlow(bool publicOnly, bool wrapExceptions, bool skipCheckThis, bool fillCache) ;

/// @brief Method CreateInstanceMono addr 0x2481204 size 0x2e0 virtual false final false
 ::bs_hook::Il2CppWrapperType CreateInstanceMono(bool nonPublic, bool wrapExceptions) ;

/// @brief Method CheckValue addr 0x24814e8 size 0x164 virtual false final false
 ::bs_hook::Il2CppWrapperType CheckValue(::bs_hook::Il2CppWrapperType value, System::Reflection::Binder binder, System::Globalization::CultureInfo culture, System::Reflection::BindingFlags invokeAttr) ;

/// @brief Method TryConvertToType addr 0x248164c size 0x25c virtual false final false
 ::bs_hook::Il2CppWrapperType TryConvertToType(::bs_hook::Il2CppWrapperType value, ByRef<bool> failed) ;

/// @brief Method IsConvertibleToPrimitiveType addr 0x24818a8 size 0x994 virtual false final false
static ::bs_hook::Il2CppWrapperType IsConvertibleToPrimitiveType(::bs_hook::Il2CppWrapperType value, System::Type targetType) ;

/// @brief Method GetCachedName addr 0x2480b74 size 0x58 virtual false final false
 ::StringW GetCachedName(System::TypeNameKind kind) ;

/// @brief Method make_array_type addr 0x248223c size 0x4 virtual false final false
 System::Type make_array_type(int32_t rank) ;

/// @brief Method MakeArrayType addr 0x2482240 size 0x8 virtual true final false
 System::Type MakeArrayType() ;

/// @brief Method MakeArrayType addr 0x2482248 size 0x50 virtual true final false
 System::Type MakeArrayType(int32_t rank) ;

/// @brief Method make_byref_type addr 0x2482298 size 0x4 virtual false final false
 System::Type make_byref_type() ;

/// @brief Method MakeByRefType addr 0x248229c size 0x6c virtual true final false
 System::Type MakeByRefType() ;

/// @brief Method MakePointerType addr 0x2482308 size 0x4 virtual false final false
static System::Type MakePointerType(System::Type type) ;

/// @brief Method MakePointerType addr 0x248230c size 0xec virtual true final false
 System::Type MakePointerType() ;

/// @brief Method get_ContainsGenericParameters addr 0x24823f8 size 0xfc virtual true final false
 bool get_ContainsGenericParameters() ;

/// @brief Method GetGenericParameterConstraints addr 0x24824f4 size 0xfc virtual true final false
 ::ArrayW<System::Type> GetGenericParameterConstraints() ;

/// @brief Method CreateInstanceForAnotherGenericParameter addr 0x24825f0 size 0x114 virtual false final false
static ::bs_hook::Il2CppWrapperType CreateInstanceForAnotherGenericParameter(System::Type genericType, System::RuntimeType genericArgument) ;

/// @brief Method MakeGenericType addr 0x247f164 size 0x4 virtual false final false
static System::Type MakeGenericType(System::Type gt, ::ArrayW<System::Type> types) ;

/// @brief Method GetMethodsByName_native addr 0x2482704 size 0x4 virtual false final false
 ::cordl_internals::intptr_t GetMethodsByName_native(::cordl_internals::intptr_t namePtr, System::Reflection::BindingFlags bindingAttr, System::System__RuntimeType__MemberListType listType) ;

/// @brief Method GetMethodsByName addr 0x247ab94 size 0x2ec virtual false final false
 ::ArrayW<System::Reflection::RuntimeMethodInfo> GetMethodsByName(::StringW name, System::Reflection::BindingFlags bindingAttr, System::System__RuntimeType__MemberListType listType, System::RuntimeType reflectedType) ;

/// @brief Method GetPropertiesByName_native addr 0x2482708 size 0x4 virtual false final false
 ::cordl_internals::intptr_t GetPropertiesByName_native(::cordl_internals::intptr_t name, System::Reflection::BindingFlags bindingAttr, System::System__RuntimeType__MemberListType listType) ;

/// @brief Method GetConstructors_native addr 0x248270c size 0x4 virtual false final false
 ::cordl_internals::intptr_t GetConstructors_native(System::Reflection::BindingFlags bindingAttr) ;

/// @brief Method GetConstructors_internal addr 0x247b0fc size 0x238 virtual false final false
 ::ArrayW<System::Reflection::RuntimeConstructorInfo> GetConstructors_internal(System::Reflection::BindingFlags bindingAttr, System::RuntimeType reflectedType) ;

/// @brief Method GetPropertiesByName addr 0x247b540 size 0x2ec virtual false final false
 ::ArrayW<System::Reflection::RuntimePropertyInfo> GetPropertiesByName(::StringW name, System::Reflection::BindingFlags bindingAttr, System::System__RuntimeType__MemberListType listType, System::RuntimeType reflectedType) ;

/// @brief Method GetGUID addr 0x2482710 size 0x4 virtual false final false
static void GetGUID(System::Type type, ::ArrayW<uint8_t> guid) ;

/// @brief Method get_GUID addr 0x2482714 size 0xac virtual true final false
 System::Guid get_GUID() ;

/// @brief Method GetTypeFromCLSIDImpl addr 0x24827c0 size 0x50 virtual false final false
static System::Type GetTypeFromCLSIDImpl(System::Guid clsid, ::StringW server, bool throwOnError) ;

/// @brief Method GetTypeCodeImpl addr 0x2482810 size 0x54 virtual true final false
 System::TypeCode GetTypeCodeImpl() ;

/// @brief Method GetTypeCodeImplInternal addr 0x2482864 size 0x4 virtual false final false
static System::TypeCode GetTypeCodeImplInternal(System::Type type) ;

/// @brief Method ToString addr 0x2482868 size 0xc virtual true final false
 ::StringW ToString() ;

/// @brief Method IsGenericCOMObjectImpl addr 0x2480e44 size 0x8 virtual false final false
 bool IsGenericCOMObjectImpl() ;

/// @brief Method CreateInstanceInternal addr 0x24814e4 size 0x4 virtual false final false
static ::bs_hook::Il2CppWrapperType CreateInstanceInternal(System::Type type) ;

/// @brief Method get_DeclaringMethod addr 0x2482880 size 0x4 virtual true final false
 System::Reflection::MethodBase get_DeclaringMethod() ;

/// @brief Method getFullName addr 0x2482874 size 0xc virtual false final false
 ::StringW getFullName(bool full_name, bool assembly_qualified) ;

/// @brief Method GetGenericArgumentsInternal addr 0x247ebc4 size 0x8 virtual false final false
 ::ArrayW<System::Type> GetGenericArgumentsInternal(bool runtimeArray) ;

/// @brief Method GetGenericParameterAttributes addr 0x247dfe4 size 0x44 virtual false final false
 System::Reflection::GenericParameterAttributes GetGenericParameterAttributes() ;

/// @brief Method GetGenericParameterPosition addr 0x247f200 size 0x4 virtual false final false
 int32_t GetGenericParameterPosition() ;

/// @brief Method GetEvents_native addr 0x2482884 size 0x4 virtual false final false
 ::cordl_internals::intptr_t GetEvents_native(::cordl_internals::intptr_t name, System::System__RuntimeType__MemberListType listType) ;

/// @brief Method GetFields_native addr 0x2482888 size 0x4 virtual false final false
 ::cordl_internals::intptr_t GetFields_native(::cordl_internals::intptr_t name, System::Reflection::BindingFlags bindingAttr, System::System__RuntimeType__MemberListType listType) ;

/// @brief Method GetFields_internal addr 0x247be7c size 0x2ec virtual false final false
 ::ArrayW<System::Reflection::RuntimeFieldInfo> GetFields_internal(::StringW name, System::Reflection::BindingFlags bindingAttr, System::System__RuntimeType__MemberListType listType, System::RuntimeType reflectedType) ;

/// @brief Method GetEvents_internal addr 0x247b9fc size 0x2ac virtual false final false
 ::ArrayW<System::Reflection::RuntimeEventInfo> GetEvents_internal(::StringW name, System::Reflection::BindingFlags bindingAttr, System::System__RuntimeType__MemberListType listType, System::RuntimeType reflectedType) ;

/// @brief Method GetInterfaces addr 0x248288c size 0x4 virtual true final false
 ::ArrayW<System::Type> GetInterfaces() ;

/// @brief Method GetNestedTypes_native addr 0x2482890 size 0x4 virtual false final false
 ::cordl_internals::intptr_t GetNestedTypes_native(::cordl_internals::intptr_t name, System::Reflection::BindingFlags bindingAttr, System::System__RuntimeType__MemberListType listType) ;

/// @brief Method GetNestedTypes_internal addr 0x247c324 size 0x390 virtual false final false
 ::ArrayW<System::RuntimeType> GetNestedTypes_internal(::StringW displayName, System::Reflection::BindingFlags bindingAttr, System::System__RuntimeType__MemberListType listType) ;

/// @brief Method get_AssemblyQualifiedName addr 0x2482894 size 0xc virtual true final false
 ::StringW get_AssemblyQualifiedName() ;

/// @brief Method get_DeclaringType addr 0x24828a0 size 0x4 virtual true final false
 System::Type get_DeclaringType() ;

/// @brief Method get_Name addr 0x24828a4 size 0x4 virtual true final false
 ::StringW get_Name() ;

/// @brief Method get_Namespace addr 0x24828a8 size 0x4 virtual true final false
 ::StringW get_Namespace() ;

/// @brief Method GetHashCode addr 0x24828ac size 0xcc virtual true final false
 int32_t GetHashCode() ;

/// @brief Method get_FullName addr 0x2482978 size 0xc8 virtual true final false
 ::StringW get_FullName() ;

/// @brief Method get_IsSZArray addr 0x2482a40 size 0x58 virtual true final false
 bool get_IsSZArray() ;

/// @brief Method IsSubclassOf addr 0x2482a98 size 0xf8 virtual true final false
 bool IsSubclassOf(System::Type type) ;

/// @brief Method GetMethodImpl addr 0x2482b90 size 0x30 virtual true final false
 System::Reflection::MethodInfo GetMethodImpl(::StringW name, System::Reflection::BindingFlags bindingAttr, System::Reflection::Binder binder, System::Reflection::CallingConventions callConv, ::ArrayW<System::Type> types, ::ArrayW<System::Reflection::ParameterModifier> modifiers) ;

/// @brief Method GetMethodImplCommon addr 0x2482bc0 size 0x2b8 virtual false final false
 System::Reflection::MethodInfo GetMethodImplCommon(::StringW name, int32_t genericParameterCount, System::Reflection::BindingFlags bindingAttr, System::Reflection::Binder binder, System::Reflection::CallingConventions callConv, ::ArrayW<System::Type> types, ::ArrayW<System::Reflection::ParameterModifier> modifiers) ;

/// @brief Method GetMethodCandidates addr 0x2482e78 size 0x20c virtual false final false
 System::System__RuntimeType__ListBuilder_1<System::Reflection::MethodInfo> GetMethodCandidates(::StringW name, int32_t genericParameterCount, System::Reflection::BindingFlags bindingAttr, System::Reflection::CallingConventions callConv, ::ArrayW<System::Type> types, bool allowPrefixLookup) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: ::ListBuilder`1
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(2565))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2565), inst: 2 })
// CS Name: System.RuntimeType::ListBuilder`1
struct CORDL_TYPE System__RuntimeType__ListBuilder_1<T> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "_items", ty: "::ArrayW<T>", modifiers: "", def_value: None }, CppParam { name: "_item", ty: "T", modifiers: "", def_value: None }, CppParam { name: "_count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_capacity", ty: "int32_t", modifiers: "", def_value: None }]
constexpr System__RuntimeType__ListBuilder_1(::ArrayW<T> _items, T _item, int32_t _count, int32_t _capacity) noexcept;


                    constexpr System__RuntimeType__ListBuilder_1(System__RuntimeType__ListBuilder_1 const&) = default;
                    constexpr System__RuntimeType__ListBuilder_1(System__RuntimeType__ListBuilder_1&&) = default;
                    constexpr System__RuntimeType__ListBuilder_1& operator=(System__RuntimeType__ListBuilder_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__RuntimeType__ListBuilder_1& operator=(System__RuntimeType__ListBuilder_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__RuntimeType__ListBuilder_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<T> __declspec(property(get=__get__items, put=__set__items))  _items;

constexpr void __set__items(::ArrayW<T> value) ;

constexpr ::ArrayW<T> __get__items() const;

 T __declspec(property(get=__get__item, put=__set__item))  _item;

constexpr void __set__item(T value) ;

constexpr T __get__item() const;

 int32_t __declspec(property(get=__get__count, put=__set__count))  _count;

constexpr void __set__count(int32_t value) ;

constexpr int32_t __get__count() const;

 int32_t __declspec(property(get=__get__capacity, put=__set__capacity))  _capacity;

constexpr void __set__capacity(int32_t value) ;

constexpr int32_t __get__capacity() const;


// Properties

 T __declspec(property(get=get_Item))  Item;

 int32_t __declspec(property(get=get_Count))  Count;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t capacity) ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 T get_Item(int32_t index) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<T> ToArray() ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
 void CopyTo(::ArrayW<::bs_hook::Il2CppWrapperType> array, int32_t index) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Count() ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
 void Add(T item) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(System::System__RuntimeType__MemberListType, "System", "RuntimeType/MemberListType");
NEED_NO_BOX(System::RuntimeType);
DEFINE_IL2CPP_ARG_TYPE(System::RuntimeType, "System", "RuntimeType");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(System::System__RuntimeType__ListBuilder_1, "System", "RuntimeType/ListBuilder`1");
