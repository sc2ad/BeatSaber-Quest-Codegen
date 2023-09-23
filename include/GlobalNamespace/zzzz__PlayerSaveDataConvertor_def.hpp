#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace GlobalNamespace {
struct NoteJumpDurationTypeSettings;
}
namespace GlobalNamespace {
struct EnvironmentEffectsFilterPreset;
}
namespace GlobalNamespace {
struct GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData;
}
namespace GlobalNamespace {
struct GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData;
}
namespace GlobalNamespace {
struct GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData;
}
namespace GlobalNamespace {
struct ArcVisibilityType;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerSaveDataConvertor;
}
// Type: ::PlayerSaveDataConvertor
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4764))
// CS Name: PlayerSaveDataConvertor
class CORDL_TYPE PlayerSaveDataConvertor : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~PlayerSaveDataConvertor() = default;

// Ctor Parameters [CppParam { name: "", ty: "PlayerSaveDataConvertor", modifiers: " const&", def_value: None }]
constexpr PlayerSaveDataConvertor(PlayerSaveDataConvertor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PlayerSaveDataConvertor", modifiers: "&&", def_value: None }]
constexpr PlayerSaveDataConvertor(PlayerSaveDataConvertor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PlayerSaveDataConvertor(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PlayerSaveDataConvertor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PlayerSaveDataConvertor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PlayerSaveDataConvertor& operator=(PlayerSaveDataConvertor&& o) noexcept = default;
  constexpr PlayerSaveDataConvertor& operator=(PlayerSaveDataConvertor const& o) noexcept = default;
                


// Methods

/// @brief Method GetRuntimeData addr 0x2225a10 size 0x1c virtual false final false
static GlobalNamespace::EnvironmentEffectsFilterPreset GetRuntimeData(GlobalNamespace::GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData saveData) ;

/// @brief Method GetSaveData addr 0x2223754 size 0x1c virtual false final false
static GlobalNamespace::GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData GetSaveData(GlobalNamespace::EnvironmentEffectsFilterPreset data) ;

/// @brief Method GetRuntimeData addr 0x22259f4 size 0xc virtual false final false
static GlobalNamespace::NoteJumpDurationTypeSettings GetRuntimeData(GlobalNamespace::GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData saveData) ;

/// @brief Method GetSaveData addr 0x2223738 size 0xc virtual false final false
static GlobalNamespace::GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData GetSaveData(GlobalNamespace::NoteJumpDurationTypeSettings data) ;

/// @brief Method GetRuntimeData addr 0x2225a00 size 0x10 virtual false final false
static GlobalNamespace::ArcVisibilityType GetRuntimeData(GlobalNamespace::GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData saveData) ;

/// @brief Method GetSaveData addr 0x2223744 size 0x10 virtual false final false
static GlobalNamespace::GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData GetSaveData(GlobalNamespace::ArcVisibilityType data) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::PlayerSaveDataConvertor);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerSaveDataConvertor, "", "PlayerSaveDataConvertor");
