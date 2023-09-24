#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectManager_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
namespace GlobalNamespace {
class BurstSliderGameNoteController;
}
namespace GlobalNamespace {
class GlobalNamespace__ObstacleController__Pool;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
class GlobalNamespace__BombNoteController__Pool;
}
namespace GlobalNamespace {
class GlobalNamespace__SliderController__Pool;
}
namespace GlobalNamespace {
class BombNoteController;
}
namespace GlobalNamespace {
class SliderController;
}
namespace GlobalNamespace {
struct GlobalNamespace__SliderController__LengthType;
}
namespace GlobalNamespace {
class NoteController;
}
namespace GlobalNamespace {
struct GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData;
}
namespace GlobalNamespace {
class ObstacleController;
}
namespace GlobalNamespace {
class NoteData;
}
namespace GlobalNamespace {
class GameNoteController;
}
namespace GlobalNamespace {
class GlobalNamespace__GameNoteController__Pool;
}
namespace GlobalNamespace {
class GlobalNamespace__BasicBeatmapObjectManager__InitData;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace GlobalNamespace {
class ObstacleData;
}
namespace GlobalNamespace {
struct GlobalNamespace__BeatmapObjectSpawnMovementData__ObstacleSpawnData;
}
namespace GlobalNamespace {
struct GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData;
}
namespace GlobalNamespace {
template<typename T>
class MemoryPoolContainer_1;
}
namespace GlobalNamespace {
class GlobalNamespace__BurstSliderGameNoteController__Pool;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace GlobalNamespace {
class SliderData;
}
// Forward declare root types
namespace GlobalNamespace {
class BasicBeatmapObjectManager;
}
namespace GlobalNamespace {
class GlobalNamespace__BasicBeatmapObjectManager__InitData;
}
// Type: ::InitData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4818))
// CS Name: BasicBeatmapObjectManager::InitData
class CORDL_TYPE GlobalNamespace__BasicBeatmapObjectManager__InitData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__BasicBeatmapObjectManager__InitData() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BasicBeatmapObjectManager__InitData", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__BasicBeatmapObjectManager__InitData(GlobalNamespace__BasicBeatmapObjectManager__InitData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BasicBeatmapObjectManager__InitData", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__BasicBeatmapObjectManager__InitData(GlobalNamespace__BasicBeatmapObjectManager__InitData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__BasicBeatmapObjectManager__InitData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__BasicBeatmapObjectManager__InitData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__BasicBeatmapObjectManager__InitData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__BasicBeatmapObjectManager__InitData& operator=(GlobalNamespace__BasicBeatmapObjectManager__InitData&& o) noexcept = default;
  constexpr GlobalNamespace__BasicBeatmapObjectManager__InitData& operator=(GlobalNamespace__BasicBeatmapObjectManager__InitData const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_disappearingArrows, put=__set_disappearingArrows))  disappearingArrows;

constexpr void __set_disappearingArrows(bool value) ;

constexpr bool __get_disappearingArrows() const;

 bool __declspec(property(get=__get_ghostNotes, put=__set_ghostNotes))  ghostNotes;

constexpr void __set_ghostNotes(bool value) ;

constexpr bool __get_ghostNotes() const;

 float_t __declspec(property(get=__get_cutAngleTolerance, put=__set_cutAngleTolerance))  cutAngleTolerance;

constexpr void __set_cutAngleTolerance(float_t value) ;

constexpr float_t __get_cutAngleTolerance() const;

 float_t __declspec(property(get=__get_notesUniformScale, put=__set_notesUniformScale))  notesUniformScale;

constexpr void __set_notesUniformScale(float_t value) ;

constexpr float_t __get_notesUniformScale() const;


// Methods

static GlobalNamespace::GlobalNamespace__BasicBeatmapObjectManager__InitData New_ctor(bool disappearingArrows, bool ghostNotes, float_t cutAngleTolerance, float_t notesUniformScale) ;

/// @brief Method .ctor addr 0x222fd68 size 0x44 virtual false final false
 void _ctor(bool disappearingArrows, bool ghostNotes, float_t cutAngleTolerance, float_t notesUniformScale) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::BasicBeatmapObjectManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4832))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4819))
// CS Name: BasicBeatmapObjectManager
class CORDL_TYPE BasicBeatmapObjectManager : public GlobalNamespace::BeatmapObjectManager {
public:
// Declarations
using InitData = GlobalNamespace::GlobalNamespace__BasicBeatmapObjectManager__InitData;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xe0};

virtual ~BasicBeatmapObjectManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "BasicBeatmapObjectManager", modifiers: " const&", def_value: None }]
constexpr BasicBeatmapObjectManager(BasicBeatmapObjectManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BasicBeatmapObjectManager", modifiers: "&&", def_value: None }]
constexpr BasicBeatmapObjectManager(BasicBeatmapObjectManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BasicBeatmapObjectManager(void* ptr) noexcept : GlobalNamespace::BeatmapObjectManager(ptr) {
}


  constexpr BasicBeatmapObjectManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BasicBeatmapObjectManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BasicBeatmapObjectManager& operator=(BasicBeatmapObjectManager&& o) noexcept = default;
  constexpr BasicBeatmapObjectManager& operator=(BasicBeatmapObjectManager const& o) noexcept = default;
                


// Fields

 System::Nullable_1<float_t> __declspec(property(get=__get__firstBasicNoteTime, put=__set__firstBasicNoteTime))  _firstBasicNoteTime;

constexpr void __set__firstBasicNoteTime(System::Nullable_1<float_t> value) ;

constexpr System::Nullable_1<float_t> __get__firstBasicNoteTime() const;

 GlobalNamespace::GlobalNamespace__BasicBeatmapObjectManager__InitData __declspec(property(get=__get__initData, put=__set__initData))  _initData;

constexpr void __set__initData(GlobalNamespace::GlobalNamespace__BasicBeatmapObjectManager__InitData value) ;

constexpr GlobalNamespace::GlobalNamespace__BasicBeatmapObjectManager__InitData __get__initData() const;

 GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::GameNoteController> __declspec(property(get=__get__basicGameNotePoolContainer, put=__set__basicGameNotePoolContainer))  _basicGameNotePoolContainer;

constexpr void __set__basicGameNotePoolContainer(GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::GameNoteController> value) ;

constexpr GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::GameNoteController> __get__basicGameNotePoolContainer() const;

 GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::GameNoteController> __declspec(property(get=__get__burstSliderHeadGameNotePoolContainer, put=__set__burstSliderHeadGameNotePoolContainer))  _burstSliderHeadGameNotePoolContainer;

constexpr void __set__burstSliderHeadGameNotePoolContainer(GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::GameNoteController> value) ;

constexpr GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::GameNoteController> __get__burstSliderHeadGameNotePoolContainer() const;

 GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::BurstSliderGameNoteController> __declspec(property(get=__get__burstSliderGameNotePoolContainer, put=__set__burstSliderGameNotePoolContainer))  _burstSliderGameNotePoolContainer;

constexpr void __set__burstSliderGameNotePoolContainer(GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::BurstSliderGameNoteController> value) ;

constexpr GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::BurstSliderGameNoteController> __get__burstSliderGameNotePoolContainer() const;

 GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::BurstSliderGameNoteController> __declspec(property(get=__get__burstSliderFillPoolContainer, put=__set__burstSliderFillPoolContainer))  _burstSliderFillPoolContainer;

constexpr void __set__burstSliderFillPoolContainer(GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::BurstSliderGameNoteController> value) ;

constexpr GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::BurstSliderGameNoteController> __get__burstSliderFillPoolContainer() const;

 GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::BombNoteController> __declspec(property(get=__get__bombNotePoolContainer, put=__set__bombNotePoolContainer))  _bombNotePoolContainer;

constexpr void __set__bombNotePoolContainer(GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::BombNoteController> value) ;

constexpr GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::BombNoteController> __get__bombNotePoolContainer() const;

 GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::ObstacleController> __declspec(property(get=__get__obstaclePoolContainer, put=__set__obstaclePoolContainer))  _obstaclePoolContainer;

constexpr void __set__obstaclePoolContainer(GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::ObstacleController> value) ;

constexpr GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::ObstacleController> __get__obstaclePoolContainer() const;

 System::Collections::Generic::Dictionary_2<GlobalNamespace::GlobalNamespace__SliderController__LengthType,GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::SliderController>> __declspec(property(get=__get__sliderNotePoolContainersDictionary, put=__set__sliderNotePoolContainersDictionary))  _sliderNotePoolContainersDictionary;

constexpr void __set__sliderNotePoolContainersDictionary(System::Collections::Generic::Dictionary_2<GlobalNamespace::GlobalNamespace__SliderController__LengthType,GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::SliderController>> value) ;

constexpr System::Collections::Generic::Dictionary_2<GlobalNamespace::GlobalNamespace__SliderController__LengthType,GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::SliderController>> __get__sliderNotePoolContainersDictionary() const;


// Properties

 System::Collections::Generic::List_1<GlobalNamespace::ObstacleController> __declspec(property(get=get_activeObstacleControllers))  activeObstacleControllers;


// Methods

/// @brief Method get_activeObstacleControllers addr 0x222df38 size 0x50 virtual true final false
 System::Collections::Generic::List_1<GlobalNamespace::ObstacleController> get_activeObstacleControllers() ;

/// @brief Method Init addr 0x222df88 size 0x5c0 virtual false final false
 void Init(GlobalNamespace::GlobalNamespace__BasicBeatmapObjectManager__InitData initData, GlobalNamespace::GlobalNamespace__GameNoteController__Pool basicGameNotePool, GlobalNamespace::GlobalNamespace__GameNoteController__Pool burstSliderHeadGameNotePool, GlobalNamespace::GlobalNamespace__BurstSliderGameNoteController__Pool burstSliderGameNotePool, GlobalNamespace::GlobalNamespace__BurstSliderGameNoteController__Pool burstSliderFillPool, GlobalNamespace::GlobalNamespace__BombNoteController__Pool bombNotePool, GlobalNamespace::GlobalNamespace__ObstacleController__Pool obstaclePool, GlobalNamespace::GlobalNamespace__SliderController__Pool sliderPools) ;

/// @brief Method ProcessObstacleData addr 0x222e548 size 0xf4 virtual true final false
 void ProcessObstacleData(GlobalNamespace::ObstacleData obstacleData, ByRef<GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__ObstacleSpawnData> obstacleSpawnData, float_t rotation) ;

/// @brief Method DespawnInternal addr 0x222e7d4 size 0x58 virtual true final false
 void DespawnInternal(GlobalNamespace::ObstacleController obstacleController) ;

/// @brief Method ProcessNoteData addr 0x222e82c size 0x3f8 virtual true final false
 void ProcessNoteData(GlobalNamespace::NoteData noteData, ByRef<GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData> noteSpawnData, float_t rotation, bool forceIsFirstNoteBehaviour) ;

/// @brief Method DespawnInternal addr 0x222f14c size 0x1f4 virtual true final false
 void DespawnInternal(GlobalNamespace::NoteController noteController) ;

/// @brief Method ProcessSliderData addr 0x222f340 size 0x244 virtual true final false
 void ProcessSliderData(GlobalNamespace::SliderData sliderData, ByRef<GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData> sliderSpawnData, float_t rotation) ;

/// @brief Method DespawnInternal addr 0x222fc4c size 0x9c virtual true final false
 void DespawnInternal(GlobalNamespace::SliderController sliderNoteController) ;

static GlobalNamespace::BasicBeatmapObjectManager New_ctor() ;

/// @brief Method .ctor addr 0x222fce8 size 0x4 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BasicBeatmapObjectManager);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BasicBeatmapObjectManager, "", "BasicBeatmapObjectManager");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__BasicBeatmapObjectManager__InitData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__BasicBeatmapObjectManager__InitData, "", "BasicBeatmapObjectManager/InitData");
