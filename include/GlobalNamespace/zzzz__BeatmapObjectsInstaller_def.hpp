#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__MonoInstaller_def.hpp"
namespace GlobalNamespace {
class BurstSliderGameNoteController;
}
namespace GlobalNamespace {
class GameNoteController;
}
namespace GlobalNamespace {
class GameplayCoreSceneSetupData;
}
namespace GlobalNamespace {
class ObstacleController;
}
namespace GlobalNamespace {
class BeatLine;
}
namespace GlobalNamespace {
class NoteLineConnectionController;
}
namespace GlobalNamespace {
class SliderController;
}
namespace GlobalNamespace {
class BombNoteController;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapObjectsInstaller;
}
// Type: ::BeatmapObjectsInstaller
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11080))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5475))
// CS Name: BeatmapObjectsInstaller
class CORDL_TYPE BeatmapObjectsInstaller : public Zenject::MonoInstaller {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x88};

virtual ~BeatmapObjectsInstaller() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectsInstaller", modifiers: " const&", def_value: None }]
constexpr BeatmapObjectsInstaller(BeatmapObjectsInstaller const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectsInstaller", modifiers: "&&", def_value: None }]
constexpr BeatmapObjectsInstaller(BeatmapObjectsInstaller&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapObjectsInstaller(void* ptr) noexcept : Zenject::MonoInstaller(ptr) {
}


  constexpr BeatmapObjectsInstaller& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapObjectsInstaller& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapObjectsInstaller& operator=(BeatmapObjectsInstaller&& o) noexcept = default;
  constexpr BeatmapObjectsInstaller& operator=(BeatmapObjectsInstaller const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GameNoteController __declspec(property(get=__get__normalBasicNotePrefab, put=__set__normalBasicNotePrefab))  _normalBasicNotePrefab;

constexpr void __set__normalBasicNotePrefab(GlobalNamespace::GameNoteController value) ;

constexpr GlobalNamespace::GameNoteController __get__normalBasicNotePrefab() const;

 GlobalNamespace::GameNoteController __declspec(property(get=__get__proModeNotePrefab, put=__set__proModeNotePrefab))  _proModeNotePrefab;

constexpr void __set__proModeNotePrefab(GlobalNamespace::GameNoteController value) ;

constexpr GlobalNamespace::GameNoteController __get__proModeNotePrefab() const;

 GlobalNamespace::GameNoteController __declspec(property(get=__get__burstSliderHeadNotePrefab, put=__set__burstSliderHeadNotePrefab))  _burstSliderHeadNotePrefab;

constexpr void __set__burstSliderHeadNotePrefab(GlobalNamespace::GameNoteController value) ;

constexpr GlobalNamespace::GameNoteController __get__burstSliderHeadNotePrefab() const;

 GlobalNamespace::BurstSliderGameNoteController __declspec(property(get=__get__burstSliderNotePrefab, put=__set__burstSliderNotePrefab))  _burstSliderNotePrefab;

constexpr void __set__burstSliderNotePrefab(GlobalNamespace::BurstSliderGameNoteController value) ;

constexpr GlobalNamespace::BurstSliderGameNoteController __get__burstSliderNotePrefab() const;

 GlobalNamespace::BurstSliderGameNoteController __declspec(property(get=__get__burstSliderFillPrefab, put=__set__burstSliderFillPrefab))  _burstSliderFillPrefab;

constexpr void __set__burstSliderFillPrefab(GlobalNamespace::BurstSliderGameNoteController value) ;

constexpr GlobalNamespace::BurstSliderGameNoteController __get__burstSliderFillPrefab() const;

 GlobalNamespace::BombNoteController __declspec(property(get=__get__bombNotePrefab, put=__set__bombNotePrefab))  _bombNotePrefab;

constexpr void __set__bombNotePrefab(GlobalNamespace::BombNoteController value) ;

constexpr GlobalNamespace::BombNoteController __get__bombNotePrefab() const;

 GlobalNamespace::ObstacleController __declspec(property(get=__get__obstaclePrefab, put=__set__obstaclePrefab))  _obstaclePrefab;

constexpr void __set__obstaclePrefab(GlobalNamespace::ObstacleController value) ;

constexpr GlobalNamespace::ObstacleController __get__obstaclePrefab() const;

 GlobalNamespace::SliderController __declspec(property(get=__get__sliderShortPrefab, put=__set__sliderShortPrefab))  _sliderShortPrefab;

constexpr void __set__sliderShortPrefab(GlobalNamespace::SliderController value) ;

constexpr GlobalNamespace::SliderController __get__sliderShortPrefab() const;

 GlobalNamespace::SliderController __declspec(property(get=__get__sliderMediumPrefab, put=__set__sliderMediumPrefab))  _sliderMediumPrefab;

constexpr void __set__sliderMediumPrefab(GlobalNamespace::SliderController value) ;

constexpr GlobalNamespace::SliderController __get__sliderMediumPrefab() const;

 GlobalNamespace::SliderController __declspec(property(get=__get__sliderLongPrefab, put=__set__sliderLongPrefab))  _sliderLongPrefab;

constexpr void __set__sliderLongPrefab(GlobalNamespace::SliderController value) ;

constexpr GlobalNamespace::SliderController __get__sliderLongPrefab() const;

 GlobalNamespace::NoteLineConnectionController __declspec(property(get=__get__noteLineConnectionControllerPrefab, put=__set__noteLineConnectionControllerPrefab))  _noteLineConnectionControllerPrefab;

constexpr void __set__noteLineConnectionControllerPrefab(GlobalNamespace::NoteLineConnectionController value) ;

constexpr GlobalNamespace::NoteLineConnectionController __get__noteLineConnectionControllerPrefab() const;

 GlobalNamespace::BeatLine __declspec(property(get=__get__beatLinePrefab, put=__set__beatLinePrefab))  _beatLinePrefab;

constexpr void __set__beatLinePrefab(GlobalNamespace::BeatLine value) ;

constexpr GlobalNamespace::BeatLine __get__beatLinePrefab() const;

 GlobalNamespace::GameplayCoreSceneSetupData __declspec(property(get=__get__sceneSetupData, put=__set__sceneSetupData))  _sceneSetupData;

constexpr void __set__sceneSetupData(GlobalNamespace::GameplayCoreSceneSetupData value) ;

constexpr GlobalNamespace::GameplayCoreSceneSetupData __get__sceneSetupData() const;


// Methods

/// @brief Method InstallBindings addr 0x2117244 size 0x4d4 virtual true final false
 void InstallBindings() ;

static GlobalNamespace::BeatmapObjectsInstaller New_ctor() ;

/// @brief Method .ctor addr 0x2117718 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BeatmapObjectsInstaller);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapObjectsInstaller, "", "BeatmapObjectsInstaller");
