#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
// Forward declare root types
namespace UnityEngine::Timeline {
class HideInMenuAttribute;
}
// Type: UnityEngine.Timeline::HideInMenuAttribute
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14135))
// CS Name: UnityEngine.Timeline.HideInMenuAttribute
class CORDL_TYPE HideInMenuAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~HideInMenuAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "HideInMenuAttribute", modifiers: " const&", def_value: None }]
constexpr HideInMenuAttribute(HideInMenuAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HideInMenuAttribute", modifiers: "&&", def_value: None }]
constexpr HideInMenuAttribute(HideInMenuAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HideInMenuAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr HideInMenuAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HideInMenuAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HideInMenuAttribute& operator=(HideInMenuAttribute&& o) noexcept = default;
  constexpr HideInMenuAttribute& operator=(HideInMenuAttribute const& o) noexcept = default;
                


// Methods

static UnityEngine::Timeline::HideInMenuAttribute New_ctor() ;

/// @brief Method .ctor addr 0x2ad5e1c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
NEED_NO_BOX(UnityEngine::Timeline::HideInMenuAttribute);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::HideInMenuAttribute, "UnityEngine.Timeline", "HideInMenuAttribute");
