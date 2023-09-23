#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Reflection/zzzz__FieldInfo_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Reflection {
class Binder;
}
namespace System {
class Type;
}
namespace System::Reflection {
class RuntimeFieldInfo;
}
namespace System::Reflection {
struct FieldAttributes;
}
namespace System::Reflection {
struct BindingFlags;
}
namespace System {
struct RuntimeFieldHandle;
}
namespace System::Reflection {
class Module;
}
namespace System::Globalization {
class CultureInfo;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class SerializationFieldInfo;
}
// Type: System.Runtime.Serialization::SerializationFieldInfo
namespace System::Runtime::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3461))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3229))
// CS Name: System.Runtime.Serialization.SerializationFieldInfo
class CORDL_TYPE SerializationFieldInfo : public System::Reflection::FieldInfo {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~SerializationFieldInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "SerializationFieldInfo", modifiers: " const&", def_value: None }]
constexpr SerializationFieldInfo(SerializationFieldInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SerializationFieldInfo", modifiers: "&&", def_value: None }]
constexpr SerializationFieldInfo(SerializationFieldInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SerializationFieldInfo(void* ptr) noexcept : System::Reflection::FieldInfo(ptr) {
}


  constexpr SerializationFieldInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SerializationFieldInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SerializationFieldInfo& operator=(SerializationFieldInfo&& o) noexcept = default;
  constexpr SerializationFieldInfo& operator=(SerializationFieldInfo const& o) noexcept = default;
                


// Fields

 System::Reflection::RuntimeFieldInfo __declspec(property(get=__get_m_field, put=__set_m_field))  m_field;

constexpr void __set_m_field(System::Reflection::RuntimeFieldInfo value) ;

constexpr System::Reflection::RuntimeFieldInfo __get_m_field() const;

 ::StringW __declspec(property(get=__get_m_serializationName, put=__set_m_serializationName))  m_serializationName;

constexpr void __set_m_serializationName(::StringW value) ;

constexpr ::StringW __get_m_serializationName() const;


// Properties

 System::Reflection::Module __declspec(property(get=get_Module))  Module;

 int32_t __declspec(property(get=get_MetadataToken))  MetadataToken;

 ::StringW __declspec(property(get=get_Name))  Name;

 System::Type __declspec(property(get=get_DeclaringType))  DeclaringType;

 System::Type __declspec(property(get=get_ReflectedType))  ReflectedType;

 System::Type __declspec(property(get=get_FieldType))  FieldType;

 System::Reflection::RuntimeFieldInfo __declspec(property(get=get_FieldInfo))  FieldInfo;

 System::RuntimeFieldHandle __declspec(property(get=get_FieldHandle))  FieldHandle;

 System::Reflection::FieldAttributes __declspec(property(get=get_Attributes))  Attributes;


// Methods

/// @brief Method get_Module addr 0x2351cb4 size 0x20 virtual true final false
 System::Reflection::Module get_Module() ;

/// @brief Method get_MetadataToken addr 0x2351cd4 size 0x24 virtual true final false
 int32_t get_MetadataToken() ;

// Ctor Parameters [CppParam { name: "field", ty: "System::Reflection::RuntimeFieldInfo", modifiers: "", def_value: None }, CppParam { name: "namePrefix", ty: "::StringW", modifiers: "", def_value: None }]
explicit SerializationFieldInfo(System::Reflection::RuntimeFieldInfo field, ::StringW namePrefix) ;

/// @brief Method .ctor addr 0x234a90c size 0x90 virtual false final false
 void _ctor(System::Reflection::RuntimeFieldInfo field, ::StringW namePrefix) ;

/// @brief Method get_Name addr 0x2351cf8 size 0x8 virtual true final false
 ::StringW get_Name() ;

/// @brief Method get_DeclaringType addr 0x2351d00 size 0x20 virtual true final false
 System::Type get_DeclaringType() ;

/// @brief Method get_ReflectedType addr 0x2351d20 size 0x20 virtual true final false
 System::Type get_ReflectedType() ;

/// @brief Method GetCustomAttributes addr 0x2351d40 size 0x28 virtual true final false
 ::ArrayW<::bs_hook::Il2CppWrapperType> GetCustomAttributes(bool inherit) ;

/// @brief Method GetCustomAttributes addr 0x2351d68 size 0x28 virtual true final false
 ::ArrayW<::bs_hook::Il2CppWrapperType> GetCustomAttributes(System::Type attributeType, bool inherit) ;

/// @brief Method IsDefined addr 0x2351d90 size 0x24 virtual true final false
 bool IsDefined(System::Type attributeType, bool inherit) ;

/// @brief Method get_FieldType addr 0x2351db4 size 0x24 virtual true final false
 System::Type get_FieldType() ;

/// @brief Method GetValue addr 0x2351dd8 size 0x24 virtual true final false
 ::bs_hook::Il2CppWrapperType GetValue(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method InternalGetValue addr 0x234b7d4 size 0x80 virtual false final false
 ::bs_hook::Il2CppWrapperType InternalGetValue(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method SetValue addr 0x2351dfc size 0x24 virtual true final false
 void SetValue(::bs_hook::Il2CppWrapperType obj, ::bs_hook::Il2CppWrapperType value, System::Reflection::BindingFlags invokeAttr, System::Reflection::Binder binder, System::Globalization::CultureInfo culture) ;

/// @brief Method InternalSetValue addr 0x234b0a4 size 0xb0 virtual false final false
 void InternalSetValue(::bs_hook::Il2CppWrapperType obj, ::bs_hook::Il2CppWrapperType value, System::Reflection::BindingFlags invokeAttr, System::Reflection::Binder binder, System::Globalization::CultureInfo culture) ;

/// @brief Method get_FieldInfo addr 0x2351e20 size 0x8 virtual false final false
 System::Reflection::RuntimeFieldInfo get_FieldInfo() ;

/// @brief Method get_FieldHandle addr 0x2351e28 size 0x24 virtual true final false
 System::RuntimeFieldHandle get_FieldHandle() ;

/// @brief Method get_Attributes addr 0x2351e4c size 0x24 virtual true final false
 System::Reflection::FieldAttributes get_Attributes() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization
NEED_NO_BOX(System::Runtime::Serialization::SerializationFieldInfo);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::SerializationFieldInfo, "System.Runtime.Serialization", "SerializationFieldInfo");
