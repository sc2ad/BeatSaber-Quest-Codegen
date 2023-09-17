#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace {
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
// Forward declare root types
namespace GlobalNamespace {
class PreviewDifficultyBeatmapSet;
}
// Type: ::PreviewDifficultyBeatmapSet
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4427))
// CS Name: PreviewDifficultyBeatmapSet
class CORDL_TYPE PreviewDifficultyBeatmapSet : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~PreviewDifficultyBeatmapSet() = default;

// Ctor Parameters [CppParam { name: "", ty: "PreviewDifficultyBeatmapSet", modifiers: " const&", def_value: None }]
constexpr PreviewDifficultyBeatmapSet(PreviewDifficultyBeatmapSet const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PreviewDifficultyBeatmapSet", modifiers: "&&", def_value: None }]
constexpr PreviewDifficultyBeatmapSet(PreviewDifficultyBeatmapSet&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PreviewDifficultyBeatmapSet(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PreviewDifficultyBeatmapSet& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PreviewDifficultyBeatmapSet& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PreviewDifficultyBeatmapSet& operator=(PreviewDifficultyBeatmapSet&& o) noexcept = default;
  constexpr PreviewDifficultyBeatmapSet& operator=(PreviewDifficultyBeatmapSet const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::BeatmapCharacteristicSO __declspec(property(get=__get__beatmapCharacteristic, put=__set__beatmapCharacteristic))  _beatmapCharacteristic;

constexpr void __set__beatmapCharacteristic(::GlobalNamespace::BeatmapCharacteristicSO value) ;

constexpr ::GlobalNamespace::BeatmapCharacteristicSO __get__beatmapCharacteristic() const;

 ::ArrayW<::GlobalNamespace::BeatmapDifficulty> __declspec(property(get=__get__beatmapDifficulties, put=__set__beatmapDifficulties))  _beatmapDifficulties;

constexpr void __set__beatmapDifficulties(::ArrayW<::GlobalNamespace::BeatmapDifficulty> value) ;

constexpr ::ArrayW<::GlobalNamespace::BeatmapDifficulty> __get__beatmapDifficulties() const;


// Properties

 ::GlobalNamespace::BeatmapCharacteristicSO __declspec(property(get=get_beatmapCharacteristic))  beatmapCharacteristic;

 ::ArrayW<::GlobalNamespace::BeatmapDifficulty> __declspec(property(get=get_beatmapDifficulties))  beatmapDifficulties;


// Methods

/// @brief Method get_beatmapCharacteristic addr 0x21ed208 size 0x8 virtual false final false
 ::GlobalNamespace::BeatmapCharacteristicSO get_beatmapCharacteristic() ;

/// @brief Method get_beatmapDifficulties addr 0x21ed210 size 0x8 virtual false final false
 ::ArrayW<::GlobalNamespace::BeatmapDifficulty> get_beatmapDifficulties() ;

// Ctor Parameters [CppParam { name: "beatmapCharacteristic", ty: "::GlobalNamespace::BeatmapCharacteristicSO", modifiers: "", def_value: None }, CppParam { name: "beatmapDifficulties", ty: "::ArrayW<::GlobalNamespace::BeatmapDifficulty>", modifiers: "", def_value: None }]
explicit PreviewDifficultyBeatmapSet(::GlobalNamespace::BeatmapCharacteristicSO beatmapCharacteristic, ::ArrayW<::GlobalNamespace::BeatmapDifficulty> beatmapDifficulties) ;

/// @brief Method .ctor addr 0x21ed218 size 0x2c virtual false final false
 void _ctor(::GlobalNamespace::BeatmapCharacteristicSO beatmapCharacteristic, ::ArrayW<::GlobalNamespace::BeatmapDifficulty> beatmapDifficulties) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::PreviewDifficultyBeatmapSet);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PreviewDifficultyBeatmapSet, "", "PreviewDifficultyBeatmapSet");
