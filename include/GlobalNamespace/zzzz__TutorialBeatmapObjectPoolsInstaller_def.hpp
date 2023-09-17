#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__MonoInstaller_def.hpp"
namespace {
namespace GlobalNamespace {
class NoteLineConnectionController;
}
namespace GlobalNamespace {
class ObstacleController;
}
namespace GlobalNamespace {
class BombNoteController;
}
namespace GlobalNamespace {
class TutorialNoteController;
}
// Forward declare root types
namespace GlobalNamespace {
class TutorialBeatmapObjectPoolsInstaller;
}
// Type: ::TutorialBeatmapObjectPoolsInstaller
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11080))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5490))
// CS Name: TutorialBeatmapObjectPoolsInstaller
class CORDL_TYPE TutorialBeatmapObjectPoolsInstaller : public ::Zenject::MonoInstaller {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~TutorialBeatmapObjectPoolsInstaller() = default;

// Ctor Parameters [CppParam { name: "", ty: "TutorialBeatmapObjectPoolsInstaller", modifiers: " const&", def_value: None }]
constexpr TutorialBeatmapObjectPoolsInstaller(TutorialBeatmapObjectPoolsInstaller const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TutorialBeatmapObjectPoolsInstaller", modifiers: "&&", def_value: None }]
constexpr TutorialBeatmapObjectPoolsInstaller(TutorialBeatmapObjectPoolsInstaller&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TutorialBeatmapObjectPoolsInstaller(void* ptr) noexcept : ::Zenject::MonoInstaller(ptr) {
}


  constexpr TutorialBeatmapObjectPoolsInstaller& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TutorialBeatmapObjectPoolsInstaller& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TutorialBeatmapObjectPoolsInstaller& operator=(TutorialBeatmapObjectPoolsInstaller&& o) noexcept = default;
  constexpr TutorialBeatmapObjectPoolsInstaller& operator=(TutorialBeatmapObjectPoolsInstaller const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::TutorialNoteController __declspec(property(get=__get__basicNotePrefab, put=__set__basicNotePrefab))  _basicNotePrefab;

constexpr void __set__basicNotePrefab(::GlobalNamespace::TutorialNoteController value) ;

constexpr ::GlobalNamespace::TutorialNoteController __get__basicNotePrefab() const;

 ::GlobalNamespace::BombNoteController __declspec(property(get=__get__bombNotePrefab, put=__set__bombNotePrefab))  _bombNotePrefab;

constexpr void __set__bombNotePrefab(::GlobalNamespace::BombNoteController value) ;

constexpr ::GlobalNamespace::BombNoteController __get__bombNotePrefab() const;

 ::GlobalNamespace::ObstacleController __declspec(property(get=__get__obstaclePrefab, put=__set__obstaclePrefab))  _obstaclePrefab;

constexpr void __set__obstaclePrefab(::GlobalNamespace::ObstacleController value) ;

constexpr ::GlobalNamespace::ObstacleController __get__obstaclePrefab() const;

 ::GlobalNamespace::NoteLineConnectionController __declspec(property(get=__get__noteLineConnectionControllerPrefab, put=__set__noteLineConnectionControllerPrefab))  _noteLineConnectionControllerPrefab;

constexpr void __set__noteLineConnectionControllerPrefab(::GlobalNamespace::NoteLineConnectionController value) ;

constexpr ::GlobalNamespace::NoteLineConnectionController __get__noteLineConnectionControllerPrefab() const;


// Methods

/// @brief Method InstallBindings addr 0x211b560 size 0x18c virtual true final false
 void InstallBindings() ;

// Ctor Parameters []
explicit TutorialBeatmapObjectPoolsInstaller() ;

/// @brief Method .ctor addr 0x211b6ec size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::TutorialBeatmapObjectPoolsInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TutorialBeatmapObjectPoolsInstaller, "", "TutorialBeatmapObjectPoolsInstaller");
