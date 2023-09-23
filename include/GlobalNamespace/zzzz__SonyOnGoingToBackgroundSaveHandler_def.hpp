#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace GlobalNamespace {
class ISaveData;
}
namespace GlobalNamespace {
class MainSettingsModelSO;
}
namespace GlobalNamespace {
class LocalLeaderboardsModel;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
// Forward declare root types
namespace GlobalNamespace {
class SonyOnGoingToBackgroundSaveHandler;
}
// Type: ::SonyOnGoingToBackgroundSaveHandler
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4680))
// CS Name: SonyOnGoingToBackgroundSaveHandler
class CORDL_TYPE SonyOnGoingToBackgroundSaveHandler : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~SonyOnGoingToBackgroundSaveHandler() = default;

// Ctor Parameters [CppParam { name: "", ty: "SonyOnGoingToBackgroundSaveHandler", modifiers: " const&", def_value: None }]
constexpr SonyOnGoingToBackgroundSaveHandler(SonyOnGoingToBackgroundSaveHandler const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SonyOnGoingToBackgroundSaveHandler", modifiers: "&&", def_value: None }]
constexpr SonyOnGoingToBackgroundSaveHandler(SonyOnGoingToBackgroundSaveHandler&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SonyOnGoingToBackgroundSaveHandler(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr SonyOnGoingToBackgroundSaveHandler& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SonyOnGoingToBackgroundSaveHandler& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SonyOnGoingToBackgroundSaveHandler& operator=(SonyOnGoingToBackgroundSaveHandler&& o) noexcept = default;
  constexpr SonyOnGoingToBackgroundSaveHandler& operator=(SonyOnGoingToBackgroundSaveHandler const& o) noexcept = default;
                


// Fields

 GlobalNamespace::LocalLeaderboardsModel __declspec(property(get=__get__localLeaderboardModel, put=__set__localLeaderboardModel))  _localLeaderboardModel;

constexpr void __set__localLeaderboardModel(GlobalNamespace::LocalLeaderboardsModel value) ;

constexpr GlobalNamespace::LocalLeaderboardsModel __get__localLeaderboardModel() const;

 GlobalNamespace::MainSettingsModelSO __declspec(property(get=__get__mainSettingsModel, put=__set__mainSettingsModel))  _mainSettingsModel;

constexpr void __set__mainSettingsModel(GlobalNamespace::MainSettingsModelSO value) ;

constexpr GlobalNamespace::MainSettingsModelSO __get__mainSettingsModel() const;

 GlobalNamespace::PlayerDataModel __declspec(property(get=__get__playerDataModel, put=__set__playerDataModel))  _playerDataModel;

constexpr void __set__playerDataModel(GlobalNamespace::PlayerDataModel value) ;

constexpr GlobalNamespace::PlayerDataModel __get__playerDataModel() const;

 GlobalNamespace::ISaveData __declspec(property(get=__get__saveData, put=__set__saveData))  _saveData;

constexpr void __set__saveData(GlobalNamespace::ISaveData value) ;

constexpr GlobalNamespace::ISaveData __get__saveData() const;


// Methods

/// @brief Method Initialize addr 0x221c1f4 size 0x68 virtual false final false
 void Initialize() ;

/// @brief Method OnDestroy addr 0x221c25c size 0xc virtual false final false
 void OnDestroy() ;

/// @brief Method Subscribe addr 0x0 size 0xffffffffffffffff virtual true final false
 void Subscribe() ;

/// @brief Method Unsubscribe addr 0x0 size 0xffffffffffffffff virtual true final false
 void Unsubscribe() ;

/// @brief Method HandlePlatformHelperDidGoToBackgroundExecution addr 0x221c268 size 0x48 virtual false final false
 void HandlePlatformHelperDidGoToBackgroundExecution() ;

// Ctor Parameters []
explicit SonyOnGoingToBackgroundSaveHandler() ;

/// @brief Method .ctor addr 0x221a6ec size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::SonyOnGoingToBackgroundSaveHandler);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SonyOnGoingToBackgroundSaveHandler, "", "SonyOnGoingToBackgroundSaveHandler");
