#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/zzzz__Gyroscope_def.hpp"
namespace {
// Forward declare root types
namespace UnityEngine::InputSystem::Android {
class AndroidGyroscope;
}
// Type: UnityEngine.InputSystem.Android::AndroidGyroscope
namespace UnityEngine::InputSystem::Android {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6359))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6517))
// CS Name: UnityEngine.InputSystem.Android.AndroidGyroscope
class CORDL_TYPE AndroidGyroscope : public ::UnityEngine::InputSystem::Gyroscope {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x160};

virtual ~AndroidGyroscope() = default;

// Ctor Parameters [CppParam { name: "", ty: "AndroidGyroscope", modifiers: " const&", def_value: None }]
constexpr AndroidGyroscope(AndroidGyroscope const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AndroidGyroscope", modifiers: "&&", def_value: None }]
constexpr AndroidGyroscope(AndroidGyroscope&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AndroidGyroscope(void* ptr) noexcept : ::UnityEngine::InputSystem::Gyroscope(ptr) {
}


  constexpr AndroidGyroscope& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AndroidGyroscope& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AndroidGyroscope& operator=(AndroidGyroscope&& o) noexcept = default;
  constexpr AndroidGyroscope& operator=(AndroidGyroscope const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit AndroidGyroscope() ;

/// @brief Method .ctor addr 0x2953068 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Android
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::InputSystem::Android::AndroidGyroscope);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Android::AndroidGyroscope, "UnityEngine.InputSystem.Android", "AndroidGyroscope");
