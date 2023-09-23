#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Type_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Reflection {
class Module;
}
namespace System::Reflection {
struct GenericParameterAttributes;
}
namespace System::Reflection {
class Assembly;
}
namespace System::Reflection {
class EventInfo;
}
namespace System::Reflection {
class FieldInfo;
}
namespace System::Reflection {
class MethodBase;
}
namespace System {
class Type;
}
namespace System::Reflection {
struct BindingFlags;
}
namespace System::Reflection {
struct MemberTypes;
}
namespace System::Reflection {
class Binder;
}
namespace System::Reflection {
struct ParameterModifier;
}
namespace System::Reflection {
struct TypeAttributes;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System {
struct Guid;
}
namespace System {
class Array;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System::Reflection {
struct CallingConventions;
}
namespace System::Reflection {
class MemberInfo;
}
namespace System::Reflection {
class ConstructorInfo;
}
namespace System::Reflection {
class PropertyInfo;
}
namespace System {
struct RuntimeTypeHandle;
}
namespace System {
struct TypeCode;
}
// Forward declare root types
namespace System::Reflection {
class SignatureType;
}
// Type: System.Reflection::SignatureType
namespace System::Reflection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2493))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3487))
// CS Name: System.Reflection.SignatureType
class CORDL_TYPE SignatureType : public System::Type {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~SignatureType() = default;

// Ctor Parameters [CppParam { name: "", ty: "SignatureType", modifiers: " const&", def_value: None }]
constexpr SignatureType(SignatureType const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SignatureType", modifiers: "&&", def_value: None }]
constexpr SignatureType(SignatureType&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SignatureType(void* ptr) noexcept : System::Type(ptr) {
}


  constexpr SignatureType& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SignatureType& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SignatureType& operator=(SignatureType&& o) noexcept = default;
  constexpr SignatureType& operator=(SignatureType const& o) noexcept = default;
                


// Properties

 bool __declspec(property(get=get_IsSignatureType))  IsSignatureType;

 bool __declspec(property(get=get_IsSZArray))  IsSZArray;

 bool __declspec(property(get=get_IsVariableBoundArray))  IsVariableBoundArray;

 bool __declspec(property(get=get_IsGenericType))  IsGenericType;

 bool __declspec(property(get=get_IsGenericTypeDefinition))  IsGenericTypeDefinition;

 bool __declspec(property(get=get_IsConstructedGenericType))  IsConstructedGenericType;

 bool __declspec(property(get=get_IsGenericParameter))  IsGenericParameter;

 bool __declspec(property(get=get_IsGenericMethodParameter))  IsGenericMethodParameter;

 bool __declspec(property(get=get_ContainsGenericParameters))  ContainsGenericParameters;

 System::Reflection::MemberTypes __declspec(property(get=get_MemberType))  MemberType;

 ::ArrayW<System::Type> __declspec(property(get=get_GenericTypeArguments))  GenericTypeArguments;

 int32_t __declspec(property(get=get_GenericParameterPosition))  GenericParameterPosition;

 System::Reflection::SignatureType __declspec(property(get=get_ElementType))  ElementType;

 System::Type __declspec(property(get=get_UnderlyingSystemType))  UnderlyingSystemType;

 ::StringW __declspec(property(get=get_Name))  Name;

 ::StringW __declspec(property(get=get_Namespace))  Namespace;

 ::StringW __declspec(property(get=get_FullName))  FullName;

 ::StringW __declspec(property(get=get_AssemblyQualifiedName))  AssemblyQualifiedName;

 System::Reflection::Assembly __declspec(property(get=get_Assembly))  Assembly;

 System::Reflection::Module __declspec(property(get=get_Module))  Module;

 System::Type __declspec(property(get=get_ReflectedType))  ReflectedType;

 System::Type __declspec(property(get=get_BaseType))  BaseType;

 int32_t __declspec(property(get=get_MetadataToken))  MetadataToken;

 System::Type __declspec(property(get=get_DeclaringType))  DeclaringType;

 System::Reflection::MethodBase __declspec(property(get=get_DeclaringMethod))  DeclaringMethod;

 System::Reflection::GenericParameterAttributes __declspec(property(get=get_GenericParameterAttributes))  GenericParameterAttributes;

 System::Guid __declspec(property(get=get_GUID))  GUID;

 bool __declspec(property(get=get_IsEnum))  IsEnum;

 bool __declspec(property(get=get_IsSerializable))  IsSerializable;

 System::RuntimeTypeHandle __declspec(property(get=get_TypeHandle))  TypeHandle;


// Methods

/// @brief Method get_IsSignatureType addr 0x237d7b8 size 0x8 virtual true final true
 bool get_IsSignatureType() ;

/// @brief Method HasElementTypeImpl addr 0x0 size 0xffffffffffffffff virtual true final false
 bool HasElementTypeImpl() ;

/// @brief Method IsArrayImpl addr 0x0 size 0xffffffffffffffff virtual true final false
 bool IsArrayImpl() ;

/// @brief Method get_IsSZArray addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_IsSZArray() ;

/// @brief Method get_IsVariableBoundArray addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_IsVariableBoundArray() ;

/// @brief Method IsByRefImpl addr 0x0 size 0xffffffffffffffff virtual true final false
 bool IsByRefImpl() ;

/// @brief Method IsPointerImpl addr 0x0 size 0xffffffffffffffff virtual true final false
 bool IsPointerImpl() ;

/// @brief Method get_IsGenericType addr 0x237d7c0 size 0x40 virtual true final true
 bool get_IsGenericType() ;

/// @brief Method get_IsGenericTypeDefinition addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_IsGenericTypeDefinition() ;

/// @brief Method get_IsConstructedGenericType addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_IsConstructedGenericType() ;

/// @brief Method get_IsGenericParameter addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_IsGenericParameter() ;

/// @brief Method get_IsGenericMethodParameter addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_IsGenericMethodParameter() ;

/// @brief Method get_ContainsGenericParameters addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_ContainsGenericParameters() ;

/// @brief Method get_MemberType addr 0x237d800 size 0x8 virtual true final true
 System::Reflection::MemberTypes get_MemberType() ;

/// @brief Method MakeArrayType addr 0x237d808 size 0x6c virtual true final true
 System::Type MakeArrayType() ;

/// @brief Method MakeArrayType addr 0x237d874 size 0xb4 virtual true final true
 System::Type MakeArrayType(int32_t rank) ;

/// @brief Method MakeByRefType addr 0x237d928 size 0x60 virtual true final true
 System::Type MakeByRefType() ;

/// @brief Method MakePointerType addr 0x237d988 size 0x60 virtual true final true
 System::Type MakePointerType() ;

/// @brief Method MakeGenericType addr 0x237d9e8 size 0x50 virtual true final true
 System::Type MakeGenericType(::ArrayW<System::Type> typeArguments) ;

/// @brief Method GetElementType addr 0x237da38 size 0x10 virtual true final true
 System::Type GetElementType() ;

/// @brief Method GetArrayRank addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetArrayRank() ;

/// @brief Method GetGenericTypeDefinition addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Type GetGenericTypeDefinition() ;

/// @brief Method get_GenericTypeArguments addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<System::Type> get_GenericTypeArguments() ;

/// @brief Method GetGenericArguments addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<System::Type> GetGenericArguments() ;

/// @brief Method get_GenericParameterPosition addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_GenericParameterPosition() ;

/// @brief Method get_ElementType addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Reflection::SignatureType get_ElementType() ;

/// @brief Method get_UnderlyingSystemType addr 0x237da48 size 0x4 virtual true final true
 System::Type get_UnderlyingSystemType() ;

/// @brief Method get_Name addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_Name() ;

/// @brief Method get_Namespace addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_Namespace() ;

/// @brief Method get_FullName addr 0x237da4c size 0x8 virtual true final true
 ::StringW get_FullName() ;

/// @brief Method get_AssemblyQualifiedName addr 0x237da54 size 0x8 virtual true final true
 ::StringW get_AssemblyQualifiedName() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString() ;

/// @brief Method get_Assembly addr 0x237da5c size 0x50 virtual true final true
 System::Reflection::Assembly get_Assembly() ;

/// @brief Method get_Module addr 0x237daac size 0x50 virtual true final true
 System::Reflection::Module get_Module() ;

/// @brief Method get_ReflectedType addr 0x237dafc size 0x50 virtual true final true
 System::Type get_ReflectedType() ;

/// @brief Method get_BaseType addr 0x237db4c size 0x50 virtual true final true
 System::Type get_BaseType() ;

/// @brief Method GetInterfaces addr 0x237db9c size 0x50 virtual true final true
 ::ArrayW<System::Type> GetInterfaces() ;

/// @brief Method IsAssignableFrom addr 0x237dbec size 0x50 virtual true final true
 bool IsAssignableFrom(System::Type c) ;

/// @brief Method get_MetadataToken addr 0x237dc3c size 0x50 virtual true final true
 int32_t get_MetadataToken() ;

/// @brief Method get_DeclaringType addr 0x237dc8c size 0x50 virtual true final true
 System::Type get_DeclaringType() ;

/// @brief Method get_DeclaringMethod addr 0x237dcdc size 0x50 virtual true final true
 System::Reflection::MethodBase get_DeclaringMethod() ;

/// @brief Method GetGenericParameterConstraints addr 0x237dd2c size 0x50 virtual true final true
 ::ArrayW<System::Type> GetGenericParameterConstraints() ;

/// @brief Method get_GenericParameterAttributes addr 0x237dd7c size 0x50 virtual true final true
 System::Reflection::GenericParameterAttributes get_GenericParameterAttributes() ;

/// @brief Method IsEnumDefined addr 0x237ddcc size 0x50 virtual true final true
 bool IsEnumDefined(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method GetEnumName addr 0x237de1c size 0x50 virtual true final true
 ::StringW GetEnumName(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method GetEnumNames addr 0x237de6c size 0x50 virtual true final true
 ::ArrayW<::StringW> GetEnumNames() ;

/// @brief Method GetEnumUnderlyingType addr 0x237debc size 0x50 virtual true final true
 System::Type GetEnumUnderlyingType() ;

/// @brief Method GetEnumValues addr 0x237df0c size 0x50 virtual true final true
 System::Array GetEnumValues() ;

/// @brief Method get_GUID addr 0x237df5c size 0x50 virtual true final true
 System::Guid get_GUID() ;

/// @brief Method GetTypeCodeImpl addr 0x237dfac size 0x50 virtual true final true
 System::TypeCode GetTypeCodeImpl() ;

/// @brief Method GetAttributeFlagsImpl addr 0x237dffc size 0x50 virtual true final true
 System::Reflection::TypeAttributes GetAttributeFlagsImpl() ;

/// @brief Method GetConstructors addr 0x237e04c size 0x50 virtual true final true
 ::ArrayW<System::Reflection::ConstructorInfo> GetConstructors(System::Reflection::BindingFlags bindingAttr) ;

/// @brief Method GetEvent addr 0x237e09c size 0x50 virtual true final true
 System::Reflection::EventInfo GetEvent(::StringW name, System::Reflection::BindingFlags bindingAttr) ;

/// @brief Method GetEvents addr 0x237e0ec size 0x50 virtual true final true
 ::ArrayW<System::Reflection::EventInfo> GetEvents(System::Reflection::BindingFlags bindingAttr) ;

/// @brief Method GetField addr 0x237e13c size 0x50 virtual true final true
 System::Reflection::FieldInfo GetField(::StringW name, System::Reflection::BindingFlags bindingAttr) ;

/// @brief Method GetFields addr 0x237e18c size 0x50 virtual true final true
 ::ArrayW<System::Reflection::FieldInfo> GetFields(System::Reflection::BindingFlags bindingAttr) ;

/// @brief Method GetMethods addr 0x237e1dc size 0x50 virtual true final true
 ::ArrayW<System::Reflection::MethodInfo> GetMethods(System::Reflection::BindingFlags bindingAttr) ;

/// @brief Method GetNestedType addr 0x237e22c size 0x50 virtual true final true
 System::Type GetNestedType(::StringW name, System::Reflection::BindingFlags bindingAttr) ;

/// @brief Method GetProperties addr 0x237e27c size 0x50 virtual true final true
 ::ArrayW<System::Reflection::PropertyInfo> GetProperties(System::Reflection::BindingFlags bindingAttr) ;

/// @brief Method InvokeMember addr 0x237e2cc size 0x50 virtual true final true
 ::bs_hook::Il2CppWrapperType InvokeMember(::StringW name, System::Reflection::BindingFlags invokeAttr, System::Reflection::Binder binder, ::bs_hook::Il2CppWrapperType target, ::ArrayW<::bs_hook::Il2CppWrapperType> args, ::ArrayW<System::Reflection::ParameterModifier> modifiers, System::Globalization::CultureInfo culture, ::ArrayW<::StringW> namedParameters) ;

/// @brief Method GetMethodImpl addr 0x237e31c size 0x50 virtual true final true
 System::Reflection::MethodInfo GetMethodImpl(::StringW name, System::Reflection::BindingFlags bindingAttr, System::Reflection::Binder binder, System::Reflection::CallingConventions callConvention, ::ArrayW<System::Type> types, ::ArrayW<System::Reflection::ParameterModifier> modifiers) ;

/// @brief Method GetPropertyImpl addr 0x237e36c size 0x50 virtual true final true
 System::Reflection::PropertyInfo GetPropertyImpl(::StringW name, System::Reflection::BindingFlags bindingAttr, System::Reflection::Binder binder, System::Type returnType, ::ArrayW<System::Type> types, ::ArrayW<System::Reflection::ParameterModifier> modifiers) ;

/// @brief Method GetMember addr 0x237e3bc size 0x50 virtual true final true
 ::ArrayW<System::Reflection::MemberInfo> GetMember(::StringW name, System::Reflection::BindingFlags bindingAttr) ;

/// @brief Method GetMember addr 0x237e40c size 0x50 virtual true final true
 ::ArrayW<System::Reflection::MemberInfo> GetMember(::StringW name, System::Reflection::MemberTypes type, System::Reflection::BindingFlags bindingAttr) ;

/// @brief Method GetCustomAttributes addr 0x237e45c size 0x50 virtual true final true
 ::ArrayW<::bs_hook::Il2CppWrapperType> GetCustomAttributes(bool inherit) ;

/// @brief Method GetCustomAttributes addr 0x237e4ac size 0x50 virtual true final true
 ::ArrayW<::bs_hook::Il2CppWrapperType> GetCustomAttributes(System::Type attributeType, bool inherit) ;

/// @brief Method IsDefined addr 0x237e4fc size 0x50 virtual true final true
 bool IsDefined(System::Type attributeType, bool inherit) ;

/// @brief Method GetConstructorImpl addr 0x237e54c size 0x50 virtual true final true
 System::Reflection::ConstructorInfo GetConstructorImpl(System::Reflection::BindingFlags bindingAttr, System::Reflection::Binder binder, System::Reflection::CallingConventions callConvention, ::ArrayW<System::Type> types, ::ArrayW<System::Reflection::ParameterModifier> modifiers) ;

/// @brief Method IsCOMObjectImpl addr 0x237e59c size 0x50 virtual true final true
 bool IsCOMObjectImpl() ;

/// @brief Method IsPrimitiveImpl addr 0x237e5ec size 0x50 virtual true final true
 bool IsPrimitiveImpl() ;

/// @brief Method IsContextfulImpl addr 0x237e63c size 0x50 virtual true final true
 bool IsContextfulImpl() ;

/// @brief Method get_IsEnum addr 0x237e68c size 0x50 virtual true final true
 bool get_IsEnum() ;

/// @brief Method IsEquivalentTo addr 0x237e6dc size 0x50 virtual true final true
 bool IsEquivalentTo(System::Type other) ;

/// @brief Method IsInstanceOfType addr 0x237e72c size 0x50 virtual true final true
 bool IsInstanceOfType(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method IsMarshalByRefImpl addr 0x237e77c size 0x50 virtual true final true
 bool IsMarshalByRefImpl() ;

/// @brief Method get_IsSerializable addr 0x237e7cc size 0x50 virtual true final true
 bool get_IsSerializable() ;

/// @brief Method IsSubclassOf addr 0x237e81c size 0x50 virtual true final true
 bool IsSubclassOf(System::Type c) ;

/// @brief Method IsValueTypeImpl addr 0x237e86c size 0x50 virtual true final true
 bool IsValueTypeImpl() ;

/// @brief Method get_TypeHandle addr 0x237e8bc size 0x50 virtual true final true
 System::RuntimeTypeHandle get_TypeHandle() ;

// Ctor Parameters []
explicit SignatureType() ;

/// @brief Method .ctor addr 0x237d064 size 0x58 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Reflection
NEED_NO_BOX(System::Reflection::SignatureType);
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::SignatureType, "System.Reflection", "SignatureType");
