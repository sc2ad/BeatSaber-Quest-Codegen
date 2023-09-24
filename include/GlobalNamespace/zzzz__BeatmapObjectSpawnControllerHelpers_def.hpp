#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
namespace GlobalNamespace {
class PlayerSpecificSettings;
}
namespace GlobalNamespace {
struct GlobalNamespace__BeatmapObjectSpawnMovementData__NoteJumpValueType;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapObjectSpawnControllerHelpers;
}
// Type: ::BeatmapObjectSpawnControllerHelpers
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4837))
// CS Name: BeatmapObjectSpawnControllerHelpers
class CORDL_TYPE BeatmapObjectSpawnControllerHelpers : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~BeatmapObjectSpawnControllerHelpers() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectSpawnControllerHelpers", modifiers: " const&", def_value: None }]
constexpr BeatmapObjectSpawnControllerHelpers(BeatmapObjectSpawnControllerHelpers const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectSpawnControllerHelpers", modifiers: "&&", def_value: None }]
constexpr BeatmapObjectSpawnControllerHelpers(BeatmapObjectSpawnControllerHelpers&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapObjectSpawnControllerHelpers(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BeatmapObjectSpawnControllerHelpers& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapObjectSpawnControllerHelpers& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapObjectSpawnControllerHelpers& operator=(BeatmapObjectSpawnControllerHelpers&& o) noexcept = default;
  constexpr BeatmapObjectSpawnControllerHelpers& operator=(BeatmapObjectSpawnControllerHelpers const& o) noexcept = default;
                


// Methods

/// @brief Method GetNoteJumpValues addr 0x2236d34 size 0x38 virtual false final false
static void GetNoteJumpValues(GlobalNamespace::PlayerSpecificSettings playerSpecificSettings, float_t defaultNoteJumpStartBeatOffset, ByRef<GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__NoteJumpValueType> noteJumpValueType, ByRef<float_t> noteJumpValue) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BeatmapObjectSpawnControllerHelpers);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapObjectSpawnControllerHelpers, "", "BeatmapObjectSpawnControllerHelpers");
