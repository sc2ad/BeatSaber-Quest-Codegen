#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/zzzz__StepCounter_def.hpp"
// Forward declare root types
namespace UnityEngine::InputSystem::Android {
class AndroidStepCounter;
}
// Type: UnityEngine.InputSystem.Android::AndroidStepCounter
namespace UnityEngine::InputSystem::Android {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6369))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6526))
// CS Name: UnityEngine.InputSystem.Android.AndroidStepCounter
class CORDL_TYPE AndroidStepCounter : public UnityEngine::InputSystem::StepCounter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x160};

virtual ~AndroidStepCounter() = default;

// Ctor Parameters [CppParam { name: "", ty: "AndroidStepCounter", modifiers: " const&", def_value: None }]
constexpr AndroidStepCounter(AndroidStepCounter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AndroidStepCounter", modifiers: "&&", def_value: None }]
constexpr AndroidStepCounter(AndroidStepCounter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AndroidStepCounter(void* ptr) noexcept : UnityEngine::InputSystem::StepCounter(ptr) {
}


  constexpr AndroidStepCounter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AndroidStepCounter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AndroidStepCounter& operator=(AndroidStepCounter&& o) noexcept = default;
  constexpr AndroidStepCounter& operator=(AndroidStepCounter const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit AndroidStepCounter() ;

/// @brief Method .ctor addr 0x29530b0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Android
NEED_NO_BOX(UnityEngine::InputSystem::Android::AndroidStepCounter);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Android::AndroidStepCounter, "UnityEngine.InputSystem.Android", "AndroidStepCounter");
