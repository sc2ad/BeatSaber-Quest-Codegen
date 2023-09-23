#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
// Forward declare root types
namespace System::ComponentModel {
class AmbientValueAttribute;
}
// Type: System.ComponentModel::AmbientValueAttribute
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8252))
// CS Name: System.ComponentModel.AmbientValueAttribute
class CORDL_TYPE AmbientValueAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~AmbientValueAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "AmbientValueAttribute", modifiers: " const&", def_value: None }]
constexpr AmbientValueAttribute(AmbientValueAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AmbientValueAttribute", modifiers: "&&", def_value: None }]
constexpr AmbientValueAttribute(AmbientValueAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AmbientValueAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr AmbientValueAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AmbientValueAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AmbientValueAttribute& operator=(AmbientValueAttribute&& o) noexcept = default;
  constexpr AmbientValueAttribute& operator=(AmbientValueAttribute const& o) noexcept = default;
                


// Fields

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__Value_k__BackingField, put=__set__Value_k__BackingField))  _Value_k__BackingField;

constexpr void __set__Value_k__BackingField(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__Value_k__BackingField() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Value))  Value;


// Methods

/// @brief Method get_Value addr 0x27727f4 size 0x8 virtual false final false
 ::bs_hook::Il2CppWrapperType get_Value() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
NEED_NO_BOX(System::ComponentModel::AmbientValueAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::AmbientValueAttribute, "System.ComponentModel", "AmbientValueAttribute");
