#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/zzzz__ProximitySensor_def.hpp"
namespace {
// Forward declare root types
namespace UnityEngine::InputSystem::Android {
class AndroidProximity;
}
// Type: UnityEngine.InputSystem.Android::AndroidProximity
namespace UnityEngine::InputSystem::Android {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6366))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6520))
// CS Name: UnityEngine.InputSystem.Android.AndroidProximity
class CORDL_TYPE AndroidProximity : public ::UnityEngine::InputSystem::ProximitySensor {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x160};

virtual ~AndroidProximity() = default;

// Ctor Parameters [CppParam { name: "", ty: "AndroidProximity", modifiers: " const&", def_value: None }]
constexpr AndroidProximity(AndroidProximity const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AndroidProximity", modifiers: "&&", def_value: None }]
constexpr AndroidProximity(AndroidProximity&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AndroidProximity(void* ptr) noexcept : ::UnityEngine::InputSystem::ProximitySensor(ptr) {
}


  constexpr AndroidProximity& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AndroidProximity& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AndroidProximity& operator=(AndroidProximity&& o) noexcept = default;
  constexpr AndroidProximity& operator=(AndroidProximity const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit AndroidProximity() ;

/// @brief Method .ctor addr 0x2953080 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Android
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::InputSystem::Android::AndroidProximity);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Android::AndroidProximity, "UnityEngine.InputSystem.Android", "AndroidProximity");
