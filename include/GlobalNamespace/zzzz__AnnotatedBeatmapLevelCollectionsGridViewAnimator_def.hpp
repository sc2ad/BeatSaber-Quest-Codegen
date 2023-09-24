#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
class RectTransform;
}
namespace Tweening {
class TimeTweeningManager;
}
namespace GlobalNamespace {
struct EaseType;
}
namespace Tweening {
class Vector2Tween;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace GlobalNamespace {
class AnnotatedBeatmapLevelCollectionsGridViewAnimator;
}
// Type: ::AnnotatedBeatmapLevelCollectionsGridViewAnimator
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5856))
// CS Name: AnnotatedBeatmapLevelCollectionsGridViewAnimator
class CORDL_TYPE AnnotatedBeatmapLevelCollectionsGridViewAnimator : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~AnnotatedBeatmapLevelCollectionsGridViewAnimator() = default;

// Ctor Parameters [CppParam { name: "", ty: "AnnotatedBeatmapLevelCollectionsGridViewAnimator", modifiers: " const&", def_value: None }]
constexpr AnnotatedBeatmapLevelCollectionsGridViewAnimator(AnnotatedBeatmapLevelCollectionsGridViewAnimator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AnnotatedBeatmapLevelCollectionsGridViewAnimator", modifiers: "&&", def_value: None }]
constexpr AnnotatedBeatmapLevelCollectionsGridViewAnimator(AnnotatedBeatmapLevelCollectionsGridViewAnimator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AnnotatedBeatmapLevelCollectionsGridViewAnimator(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr AnnotatedBeatmapLevelCollectionsGridViewAnimator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AnnotatedBeatmapLevelCollectionsGridViewAnimator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AnnotatedBeatmapLevelCollectionsGridViewAnimator& operator=(AnnotatedBeatmapLevelCollectionsGridViewAnimator&& o) noexcept = default;
  constexpr AnnotatedBeatmapLevelCollectionsGridViewAnimator& operator=(AnnotatedBeatmapLevelCollectionsGridViewAnimator const& o) noexcept = default;
                


// Fields

 UnityEngine::RectTransform __declspec(property(get=__get__viewportTransform, put=__set__viewportTransform))  _viewportTransform;

constexpr void __set__viewportTransform(UnityEngine::RectTransform value) ;

constexpr UnityEngine::RectTransform __get__viewportTransform() const;

 UnityEngine::RectTransform __declspec(property(get=__get__contentTransform, put=__set__contentTransform))  _contentTransform;

constexpr void __set__contentTransform(UnityEngine::RectTransform value) ;

constexpr UnityEngine::RectTransform __get__contentTransform() const;

 float_t __declspec(property(get=__get__transitionDuration, put=__set__transitionDuration))  _transitionDuration;

constexpr void __set__transitionDuration(float_t value) ;

constexpr float_t __get__transitionDuration() const;

 GlobalNamespace::EaseType __declspec(property(get=__get__easeType, put=__set__easeType))  _easeType;

constexpr void __set__easeType(GlobalNamespace::EaseType value) ;

constexpr GlobalNamespace::EaseType __get__easeType() const;

 Tweening::TimeTweeningManager __declspec(property(get=__get__tweeningManager, put=__set__tweeningManager))  _tweeningManager;

constexpr void __set__tweeningManager(Tweening::TimeTweeningManager value) ;

constexpr Tweening::TimeTweeningManager __get__tweeningManager() const;

 float_t __declspec(property(get=__get__rowHeight, put=__set__rowHeight))  _rowHeight;

constexpr void __set__rowHeight(float_t value) ;

constexpr float_t __get__rowHeight() const;

 int32_t __declspec(property(get=__get__rowCount, put=__set__rowCount))  _rowCount;

constexpr void __set__rowCount(int32_t value) ;

constexpr int32_t __get__rowCount() const;

 int32_t __declspec(property(get=__get__selectedRow, put=__set__selectedRow))  _selectedRow;

constexpr void __set__selectedRow(int32_t value) ;

constexpr int32_t __get__selectedRow() const;

 Tweening::Vector2Tween __declspec(property(get=__get__viewportSizeTween, put=__set__viewportSizeTween))  _viewportSizeTween;

constexpr void __set__viewportSizeTween(Tweening::Vector2Tween value) ;

constexpr Tweening::Vector2Tween __get__viewportSizeTween() const;

 Tweening::Vector2Tween __declspec(property(get=__get__contentPositionTween, put=__set__contentPositionTween))  _contentPositionTween;

constexpr void __set__contentPositionTween(Tweening::Vector2Tween value) ;

constexpr Tweening::Vector2Tween __get__contentPositionTween() const;


// Methods

/// @brief Method Init addr 0x2182ab8 size 0xb0 virtual false final false
 void Init(float_t rowHeight, int32_t rowCount) ;

/// @brief Method OnDestroy addr 0x21845f4 size 0x4 virtual false final false
 void OnDestroy() ;

/// @brief Method ScrollToRowIdxInstant addr 0x21835ac size 0x5c virtual false final false
 void ScrollToRowIdxInstant(int32_t selectedRow) ;

/// @brief Method AnimateOpen addr 0x218365c size 0x334 virtual false final false
 void AnimateOpen(bool animated) ;

/// @brief Method AnimateClose addr 0x21839f8 size 0x308 virtual false final false
 void AnimateClose(int32_t selectedRow, bool animated) ;

/// @brief Method DespawnAllActiveTweens addr 0x21845f8 size 0xc8 virtual false final false
 void DespawnAllActiveTweens() ;

/// @brief Method GetContentYOffset addr 0x21845c8 size 0x2c virtual false final false
 float_t GetContentYOffset() ;

static GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator New_ctor() ;

/// @brief Method .ctor addr 0x21846c0 size 0x18 virtual false final false
 void _ctor() ;

/// @brief Method <AnimateOpen>b__13_0 addr 0x21846d8 size 0x1c virtual false final false
 void _AnimateOpen_b__13_0(UnityEngine::Vector2 size) ;

/// @brief Method <AnimateOpen>b__13_1 addr 0x21846f4 size 0x88 virtual false final false
 void _AnimateOpen_b__13_1() ;

/// @brief Method <AnimateOpen>b__13_2 addr 0x218477c size 0x1c virtual false final false
 void _AnimateOpen_b__13_2(UnityEngine::Vector2 pos) ;

/// @brief Method <AnimateOpen>b__13_3 addr 0x2184798 size 0x88 virtual false final false
 void _AnimateOpen_b__13_3() ;

/// @brief Method <AnimateClose>b__14_0 addr 0x2184820 size 0x1c virtual false final false
 void _AnimateClose_b__14_0(UnityEngine::Vector2 size) ;

/// @brief Method <AnimateClose>b__14_1 addr 0x218483c size 0x88 virtual false final false
 void _AnimateClose_b__14_1() ;

/// @brief Method <AnimateClose>b__14_2 addr 0x21848c4 size 0x1c virtual false final false
 void _AnimateClose_b__14_2(UnityEngine::Vector2 pos) ;

/// @brief Method <AnimateClose>b__14_3 addr 0x21848e0 size 0x88 virtual false final false
 void _AnimateClose_b__14_3() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator, "", "AnnotatedBeatmapLevelCollectionsGridViewAnimator");
