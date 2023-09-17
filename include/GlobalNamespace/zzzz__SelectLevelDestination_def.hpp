#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__MenuDestination_def.hpp"
namespace {
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace GlobalNamespace {
class IBeatmapLevelPack;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
// Forward declare root types
namespace GlobalNamespace {
class SelectLevelDestination;
}
// Type: ::SelectLevelDestination
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4184))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4188))
// CS Name: SelectLevelDestination
class CORDL_TYPE SelectLevelDestination : public ::GlobalNamespace::MenuDestination {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~SelectLevelDestination() = default;

// Ctor Parameters [CppParam { name: "", ty: "SelectLevelDestination", modifiers: " const&", def_value: None }]
constexpr SelectLevelDestination(SelectLevelDestination const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SelectLevelDestination", modifiers: "&&", def_value: None }]
constexpr SelectLevelDestination(SelectLevelDestination&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SelectLevelDestination(void* ptr) noexcept : ::GlobalNamespace::MenuDestination(ptr) {
}


  constexpr SelectLevelDestination& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SelectLevelDestination& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SelectLevelDestination& operator=(SelectLevelDestination&& o) noexcept = default;
  constexpr SelectLevelDestination& operator=(SelectLevelDestination const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::IBeatmapLevelPack __declspec(property(get=__get_beatmapLevelPack, put=__set_beatmapLevelPack))  beatmapLevelPack;

constexpr void __set_beatmapLevelPack(::GlobalNamespace::IBeatmapLevelPack value) ;

constexpr ::GlobalNamespace::IBeatmapLevelPack __get_beatmapLevelPack() const;

 ::GlobalNamespace::IPreviewBeatmapLevel __declspec(property(get=__get_previewBeatmapLevel, put=__set_previewBeatmapLevel))  previewBeatmapLevel;

constexpr void __set_previewBeatmapLevel(::GlobalNamespace::IPreviewBeatmapLevel value) ;

constexpr ::GlobalNamespace::IPreviewBeatmapLevel __get_previewBeatmapLevel() const;

 ::GlobalNamespace::BeatmapDifficulty __declspec(property(get=__get_beatmapDifficulty, put=__set_beatmapDifficulty))  beatmapDifficulty;

constexpr void __set_beatmapDifficulty(::GlobalNamespace::BeatmapDifficulty value) ;

constexpr ::GlobalNamespace::BeatmapDifficulty __get_beatmapDifficulty() const;

 ::GlobalNamespace::BeatmapCharacteristicSO __declspec(property(get=__get_beatmapCharacteristic, put=__set_beatmapCharacteristic))  beatmapCharacteristic;

constexpr void __set_beatmapCharacteristic(::GlobalNamespace::BeatmapCharacteristicSO value) ;

constexpr ::GlobalNamespace::BeatmapCharacteristicSO __get_beatmapCharacteristic() const;


// Methods

// Ctor Parameters [CppParam { name: "beatmapLevelPack", ty: "::GlobalNamespace::IBeatmapLevelPack", modifiers: "", def_value: None }, CppParam { name: "previewBeatmapLevel", ty: "::GlobalNamespace::IPreviewBeatmapLevel", modifiers: "", def_value: None }, CppParam { name: "beatmapDifficulty", ty: "::GlobalNamespace::BeatmapDifficulty", modifiers: "", def_value: None }, CppParam { name: "beatmapCharacteristic", ty: "::GlobalNamespace::BeatmapCharacteristicSO", modifiers: "", def_value: None }]
explicit SelectLevelDestination(::GlobalNamespace::IBeatmapLevelPack beatmapLevelPack, ::GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel, ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty, ::GlobalNamespace::BeatmapCharacteristicSO beatmapCharacteristic) ;

/// @brief Method .ctor addr 0x21bc5ac size 0x44 virtual false final false
 void _ctor(::GlobalNamespace::IBeatmapLevelPack beatmapLevelPack, ::GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel, ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty, ::GlobalNamespace::BeatmapCharacteristicSO beatmapCharacteristic) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::SelectLevelDestination);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SelectLevelDestination, "", "SelectLevelDestination");
