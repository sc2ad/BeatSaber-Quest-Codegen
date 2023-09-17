#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
// Forward declare root types
namespace GlobalNamespace {
class LocalPlayerInGameMenuInitData;
}
// Type: ::LocalPlayerInGameMenuInitData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5151))
// CS Name: LocalPlayerInGameMenuInitData
class CORDL_TYPE LocalPlayerInGameMenuInitData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~LocalPlayerInGameMenuInitData() = default;

// Ctor Parameters [CppParam { name: "", ty: "LocalPlayerInGameMenuInitData", modifiers: " const&", def_value: None }]
constexpr LocalPlayerInGameMenuInitData(LocalPlayerInGameMenuInitData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LocalPlayerInGameMenuInitData", modifiers: "&&", def_value: None }]
constexpr LocalPlayerInGameMenuInitData(LocalPlayerInGameMenuInitData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LocalPlayerInGameMenuInitData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LocalPlayerInGameMenuInitData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LocalPlayerInGameMenuInitData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LocalPlayerInGameMenuInitData& operator=(LocalPlayerInGameMenuInitData&& o) noexcept = default;
  constexpr LocalPlayerInGameMenuInitData& operator=(LocalPlayerInGameMenuInitData const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::IPreviewBeatmapLevel __declspec(property(get=__get_previewBeatmapLevel, put=__set_previewBeatmapLevel))  previewBeatmapLevel;

constexpr void __set_previewBeatmapLevel(::GlobalNamespace::IPreviewBeatmapLevel value) ;

constexpr ::GlobalNamespace::IPreviewBeatmapLevel __get_previewBeatmapLevel() const;

 ::GlobalNamespace::BeatmapDifficulty __declspec(property(get=__get_beatmapDifficulty, put=__set_beatmapDifficulty))  beatmapDifficulty;

constexpr void __set_beatmapDifficulty(::GlobalNamespace::BeatmapDifficulty value) ;

constexpr ::GlobalNamespace::BeatmapDifficulty __get_beatmapDifficulty() const;

 ::GlobalNamespace::BeatmapCharacteristicSO __declspec(property(get=__get_beatmapCharacteristic, put=__set_beatmapCharacteristic))  beatmapCharacteristic;

constexpr void __set_beatmapCharacteristic(::GlobalNamespace::BeatmapCharacteristicSO value) ;

constexpr ::GlobalNamespace::BeatmapCharacteristicSO __get_beatmapCharacteristic() const;

 bool __declspec(property(get=__get_hasSong, put=__set_hasSong))  hasSong;

constexpr void __set_hasSong(bool value) ;

constexpr bool __get_hasSong() const;


// Methods

// Ctor Parameters [CppParam { name: "previewBeatmapLevel", ty: "::GlobalNamespace::IPreviewBeatmapLevel", modifiers: "", def_value: None }, CppParam { name: "beatmapDifficulty", ty: "::GlobalNamespace::BeatmapDifficulty", modifiers: "", def_value: None }, CppParam { name: "beatmapCharacteristic", ty: "::GlobalNamespace::BeatmapCharacteristicSO", modifiers: "", def_value: None }, CppParam { name: "hasSong", ty: "bool", modifiers: "", def_value: None }]
explicit LocalPlayerInGameMenuInitData(::GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel, ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty, ::GlobalNamespace::BeatmapCharacteristicSO beatmapCharacteristic, bool hasSong) ;

/// @brief Method .ctor addr 0x20ce44c size 0x48 virtual false final false
 void _ctor(::GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel, ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty, ::GlobalNamespace::BeatmapCharacteristicSO beatmapCharacteristic, bool hasSong) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::LocalPlayerInGameMenuInitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LocalPlayerInGameMenuInitData, "", "LocalPlayerInGameMenuInitData");
