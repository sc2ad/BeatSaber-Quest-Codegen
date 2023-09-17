#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace {
namespace GlobalNamespace {
class MultiplayerLeaderboardPanelItem;
}
namespace GlobalNamespace {
class MultiplayerScoreProvider;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLeaderboardPanelController;
}
// Type: ::MultiplayerLeaderboardPanelController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5137))
// CS Name: MultiplayerLeaderboardPanelController
class CORDL_TYPE MultiplayerLeaderboardPanelController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~MultiplayerLeaderboardPanelController() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLeaderboardPanelController", modifiers: " const&", def_value: None }]
constexpr MultiplayerLeaderboardPanelController(MultiplayerLeaderboardPanelController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLeaderboardPanelController", modifiers: "&&", def_value: None }]
constexpr MultiplayerLeaderboardPanelController(MultiplayerLeaderboardPanelController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerLeaderboardPanelController(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MultiplayerLeaderboardPanelController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerLeaderboardPanelController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerLeaderboardPanelController& operator=(MultiplayerLeaderboardPanelController&& o) noexcept = default;
  constexpr MultiplayerLeaderboardPanelController& operator=(MultiplayerLeaderboardPanelController const& o) noexcept = default;
                


// Fields

 ::ArrayW<::GlobalNamespace::MultiplayerLeaderboardPanelItem> __declspec(property(get=__get__items, put=__set__items))  _items;

constexpr void __set__items(::ArrayW<::GlobalNamespace::MultiplayerLeaderboardPanelItem> value) ;

constexpr ::ArrayW<::GlobalNamespace::MultiplayerLeaderboardPanelItem> __get__items() const;

 ::GlobalNamespace::MultiplayerScoreProvider __declspec(property(get=__get__scoreProvider, put=__set__scoreProvider))  _scoreProvider;

constexpr void __set__scoreProvider(::GlobalNamespace::MultiplayerScoreProvider value) ;

constexpr ::GlobalNamespace::MultiplayerScoreProvider __get__scoreProvider() const;


// Methods

/// @brief Method Start addr 0x2276410 size 0x60 virtual false final false
 void Start() ;

/// @brief Method Update addr 0x227649c size 0x248 virtual false final false
 void Update() ;

// Ctor Parameters []
explicit MultiplayerLeaderboardPanelController() ;

/// @brief Method .ctor addr 0x22769b4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLeaderboardPanelController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLeaderboardPanelController, "", "MultiplayerLeaderboardPanelController");
