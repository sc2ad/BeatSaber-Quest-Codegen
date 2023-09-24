#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
namespace GlobalNamespace {
class BeatmapObjectManager;
}
namespace GlobalNamespace {
class NoteController;
}
namespace GlobalNamespace {
class FlyingTextSpawner;
}
namespace GlobalNamespace {
struct NoteCutInfo;
}
// Forward declare root types
namespace GlobalNamespace {
class TutorialNoteCutEffectSpawner;
}
// Type: ::TutorialNoteCutEffectSpawner
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5432))
// CS Name: TutorialNoteCutEffectSpawner
class CORDL_TYPE TutorialNoteCutEffectSpawner : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~TutorialNoteCutEffectSpawner() = default;

// Ctor Parameters [CppParam { name: "", ty: "TutorialNoteCutEffectSpawner", modifiers: " const&", def_value: None }]
constexpr TutorialNoteCutEffectSpawner(TutorialNoteCutEffectSpawner const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TutorialNoteCutEffectSpawner", modifiers: "&&", def_value: None }]
constexpr TutorialNoteCutEffectSpawner(TutorialNoteCutEffectSpawner&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TutorialNoteCutEffectSpawner(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr TutorialNoteCutEffectSpawner& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TutorialNoteCutEffectSpawner& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TutorialNoteCutEffectSpawner& operator=(TutorialNoteCutEffectSpawner&& o) noexcept = default;
  constexpr TutorialNoteCutEffectSpawner& operator=(TutorialNoteCutEffectSpawner const& o) noexcept = default;
                


// Fields

 GlobalNamespace::FlyingTextSpawner __declspec(property(get=__get__failFlyingTextSpawner, put=__set__failFlyingTextSpawner))  _failFlyingTextSpawner;

constexpr void __set__failFlyingTextSpawner(GlobalNamespace::FlyingTextSpawner value) ;

constexpr GlobalNamespace::FlyingTextSpawner __get__failFlyingTextSpawner() const;

 GlobalNamespace::BeatmapObjectManager __declspec(property(get=__get__beatmapObjectManager, put=__set__beatmapObjectManager))  _beatmapObjectManager;

constexpr void __set__beatmapObjectManager(GlobalNamespace::BeatmapObjectManager value) ;

constexpr GlobalNamespace::BeatmapObjectManager __get__beatmapObjectManager() const;


// Methods

/// @brief Method Start addr 0x2112940 size 0x8c virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x21129cc size 0x98 virtual false final false
 void OnDestroy() ;

/// @brief Method HandleNoteWasCut addr 0x2112a64 size 0x268 virtual false final false
 void HandleNoteWasCut(GlobalNamespace::NoteController noteController, ByRef<GlobalNamespace::NoteCutInfo> noteCutInfo) ;

static GlobalNamespace::TutorialNoteCutEffectSpawner New_ctor() ;

/// @brief Method .ctor addr 0x2112ccc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::TutorialNoteCutEffectSpawner);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TutorialNoteCutEffectSpawner, "", "TutorialNoteCutEffectSpawner");
