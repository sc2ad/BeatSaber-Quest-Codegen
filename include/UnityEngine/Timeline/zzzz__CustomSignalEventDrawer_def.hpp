#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
// Forward declare root types
namespace UnityEngine::Timeline {
class CustomSignalEventDrawer;
}
// Type: UnityEngine.Timeline::CustomSignalEventDrawer
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10112))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14102))
// CS Name: UnityEngine.Timeline.CustomSignalEventDrawer
class CORDL_TYPE CustomSignalEventDrawer : public UnityEngine::PropertyAttribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~CustomSignalEventDrawer() = default;

// Ctor Parameters [CppParam { name: "", ty: "CustomSignalEventDrawer", modifiers: " const&", def_value: None }]
constexpr CustomSignalEventDrawer(CustomSignalEventDrawer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CustomSignalEventDrawer", modifiers: "&&", def_value: None }]
constexpr CustomSignalEventDrawer(CustomSignalEventDrawer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CustomSignalEventDrawer(void* ptr) noexcept : UnityEngine::PropertyAttribute(ptr) {
}


  constexpr CustomSignalEventDrawer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CustomSignalEventDrawer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CustomSignalEventDrawer& operator=(CustomSignalEventDrawer&& o) noexcept = default;
  constexpr CustomSignalEventDrawer& operator=(CustomSignalEventDrawer const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit CustomSignalEventDrawer() ;

/// @brief Method .ctor addr 0x2ad0400 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
NEED_NO_BOX(UnityEngine::Timeline::CustomSignalEventDrawer);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::CustomSignalEventDrawer, "UnityEngine.Timeline", "CustomSignalEventDrawer");
