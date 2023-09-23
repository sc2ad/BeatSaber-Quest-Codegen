#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/Timeline/zzzz__ControlTrack_def.hpp"
// Forward declare root types
namespace GlobalNamespace {
class CustomControlTrack;
}
// Type: ::CustomControlTrack
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14086))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6062))
// CS Name: CustomControlTrack
class CORDL_TYPE CustomControlTrack : public UnityEngine::Timeline::ControlTrack {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa0};

virtual ~CustomControlTrack() = default;

// Ctor Parameters [CppParam { name: "", ty: "CustomControlTrack", modifiers: " const&", def_value: None }]
constexpr CustomControlTrack(CustomControlTrack const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CustomControlTrack", modifiers: "&&", def_value: None }]
constexpr CustomControlTrack(CustomControlTrack&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CustomControlTrack(void* ptr) noexcept : UnityEngine::Timeline::ControlTrack(ptr) {
}


  constexpr CustomControlTrack& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CustomControlTrack& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CustomControlTrack& operator=(CustomControlTrack&& o) noexcept = default;
  constexpr CustomControlTrack& operator=(CustomControlTrack const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit CustomControlTrack() ;

/// @brief Method .ctor addr 0x21b1dc0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::CustomControlTrack);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CustomControlTrack, "", "CustomControlTrack");
