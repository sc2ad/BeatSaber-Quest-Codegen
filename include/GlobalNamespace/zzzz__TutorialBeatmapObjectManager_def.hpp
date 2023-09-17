#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectManager_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
namespace {
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData;
}
namespace GlobalNamespace {
class SliderController;
}
namespace GlobalNamespace {
class NoteData;
}
namespace GlobalNamespace {
class ____GlobalNamespace__ObstacleController__Pool;
}
namespace GlobalNamespace {
class ObstacleData;
}
namespace GlobalNamespace {
class ObstacleController;
}
namespace GlobalNamespace {
class ____GlobalNamespace__BombNoteController__Pool;
}
namespace GlobalNamespace {
class SliderData;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData;
}
namespace GlobalNamespace {
class TutorialNoteController;
}
namespace GlobalNamespace {
class ____GlobalNamespace__TutorialNoteController__Pool;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__BeatmapObjectSpawnMovementData__ObstacleSpawnData;
}
namespace GlobalNamespace {
class NoteController;
}
namespace GlobalNamespace {
class BombNoteController;
}
namespace GlobalNamespace {
template<typename T>
class MemoryPoolContainer_1;
}
// Forward declare root types
namespace GlobalNamespace {
class TutorialBeatmapObjectManager;
}
namespace GlobalNamespace {
class ____GlobalNamespace__TutorialBeatmapObjectManager__InitData;
}
// Type: ::InitData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4945))
// CS Name: TutorialBeatmapObjectManager::InitData
class CORDL_TYPE ____GlobalNamespace__TutorialBeatmapObjectManager__InitData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____GlobalNamespace__TutorialBeatmapObjectManager__InitData() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__TutorialBeatmapObjectManager__InitData", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__TutorialBeatmapObjectManager__InitData(____GlobalNamespace__TutorialBeatmapObjectManager__InitData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__TutorialBeatmapObjectManager__InitData", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__TutorialBeatmapObjectManager__InitData(____GlobalNamespace__TutorialBeatmapObjectManager__InitData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__TutorialBeatmapObjectManager__InitData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__TutorialBeatmapObjectManager__InitData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__TutorialBeatmapObjectManager__InitData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__TutorialBeatmapObjectManager__InitData& operator=(____GlobalNamespace__TutorialBeatmapObjectManager__InitData&& o) noexcept = default;
  constexpr ____GlobalNamespace__TutorialBeatmapObjectManager__InitData& operator=(____GlobalNamespace__TutorialBeatmapObjectManager__InitData const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_cutAngleTolerance, put=__set_cutAngleTolerance))  cutAngleTolerance;

constexpr void __set_cutAngleTolerance(float_t value) ;

constexpr float_t __get_cutAngleTolerance() const;


// Methods

// Ctor Parameters [CppParam { name: "cutAngleTolerance", ty: "float_t", modifiers: "", def_value: None }]
explicit ____GlobalNamespace__TutorialBeatmapObjectManager__InitData(float_t cutAngleTolerance) ;

/// @brief Method .ctor addr 0x224d4d8 size 0x28 virtual false final false
 void _ctor(float_t cutAngleTolerance) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::TutorialBeatmapObjectManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4832))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4946))
// CS Name: TutorialBeatmapObjectManager
class CORDL_TYPE TutorialBeatmapObjectManager : public ::GlobalNamespace::BeatmapObjectManager {
public:
// Declarations
using InitData = ::GlobalNamespace::____GlobalNamespace__TutorialBeatmapObjectManager__InitData;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xb8};

virtual ~TutorialBeatmapObjectManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "TutorialBeatmapObjectManager", modifiers: " const&", def_value: None }]
constexpr TutorialBeatmapObjectManager(TutorialBeatmapObjectManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TutorialBeatmapObjectManager", modifiers: "&&", def_value: None }]
constexpr TutorialBeatmapObjectManager(TutorialBeatmapObjectManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TutorialBeatmapObjectManager(void* ptr) noexcept : ::GlobalNamespace::BeatmapObjectManager(ptr) {
}


  constexpr TutorialBeatmapObjectManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TutorialBeatmapObjectManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TutorialBeatmapObjectManager& operator=(TutorialBeatmapObjectManager&& o) noexcept = default;
  constexpr TutorialBeatmapObjectManager& operator=(TutorialBeatmapObjectManager const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::TutorialNoteController> __declspec(property(get=__get__tutorialNotePoolContainer, put=__set__tutorialNotePoolContainer))  _tutorialNotePoolContainer;

constexpr void __set__tutorialNotePoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::TutorialNoteController> value) ;

constexpr ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::TutorialNoteController> __get__tutorialNotePoolContainer() const;

 ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::BombNoteController> __declspec(property(get=__get__bombNotePoolContainer, put=__set__bombNotePoolContainer))  _bombNotePoolContainer;

constexpr void __set__bombNotePoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::BombNoteController> value) ;

constexpr ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::BombNoteController> __get__bombNotePoolContainer() const;

 ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::ObstacleController> __declspec(property(get=__get__obstaclePoolContainer, put=__set__obstaclePoolContainer))  _obstaclePoolContainer;

constexpr void __set__obstaclePoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::ObstacleController> value) ;

constexpr ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::ObstacleController> __get__obstaclePoolContainer() const;

 ::GlobalNamespace::____GlobalNamespace__TutorialBeatmapObjectManager__InitData __declspec(property(get=__get__initData, put=__set__initData))  _initData;

constexpr void __set__initData(::GlobalNamespace::____GlobalNamespace__TutorialBeatmapObjectManager__InitData value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__TutorialBeatmapObjectManager__InitData __get__initData() const;


// Properties

 ::System::Collections::Generic::List_1<::GlobalNamespace::ObstacleController> __declspec(property(get=get_activeObstacleControllers))  activeObstacleControllers;


// Methods

/// @brief Method get_activeObstacleControllers addr 0x224cf78 size 0x50 virtual true final false
 ::System::Collections::Generic::List_1<::GlobalNamespace::ObstacleController> get_activeObstacleControllers() ;

/// @brief Method Init addr 0x224cfc8 size 0x12c virtual false final false
 void Init(::GlobalNamespace::____GlobalNamespace__TutorialBeatmapObjectManager__InitData initData, ::GlobalNamespace::____GlobalNamespace__TutorialNoteController__Pool tutorialNotePool, ::GlobalNamespace::____GlobalNamespace__BombNoteController__Pool bombNotePool, ::GlobalNamespace::____GlobalNamespace__ObstacleController__Pool obstaclePool) ;

/// @brief Method ProcessObstacleData addr 0x224d0f4 size 0xf8 virtual true final false
 void ProcessObstacleData(::GlobalNamespace::ObstacleData obstacleData, ByRef<::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__ObstacleSpawnData> obstacleSpawnData, float_t rotation) ;

/// @brief Method ProcessNoteData addr 0x224d1ec size 0x180 virtual true final false
 void ProcessNoteData(::GlobalNamespace::NoteData noteData, ByRef<::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData> noteSpawnData, float_t rotation, bool forceIsFirstNoteBehaviour) ;

/// @brief Method ProcessSliderData addr 0x224d36c size 0x4 virtual true final false
 void ProcessSliderData(::GlobalNamespace::SliderData sliderData, ByRef<::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData> sliderSpawnData, float_t rotation) ;

/// @brief Method DespawnInternal addr 0x224d370 size 0x104 virtual true final false
 void DespawnInternal(::GlobalNamespace::NoteController noteController) ;

/// @brief Method DespawnInternal addr 0x224d474 size 0x58 virtual true final false
 void DespawnInternal(::GlobalNamespace::ObstacleController obstacleController) ;

/// @brief Method DespawnInternal addr 0x224d4cc size 0x4 virtual true final false
 void DespawnInternal(::GlobalNamespace::SliderController sliderNoteController) ;

// Ctor Parameters []
explicit TutorialBeatmapObjectManager() ;

/// @brief Method .ctor addr 0x224d4d0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::TutorialBeatmapObjectManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TutorialBeatmapObjectManager, "", "TutorialBeatmapObjectManager");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__TutorialBeatmapObjectManager__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__TutorialBeatmapObjectManager__InitData, "", "TutorialBeatmapObjectManager/InitData");
