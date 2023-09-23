#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/Timeline/zzzz__Marker_def.hpp"
// Forward declare root types
namespace GlobalNamespace {
class JumpDestinationMarker;
}
// Type: ::JumpDestinationMarker
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14099))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13890))
// CS Name: JumpDestinationMarker
class CORDL_TYPE JumpDestinationMarker : public UnityEngine::Timeline::Marker {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~JumpDestinationMarker() = default;

// Ctor Parameters [CppParam { name: "", ty: "JumpDestinationMarker", modifiers: " const&", def_value: None }]
constexpr JumpDestinationMarker(JumpDestinationMarker const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "JumpDestinationMarker", modifiers: "&&", def_value: None }]
constexpr JumpDestinationMarker(JumpDestinationMarker&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit JumpDestinationMarker(void* ptr) noexcept : UnityEngine::Timeline::Marker(ptr) {
}


  constexpr JumpDestinationMarker& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr JumpDestinationMarker& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr JumpDestinationMarker& operator=(JumpDestinationMarker&& o) noexcept = default;
  constexpr JumpDestinationMarker& operator=(JumpDestinationMarker const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit JumpDestinationMarker() ;

/// @brief Method .ctor addr 0x1f838c0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::JumpDestinationMarker);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::JumpDestinationMarker, "", "JumpDestinationMarker");
