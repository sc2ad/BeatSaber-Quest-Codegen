#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
class AnimationClip;
}
// Forward declare root types
namespace HMUI {
class VerticalScrollIndicator;
}
// Type: HMUI::VerticalScrollIndicator
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13726))
// CS Name: HMUI.VerticalScrollIndicator
class CORDL_TYPE VerticalScrollIndicator : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~VerticalScrollIndicator() = default;

// Ctor Parameters [CppParam { name: "", ty: "VerticalScrollIndicator", modifiers: " const&", def_value: None }]
constexpr VerticalScrollIndicator(VerticalScrollIndicator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "VerticalScrollIndicator", modifiers: "&&", def_value: None }]
constexpr VerticalScrollIndicator(VerticalScrollIndicator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit VerticalScrollIndicator(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr VerticalScrollIndicator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr VerticalScrollIndicator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr VerticalScrollIndicator& operator=(VerticalScrollIndicator&& o) noexcept = default;
  constexpr VerticalScrollIndicator& operator=(VerticalScrollIndicator const& o) noexcept = default;
                


// Fields

 UnityEngine::RectTransform __declspec(property(get=__get__handle, put=__set__handle))  _handle;

constexpr void __set__handle(UnityEngine::RectTransform value) ;

constexpr UnityEngine::RectTransform __get__handle() const;

 UnityEngine::AnimationClip __declspec(property(get=__get__normalAnimationClip, put=__set__normalAnimationClip))  _normalAnimationClip;

constexpr void __set__normalAnimationClip(UnityEngine::AnimationClip value) ;

constexpr UnityEngine::AnimationClip __get__normalAnimationClip() const;

 UnityEngine::AnimationClip __declspec(property(get=__get__disabledAnimationClip, put=__set__disabledAnimationClip))  _disabledAnimationClip;

constexpr void __set__disabledAnimationClip(UnityEngine::AnimationClip value) ;

constexpr UnityEngine::AnimationClip __get__disabledAnimationClip() const;

 float_t __declspec(property(get=__get__padding, put=__set__padding))  _padding;

constexpr void __set__padding(float_t value) ;

constexpr float_t __get__padding() const;

 float_t __declspec(property(get=__get__progress, put=__set__progress))  _progress;

constexpr void __set__progress(float_t value) ;

constexpr float_t __get__progress() const;

 float_t __declspec(property(get=__get__normalizedPageHeight, put=__set__normalizedPageHeight))  _normalizedPageHeight;

constexpr void __set__normalizedPageHeight(float_t value) ;

constexpr float_t __get__normalizedPageHeight() const;


// Properties

 float_t __declspec(property(get=get_progress, put=set_progress))  progress;

 float_t __declspec(property(get=get_normalizedPageHeight, put=set_normalizedPageHeight))  normalizedPageHeight;

 bool __declspec(property(put=set_disabled))  disabled;


// Methods

/// @brief Method set_progress addr 0x1fd0dbc size 0x2c virtual false final false
 void set_progress(float_t value) ;

/// @brief Method get_progress addr 0x1fd7384 size 0x8 virtual false final false
 float_t get_progress() ;

/// @brief Method set_normalizedPageHeight addr 0x1fd0b54 size 0x2c virtual false final false
 void set_normalizedPageHeight(float_t value) ;

/// @brief Method get_normalizedPageHeight addr 0x1fd738c size 0x8 virtual false final false
 float_t get_normalizedPageHeight() ;

/// @brief Method set_disabled addr 0x1fd7394 size 0x40 virtual false final false
 void set_disabled(bool value) ;

/// @brief Method OnEnable addr 0x1fd73d4 size 0x4 virtual false final false
 void OnEnable() ;

/// @brief Method RefreshHandle addr 0x1fd7294 size 0xf0 virtual false final false
 void RefreshHandle() ;

// Ctor Parameters []
explicit VerticalScrollIndicator() ;

/// @brief Method .ctor addr 0x1fd73d8 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
NEED_NO_BOX(HMUI::VerticalScrollIndicator);
DEFINE_IL2CPP_ARG_TYPE(HMUI::VerticalScrollIndicator, "HMUI", "VerticalScrollIndicator");
