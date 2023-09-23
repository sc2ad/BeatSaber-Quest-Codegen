#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace UnityEngine {
class Animator;
}
namespace GlobalNamespace {
class IVRPlatformHelper;
}
// Forward declare root types
namespace GlobalNamespace {
class DeactivateAnimatorOnInputFocusCapture;
}
// Type: ::DeactivateAnimatorOnInputFocusCapture
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13734))
// CS Name: DeactivateAnimatorOnInputFocusCapture
class CORDL_TYPE DeactivateAnimatorOnInputFocusCapture : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~DeactivateAnimatorOnInputFocusCapture() = default;

// Ctor Parameters [CppParam { name: "", ty: "DeactivateAnimatorOnInputFocusCapture", modifiers: " const&", def_value: None }]
constexpr DeactivateAnimatorOnInputFocusCapture(DeactivateAnimatorOnInputFocusCapture const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DeactivateAnimatorOnInputFocusCapture", modifiers: "&&", def_value: None }]
constexpr DeactivateAnimatorOnInputFocusCapture(DeactivateAnimatorOnInputFocusCapture&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DeactivateAnimatorOnInputFocusCapture(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr DeactivateAnimatorOnInputFocusCapture& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DeactivateAnimatorOnInputFocusCapture& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DeactivateAnimatorOnInputFocusCapture& operator=(DeactivateAnimatorOnInputFocusCapture&& o) noexcept = default;
  constexpr DeactivateAnimatorOnInputFocusCapture& operator=(DeactivateAnimatorOnInputFocusCapture const& o) noexcept = default;
                


// Fields

 UnityEngine::Animator __declspec(property(get=__get__animator, put=__set__animator))  _animator;

constexpr void __set__animator(UnityEngine::Animator value) ;

constexpr UnityEngine::Animator __get__animator() const;

 GlobalNamespace::IVRPlatformHelper __declspec(property(get=__get__vrPlatformHelper, put=__set__vrPlatformHelper))  _vrPlatformHelper;

constexpr void __set__vrPlatformHelper(GlobalNamespace::IVRPlatformHelper value) ;

constexpr GlobalNamespace::IVRPlatformHelper __get__vrPlatformHelper() const;

 bool __declspec(property(get=__get__wasEnabled, put=__set__wasEnabled))  _wasEnabled;

constexpr void __set__wasEnabled(bool value) ;

constexpr bool __get__wasEnabled() const;


// Methods

/// @brief Method Start addr 0x1f7033c size 0x210 virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x1f7058c size 0x1a4 virtual false final false
 void OnDestroy() ;

/// @brief Method HandleInputFocusCaptured addr 0x1f7054c size 0x40 virtual false final false
 void HandleInputFocusCaptured() ;

/// @brief Method HandleInputFocusReleased addr 0x1f70730 size 0x24 virtual false final false
 void HandleInputFocusReleased() ;

// Ctor Parameters []
explicit DeactivateAnimatorOnInputFocusCapture() ;

/// @brief Method .ctor addr 0x1f70754 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::DeactivateAnimatorOnInputFocusCapture);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DeactivateAnimatorOnInputFocusCapture, "", "DeactivateAnimatorOnInputFocusCapture");
