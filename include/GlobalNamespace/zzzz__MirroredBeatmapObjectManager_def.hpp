#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace GlobalNamespace {
template<typename T>
class MemoryPoolContainer_1;
}
namespace GlobalNamespace {
class MirroredGameNoteController;
}
namespace GlobalNamespace {
class INoteMirrorable;
}
namespace GlobalNamespace {
class MirroredSliderController;
}
namespace GlobalNamespace {
class MirroredBombNoteController;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace GlobalNamespace {
class BeatmapObjectManager;
}
namespace GlobalNamespace {
class NoteController;
}
namespace GlobalNamespace {
class MirroredObstacleController;
}
namespace GlobalNamespace {
class ____GlobalNamespace__MirroredSliderController__Pool;
}
namespace GlobalNamespace {
class ObstacleController;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace GlobalNamespace {
class IGameNoteMirrorable;
}
namespace GlobalNamespace {
class ____GlobalNamespace__MirroredGameNoteController__Pool;
}
namespace GlobalNamespace {
class SliderController;
}
namespace GlobalNamespace {
class ____GlobalNamespace__MirroredObstacleController__Pool;
}
namespace GlobalNamespace {
class ____GlobalNamespace__MirroredBombNoteController__Pool;
}
// Forward declare root types
namespace GlobalNamespace {
class MirroredBeatmapObjectManager;
}
// Type: ::MirroredBeatmapObjectManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4848))
// CS Name: MirroredBeatmapObjectManager
class CORDL_TYPE MirroredBeatmapObjectManager : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~MirroredBeatmapObjectManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "MirroredBeatmapObjectManager", modifiers: " const&", def_value: None }]
constexpr MirroredBeatmapObjectManager(MirroredBeatmapObjectManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MirroredBeatmapObjectManager", modifiers: "&&", def_value: None }]
constexpr MirroredBeatmapObjectManager(MirroredBeatmapObjectManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MirroredBeatmapObjectManager(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MirroredBeatmapObjectManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MirroredBeatmapObjectManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MirroredBeatmapObjectManager& operator=(MirroredBeatmapObjectManager&& o) noexcept = default;
  constexpr MirroredBeatmapObjectManager& operator=(MirroredBeatmapObjectManager const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::BeatmapObjectManager __declspec(property(get=__get__beatmapObjectManager, put=__set__beatmapObjectManager))  _beatmapObjectManager;

constexpr void __set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager value) ;

constexpr ::GlobalNamespace::BeatmapObjectManager __get__beatmapObjectManager() const;

 ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredGameNoteController> __declspec(property(get=__get__mirroredBasicGameNotePoolContainer, put=__set__mirroredBasicGameNotePoolContainer))  _mirroredBasicGameNotePoolContainer;

constexpr void __set__mirroredBasicGameNotePoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredGameNoteController> value) ;

constexpr ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredGameNoteController> __get__mirroredBasicGameNotePoolContainer() const;

 ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredGameNoteController> __declspec(property(get=__get__mirroredBurstSliderHeadGameNotePoolContainer, put=__set__mirroredBurstSliderHeadGameNotePoolContainer))  _mirroredBurstSliderHeadGameNotePoolContainer;

constexpr void __set__mirroredBurstSliderHeadGameNotePoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredGameNoteController> value) ;

constexpr ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredGameNoteController> __get__mirroredBurstSliderHeadGameNotePoolContainer() const;

 ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredGameNoteController> __declspec(property(get=__get__mirroredBurstSliderGameNotePoolContainer, put=__set__mirroredBurstSliderGameNotePoolContainer))  _mirroredBurstSliderGameNotePoolContainer;

constexpr void __set__mirroredBurstSliderGameNotePoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredGameNoteController> value) ;

constexpr ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredGameNoteController> __get__mirroredBurstSliderGameNotePoolContainer() const;

 ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredGameNoteController> __declspec(property(get=__get__mirroredBurstSliderFillPoolContainer, put=__set__mirroredBurstSliderFillPoolContainer))  _mirroredBurstSliderFillPoolContainer;

constexpr void __set__mirroredBurstSliderFillPoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredGameNoteController> value) ;

constexpr ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredGameNoteController> __get__mirroredBurstSliderFillPoolContainer() const;

 ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredBombNoteController> __declspec(property(get=__get__mirroredBombNotePoolContainer, put=__set__mirroredBombNotePoolContainer))  _mirroredBombNotePoolContainer;

constexpr void __set__mirroredBombNotePoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredBombNoteController> value) ;

constexpr ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredBombNoteController> __get__mirroredBombNotePoolContainer() const;

 ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredObstacleController> __declspec(property(get=__get__mirroredObstaclePoolContainer, put=__set__mirroredObstaclePoolContainer))  _mirroredObstaclePoolContainer;

constexpr void __set__mirroredObstaclePoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredObstacleController> value) ;

constexpr ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredObstacleController> __get__mirroredObstaclePoolContainer() const;

 ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredSliderController> __declspec(property(get=__get__mirroredSlidersPoolContainer, put=__set__mirroredSlidersPoolContainer))  _mirroredSlidersPoolContainer;

constexpr void __set__mirroredSlidersPoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredSliderController> value) ;

constexpr ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredSliderController> __get__mirroredSlidersPoolContainer() const;

 ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::IGameNoteMirrorable,::System::ValueTuple_2<::GlobalNamespace::MirroredGameNoteController,::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredGameNoteController>>> __declspec(property(get=__get__gameNoteControllersToMirroredGameNoteControllers, put=__set__gameNoteControllersToMirroredGameNoteControllers))  _gameNoteControllersToMirroredGameNoteControllers;

constexpr void __set__gameNoteControllersToMirroredGameNoteControllers(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::IGameNoteMirrorable,::System::ValueTuple_2<::GlobalNamespace::MirroredGameNoteController,::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredGameNoteController>>> value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::IGameNoteMirrorable,::System::ValueTuple_2<::GlobalNamespace::MirroredGameNoteController,::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredGameNoteController>>> __get__gameNoteControllersToMirroredGameNoteControllers() const;

 ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::INoteMirrorable,::GlobalNamespace::MirroredBombNoteController> __declspec(property(get=__get__bombNoteControllersToMirroredBombNoteControllers, put=__set__bombNoteControllersToMirroredBombNoteControllers))  _bombNoteControllersToMirroredBombNoteControllers;

constexpr void __set__bombNoteControllersToMirroredBombNoteControllers(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::INoteMirrorable,::GlobalNamespace::MirroredBombNoteController> value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::INoteMirrorable,::GlobalNamespace::MirroredBombNoteController> __get__bombNoteControllersToMirroredBombNoteControllers() const;

 ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ObstacleController,::GlobalNamespace::MirroredObstacleController> __declspec(property(get=__get__obstacleControllersToMirroredObstacleControllers, put=__set__obstacleControllersToMirroredObstacleControllers))  _obstacleControllersToMirroredObstacleControllers;

constexpr void __set__obstacleControllersToMirroredObstacleControllers(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ObstacleController,::GlobalNamespace::MirroredObstacleController> value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ObstacleController,::GlobalNamespace::MirroredObstacleController> __get__obstacleControllersToMirroredObstacleControllers() const;

 ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SliderController,::GlobalNamespace::MirroredSliderController> __declspec(property(get=__get__sliderControllersToMirroredSliderControllers, put=__set__sliderControllersToMirroredSliderControllers))  _sliderControllersToMirroredSliderControllers;

constexpr void __set__sliderControllersToMirroredSliderControllers(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SliderController,::GlobalNamespace::MirroredSliderController> value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SliderController,::GlobalNamespace::MirroredSliderController> __get__sliderControllersToMirroredSliderControllers() const;


// Methods

/// @brief Method Init addr 0x2237324 size 0x438 virtual false final false
 void Init(::GlobalNamespace::BeatmapObjectManager beatmapObjectManager, ::GlobalNamespace::____GlobalNamespace__MirroredGameNoteController__Pool mirroredBasicGameNotePool, ::GlobalNamespace::____GlobalNamespace__MirroredGameNoteController__Pool burstSliderHeadGameNotePool, ::GlobalNamespace::____GlobalNamespace__MirroredGameNoteController__Pool burstSliderGameNotePool, ::GlobalNamespace::____GlobalNamespace__MirroredGameNoteController__Pool burstSliderFillPool, ::GlobalNamespace::____GlobalNamespace__MirroredBombNoteController__Pool mirroredBombNotePool, ::GlobalNamespace::____GlobalNamespace__MirroredObstacleController__Pool mirroredObstaclePool, ::GlobalNamespace::____GlobalNamespace__MirroredSliderController__Pool mirroredSlidersPool) ;

/// @brief Method Finalize addr 0x223775c size 0x360 virtual true final false
 void Finalize() ;

/// @brief Method HandleNoteWasSpawned addr 0x2237abc size 0x22c virtual false final false
 void HandleNoteWasSpawned(::GlobalNamespace::NoteController noteController) ;

/// @brief Method HandleNoteWasDespawned addr 0x2237ce8 size 0x17c virtual false final false
 void HandleNoteWasDespawned(::GlobalNamespace::NoteController noteController) ;

/// @brief Method HandleObstacleWasSpawned addr 0x2237e64 size 0x9c virtual false final false
 void HandleObstacleWasSpawned(::GlobalNamespace::ObstacleController obstacleController) ;

/// @brief Method HandleObstacleWasDespawned addr 0x2237f00 size 0xc0 virtual false final false
 void HandleObstacleWasDespawned(::GlobalNamespace::ObstacleController obstacleController) ;

/// @brief Method HandleSliderWasSpawned addr 0x2237fc0 size 0x9c virtual false final false
 void HandleSliderWasSpawned(::GlobalNamespace::SliderController sliderController) ;

/// @brief Method HandleSliderWasDespawned addr 0x223805c size 0xc0 virtual false final false
 void HandleSliderWasDespawned(::GlobalNamespace::SliderController sliderController) ;

/// @brief Method HandleDidHideAllBeatmapObjects addr 0x223811c size 0x7cc virtual false final false
 void HandleDidHideAllBeatmapObjects(bool hide) ;

// Ctor Parameters []
explicit MirroredBeatmapObjectManager() ;

/// @brief Method .ctor addr 0x22388e8 size 0x148 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::MirroredBeatmapObjectManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MirroredBeatmapObjectManager, "", "MirroredBeatmapObjectManager");
