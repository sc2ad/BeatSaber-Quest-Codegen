#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
// Forward declare root types
namespace UnityEngine::InputSystem::XInput {
class XInputSupport;
}
// Type: UnityEngine.InputSystem.XInput::XInputSupport
namespace UnityEngine::InputSystem::XInput {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6439))
// CS Name: UnityEngine.InputSystem.XInput.XInputSupport
class CORDL_TYPE XInputSupport : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~XInputSupport() = default;

// Ctor Parameters [CppParam { name: "", ty: "XInputSupport", modifiers: " const&", def_value: None }]
constexpr XInputSupport(XInputSupport const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XInputSupport", modifiers: "&&", def_value: None }]
constexpr XInputSupport(XInputSupport&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XInputSupport(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr XInputSupport& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XInputSupport& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XInputSupport& operator=(XInputSupport&& o) noexcept = default;
  constexpr XInputSupport& operator=(XInputSupport const& o) noexcept = default;
                


// Methods

/// @brief Method Initialize addr 0x2937190 size 0x70 virtual false final false
static void Initialize() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::XInput
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::InputSystem::XInput::XInputSupport);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::XInput::XInputSupport, "UnityEngine.InputSystem.XInput", "XInputSupport");
