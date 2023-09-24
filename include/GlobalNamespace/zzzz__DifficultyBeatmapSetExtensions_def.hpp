#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace GlobalNamespace {
class PreviewDifficultyBeatmapSet;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
// Forward declare root types
namespace GlobalNamespace {
class DifficultyBeatmapSetExtensions;
}
// Type: ::DifficultyBeatmapSetExtensions
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4418))
// CS Name: DifficultyBeatmapSetExtensions
class CORDL_TYPE DifficultyBeatmapSetExtensions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~DifficultyBeatmapSetExtensions() = default;

// Ctor Parameters [CppParam { name: "", ty: "DifficultyBeatmapSetExtensions", modifiers: " const&", def_value: None }]
constexpr DifficultyBeatmapSetExtensions(DifficultyBeatmapSetExtensions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DifficultyBeatmapSetExtensions", modifiers: "&&", def_value: None }]
constexpr DifficultyBeatmapSetExtensions(DifficultyBeatmapSetExtensions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DifficultyBeatmapSetExtensions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DifficultyBeatmapSetExtensions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DifficultyBeatmapSetExtensions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DifficultyBeatmapSetExtensions& operator=(DifficultyBeatmapSetExtensions&& o) noexcept = default;
  constexpr DifficultyBeatmapSetExtensions& operator=(DifficultyBeatmapSetExtensions const& o) noexcept = default;
                


// Methods

/// @brief Method GetDifficultyBeatmapSetsWithout360Movement addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static System::Collections::Generic::IReadOnlyList_1<T> GetDifficultyBeatmapSetsWithout360Movement(System::Collections::Generic::IReadOnlyList_1<T> difficultyBeatmapSets) ;

/// @brief Method GetPreviewDifficultyBeatmapSets addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::PreviewDifficultyBeatmapSet> GetPreviewDifficultyBeatmapSets(System::Collections::Generic::IReadOnlyList_1<T> difficultyBeatmapSets) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::DifficultyBeatmapSetExtensions);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DifficultyBeatmapSetExtensions, "", "DifficultyBeatmapSetExtensions");
