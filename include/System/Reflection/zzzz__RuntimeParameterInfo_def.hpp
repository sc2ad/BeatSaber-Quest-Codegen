#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Reflection/zzzz__ParameterInfo_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Runtime::InteropServices {
class MarshalAsAttribute;
}
namespace System::Reflection {
struct CallingConventions;
}
namespace System {
class Type;
}
namespace System::Text {
class StringBuilder;
}
namespace System::Reflection {
class MemberInfo;
}
namespace System::Reflection {
class ParameterInfo;
}
namespace System::Reflection {
class CustomAttributeData;
}
// Forward declare root types
namespace System::Reflection {
class RuntimeParameterInfo;
}
// Type: System.Reflection::RuntimeParameterInfo
namespace System::Reflection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3475))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3518))
// CS Name: System.Reflection.RuntimeParameterInfo
class CORDL_TYPE RuntimeParameterInfo : public System::Reflection::ParameterInfo {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~RuntimeParameterInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeParameterInfo", modifiers: " const&", def_value: None }]
constexpr RuntimeParameterInfo(RuntimeParameterInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeParameterInfo", modifiers: "&&", def_value: None }]
constexpr RuntimeParameterInfo(RuntimeParameterInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RuntimeParameterInfo(void* ptr) noexcept : System::Reflection::ParameterInfo(ptr) {
}


  constexpr RuntimeParameterInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RuntimeParameterInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RuntimeParameterInfo& operator=(RuntimeParameterInfo&& o) noexcept = default;
  constexpr RuntimeParameterInfo& operator=(RuntimeParameterInfo const& o) noexcept = default;
                


// Fields

 System::Runtime::InteropServices::MarshalAsAttribute __declspec(property(get=__get_marshalAs, put=__set_marshalAs))  marshalAs;

constexpr void __set_marshalAs(System::Runtime::InteropServices::MarshalAsAttribute value) ;

constexpr System::Runtime::InteropServices::MarshalAsAttribute __get_marshalAs() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_DefaultValue))  DefaultValue;


// Methods

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "type", ty: "System::Type", modifiers: "", def_value: None }, CppParam { name: "position", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "attrs", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "defaultValue", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "member", ty: "System::Reflection::MemberInfo", modifiers: "", def_value: None }, CppParam { name: "marshalAs", ty: "System::Runtime::InteropServices::MarshalAsAttribute", modifiers: "", def_value: None }]
explicit RuntimeParameterInfo(::StringW name, System::Type type, int32_t position, int32_t attrs, ::bs_hook::Il2CppWrapperType defaultValue, System::Reflection::MemberInfo member, System::Runtime::InteropServices::MarshalAsAttribute marshalAs) ;

/// @brief Method .ctor addr 0x2389550 size 0x68 virtual false final false
 void _ctor(::StringW name, System::Type type, int32_t position, int32_t attrs, ::bs_hook::Il2CppWrapperType defaultValue, System::Reflection::MemberInfo member, System::Runtime::InteropServices::MarshalAsAttribute marshalAs) ;

/// @brief Method FormatParameters addr 0x2386b6c size 0x1f4 virtual false final false
static void FormatParameters(System::Text::StringBuilder sb, ::ArrayW<System::Reflection::ParameterInfo> p, System::Reflection::CallingConventions callingConvention, bool serialization) ;

// Ctor Parameters [CppParam { name: "pinfo", ty: "System::Reflection::ParameterInfo", modifiers: "", def_value: None }, CppParam { name: "member", ty: "System::Reflection::MemberInfo", modifiers: "", def_value: None }]
explicit RuntimeParameterInfo(System::Reflection::ParameterInfo pinfo, System::Reflection::MemberInfo member) ;

/// @brief Method .ctor addr 0x23895b8 size 0x90 virtual false final false
 void _ctor(System::Reflection::ParameterInfo pinfo, System::Reflection::MemberInfo member) ;

// Ctor Parameters [CppParam { name: "type", ty: "System::Type", modifiers: "", def_value: None }, CppParam { name: "member", ty: "System::Reflection::MemberInfo", modifiers: "", def_value: None }, CppParam { name: "marshalAs", ty: "System::Runtime::InteropServices::MarshalAsAttribute", modifiers: "", def_value: None }]
explicit RuntimeParameterInfo(System::Type type, System::Reflection::MemberInfo member, System::Runtime::InteropServices::MarshalAsAttribute marshalAs) ;

/// @brief Method .ctor addr 0x238970c size 0x50 virtual false final false
 void _ctor(System::Type type, System::Reflection::MemberInfo member, System::Runtime::InteropServices::MarshalAsAttribute marshalAs) ;

/// @brief Method get_DefaultValue addr 0x238975c size 0x314 virtual true final false
 ::bs_hook::Il2CppWrapperType get_DefaultValue() ;

/// @brief Method GetCustomAttributes addr 0x2389a70 size 0x5c virtual true final false
 ::ArrayW<::bs_hook::Il2CppWrapperType> GetCustomAttributes(bool inherit) ;

/// @brief Method GetCustomAttributes addr 0x2389acc size 0x6c virtual true final false
 ::ArrayW<::bs_hook::Il2CppWrapperType> GetCustomAttributes(System::Type attributeType, bool inherit) ;

/// @brief Method GetDefaultValueImpl addr 0x2389648 size 0xc4 virtual false final false
 ::bs_hook::Il2CppWrapperType GetDefaultValueImpl(System::Reflection::ParameterInfo pinfo) ;

/// @brief Method IsDefined addr 0x2389b38 size 0x70 virtual true final false
 bool IsDefined(System::Type attributeType, bool inherit) ;

/// @brief Method GetPseudoCustomAttributes addr 0x2389ba8 size 0x260 virtual false final false
 ::ArrayW<::bs_hook::Il2CppWrapperType> GetPseudoCustomAttributes() ;

/// @brief Method GetPseudoCustomAttributesData addr 0x2389e08 size 0x4fc virtual false final false
 ::ArrayW<System::Reflection::CustomAttributeData> GetPseudoCustomAttributesData() ;

/// @brief Method New addr 0x238a304 size 0x70 virtual false final false
static System::Reflection::ParameterInfo New(System::Reflection::ParameterInfo pinfo, System::Reflection::MemberInfo member) ;

/// @brief Method New addr 0x2386864 size 0x8c virtual false final false
static System::Reflection::ParameterInfo New(System::Type type, System::Reflection::MemberInfo member, System::Runtime::InteropServices::MarshalAsAttribute marshalAs) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Reflection
NEED_NO_BOX(System::Reflection::RuntimeParameterInfo);
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::RuntimeParameterInfo, "System.Reflection", "RuntimeParameterInfo");
