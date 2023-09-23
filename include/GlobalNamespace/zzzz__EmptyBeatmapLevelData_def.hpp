#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace UnityEngine {
class AudioClip;
}
namespace GlobalNamespace {
class IBeatmapLevelData;
}
namespace GlobalNamespace {
class IDifficultyBeatmapSet;
}
// Forward declare root types
namespace GlobalNamespace {
class EmptyBeatmapLevelData;
}
// Type: ::EmptyBeatmapLevelData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4407))
// CS Name: EmptyBeatmapLevelData
class CORDL_TYPE EmptyBeatmapLevelData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::IBeatmapLevelData
constexpr operator  GlobalNamespace::IBeatmapLevelData() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~EmptyBeatmapLevelData() = default;

// Ctor Parameters [CppParam { name: "", ty: "EmptyBeatmapLevelData", modifiers: " const&", def_value: None }]
constexpr EmptyBeatmapLevelData(EmptyBeatmapLevelData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EmptyBeatmapLevelData", modifiers: "&&", def_value: None }]
constexpr EmptyBeatmapLevelData(EmptyBeatmapLevelData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EmptyBeatmapLevelData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EmptyBeatmapLevelData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EmptyBeatmapLevelData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EmptyBeatmapLevelData& operator=(EmptyBeatmapLevelData&& o) noexcept = default;
  constexpr EmptyBeatmapLevelData& operator=(EmptyBeatmapLevelData const& o) noexcept = default;
                


// Properties

 UnityEngine::AudioClip __declspec(property(get=get_audioClip))  audioClip;

 System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IDifficultyBeatmapSet> __declspec(property(get=get_difficultyBeatmapSets))  difficultyBeatmapSets;


// Methods

/// @brief Method get_audioClip addr 0x21ea9c0 size 0x8 virtual true final true
 UnityEngine::AudioClip get_audioClip() ;

/// @brief Method get_difficultyBeatmapSets addr 0x21ea9c8 size 0x8 virtual true final true
 System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IDifficultyBeatmapSet> get_difficultyBeatmapSets() ;

// Ctor Parameters []
explicit EmptyBeatmapLevelData() ;

/// @brief Method .ctor addr 0x21ea9b8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::EmptyBeatmapLevelData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EmptyBeatmapLevelData, "", "EmptyBeatmapLevelData");
