#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
class DisplayStringFormatAttribute;
}
// Type: UnityEngine.InputSystem.Utilities::DisplayStringFormatAttribute
namespace UnityEngine::InputSystem::Utilities {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6748))
// CS Name: UnityEngine.InputSystem.Utilities.DisplayStringFormatAttribute
class CORDL_TYPE DisplayStringFormatAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~DisplayStringFormatAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "DisplayStringFormatAttribute", modifiers: " const&", def_value: None }]
constexpr DisplayStringFormatAttribute(DisplayStringFormatAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DisplayStringFormatAttribute", modifiers: "&&", def_value: None }]
constexpr DisplayStringFormatAttribute(DisplayStringFormatAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DisplayStringFormatAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr DisplayStringFormatAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DisplayStringFormatAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DisplayStringFormatAttribute& operator=(DisplayStringFormatAttribute&& o) noexcept = default;
  constexpr DisplayStringFormatAttribute& operator=(DisplayStringFormatAttribute const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__formatString_k__BackingField, put=__set__formatString_k__BackingField))  _formatString_k__BackingField;

constexpr void __set__formatString_k__BackingField(::StringW value) ;

constexpr ::StringW __get__formatString_k__BackingField() const;


// Properties

 ::StringW __declspec(property(get=get_formatString, put=set_formatString))  formatString;


// Methods

/// @brief Method get_formatString addr 0x297d050 size 0x8 virtual false final false
 ::StringW get_formatString() ;

/// @brief Method set_formatString addr 0x297d058 size 0x8 virtual false final false
 void set_formatString(::StringW value) ;

static UnityEngine::InputSystem::Utilities::DisplayStringFormatAttribute New_ctor(::StringW formatString) ;

/// @brief Method .ctor addr 0x297d060 size 0x28 virtual false final false
 void _ctor(::StringW formatString) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
NEED_NO_BOX(UnityEngine::InputSystem::Utilities::DisplayStringFormatAttribute);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Utilities::DisplayStringFormatAttribute, "UnityEngine.InputSystem.Utilities", "DisplayStringFormatAttribute");
