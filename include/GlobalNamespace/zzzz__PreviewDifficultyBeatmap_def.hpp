#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System {
template<typename T>
class IEquatable_1;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
// Forward declare root types
namespace GlobalNamespace {
class PreviewDifficultyBeatmap;
}
// Type: ::PreviewDifficultyBeatmap
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4426))
// CS Name: PreviewDifficultyBeatmap
class CORDL_TYPE PreviewDifficultyBeatmap : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::IEquatable_1<GlobalNamespace::PreviewDifficultyBeatmap>
constexpr operator  System::IEquatable_1<GlobalNamespace::PreviewDifficultyBeatmap>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~PreviewDifficultyBeatmap() = default;

// Ctor Parameters [CppParam { name: "", ty: "PreviewDifficultyBeatmap", modifiers: " const&", def_value: None }]
constexpr PreviewDifficultyBeatmap(PreviewDifficultyBeatmap const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PreviewDifficultyBeatmap", modifiers: "&&", def_value: None }]
constexpr PreviewDifficultyBeatmap(PreviewDifficultyBeatmap&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PreviewDifficultyBeatmap(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PreviewDifficultyBeatmap& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PreviewDifficultyBeatmap& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PreviewDifficultyBeatmap& operator=(PreviewDifficultyBeatmap&& o) noexcept = default;
  constexpr PreviewDifficultyBeatmap& operator=(PreviewDifficultyBeatmap const& o) noexcept = default;
                


// Fields

 GlobalNamespace::IPreviewBeatmapLevel __declspec(property(get=__get__beatmapLevel_k__BackingField, put=__set__beatmapLevel_k__BackingField))  _beatmapLevel_k__BackingField;

constexpr void __set__beatmapLevel_k__BackingField(GlobalNamespace::IPreviewBeatmapLevel value) ;

constexpr GlobalNamespace::IPreviewBeatmapLevel __get__beatmapLevel_k__BackingField() const;

 GlobalNamespace::BeatmapCharacteristicSO __declspec(property(get=__get__beatmapCharacteristic_k__BackingField, put=__set__beatmapCharacteristic_k__BackingField))  _beatmapCharacteristic_k__BackingField;

constexpr void __set__beatmapCharacteristic_k__BackingField(GlobalNamespace::BeatmapCharacteristicSO value) ;

constexpr GlobalNamespace::BeatmapCharacteristicSO __get__beatmapCharacteristic_k__BackingField() const;

 GlobalNamespace::BeatmapDifficulty __declspec(property(get=__get__beatmapDifficulty_k__BackingField, put=__set__beatmapDifficulty_k__BackingField))  _beatmapDifficulty_k__BackingField;

constexpr void __set__beatmapDifficulty_k__BackingField(GlobalNamespace::BeatmapDifficulty value) ;

constexpr GlobalNamespace::BeatmapDifficulty __get__beatmapDifficulty_k__BackingField() const;


// Properties

 GlobalNamespace::IPreviewBeatmapLevel __declspec(property(get=get_beatmapLevel, put=set_beatmapLevel))  beatmapLevel;

 GlobalNamespace::BeatmapCharacteristicSO __declspec(property(get=get_beatmapCharacteristic, put=set_beatmapCharacteristic))  beatmapCharacteristic;

 GlobalNamespace::BeatmapDifficulty __declspec(property(get=get_beatmapDifficulty, put=set_beatmapDifficulty))  beatmapDifficulty;


// Methods

/// @brief Method get_beatmapLevel addr 0x21ecf24 size 0x8 virtual false final false
 GlobalNamespace::IPreviewBeatmapLevel get_beatmapLevel() ;

/// @brief Method set_beatmapLevel addr 0x21ecf2c size 0x8 virtual false final false
 void set_beatmapLevel(GlobalNamespace::IPreviewBeatmapLevel value) ;

/// @brief Method get_beatmapCharacteristic addr 0x21ecf34 size 0x8 virtual false final false
 GlobalNamespace::BeatmapCharacteristicSO get_beatmapCharacteristic() ;

/// @brief Method set_beatmapCharacteristic addr 0x21ecf3c size 0x8 virtual false final false
 void set_beatmapCharacteristic(GlobalNamespace::BeatmapCharacteristicSO value) ;

/// @brief Method get_beatmapDifficulty addr 0x21ecf44 size 0x8 virtual false final false
 GlobalNamespace::BeatmapDifficulty get_beatmapDifficulty() ;

/// @brief Method set_beatmapDifficulty addr 0x21ecf4c size 0x8 virtual false final false
 void set_beatmapDifficulty(GlobalNamespace::BeatmapDifficulty value) ;

// Ctor Parameters [CppParam { name: "beatmapLevel", ty: "GlobalNamespace::IPreviewBeatmapLevel", modifiers: "", def_value: None }, CppParam { name: "beatmapCharacteristic", ty: "GlobalNamespace::BeatmapCharacteristicSO", modifiers: "", def_value: None }, CppParam { name: "beatmapDifficulty", ty: "GlobalNamespace::BeatmapDifficulty", modifiers: "", def_value: None }]
explicit PreviewDifficultyBeatmap(GlobalNamespace::IPreviewBeatmapLevel beatmapLevel, GlobalNamespace::BeatmapCharacteristicSO beatmapCharacteristic, GlobalNamespace::BeatmapDifficulty beatmapDifficulty) ;

/// @brief Method .ctor addr 0x21e29ac size 0x3c virtual false final false
 void _ctor(GlobalNamespace::IPreviewBeatmapLevel beatmapLevel, GlobalNamespace::BeatmapCharacteristicSO beatmapCharacteristic, GlobalNamespace::BeatmapDifficulty beatmapDifficulty) ;

/// @brief Method Equals addr 0x21ecf54 size 0xb4 virtual true final true
 bool Equals(GlobalNamespace::PreviewDifficultyBeatmap other) ;

/// @brief Method Equals addr 0x21ed008 size 0x10c virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x21ed114 size 0xc0 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method op_Equality addr 0x21e2b08 size 0x18 virtual false final false
static bool op_Equality(GlobalNamespace::PreviewDifficultyBeatmap a, GlobalNamespace::PreviewDifficultyBeatmap b) ;

/// @brief Method op_Inequality addr 0x21ed1d4 size 0x34 virtual false final false
static bool op_Inequality(GlobalNamespace::PreviewDifficultyBeatmap a, GlobalNamespace::PreviewDifficultyBeatmap b) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::PreviewDifficultyBeatmap);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PreviewDifficultyBeatmap, "", "PreviewDifficultyBeatmap");
