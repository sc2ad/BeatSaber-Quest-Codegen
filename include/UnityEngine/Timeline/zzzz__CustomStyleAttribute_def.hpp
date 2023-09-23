#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace UnityEngine::Timeline {
class CustomStyleAttribute;
}
// Type: UnityEngine.Timeline::CustomStyleAttribute
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14136))
// CS Name: UnityEngine.Timeline.CustomStyleAttribute
class CORDL_TYPE CustomStyleAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~CustomStyleAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "CustomStyleAttribute", modifiers: " const&", def_value: None }]
constexpr CustomStyleAttribute(CustomStyleAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CustomStyleAttribute", modifiers: "&&", def_value: None }]
constexpr CustomStyleAttribute(CustomStyleAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CustomStyleAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr CustomStyleAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CustomStyleAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CustomStyleAttribute& operator=(CustomStyleAttribute&& o) noexcept = default;
  constexpr CustomStyleAttribute& operator=(CustomStyleAttribute const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_ussStyle, put=__set_ussStyle))  ussStyle;

constexpr void __set_ussStyle(::StringW value) ;

constexpr ::StringW __get_ussStyle() const;


// Methods

// Ctor Parameters [CppParam { name: "ussStyle", ty: "::StringW", modifiers: "", def_value: None }]
explicit CustomStyleAttribute(::StringW ussStyle) ;

/// @brief Method .ctor addr 0x2ad5e24 size 0x28 virtual false final false
 void _ctor(::StringW ussStyle) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
NEED_NO_BOX(UnityEngine::Timeline::CustomStyleAttribute);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::CustomStyleAttribute, "UnityEngine.Timeline", "CustomStyleAttribute");
