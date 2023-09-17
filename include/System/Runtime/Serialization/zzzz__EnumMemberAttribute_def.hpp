#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
// Forward declare root types
namespace System::Runtime::Serialization {
class EnumMemberAttribute;
}
// Type: System.Runtime.Serialization::EnumMemberAttribute
namespace System::Runtime::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16064))
// CS Name: System.Runtime.Serialization.EnumMemberAttribute
class CORDL_TYPE EnumMemberAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~EnumMemberAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "EnumMemberAttribute", modifiers: " const&", def_value: None }]
constexpr EnumMemberAttribute(EnumMemberAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EnumMemberAttribute", modifiers: "&&", def_value: None }]
constexpr EnumMemberAttribute(EnumMemberAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EnumMemberAttribute(void* ptr) noexcept : ::System::Attribute(ptr) {
}


  constexpr EnumMemberAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EnumMemberAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EnumMemberAttribute& operator=(EnumMemberAttribute&& o) noexcept = default;
  constexpr EnumMemberAttribute& operator=(EnumMemberAttribute const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(::StringW value) ;

constexpr ::StringW __get_value() const;


// Properties

 ::StringW __declspec(property(get=get_Value))  Value;


// Methods

/// @brief Method get_Value addr 0x26bacc0 size 0x8 virtual false final false
 ::StringW get_Value() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::Serialization::EnumMemberAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::EnumMemberAttribute, "System.Runtime.Serialization", "EnumMemberAttribute");
