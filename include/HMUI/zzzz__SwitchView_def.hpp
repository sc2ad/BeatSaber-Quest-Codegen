#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstddef>
#include <cstdint>
namespace HMUI {
class ToggleWithCallbacks;
}
namespace UnityEngine {
class AnimationClip;
}
namespace HMUI {
struct HMUI__ToggleWithCallbacks__SelectionState;
}
// Forward declare root types
namespace HMUI {
struct HMUI__SwitchView__AnimationType;
}
namespace HMUI {
class SwitchView;
}
// Type: ::AnimationType
namespace HMUI {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13708))
// CS Name: HMUI.SwitchView::AnimationType
struct CORDL_TYPE HMUI__SwitchView__AnimationType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HMUI__SwitchView__AnimationType(int32_t value__) noexcept;


                    constexpr HMUI__SwitchView__AnimationType(HMUI__SwitchView__AnimationType const&) = default;
                    constexpr HMUI__SwitchView__AnimationType(HMUI__SwitchView__AnimationType&&) = default;
                    constexpr HMUI__SwitchView__AnimationType& operator=(HMUI__SwitchView__AnimationType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HMUI__SwitchView__AnimationType& operator=(HMUI__SwitchView__AnimationType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HMUI__SwitchView__AnimationType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __HMUI__SwitchView__AnimationType_Unwrapped : int32_t {
__OnOff = 0,
__SelectedState = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HMUI__SwitchView__AnimationType_Unwrapped () const noexcept {
return std::bit_cast<__HMUI__SwitchView__AnimationType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field OnOff offset 0
static HMUI::HMUI__SwitchView__AnimationType const OnOff;

/// @brief Field SelectedState offset 0
static HMUI::HMUI__SwitchView__AnimationType const SelectedState;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HMUI
// Type: HMUI::SwitchView
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13709))
// CS Name: HMUI.SwitchView
class CORDL_TYPE SwitchView : public UnityEngine::MonoBehaviour {
public:
// Declarations
using AnimationType = HMUI::HMUI__SwitchView__AnimationType;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~SwitchView() = default;

// Ctor Parameters [CppParam { name: "", ty: "SwitchView", modifiers: " const&", def_value: None }]
constexpr SwitchView(SwitchView const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SwitchView", modifiers: "&&", def_value: None }]
constexpr SwitchView(SwitchView&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SwitchView(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr SwitchView& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SwitchView& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SwitchView& operator=(SwitchView&& o) noexcept = default;
  constexpr SwitchView& operator=(SwitchView const& o) noexcept = default;
                


// Fields

 HMUI::HMUI__SwitchView__AnimationType __declspec(property(get=__get__animationType, put=__set__animationType))  _animationType;

constexpr void __set__animationType(HMUI::HMUI__SwitchView__AnimationType value) ;

constexpr HMUI::HMUI__SwitchView__AnimationType __get__animationType() const;

 UnityEngine::AnimationClip __declspec(property(get=__get__normalAnimationClip, put=__set__normalAnimationClip))  _normalAnimationClip;

constexpr void __set__normalAnimationClip(UnityEngine::AnimationClip value) ;

constexpr UnityEngine::AnimationClip __get__normalAnimationClip() const;

 UnityEngine::AnimationClip __declspec(property(get=__get__highlightedAnimationClip, put=__set__highlightedAnimationClip))  _highlightedAnimationClip;

constexpr void __set__highlightedAnimationClip(UnityEngine::AnimationClip value) ;

constexpr UnityEngine::AnimationClip __get__highlightedAnimationClip() const;

 UnityEngine::AnimationClip __declspec(property(get=__get__pressedAnimationClip, put=__set__pressedAnimationClip))  _pressedAnimationClip;

constexpr void __set__pressedAnimationClip(UnityEngine::AnimationClip value) ;

constexpr UnityEngine::AnimationClip __get__pressedAnimationClip() const;

 UnityEngine::AnimationClip __declspec(property(get=__get__disabledAnimationClip, put=__set__disabledAnimationClip))  _disabledAnimationClip;

constexpr void __set__disabledAnimationClip(UnityEngine::AnimationClip value) ;

constexpr UnityEngine::AnimationClip __get__disabledAnimationClip() const;

 UnityEngine::AnimationClip __declspec(property(get=__get__onAnimationClip, put=__set__onAnimationClip))  _onAnimationClip;

constexpr void __set__onAnimationClip(UnityEngine::AnimationClip value) ;

constexpr UnityEngine::AnimationClip __get__onAnimationClip() const;

 UnityEngine::AnimationClip __declspec(property(get=__get__offAnimationClip, put=__set__offAnimationClip))  _offAnimationClip;

constexpr void __set__offAnimationClip(UnityEngine::AnimationClip value) ;

constexpr UnityEngine::AnimationClip __get__offAnimationClip() const;

 UnityEngine::AnimationClip __declspec(property(get=__get__selectedAnimationClip, put=__set__selectedAnimationClip))  _selectedAnimationClip;

constexpr void __set__selectedAnimationClip(UnityEngine::AnimationClip value) ;

constexpr UnityEngine::AnimationClip __get__selectedAnimationClip() const;

 UnityEngine::AnimationClip __declspec(property(get=__get__selectedAndHighlightedAnimationClip, put=__set__selectedAndHighlightedAnimationClip))  _selectedAndHighlightedAnimationClip;

constexpr void __set__selectedAndHighlightedAnimationClip(UnityEngine::AnimationClip value) ;

constexpr UnityEngine::AnimationClip __get__selectedAndHighlightedAnimationClip() const;

 HMUI::ToggleWithCallbacks __declspec(property(get=__get__toggle, put=__set__toggle))  _toggle;

constexpr void __set__toggle(HMUI::ToggleWithCallbacks value) ;

constexpr HMUI::ToggleWithCallbacks __get__toggle() const;


// Methods

/// @brief Method Awake addr 0x1fd31f8 size 0x50 virtual false final false
 void Awake() ;

/// @brief Method Start addr 0x1fd3248 size 0x114 virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x1fd3534 size 0x10c virtual false final false
 void OnDestroy() ;

/// @brief Method HandleOnValueChanged addr 0x1fd36f4 size 0x4 virtual false final false
 void HandleOnValueChanged(bool value) ;

/// @brief Method HandleStateDidChange addr 0x1fd36f8 size 0x4 virtual false final false
 void HandleStateDidChange(HMUI::HMUI__ToggleWithCallbacks__SelectionState value) ;

/// @brief Method RefreshVisuals addr 0x1fd3410 size 0x124 virtual false final false
 void RefreshVisuals() ;

// Ctor Parameters []
explicit SwitchView() ;

/// @brief Method .ctor addr 0x1fd3750 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
DEFINE_IL2CPP_ARG_TYPE(HMUI::HMUI__SwitchView__AnimationType, "HMUI", "SwitchView/AnimationType");
NEED_NO_BOX(HMUI::SwitchView);
DEFINE_IL2CPP_ARG_TYPE(HMUI::SwitchView, "HMUI", "SwitchView");
