#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
// Forward declare root types
namespace UnityEngine {
class SliderState;
}
// Type: UnityEngine::SliderState
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14758))
// CS Name: UnityEngine.SliderState
class CORDL_TYPE SliderState : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~SliderState() = default;

// Ctor Parameters [CppParam { name: "", ty: "SliderState", modifiers: " const&", def_value: None }]
constexpr SliderState(SliderState const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SliderState", modifiers: "&&", def_value: None }]
constexpr SliderState(SliderState&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SliderState(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SliderState& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SliderState& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SliderState& operator=(SliderState&& o) noexcept = default;
  constexpr SliderState& operator=(SliderState const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit SliderState() ;

/// @brief Method .ctor addr 0x2b86048 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::SliderState);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::SliderState, "UnityEngine", "SliderState");
