#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace GlobalNamespace {
class PlayerDataFileManagerSO;
}
namespace GlobalNamespace {
class BeatmapCharacteristicCollection;
}
namespace GlobalNamespace {
class ISaveData;
}
namespace GlobalNamespace {
class PlayerData;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerDataModel;
}
// Type: ::PlayerDataModel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4739))
// CS Name: PlayerDataModel
class CORDL_TYPE PlayerDataModel : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~PlayerDataModel() = default;

// Ctor Parameters [CppParam { name: "", ty: "PlayerDataModel", modifiers: " const&", def_value: None }]
constexpr PlayerDataModel(PlayerDataModel const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PlayerDataModel", modifiers: "&&", def_value: None }]
constexpr PlayerDataModel(PlayerDataModel&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PlayerDataModel(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr PlayerDataModel& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PlayerDataModel& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PlayerDataModel& operator=(PlayerDataModel&& o) noexcept = default;
  constexpr PlayerDataModel& operator=(PlayerDataModel const& o) noexcept = default;
                


// Fields

 GlobalNamespace::PlayerDataFileManagerSO __declspec(property(get=__get__playerDataFileManager, put=__set__playerDataFileManager))  _playerDataFileManager;

constexpr void __set__playerDataFileManager(GlobalNamespace::PlayerDataFileManagerSO value) ;

constexpr GlobalNamespace::PlayerDataFileManagerSO __get__playerDataFileManager() const;

 GlobalNamespace::PlayerData __declspec(property(get=__get__playerData, put=__set__playerData))  _playerData;

constexpr void __set__playerData(GlobalNamespace::PlayerData value) ;

constexpr GlobalNamespace::PlayerData __get__playerData() const;

 GlobalNamespace::ISaveData __declspec(property(get=__get__saveData, put=__set__saveData))  _saveData;

constexpr void __set__saveData(GlobalNamespace::ISaveData value) ;

constexpr GlobalNamespace::ISaveData __get__saveData() const;

 GlobalNamespace::BeatmapCharacteristicCollection __declspec(property(get=__get__beatmapCharacteristicCollection, put=__set__beatmapCharacteristicCollection))  _beatmapCharacteristicCollection;

constexpr void __set__beatmapCharacteristicCollection(GlobalNamespace::BeatmapCharacteristicCollection value) ;

constexpr GlobalNamespace::BeatmapCharacteristicCollection __get__beatmapCharacteristicCollection() const;


// Properties

 GlobalNamespace::PlayerDataFileManagerSO __declspec(property(get=get_playerDataFileManager))  playerDataFileManager;

 GlobalNamespace::PlayerData __declspec(property(get=get_playerData))  playerData;


// Methods

/// @brief Method get_playerDataFileManager addr 0x2226938 size 0x8 virtual false final false
 GlobalNamespace::PlayerDataFileManagerSO get_playerDataFileManager() ;

/// @brief Method get_playerData addr 0x2226940 size 0x8 virtual false final false
 GlobalNamespace::PlayerData get_playerData() ;

/// @brief Method OnEnable addr 0x2226948 size 0x4 virtual false final false
 void OnEnable() ;

/// @brief Method OnApplicationPause addr 0x2226974 size 0xc virtual false final false
 void OnApplicationPause(bool pauseStatus) ;

/// @brief Method OnDisable addr 0x22269a0 size 0x4 virtual false final false
 void OnDisable() ;

/// @brief Method ResetData addr 0x22269a4 size 0x24 virtual false final false
 void ResetData() ;

/// @brief Method Save addr 0x2226980 size 0x20 virtual false final false
 void Save() ;

/// @brief Method Load addr 0x222694c size 0x28 virtual false final false
 void Load() ;

// Ctor Parameters []
explicit PlayerDataModel() ;

/// @brief Method .ctor addr 0x22269c8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::PlayerDataModel);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerDataModel, "", "PlayerDataModel");
