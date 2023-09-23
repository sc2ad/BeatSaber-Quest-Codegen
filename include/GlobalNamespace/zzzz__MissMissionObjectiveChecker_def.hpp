#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__SimpleValueMissionObjectiveChecker_def.hpp"
namespace GlobalNamespace {
class BeatmapObjectManager;
}
namespace GlobalNamespace {
class NoteController;
}
// Forward declare root types
namespace GlobalNamespace {
class MissMissionObjectiveChecker;
}
// Type: ::MissMissionObjectiveChecker
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5198))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5196))
// CS Name: MissMissionObjectiveChecker
class CORDL_TYPE MissMissionObjectiveChecker : public GlobalNamespace::SimpleValueMissionObjectiveChecker {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~MissMissionObjectiveChecker() = default;

// Ctor Parameters [CppParam { name: "", ty: "MissMissionObjectiveChecker", modifiers: " const&", def_value: None }]
constexpr MissMissionObjectiveChecker(MissMissionObjectiveChecker const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MissMissionObjectiveChecker", modifiers: "&&", def_value: None }]
constexpr MissMissionObjectiveChecker(MissMissionObjectiveChecker&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MissMissionObjectiveChecker(void* ptr) noexcept : GlobalNamespace::SimpleValueMissionObjectiveChecker(ptr) {
}


  constexpr MissMissionObjectiveChecker& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MissMissionObjectiveChecker& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MissMissionObjectiveChecker& operator=(MissMissionObjectiveChecker&& o) noexcept = default;
  constexpr MissMissionObjectiveChecker& operator=(MissMissionObjectiveChecker const& o) noexcept = default;
                


// Fields

 GlobalNamespace::BeatmapObjectManager __declspec(property(get=__get__beatmapObjectManager, put=__set__beatmapObjectManager))  _beatmapObjectManager;

constexpr void __set__beatmapObjectManager(GlobalNamespace::BeatmapObjectManager value) ;

constexpr GlobalNamespace::BeatmapObjectManager __get__beatmapObjectManager() const;


// Methods

/// @brief Method Init addr 0x20d7b6c size 0x14c virtual true final false
 void Init() ;

/// @brief Method OnDestroy addr 0x20d7cb8 size 0x98 virtual false final false
 void OnDestroy() ;

/// @brief Method HandleNoteWasMissed addr 0x20d7d50 size 0x70 virtual false final false
 void HandleNoteWasMissed(GlobalNamespace::NoteController noteController) ;

// Ctor Parameters []
explicit MissMissionObjectiveChecker() ;

/// @brief Method .ctor addr 0x20d7dc0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MissMissionObjectiveChecker);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissMissionObjectiveChecker, "", "MissMissionObjectiveChecker");
