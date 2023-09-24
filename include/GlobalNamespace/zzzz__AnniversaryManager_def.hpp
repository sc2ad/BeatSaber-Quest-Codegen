#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace GlobalNamespace {
struct GlobalNamespace__MainMenuViewController__MenuButton;
}
namespace GlobalNamespace {
class FireworksController;
}
namespace GlobalNamespace {
class MainMenuViewController;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace GlobalNamespace {
class IBeatmapLevelPack;
}
// Forward declare root types
namespace GlobalNamespace {
class AnniversaryManager;
}
// Type: ::AnniversaryManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3991))
// CS Name: AnniversaryManager
class CORDL_TYPE AnniversaryManager : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~AnniversaryManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "AnniversaryManager", modifiers: " const&", def_value: None }]
constexpr AnniversaryManager(AnniversaryManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AnniversaryManager", modifiers: "&&", def_value: None }]
constexpr AnniversaryManager(AnniversaryManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AnniversaryManager(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr AnniversaryManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AnniversaryManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AnniversaryManager& operator=(AnniversaryManager&& o) noexcept = default;
  constexpr AnniversaryManager& operator=(AnniversaryManager const& o) noexcept = default;
                


// Fields

 GlobalNamespace::FireworksController __declspec(property(get=__get__fireworksController, put=__set__fireworksController))  _fireworksController;

constexpr void __set__fireworksController(GlobalNamespace::FireworksController value) ;

constexpr GlobalNamespace::FireworksController __get__fireworksController() const;

 GlobalNamespace::MainMenuViewController __declspec(property(get=__get__mainMenuViewController, put=__set__mainMenuViewController))  _mainMenuViewController;

constexpr void __set__mainMenuViewController(GlobalNamespace::MainMenuViewController value) ;

constexpr GlobalNamespace::MainMenuViewController __get__mainMenuViewController() const;


// Methods

/// @brief Method Start addr 0x20af16c size 0xfc virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x20af288 size 0x140 virtual false final false
 void OnDestroy() ;

/// @brief Method HandleMainMenuViewControllerDidFinish addr 0x20af3c8 size 0x4 virtual false final false
 void HandleMainMenuViewControllerDidFinish(GlobalNamespace::MainMenuViewController mainMenuViewController, GlobalNamespace::GlobalNamespace__MainMenuViewController__MenuButton menuButton) ;

/// @brief Method HandleMainMenuViewControllerMusicPackPromoButtonWasPressed addr 0x20af3ec size 0x4 virtual false final false
 void HandleMainMenuViewControllerMusicPackPromoButtonWasPressed(GlobalNamespace::IBeatmapLevelPack musicPack, GlobalNamespace::IPreviewBeatmapLevel beatmap) ;

/// @brief Method StartFireworks addr 0x20af268 size 0x20 virtual false final false
 void StartFireworks() ;

/// @brief Method StopFireworks addr 0x20af3cc size 0x20 virtual false final false
 void StopFireworks() ;

static GlobalNamespace::AnniversaryManager New_ctor() ;

/// @brief Method .ctor addr 0x20af3f0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::AnniversaryManager);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AnniversaryManager, "", "AnniversaryManager");
