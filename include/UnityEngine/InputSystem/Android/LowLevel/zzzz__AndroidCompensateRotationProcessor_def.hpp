#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/Processors/zzzz__CompensateRotationProcessor_def.hpp"
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Android::LowLevel {
class AndroidCompensateRotationProcessor;
}
// Type: UnityEngine.InputSystem.Android.LowLevel::AndroidCompensateRotationProcessor
namespace UnityEngine::InputSystem::Android::LowLevel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6666))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6542))
// CS Name: UnityEngine.InputSystem.Android.LowLevel.AndroidCompensateRotationProcessor
class CORDL_TYPE AndroidCompensateRotationProcessor : public UnityEngine::InputSystem::Processors::CompensateRotationProcessor {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~AndroidCompensateRotationProcessor() = default;

// Ctor Parameters [CppParam { name: "", ty: "AndroidCompensateRotationProcessor", modifiers: " const&", def_value: None }]
constexpr AndroidCompensateRotationProcessor(AndroidCompensateRotationProcessor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AndroidCompensateRotationProcessor", modifiers: "&&", def_value: None }]
constexpr AndroidCompensateRotationProcessor(AndroidCompensateRotationProcessor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AndroidCompensateRotationProcessor(void* ptr) noexcept : UnityEngine::InputSystem::Processors::CompensateRotationProcessor(ptr) {
}


  constexpr AndroidCompensateRotationProcessor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AndroidCompensateRotationProcessor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AndroidCompensateRotationProcessor& operator=(AndroidCompensateRotationProcessor&& o) noexcept = default;
  constexpr AndroidCompensateRotationProcessor& operator=(AndroidCompensateRotationProcessor const& o) noexcept = default;
                


// Methods

/// @brief Method Process addr 0x29545f4 size 0x34 virtual true final false
 UnityEngine::Quaternion Process(UnityEngine::Quaternion value, UnityEngine::InputSystem::InputControl control) ;

// Ctor Parameters []
explicit AndroidCompensateRotationProcessor() ;

/// @brief Method .ctor addr 0x2954628 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Android::LowLevel
NEED_NO_BOX(UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateRotationProcessor);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateRotationProcessor, "UnityEngine.InputSystem.Android.LowLevel", "AndroidCompensateRotationProcessor");
