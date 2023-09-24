#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectManager_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
namespace GlobalNamespace {
class ObstacleSpawnInfoNetSerializable;
}
namespace GlobalNamespace {
class MultiplayerConnectedPlayerGameNoteController;
}
namespace GlobalNamespace {
class NoteCutInfoNetSerializable;
}
namespace GlobalNamespace {
class GlobalNamespace__MultiplayerConnectedPlayerGameNoteController__Pool;
}
namespace GlobalNamespace {
struct GlobalNamespace__BeatmapObjectSpawnMovementData__ObstacleSpawnData;
}
namespace GlobalNamespace {
struct GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData;
}
namespace GlobalNamespace {
class IConnectedPlayerBeatmapObjectEventManager;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
class GlobalNamespace__MultiplayerConnectedPlayerObstacleController__Pool;
}
namespace GlobalNamespace {
class NoteData;
}
namespace GlobalNamespace {
class SliderSpawnInfoNetSerializable;
}
namespace GlobalNamespace {
class MultiplayerConnectedPlayerObstacleController;
}
namespace GlobalNamespace {
template<typename T>
class MemoryPoolContainer_1;
}
namespace System {
class IDisposable;
}
namespace GlobalNamespace {
template<typename T0,typename T1>
class MemoryPoolContainer_2;
}
namespace GlobalNamespace {
class SliderController;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace GlobalNamespace {
class ObstacleController;
}
namespace GlobalNamespace {
class MultiplayerConnectedPlayerBombNoteController;
}
namespace GlobalNamespace {
class SliderData;
}
namespace GlobalNamespace {
class NoteController;
}
namespace GlobalNamespace {
class ObstacleData;
}
namespace GlobalNamespace {
struct GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData;
}
namespace GlobalNamespace {
class GlobalNamespace__MultiplayerConnectedPlayerBombNoteController__Pool;
}
namespace GlobalNamespace {
class GlobalNamespace__MultiplayerConnectedPlayerBeatmapObjectManager__InitData;
}
namespace GlobalNamespace {
class NoteSpawnInfoNetSerializable;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__MultiplayerConnectedPlayerBeatmapObjectManager__InitData;
}
namespace GlobalNamespace {
class MultiplayerConnectedPlayerBeatmapObjectManager;
}
// Type: ::InitData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5218))
// CS Name: MultiplayerConnectedPlayerBeatmapObjectManager::InitData
class CORDL_TYPE GlobalNamespace__MultiplayerConnectedPlayerBeatmapObjectManager__InitData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GlobalNamespace__MultiplayerConnectedPlayerBeatmapObjectManager__InitData() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MultiplayerConnectedPlayerBeatmapObjectManager__InitData", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__MultiplayerConnectedPlayerBeatmapObjectManager__InitData(GlobalNamespace__MultiplayerConnectedPlayerBeatmapObjectManager__InitData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MultiplayerConnectedPlayerBeatmapObjectManager__InitData", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__MultiplayerConnectedPlayerBeatmapObjectManager__InitData(GlobalNamespace__MultiplayerConnectedPlayerBeatmapObjectManager__InitData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__MultiplayerConnectedPlayerBeatmapObjectManager__InitData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__MultiplayerConnectedPlayerBeatmapObjectManager__InitData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__MultiplayerConnectedPlayerBeatmapObjectManager__InitData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__MultiplayerConnectedPlayerBeatmapObjectManager__InitData& operator=(GlobalNamespace__MultiplayerConnectedPlayerBeatmapObjectManager__InitData&& o) noexcept = default;
  constexpr GlobalNamespace__MultiplayerConnectedPlayerBeatmapObjectManager__InitData& operator=(GlobalNamespace__MultiplayerConnectedPlayerBeatmapObjectManager__InitData const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_disappearingArrows, put=__set_disappearingArrows))  disappearingArrows;

constexpr void __set_disappearingArrows(bool value) ;

constexpr bool __get_disappearingArrows() const;

 bool __declspec(property(get=__get_ghostNotes, put=__set_ghostNotes))  ghostNotes;

constexpr void __set_ghostNotes(bool value) ;

constexpr bool __get_ghostNotes() const;

 float_t __declspec(property(get=__get_notesUniformScale, put=__set_notesUniformScale))  notesUniformScale;

constexpr void __set_notesUniformScale(float_t value) ;

constexpr float_t __get_notesUniformScale() const;


// Methods

static GlobalNamespace::GlobalNamespace__MultiplayerConnectedPlayerBeatmapObjectManager__InitData New_ctor(bool disappearingArrows, bool ghostNotes, float_t notesUniformScale) ;

/// @brief Method .ctor addr 0x20df0e0 size 0x40 virtual false final false
 void _ctor(bool disappearingArrows, bool ghostNotes, float_t notesUniformScale) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::MultiplayerConnectedPlayerBeatmapObjectManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4832))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5219))
// CS Name: MultiplayerConnectedPlayerBeatmapObjectManager
class CORDL_TYPE MultiplayerConnectedPlayerBeatmapObjectManager : public GlobalNamespace::BeatmapObjectManager {
public:
// Declarations
using InitData = GlobalNamespace::GlobalNamespace__MultiplayerConnectedPlayerBeatmapObjectManager__InitData;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xe0};

virtual ~MultiplayerConnectedPlayerBeatmapObjectManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerBeatmapObjectManager", modifiers: " const&", def_value: None }]
constexpr MultiplayerConnectedPlayerBeatmapObjectManager(MultiplayerConnectedPlayerBeatmapObjectManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerBeatmapObjectManager", modifiers: "&&", def_value: None }]
constexpr MultiplayerConnectedPlayerBeatmapObjectManager(MultiplayerConnectedPlayerBeatmapObjectManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerConnectedPlayerBeatmapObjectManager(void* ptr) noexcept : GlobalNamespace::BeatmapObjectManager(ptr) {
}


  constexpr MultiplayerConnectedPlayerBeatmapObjectManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerConnectedPlayerBeatmapObjectManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerConnectedPlayerBeatmapObjectManager& operator=(MultiplayerConnectedPlayerBeatmapObjectManager&& o) noexcept = default;
  constexpr MultiplayerConnectedPlayerBeatmapObjectManager& operator=(MultiplayerConnectedPlayerBeatmapObjectManager const& o) noexcept = default;
                


// Fields

 System::Nullable_1<float_t> __declspec(property(get=__get__firstBasicNoteTime, put=__set__firstBasicNoteTime))  _firstBasicNoteTime;

constexpr void __set__firstBasicNoteTime(System::Nullable_1<float_t> value) ;

constexpr System::Nullable_1<float_t> __get__firstBasicNoteTime() const;

 GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::MultiplayerConnectedPlayerGameNoteController> __declspec(property(get=__get__gameNotePoolContainer, put=__set__gameNotePoolContainer))  _gameNotePoolContainer;

constexpr void __set__gameNotePoolContainer(GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::MultiplayerConnectedPlayerGameNoteController> value) ;

constexpr GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::MultiplayerConnectedPlayerGameNoteController> __get__gameNotePoolContainer() const;

 GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::MultiplayerConnectedPlayerGameNoteController> __declspec(property(get=__get__burstSliderHeadGameNotePoolContainer, put=__set__burstSliderHeadGameNotePoolContainer))  _burstSliderHeadGameNotePoolContainer;

constexpr void __set__burstSliderHeadGameNotePoolContainer(GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::MultiplayerConnectedPlayerGameNoteController> value) ;

constexpr GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::MultiplayerConnectedPlayerGameNoteController> __get__burstSliderHeadGameNotePoolContainer() const;

 GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::MultiplayerConnectedPlayerGameNoteController> __declspec(property(get=__get__burstSliderGameNotePoolContainer, put=__set__burstSliderGameNotePoolContainer))  _burstSliderGameNotePoolContainer;

constexpr void __set__burstSliderGameNotePoolContainer(GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::MultiplayerConnectedPlayerGameNoteController> value) ;

constexpr GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::MultiplayerConnectedPlayerGameNoteController> __get__burstSliderGameNotePoolContainer() const;

 GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::MultiplayerConnectedPlayerGameNoteController> __declspec(property(get=__get__burstSliderFillPoolContainer, put=__set__burstSliderFillPoolContainer))  _burstSliderFillPoolContainer;

constexpr void __set__burstSliderFillPoolContainer(GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::MultiplayerConnectedPlayerGameNoteController> value) ;

constexpr GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::MultiplayerConnectedPlayerGameNoteController> __get__burstSliderFillPoolContainer() const;

 GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::MultiplayerConnectedPlayerBombNoteController> __declspec(property(get=__get__bombNotePoolContainer, put=__set__bombNotePoolContainer))  _bombNotePoolContainer;

constexpr void __set__bombNotePoolContainer(GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::MultiplayerConnectedPlayerBombNoteController> value) ;

constexpr GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::MultiplayerConnectedPlayerBombNoteController> __get__bombNotePoolContainer() const;

 GlobalNamespace::MemoryPoolContainer_2<GlobalNamespace::MultiplayerConnectedPlayerObstacleController,GlobalNamespace::ObstacleController> __declspec(property(get=__get__obstaclePoolContainer, put=__set__obstaclePoolContainer))  _obstaclePoolContainer;

constexpr void __set__obstaclePoolContainer(GlobalNamespace::MemoryPoolContainer_2<GlobalNamespace::MultiplayerConnectedPlayerObstacleController,GlobalNamespace::ObstacleController> value) ;

constexpr GlobalNamespace::MemoryPoolContainer_2<GlobalNamespace::MultiplayerConnectedPlayerObstacleController,GlobalNamespace::ObstacleController> __get__obstaclePoolContainer() const;

 GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager __declspec(property(get=__get__beatmapObjectEventManager, put=__set__beatmapObjectEventManager))  _beatmapObjectEventManager;

constexpr void __set__beatmapObjectEventManager(GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager value) ;

constexpr GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager __get__beatmapObjectEventManager() const;

 GlobalNamespace::GlobalNamespace__MultiplayerConnectedPlayerBeatmapObjectManager__InitData __declspec(property(get=__get__initData, put=__set__initData))  _initData;

constexpr void __set__initData(GlobalNamespace::GlobalNamespace__MultiplayerConnectedPlayerBeatmapObjectManager__InitData value) ;

constexpr GlobalNamespace::GlobalNamespace__MultiplayerConnectedPlayerBeatmapObjectManager__InitData __get__initData() const;


// Properties

 System::Collections::Generic::List_1<GlobalNamespace::ObstacleController> __declspec(property(get=get_activeObstacleControllers))  activeObstacleControllers;


// Methods

/// @brief Method get_activeObstacleControllers addr 0x20dd594 size 0x50 virtual true final false
 System::Collections::Generic::List_1<GlobalNamespace::ObstacleController> get_activeObstacleControllers() ;

static GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager New_ctor(GlobalNamespace::GlobalNamespace__MultiplayerConnectedPlayerBeatmapObjectManager__InitData initData, GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager beatmapObjectEventManager, GlobalNamespace::GlobalNamespace__MultiplayerConnectedPlayerGameNoteController__Pool gameNotePool, GlobalNamespace::GlobalNamespace__MultiplayerConnectedPlayerGameNoteController__Pool burstSliderHeadGameNotePool, GlobalNamespace::GlobalNamespace__MultiplayerConnectedPlayerGameNoteController__Pool burstSliderGameNotePool, GlobalNamespace::GlobalNamespace__MultiplayerConnectedPlayerGameNoteController__Pool burstSliderFillPool, GlobalNamespace::GlobalNamespace__MultiplayerConnectedPlayerBombNoteController__Pool bombNotePool, GlobalNamespace::GlobalNamespace__MultiplayerConnectedPlayerObstacleController__Pool obstaclePool) ;

/// @brief Method .ctor addr 0x20dd5e4 size 0x480 virtual false final false
 void _ctor(GlobalNamespace::GlobalNamespace__MultiplayerConnectedPlayerBeatmapObjectManager__InitData initData, GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager beatmapObjectEventManager, GlobalNamespace::GlobalNamespace__MultiplayerConnectedPlayerGameNoteController__Pool gameNotePool, GlobalNamespace::GlobalNamespace__MultiplayerConnectedPlayerGameNoteController__Pool burstSliderHeadGameNotePool, GlobalNamespace::GlobalNamespace__MultiplayerConnectedPlayerGameNoteController__Pool burstSliderGameNotePool, GlobalNamespace::GlobalNamespace__MultiplayerConnectedPlayerGameNoteController__Pool burstSliderFillPool, GlobalNamespace::GlobalNamespace__MultiplayerConnectedPlayerBombNoteController__Pool bombNotePool, GlobalNamespace::GlobalNamespace__MultiplayerConnectedPlayerObstacleController__Pool obstaclePool) ;

/// @brief Method Dispose addr 0x20dda64 size 0x318 virtual true final true
 void Dispose() ;

/// @brief Method ProcessObstacleData addr 0x20ddd7c size 0xfc virtual true final false
 void ProcessObstacleData(GlobalNamespace::ObstacleData obstacleData, ByRef<GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__ObstacleSpawnData> obstacleSpawnData, float_t rotation) ;

/// @brief Method ProcessNoteData addr 0x20dde78 size 0x354 virtual true final false
 void ProcessNoteData(GlobalNamespace::NoteData noteData, ByRef<GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData> noteSpawnData, float_t rotation, bool forceIsFirstNoteBehaviour) ;

/// @brief Method ProcessSliderData addr 0x20de33c size 0x4 virtual true final false
 void ProcessSliderData(GlobalNamespace::SliderData sliderData, ByRef<GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData> sliderSpawnData, float_t rotation) ;

/// @brief Method DespawnInternal addr 0x20de340 size 0x14c virtual true final false
 void DespawnInternal(GlobalNamespace::NoteController noteController) ;

/// @brief Method DespawnInternal addr 0x20de48c size 0xa8 virtual true final false
 void DespawnInternal(GlobalNamespace::ObstacleController obstacleController) ;

/// @brief Method DespawnInternal addr 0x20de534 size 0x4 virtual true final false
 void DespawnInternal(GlobalNamespace::SliderController sliderNoteController) ;

/// @brief Method HandleMultiplayerBeatmapObjectEventManagerBeatmapObjectWasSpawned addr 0x20de538 size 0x144 virtual false final false
 void HandleMultiplayerBeatmapObjectEventManagerBeatmapObjectWasSpawned(GlobalNamespace::NoteSpawnInfoNetSerializable noteSpawnInfo) ;

/// @brief Method HandleMultiplayerBeatmapObjectEventManagerObstacleWasSpawned addr 0x20de6cc size 0x178 virtual false final false
 void HandleMultiplayerBeatmapObjectEventManagerObstacleWasSpawned(GlobalNamespace::ObstacleSpawnInfoNetSerializable obstacleSpawnInfo) ;

/// @brief Method HandleMultiplayerBeatmapObjectEventManagerSliderWasSpawned addr 0x20de844 size 0x27c virtual false final false
 void HandleMultiplayerBeatmapObjectEventManagerSliderWasSpawned(GlobalNamespace::SliderSpawnInfoNetSerializable sliderSpawnInfo) ;

/// @brief Method HandleMultiplayerBeatmapObjectEventManagerBeatmapObjectWasCut addr 0x20deac0 size 0x544 virtual false final false
 void HandleMultiplayerBeatmapObjectEventManagerBeatmapObjectWasCut(GlobalNamespace::NoteCutInfoNetSerializable noteCutInfo) ;

/// @brief Method AreNotesSame addr 0x20df004 size 0xdc virtual false final false
static bool AreNotesSame(GlobalNamespace::NoteController noteController, GlobalNamespace::NoteCutInfoNetSerializable noteCutInfo) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__MultiplayerConnectedPlayerBeatmapObjectManager__InitData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__MultiplayerConnectedPlayerBeatmapObjectManager__InitData, "", "MultiplayerConnectedPlayerBeatmapObjectManager/InitData");
NEED_NO_BOX(GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager, "", "MultiplayerConnectedPlayerBeatmapObjectManager");
