#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace GlobalNamespace {
class ____GlobalNamespace__CoreGameHUDController__InitData;
}
namespace UnityEngine {
class CanvasGroup;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
class MultiplayerScoreProvider;
}
namespace GlobalNamespace {
class MultiplayerPlayersManager;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerPositionHUDController;
}
// Type: ::MultiplayerPositionHUDController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5139))
// CS Name: MultiplayerPositionHUDController
class CORDL_TYPE MultiplayerPositionHUDController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~MultiplayerPositionHUDController() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerPositionHUDController", modifiers: " const&", def_value: None }]
constexpr MultiplayerPositionHUDController(MultiplayerPositionHUDController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerPositionHUDController", modifiers: "&&", def_value: None }]
constexpr MultiplayerPositionHUDController(MultiplayerPositionHUDController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerPositionHUDController(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MultiplayerPositionHUDController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerPositionHUDController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerPositionHUDController& operator=(MultiplayerPositionHUDController&& o) noexcept = default;
  constexpr MultiplayerPositionHUDController& operator=(MultiplayerPositionHUDController const& o) noexcept = default;
                


// Fields

 ::TMPro::TextMeshProUGUI __declspec(property(get=__get__playerCountText, put=__set__playerCountText))  _playerCountText;

constexpr void __set__playerCountText(::TMPro::TextMeshProUGUI value) ;

constexpr ::TMPro::TextMeshProUGUI __get__playerCountText() const;

 ::TMPro::TextMeshProUGUI __declspec(property(get=__get__positionText, put=__set__positionText))  _positionText;

constexpr void __set__positionText(::TMPro::TextMeshProUGUI value) ;

constexpr ::TMPro::TextMeshProUGUI __get__positionText() const;

 ::UnityEngine::CanvasGroup __declspec(property(get=__get__canvasGroup, put=__set__canvasGroup))  _canvasGroup;

constexpr void __set__canvasGroup(::UnityEngine::CanvasGroup value) ;

constexpr ::UnityEngine::CanvasGroup __get__canvasGroup() const;

 ::UnityEngine::GameObject __declspec(property(get=__get__firstPlayerAnimationGo, put=__set__firstPlayerAnimationGo))  _firstPlayerAnimationGo;

constexpr void __set__firstPlayerAnimationGo(::UnityEngine::GameObject value) ;

constexpr ::UnityEngine::GameObject __get__firstPlayerAnimationGo() const;

 ::GlobalNamespace::MultiplayerScoreProvider __declspec(property(get=__get__scoreProvider, put=__set__scoreProvider))  _scoreProvider;

constexpr void __set__scoreProvider(::GlobalNamespace::MultiplayerScoreProvider value) ;

constexpr ::GlobalNamespace::MultiplayerScoreProvider __get__scoreProvider() const;

 ::GlobalNamespace::MultiplayerPlayersManager __declspec(property(get=__get__playersManager, put=__set__playersManager))  _playersManager;

constexpr void __set__playersManager(::GlobalNamespace::MultiplayerPlayersManager value) ;

constexpr ::GlobalNamespace::MultiplayerPlayersManager __get__playersManager() const;

 ::GlobalNamespace::____GlobalNamespace__CoreGameHUDController__InitData __declspec(property(get=__get__initData, put=__set__initData))  _initData;

constexpr void __set__initData(::GlobalNamespace::____GlobalNamespace__CoreGameHUDController__InitData value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__CoreGameHUDController__InitData __get__initData() const;

 int32_t __declspec(property(get=__get__prevPosition, put=__set__prevPosition))  _prevPosition;

constexpr void __set__prevPosition(int32_t value) ;

constexpr int32_t __get__prevPosition() const;


// Properties

 float_t __declspec(property(put=set_alpha))  alpha;


// Methods

/// @brief Method set_alpha addr 0x22769d0 size 0x1c virtual false final false
 void set_alpha(float_t value) ;

/// @brief Method Start addr 0x22769ec size 0x15c virtual false final false
 void Start() ;

/// @brief Method Update addr 0x2276b48 size 0x1b0 virtual false final false
 void Update() ;

// Ctor Parameters []
explicit MultiplayerPositionHUDController() ;

/// @brief Method .ctor addr 0x2276cf8 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerPositionHUDController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerPositionHUDController, "", "MultiplayerPositionHUDController");
