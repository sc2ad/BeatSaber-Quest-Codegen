#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Reflection/zzzz__RtFieldInfo_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Reflection {
class FieldInfo;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Reflection {
struct FieldAttributes;
}
namespace System::Reflection {
class RuntimeModule;
}
namespace System {
class RuntimeType;
}
namespace System::Reflection {
class Module;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System {
struct RuntimeFieldHandle;
}
namespace System::Reflection {
class Binder;
}
namespace System::Reflection {
struct BindingFlags;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System {
class Type;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::Reflection {
class RuntimeFieldInfo;
}
// Type: System.Reflection::RuntimeFieldInfo
namespace System::Reflection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3512))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3513))
// CS Name: System.Reflection.RuntimeFieldInfo
class CORDL_TYPE RuntimeFieldInfo : public System::Reflection::RtFieldInfo {
public:
// Declarations
/// @brief Convert operator to System::Runtime::Serialization::ISerializable
constexpr operator  System::Runtime::Serialization::ISerializable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~RuntimeFieldInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeFieldInfo", modifiers: " const&", def_value: None }]
constexpr RuntimeFieldInfo(RuntimeFieldInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeFieldInfo", modifiers: "&&", def_value: None }]
constexpr RuntimeFieldInfo(RuntimeFieldInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RuntimeFieldInfo(void* ptr) noexcept : System::Reflection::RtFieldInfo(ptr) {
}


  constexpr RuntimeFieldInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RuntimeFieldInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RuntimeFieldInfo& operator=(RuntimeFieldInfo&& o) noexcept = default;
  constexpr RuntimeFieldInfo& operator=(RuntimeFieldInfo const& o) noexcept = default;
                


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_klass, put=__set_klass))  klass;

constexpr void __set_klass(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_klass() const;

 System::RuntimeFieldHandle __declspec(property(get=__get_fhandle, put=__set_fhandle))  fhandle;

constexpr void __set_fhandle(System::RuntimeFieldHandle value) ;

constexpr System::RuntimeFieldHandle __get_fhandle() const;

 ::StringW __declspec(property(get=__get_name, put=__set_name))  name;

constexpr void __set_name(::StringW value) ;

constexpr ::StringW __get_name() const;

 System::Type __declspec(property(get=__get_type, put=__set_type))  type;

constexpr void __set_type(System::Type value) ;

constexpr System::Type __get_type() const;

 System::Reflection::FieldAttributes __declspec(property(get=__get_attrs, put=__set_attrs))  attrs;

constexpr void __set_attrs(System::Reflection::FieldAttributes value) ;

constexpr System::Reflection::FieldAttributes __get_attrs() const;


// Properties

 System::Reflection::BindingFlags __declspec(property(get=get_BindingFlags))  BindingFlags;

 System::Reflection::Module __declspec(property(get=get_Module))  Module;

 System::RuntimeType __declspec(property(get=get_ReflectedTypeInternal))  ReflectedTypeInternal;

 System::Reflection::FieldAttributes __declspec(property(get=get_Attributes))  Attributes;

 System::RuntimeFieldHandle __declspec(property(get=get_FieldHandle))  FieldHandle;

 System::Type __declspec(property(get=get_FieldType))  FieldType;

 System::Type __declspec(property(get=get_ReflectedType))  ReflectedType;

 System::Type __declspec(property(get=get_DeclaringType))  DeclaringType;

 ::StringW __declspec(property(get=get_Name))  Name;

 int32_t __declspec(property(get=get_MetadataToken))  MetadataToken;


// Methods

/// @brief Method get_BindingFlags addr 0x2385a88 size 0x8 virtual false final false
 System::Reflection::BindingFlags get_BindingFlags() ;

/// @brief Method get_Module addr 0x2385a90 size 0x4 virtual true final false
 System::Reflection::Module get_Module() ;

/// @brief Method GetDeclaringTypeInternal addr 0x2385ab0 size 0x84 virtual false final false
 System::RuntimeType GetDeclaringTypeInternal() ;

/// @brief Method get_ReflectedTypeInternal addr 0x2385b34 size 0x84 virtual false final false
 System::RuntimeType get_ReflectedTypeInternal() ;

/// @brief Method GetRuntimeModule addr 0x2385a94 size 0x1c virtual false final false
 System::Reflection::RuntimeModule GetRuntimeModule() ;

/// @brief Method GetObjectData addr 0x2385bb8 size 0xbc virtual true final true
 void GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method UnsafeGetValue addr 0x2385c74 size 0x4 virtual true final false
 ::bs_hook::Il2CppWrapperType UnsafeGetValue(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method CheckConsistency addr 0x2385c78 size 0x180 virtual true final false
 void CheckConsistency(::bs_hook::Il2CppWrapperType target) ;

/// @brief Method UnsafeSetValue addr 0x2385df8 size 0x64 virtual true final false
 void UnsafeSetValue(::bs_hook::Il2CppWrapperType obj, ::bs_hook::Il2CppWrapperType value, System::Reflection::BindingFlags invokeAttr, System::Reflection::Binder binder, System::Globalization::CultureInfo culture) ;

/// @brief Method SetValueDirect addr 0x2385e5c size 0x164 virtual true final false
 void SetValueDirect(/* UNKNOWN TYPE! Il2CppType { data: TypeDefinitionIndex(TypeDefinitionIndex(2571)), attrs: 0, ty: Typedbyref, byref: true, pinned: true, valuetype: true } */ obj, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method get_Attributes addr 0x2385fc0 size 0x8 virtual true final false
 System::Reflection::FieldAttributes get_Attributes() ;

/// @brief Method get_FieldHandle addr 0x2385fc8 size 0x8 virtual true final false
 System::RuntimeFieldHandle get_FieldHandle() ;

/// @brief Method ResolveType addr 0x2385fd0 size 0x4 virtual false final false
 System::Type ResolveType() ;

/// @brief Method get_FieldType addr 0x2385fd4 size 0x7c virtual true final false
 System::Type get_FieldType() ;

/// @brief Method GetParentType addr 0x2386050 size 0x8 virtual false final false
 System::Type GetParentType(bool declaring) ;

/// @brief Method get_ReflectedType addr 0x2386058 size 0x8 virtual true final false
 System::Type get_ReflectedType() ;

/// @brief Method get_DeclaringType addr 0x2386060 size 0x8 virtual true final false
 System::Type get_DeclaringType() ;

/// @brief Method get_Name addr 0x2386068 size 0x8 virtual true final false
 ::StringW get_Name() ;

/// @brief Method IsDefined addr 0x2386070 size 0x70 virtual true final false
 bool IsDefined(System::Type attributeType, bool inherit) ;

/// @brief Method GetCustomAttributes addr 0x23860e0 size 0x68 virtual true final false
 ::ArrayW<::bs_hook::Il2CppWrapperType> GetCustomAttributes(bool inherit) ;

/// @brief Method GetCustomAttributes addr 0x2386148 size 0x70 virtual true final false
 ::ArrayW<::bs_hook::Il2CppWrapperType> GetCustomAttributes(System::Type attributeType, bool inherit) ;

/// @brief Method GetFieldOffset addr 0x23861b8 size 0x4 virtual true final false
 int32_t GetFieldOffset() ;

/// @brief Method GetValueInternal addr 0x23861bc size 0x4 virtual false final false
 ::bs_hook::Il2CppWrapperType GetValueInternal(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetValue addr 0x23861c0 size 0x1a0 virtual true final false
 ::bs_hook::Il2CppWrapperType GetValue(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method ToString addr 0x23863e0 size 0x68 virtual true final false
 ::StringW ToString() ;

/// @brief Method SetValueInternal addr 0x2386448 size 0x4 virtual false final false
static void SetValueInternal(System::Reflection::FieldInfo fi, ::bs_hook::Il2CppWrapperType obj, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method SetValue addr 0x238644c size 0x2c4 virtual true final false
 void SetValue(::bs_hook::Il2CppWrapperType obj, ::bs_hook::Il2CppWrapperType val, System::Reflection::BindingFlags invokeAttr, System::Reflection::Binder binder, System::Globalization::CultureInfo culture) ;

/// @brief Method GetRawConstantValue addr 0x2386710 size 0x4 virtual true final false
 ::bs_hook::Il2CppWrapperType GetRawConstantValue() ;

/// @brief Method CheckGeneric addr 0x2386360 size 0x80 virtual false final false
 void CheckGeneric() ;

/// @brief Method get_MetadataToken addr 0x2386714 size 0x4 virtual true final false
 int32_t get_MetadataToken() ;

/// @brief Method get_metadata_token addr 0x2386718 size 0x4 virtual false final false
static int32_t get_metadata_token(System::Reflection::RuntimeFieldInfo monoField) ;

static System::Reflection::RuntimeFieldInfo New_ctor() ;

/// @brief Method .ctor addr 0x238671c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Reflection
NEED_NO_BOX(System::Reflection::RuntimeFieldInfo);
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::RuntimeFieldInfo, "System.Reflection", "RuntimeFieldInfo");
