#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
namespace {
namespace UnityEngine {
struct Color;
}
namespace Tweening {
template<typename T>
class Tween_1;
}
namespace Tweening {
class TimeTweeningManager;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
struct EaseType;
}
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerScoreItem;
}
// Type: ::MultiplayerScoreItem
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5337))
// CS Name: MultiplayerScoreItem
class CORDL_TYPE MultiplayerScoreItem : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~MultiplayerScoreItem() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerScoreItem", modifiers: " const&", def_value: None }]
constexpr MultiplayerScoreItem(MultiplayerScoreItem const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerScoreItem", modifiers: "&&", def_value: None }]
constexpr MultiplayerScoreItem(MultiplayerScoreItem&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerScoreItem(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MultiplayerScoreItem& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerScoreItem& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerScoreItem& operator=(MultiplayerScoreItem&& o) noexcept = default;
  constexpr MultiplayerScoreItem& operator=(MultiplayerScoreItem const& o) noexcept = default;
                


// Fields

 ::TMPro::TextMeshProUGUI __declspec(property(get=__get__scoreText, put=__set__scoreText))  _scoreText;

constexpr void __set__scoreText(::TMPro::TextMeshProUGUI value) ;

constexpr ::TMPro::TextMeshProUGUI __get__scoreText() const;

 ::TMPro::TextMeshProUGUI __declspec(property(get=__get__nameText, put=__set__nameText))  _nameText;

constexpr void __set__nameText(::TMPro::TextMeshProUGUI value) ;

constexpr ::TMPro::TextMeshProUGUI __get__nameText() const;

 ::Tweening::TimeTweeningManager __declspec(property(get=__get__tweeningManager, put=__set__tweeningManager))  _tweeningManager;

constexpr void __set__tweeningManager(::Tweening::TimeTweeningManager value) ;

constexpr ::Tweening::TimeTweeningManager __get__tweeningManager() const;

 ::Tweening::Tween_1<::UnityEngine::Color> __declspec(property(get=__get__nameColorTween, put=__set__nameColorTween))  _nameColorTween;

constexpr void __set__nameColorTween(::Tweening::Tween_1<::UnityEngine::Color> value) ;

constexpr ::Tweening::Tween_1<::UnityEngine::Color> __get__nameColorTween() const;

 ::Tweening::Tween_1<::UnityEngine::Color> __declspec(property(get=__get__scoreColorTween, put=__set__scoreColorTween))  _scoreColorTween;

constexpr void __set__scoreColorTween(::Tweening::Tween_1<::UnityEngine::Color> value) ;

constexpr ::Tweening::Tween_1<::UnityEngine::Color> __get__scoreColorTween() const;


// Methods

/// @brief Method Awake addr 0x210153c size 0x168 virtual false final false
 void Awake() ;

/// @brief Method OnDestroy addr 0x21016a4 size 0x88 virtual false final false
 void OnDestroy() ;

/// @brief Method SetPositionAndRotation addr 0x210172c size 0x78 virtual false final false
 void SetPositionAndRotation(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation) ;

/// @brief Method AnimateColors addr 0x21017a4 size 0x114 virtual false final false
 void AnimateColors(::UnityEngine::Color nameColor, ::UnityEngine::Color scoreColor, float_t duration, ::GlobalNamespace::EaseType easeType) ;

/// @brief Method SetName addr 0x21018b8 size 0x24 virtual false final false
 void SetName(::StringW text) ;

/// @brief Method SetScore addr 0x21018dc size 0x24 virtual false final false
 void SetScore(::StringW text) ;

// Ctor Parameters []
explicit MultiplayerScoreItem() ;

/// @brief Method .ctor addr 0x2101900 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <Awake>b__5_0 addr 0x2101908 size 0x24 virtual false final false
 void _Awake_b__5_0(::UnityEngine::Color val) ;

/// @brief Method <Awake>b__5_1 addr 0x210192c size 0x24 virtual false final false
 void _Awake_b__5_1(::UnityEngine::Color val) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerScoreItem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerScoreItem, "", "MultiplayerScoreItem");
