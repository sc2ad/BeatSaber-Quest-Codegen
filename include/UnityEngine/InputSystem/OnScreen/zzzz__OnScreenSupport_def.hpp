#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
// Forward declare root types
namespace UnityEngine::InputSystem::OnScreen {
class OnScreenSupport;
}
// Type: UnityEngine.InputSystem.OnScreen::OnScreenSupport
namespace UnityEngine::InputSystem::OnScreen {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6473))
// CS Name: UnityEngine.InputSystem.OnScreen.OnScreenSupport
class CORDL_TYPE OnScreenSupport : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~OnScreenSupport() = default;

// Ctor Parameters [CppParam { name: "", ty: "OnScreenSupport", modifiers: " const&", def_value: None }]
constexpr OnScreenSupport(OnScreenSupport const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OnScreenSupport", modifiers: "&&", def_value: None }]
constexpr OnScreenSupport(OnScreenSupport&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OnScreenSupport(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr OnScreenSupport& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OnScreenSupport& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OnScreenSupport& operator=(OnScreenSupport&& o) noexcept = default;
  constexpr OnScreenSupport& operator=(OnScreenSupport const& o) noexcept = default;
                


// Methods

/// @brief Method Initialize addr 0x294653c size 0x4 virtual false final false
static void Initialize() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::OnScreen
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::InputSystem::OnScreen::OnScreenSupport);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::OnScreen::OnScreenSupport, "UnityEngine.InputSystem.OnScreen", "OnScreenSupport");
