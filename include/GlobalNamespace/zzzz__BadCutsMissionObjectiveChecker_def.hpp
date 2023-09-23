#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__SimpleValueMissionObjectiveChecker_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
namespace GlobalNamespace {
struct NoteCutInfo;
}
namespace GlobalNamespace {
class NoteController;
}
namespace GlobalNamespace {
class BeatmapObjectManager;
}
// Forward declare root types
namespace GlobalNamespace {
class BadCutsMissionObjectiveChecker;
}
// Type: ::BadCutsMissionObjectiveChecker
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5198))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5186))
// CS Name: BadCutsMissionObjectiveChecker
class CORDL_TYPE BadCutsMissionObjectiveChecker : public GlobalNamespace::SimpleValueMissionObjectiveChecker {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~BadCutsMissionObjectiveChecker() = default;

// Ctor Parameters [CppParam { name: "", ty: "BadCutsMissionObjectiveChecker", modifiers: " const&", def_value: None }]
constexpr BadCutsMissionObjectiveChecker(BadCutsMissionObjectiveChecker const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BadCutsMissionObjectiveChecker", modifiers: "&&", def_value: None }]
constexpr BadCutsMissionObjectiveChecker(BadCutsMissionObjectiveChecker&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BadCutsMissionObjectiveChecker(void* ptr) noexcept : GlobalNamespace::SimpleValueMissionObjectiveChecker(ptr) {
}


  constexpr BadCutsMissionObjectiveChecker& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BadCutsMissionObjectiveChecker& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BadCutsMissionObjectiveChecker& operator=(BadCutsMissionObjectiveChecker&& o) noexcept = default;
  constexpr BadCutsMissionObjectiveChecker& operator=(BadCutsMissionObjectiveChecker const& o) noexcept = default;
                


// Fields

 GlobalNamespace::BeatmapObjectManager __declspec(property(get=__get__beatmapObjectManager, put=__set__beatmapObjectManager))  _beatmapObjectManager;

constexpr void __set__beatmapObjectManager(GlobalNamespace::BeatmapObjectManager value) ;

constexpr GlobalNamespace::BeatmapObjectManager __get__beatmapObjectManager() const;


// Methods

/// @brief Method Init addr 0x20d5a40 size 0x14c virtual true final false
 void Init() ;

/// @brief Method OnDestroy addr 0x20d5bc8 size 0x98 virtual false final false
 void OnDestroy() ;

/// @brief Method HandleNoteWasCut addr 0x20d5c60 size 0x8c virtual false final false
 void HandleNoteWasCut(GlobalNamespace::NoteController noteController, ByRef<GlobalNamespace::NoteCutInfo> noteCutInfo) ;

// Ctor Parameters []
explicit BadCutsMissionObjectiveChecker() ;

/// @brief Method .ctor addr 0x20d5e2c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BadCutsMissionObjectiveChecker);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BadCutsMissionObjectiveChecker, "", "BadCutsMissionObjectiveChecker");
