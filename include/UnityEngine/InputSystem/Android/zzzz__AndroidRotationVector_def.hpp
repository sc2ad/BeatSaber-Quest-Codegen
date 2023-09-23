#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/zzzz__AttitudeSensor_def.hpp"
// Forward declare root types
namespace UnityEngine::InputSystem::Android {
class AndroidRotationVector;
}
// Type: UnityEngine.InputSystem.Android::AndroidRotationVector
namespace UnityEngine::InputSystem::Android {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6361))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6523))
// CS Name: UnityEngine.InputSystem.Android.AndroidRotationVector
class CORDL_TYPE AndroidRotationVector : public UnityEngine::InputSystem::AttitudeSensor {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x160};

virtual ~AndroidRotationVector() = default;

// Ctor Parameters [CppParam { name: "", ty: "AndroidRotationVector", modifiers: " const&", def_value: None }]
constexpr AndroidRotationVector(AndroidRotationVector const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AndroidRotationVector", modifiers: "&&", def_value: None }]
constexpr AndroidRotationVector(AndroidRotationVector&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AndroidRotationVector(void* ptr) noexcept : UnityEngine::InputSystem::AttitudeSensor(ptr) {
}


  constexpr AndroidRotationVector& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AndroidRotationVector& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AndroidRotationVector& operator=(AndroidRotationVector&& o) noexcept = default;
  constexpr AndroidRotationVector& operator=(AndroidRotationVector const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit AndroidRotationVector() ;

/// @brief Method .ctor addr 0x2953098 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Android
NEED_NO_BOX(UnityEngine::InputSystem::Android::AndroidRotationVector);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Android::AndroidRotationVector, "UnityEngine.InputSystem.Android", "AndroidRotationVector");
