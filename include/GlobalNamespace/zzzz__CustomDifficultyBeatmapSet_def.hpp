#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace GlobalNamespace {
class IDifficultyBeatmapSet;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace GlobalNamespace {
class CustomDifficultyBeatmap;
}
// Forward declare root types
namespace GlobalNamespace {
class CustomDifficultyBeatmapSet;
}
// Type: ::CustomDifficultyBeatmapSet
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4398))
// CS Name: CustomDifficultyBeatmapSet
class CORDL_TYPE CustomDifficultyBeatmapSet : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::IDifficultyBeatmapSet
constexpr operator  GlobalNamespace::IDifficultyBeatmapSet() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~CustomDifficultyBeatmapSet() = default;

// Ctor Parameters [CppParam { name: "", ty: "CustomDifficultyBeatmapSet", modifiers: " const&", def_value: None }]
constexpr CustomDifficultyBeatmapSet(CustomDifficultyBeatmapSet const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CustomDifficultyBeatmapSet", modifiers: "&&", def_value: None }]
constexpr CustomDifficultyBeatmapSet(CustomDifficultyBeatmapSet&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CustomDifficultyBeatmapSet(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CustomDifficultyBeatmapSet& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CustomDifficultyBeatmapSet& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CustomDifficultyBeatmapSet& operator=(CustomDifficultyBeatmapSet&& o) noexcept = default;
  constexpr CustomDifficultyBeatmapSet& operator=(CustomDifficultyBeatmapSet const& o) noexcept = default;
                


// Fields

 GlobalNamespace::BeatmapCharacteristicSO __declspec(property(get=__get__beatmapCharacteristic, put=__set__beatmapCharacteristic))  _beatmapCharacteristic;

constexpr void __set__beatmapCharacteristic(GlobalNamespace::BeatmapCharacteristicSO value) ;

constexpr GlobalNamespace::BeatmapCharacteristicSO __get__beatmapCharacteristic() const;

 System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::CustomDifficultyBeatmap> __declspec(property(get=__get__difficultyBeatmaps, put=__set__difficultyBeatmaps))  _difficultyBeatmaps;

constexpr void __set__difficultyBeatmaps(System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::CustomDifficultyBeatmap> value) ;

constexpr System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::CustomDifficultyBeatmap> __get__difficultyBeatmaps() const;


// Properties

 GlobalNamespace::BeatmapCharacteristicSO __declspec(property(get=get_beatmapCharacteristic))  beatmapCharacteristic;

 System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IDifficultyBeatmap> __declspec(property(get=get_difficultyBeatmaps))  difficultyBeatmaps;


// Methods

/// @brief Method get_beatmapCharacteristic addr 0x21e96c8 size 0x8 virtual true final true
 GlobalNamespace::BeatmapCharacteristicSO get_beatmapCharacteristic() ;

/// @brief Method get_difficultyBeatmaps addr 0x21e96d0 size 0x8 virtual true final true
 System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IDifficultyBeatmap> get_difficultyBeatmaps() ;

// Ctor Parameters [CppParam { name: "beatmapCharacteristic", ty: "GlobalNamespace::BeatmapCharacteristicSO", modifiers: "", def_value: None }]
explicit CustomDifficultyBeatmapSet(GlobalNamespace::BeatmapCharacteristicSO beatmapCharacteristic) ;

/// @brief Method .ctor addr 0x21e96d8 size 0x28 virtual false final false
 void _ctor(GlobalNamespace::BeatmapCharacteristicSO beatmapCharacteristic) ;

/// @brief Method SetCustomDifficultyBeatmaps addr 0x21e9700 size 0x8 virtual false final false
 void SetCustomDifficultyBeatmaps(::ArrayW<GlobalNamespace::CustomDifficultyBeatmap> difficultyBeatmaps) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::CustomDifficultyBeatmapSet);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CustomDifficultyBeatmapSet, "", "CustomDifficultyBeatmapSet");
