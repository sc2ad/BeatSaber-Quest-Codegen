#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace {
namespace UnityEngine {
class AnimationClip;
}
// Forward declare root types
namespace UnityEngine {
class RuntimeAnimatorController;
}
// Type: UnityEngine::RuntimeAnimatorController
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10142))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15032))
// CS Name: UnityEngine.RuntimeAnimatorController
class CORDL_TYPE RuntimeAnimatorController : public ::UnityEngine::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~RuntimeAnimatorController() = default;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeAnimatorController", modifiers: " const&", def_value: None }]
constexpr RuntimeAnimatorController(RuntimeAnimatorController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeAnimatorController", modifiers: "&&", def_value: None }]
constexpr RuntimeAnimatorController(RuntimeAnimatorController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RuntimeAnimatorController(void* ptr) noexcept : ::UnityEngine::Object(ptr) {
}


  constexpr RuntimeAnimatorController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RuntimeAnimatorController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RuntimeAnimatorController& operator=(RuntimeAnimatorController&& o) noexcept = default;
  constexpr RuntimeAnimatorController& operator=(RuntimeAnimatorController const& o) noexcept = default;
                


// Properties

 ::ArrayW<::UnityEngine::AnimationClip> __declspec(property(get=get_animationClips))  animationClips;


// Methods

// Ctor Parameters []
explicit RuntimeAnimatorController() ;

/// @brief Method .ctor addr 0x2b193a0 size 0x58 virtual false final false
 void _ctor() ;

/// @brief Method get_animationClips addr 0x2b1a3d4 size 0x3c virtual false final false
 ::ArrayW<::UnityEngine::AnimationClip> get_animationClips() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::RuntimeAnimatorController);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::RuntimeAnimatorController, "UnityEngine", "RuntimeAnimatorController");
