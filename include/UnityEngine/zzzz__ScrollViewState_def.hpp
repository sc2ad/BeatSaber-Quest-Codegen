#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
// Forward declare root types
namespace UnityEngine {
class ScrollViewState;
}
// Type: UnityEngine::ScrollViewState
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14768))
// CS Name: UnityEngine.ScrollViewState
class CORDL_TYPE ScrollViewState : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ScrollViewState() = default;

// Ctor Parameters [CppParam { name: "", ty: "ScrollViewState", modifiers: " const&", def_value: None }]
constexpr ScrollViewState(ScrollViewState const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ScrollViewState", modifiers: "&&", def_value: None }]
constexpr ScrollViewState(ScrollViewState&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ScrollViewState(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ScrollViewState& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ScrollViewState& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ScrollViewState& operator=(ScrollViewState&& o) noexcept = default;
  constexpr ScrollViewState& operator=(ScrollViewState const& o) noexcept = default;
                


// Methods

static UnityEngine::ScrollViewState New_ctor() ;

/// @brief Method .ctor addr 0x2b8b350 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::ScrollViewState);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ScrollViewState, "UnityEngine", "ScrollViewState");
