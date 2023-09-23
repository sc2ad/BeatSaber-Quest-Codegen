#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include <cmath>
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace System {
class Action;
}
namespace UnityEngine {
class CanvasGroup;
}
// Forward declare root types
namespace HMUI {
class PanelAnimationSO;
}
// Type: HMUI::PanelAnimationSO
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10151))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13564))
// CS Name: HMUI.PanelAnimationSO
class CORDL_TYPE PanelAnimationSO : public UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~PanelAnimationSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "PanelAnimationSO", modifiers: " const&", def_value: None }]
constexpr PanelAnimationSO(PanelAnimationSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PanelAnimationSO", modifiers: "&&", def_value: None }]
constexpr PanelAnimationSO(PanelAnimationSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PanelAnimationSO(void* ptr) noexcept : UnityEngine::ScriptableObject(ptr) {
}


  constexpr PanelAnimationSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PanelAnimationSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PanelAnimationSO& operator=(PanelAnimationSO&& o) noexcept = default;
  constexpr PanelAnimationSO& operator=(PanelAnimationSO const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__duration, put=__set__duration))  _duration;

constexpr void __set__duration(float_t value) ;

constexpr float_t __get__duration() const;

 UnityEngine::AnimationCurve __declspec(property(get=__get__scaleXAnimationCurve, put=__set__scaleXAnimationCurve))  _scaleXAnimationCurve;

constexpr void __set__scaleXAnimationCurve(UnityEngine::AnimationCurve value) ;

constexpr UnityEngine::AnimationCurve __get__scaleXAnimationCurve() const;

 UnityEngine::AnimationCurve __declspec(property(get=__get__scaleYAnimationCurve, put=__set__scaleYAnimationCurve))  _scaleYAnimationCurve;

constexpr void __set__scaleYAnimationCurve(UnityEngine::AnimationCurve value) ;

constexpr UnityEngine::AnimationCurve __get__scaleYAnimationCurve() const;

 UnityEngine::AnimationCurve __declspec(property(get=__get__alphaAnimationCurve, put=__set__alphaAnimationCurve))  _alphaAnimationCurve;

constexpr void __set__alphaAnimationCurve(UnityEngine::AnimationCurve value) ;

constexpr UnityEngine::AnimationCurve __get__alphaAnimationCurve() const;

 UnityEngine::AnimationCurve __declspec(property(get=__get__parentAlphaAnimationCurve, put=__set__parentAlphaAnimationCurve))  _parentAlphaAnimationCurve;

constexpr void __set__parentAlphaAnimationCurve(UnityEngine::AnimationCurve value) ;

constexpr UnityEngine::AnimationCurve __get__parentAlphaAnimationCurve() const;


// Methods

/// @brief Method ExecuteAnimation addr 0x1fa5790 size 0x10 virtual false final false
 void ExecuteAnimation(UnityEngine::GameObject go) ;

/// @brief Method ExecuteAnimation addr 0x1fa586c size 0x10 virtual false final false
 void ExecuteAnimation(UnityEngine::GameObject go, System::Action finishedCallback) ;

/// @brief Method ExecuteAnimation addr 0x1fa587c size 0xc virtual false final false
 void ExecuteAnimation(UnityEngine::GameObject go, UnityEngine::CanvasGroup parentCanvasGroup, System::Action finishedCallback) ;

/// @brief Method ExecuteAnimation addr 0x1fa57a0 size 0xcc virtual false final false
 void ExecuteAnimation(UnityEngine::GameObject go, UnityEngine::CanvasGroup parentCanvasGroup, bool instant, System::Action finishedCallback) ;

// Ctor Parameters []
explicit PanelAnimationSO() ;

/// @brief Method .ctor addr 0x1fa5888 size 0x94 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
NEED_NO_BOX(HMUI::PanelAnimationSO);
DEFINE_IL2CPP_ARG_TYPE(HMUI::PanelAnimationSO, "HMUI", "PanelAnimationSO");
