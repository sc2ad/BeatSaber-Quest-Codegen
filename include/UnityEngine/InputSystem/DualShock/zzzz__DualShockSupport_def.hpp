#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
// Forward declare root types
namespace UnityEngine::InputSystem::DualShock {
class DualShockSupport;
}
// Type: UnityEngine.InputSystem.DualShock::DualShockSupport
namespace UnityEngine::InputSystem::DualShock {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6507))
// CS Name: UnityEngine.InputSystem.DualShock.DualShockSupport
class CORDL_TYPE DualShockSupport : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~DualShockSupport() = default;

// Ctor Parameters [CppParam { name: "", ty: "DualShockSupport", modifiers: " const&", def_value: None }]
constexpr DualShockSupport(DualShockSupport const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DualShockSupport", modifiers: "&&", def_value: None }]
constexpr DualShockSupport(DualShockSupport&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DualShockSupport(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DualShockSupport& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DualShockSupport& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DualShockSupport& operator=(DualShockSupport&& o) noexcept = default;
  constexpr DualShockSupport& operator=(DualShockSupport const& o) noexcept = default;
                


// Methods

/// @brief Method Initialize addr 0x2952fb8 size 0x70 virtual false final false
static void Initialize() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::DualShock
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::InputSystem::DualShock::DualShockSupport);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::DualShock::DualShockSupport, "UnityEngine.InputSystem.DualShock", "DualShockSupport");
