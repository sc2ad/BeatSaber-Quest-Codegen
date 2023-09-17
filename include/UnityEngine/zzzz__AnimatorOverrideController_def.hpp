#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__RuntimeAnimatorController_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace UnityEngine {
class AnimationClip;
}
namespace UnityEngine {
class RuntimeAnimatorController;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
// Forward declare root types
namespace UnityEngine {
class AnimatorOverrideController;
}
namespace UnityEngine {
class ____UnityEngine__AnimatorOverrideController__OnOverrideControllerDirtyCallback;
}
// Type: ::OnOverrideControllerDirtyCallback
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15021))
// CS Name: UnityEngine.AnimatorOverrideController::OnOverrideControllerDirtyCallback
class CORDL_TYPE ____UnityEngine__AnimatorOverrideController__OnOverrideControllerDirtyCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____UnityEngine__AnimatorOverrideController__OnOverrideControllerDirtyCallback() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__AnimatorOverrideController__OnOverrideControllerDirtyCallback", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__AnimatorOverrideController__OnOverrideControllerDirtyCallback(____UnityEngine__AnimatorOverrideController__OnOverrideControllerDirtyCallback const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__AnimatorOverrideController__OnOverrideControllerDirtyCallback", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__AnimatorOverrideController__OnOverrideControllerDirtyCallback(____UnityEngine__AnimatorOverrideController__OnOverrideControllerDirtyCallback&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__AnimatorOverrideController__OnOverrideControllerDirtyCallback(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ____UnityEngine__AnimatorOverrideController__OnOverrideControllerDirtyCallback& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__AnimatorOverrideController__OnOverrideControllerDirtyCallback& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__AnimatorOverrideController__OnOverrideControllerDirtyCallback& operator=(____UnityEngine__AnimatorOverrideController__OnOverrideControllerDirtyCallback&& o) noexcept = default;
  constexpr ____UnityEngine__AnimatorOverrideController__OnOverrideControllerDirtyCallback& operator=(____UnityEngine__AnimatorOverrideController__OnOverrideControllerDirtyCallback const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ____UnityEngine__AnimatorOverrideController__OnOverrideControllerDirtyCallback(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2b19764 size 0xbc virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2b19820 size 0x14 virtual true final false
 void Invoke() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
// Type: UnityEngine::AnimatorOverrideController
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15032))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15022))
// CS Name: UnityEngine.AnimatorOverrideController
class CORDL_TYPE AnimatorOverrideController : public ::UnityEngine::RuntimeAnimatorController {
public:
// Declarations
using OnOverrideControllerDirtyCallback = ::UnityEngine::____UnityEngine__AnimatorOverrideController__OnOverrideControllerDirtyCallback;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~AnimatorOverrideController() = default;

// Ctor Parameters [CppParam { name: "", ty: "AnimatorOverrideController", modifiers: " const&", def_value: None }]
constexpr AnimatorOverrideController(AnimatorOverrideController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AnimatorOverrideController", modifiers: "&&", def_value: None }]
constexpr AnimatorOverrideController(AnimatorOverrideController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AnimatorOverrideController(void* ptr) noexcept : ::UnityEngine::RuntimeAnimatorController(ptr) {
}


  constexpr AnimatorOverrideController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AnimatorOverrideController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AnimatorOverrideController& operator=(AnimatorOverrideController&& o) noexcept = default;
  constexpr AnimatorOverrideController& operator=(AnimatorOverrideController const& o) noexcept = default;
                


// Fields

 ::UnityEngine::____UnityEngine__AnimatorOverrideController__OnOverrideControllerDirtyCallback __declspec(property(get=__get_OnOverrideControllerDirty, put=__set_OnOverrideControllerDirty))  OnOverrideControllerDirty;

constexpr void __set_OnOverrideControllerDirty(::UnityEngine::____UnityEngine__AnimatorOverrideController__OnOverrideControllerDirtyCallback value) ;

constexpr ::UnityEngine::____UnityEngine__AnimatorOverrideController__OnOverrideControllerDirtyCallback __get_OnOverrideControllerDirty() const;


// Methods

// Ctor Parameters [CppParam { name: "controller", ty: "::UnityEngine::RuntimeAnimatorController", modifiers: "", def_value: None }]
explicit AnimatorOverrideController(::UnityEngine::RuntimeAnimatorController controller) ;

/// @brief Method .ctor addr 0x2b19350 size 0x50 virtual false final false
 void _ctor(::UnityEngine::RuntimeAnimatorController controller) ;

/// @brief Method Internal_Create addr 0x2b193f8 size 0x44 virtual false final false
static void Internal_Create(::UnityEngine::AnimatorOverrideController self, ::UnityEngine::RuntimeAnimatorController controller) ;

/// @brief Method SetClip addr 0x2b1943c size 0x5c virtual false final false
 void SetClip(::UnityEngine::AnimationClip originalClip, ::UnityEngine::AnimationClip overrideClip, bool notify) ;

/// @brief Method SendNotification addr 0x2b19498 size 0x3c virtual false final false
 void SendNotification() ;

/// @brief Method ApplyOverrides addr 0x2b194d4 size 0x260 virtual false final false
 void ApplyOverrides(::System::Collections::Generic::IList_1<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::AnimationClip,::UnityEngine::AnimationClip>> overrides) ;

/// @brief Method OnInvalidateOverrideController addr 0x2b19734 size 0x30 virtual false final false
static void OnInvalidateOverrideController(::UnityEngine::AnimatorOverrideController controller) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::AnimatorOverrideController);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AnimatorOverrideController, "UnityEngine", "AnimatorOverrideController");
NEED_NO_BOX(::UnityEngine::____UnityEngine__AnimatorOverrideController__OnOverrideControllerDirtyCallback);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::____UnityEngine__AnimatorOverrideController__OnOverrideControllerDirtyCallback, "UnityEngine", "AnimatorOverrideController/OnOverrideControllerDirtyCallback");
