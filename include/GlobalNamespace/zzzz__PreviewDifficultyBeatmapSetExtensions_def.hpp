#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace {
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace GlobalNamespace {
class PreviewDifficultyBeatmapSet;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
// Forward declare root types
namespace GlobalNamespace {
class PreviewDifficultyBeatmapSetExtensions;
}
// Type: ::PreviewDifficultyBeatmapSetExtensions
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4270))
// CS Name: PreviewDifficultyBeatmapSetExtensions
class CORDL_TYPE PreviewDifficultyBeatmapSetExtensions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~PreviewDifficultyBeatmapSetExtensions() = default;

// Ctor Parameters [CppParam { name: "", ty: "PreviewDifficultyBeatmapSetExtensions", modifiers: " const&", def_value: None }]
constexpr PreviewDifficultyBeatmapSetExtensions(PreviewDifficultyBeatmapSetExtensions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PreviewDifficultyBeatmapSetExtensions", modifiers: "&&", def_value: None }]
constexpr PreviewDifficultyBeatmapSetExtensions(PreviewDifficultyBeatmapSetExtensions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PreviewDifficultyBeatmapSetExtensions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PreviewDifficultyBeatmapSetExtensions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PreviewDifficultyBeatmapSetExtensions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PreviewDifficultyBeatmapSetExtensions& operator=(PreviewDifficultyBeatmapSetExtensions&& o) noexcept = default;
  constexpr PreviewDifficultyBeatmapSetExtensions& operator=(PreviewDifficultyBeatmapSetExtensions const& o) noexcept = default;
                


// Methods

/// @brief Method GetBeatmapCharacteristics addr 0x21c9740 size 0xec virtual false final false
static ::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO> GetBeatmapCharacteristics(::ArrayW<::GlobalNamespace::PreviewDifficultyBeatmapSet> previewDifficultyBeatmapSet) ;

/// @brief Method GetPreviewDifficultyBeatmapSetWithout360Movement addr 0x21c982c size 0x144 virtual false final false
static ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet> GetPreviewDifficultyBeatmapSetWithout360Movement(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet> previewDifficultyBeatmapSet) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::PreviewDifficultyBeatmapSetExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PreviewDifficultyBeatmapSetExtensions, "", "PreviewDifficultyBeatmapSetExtensions");
