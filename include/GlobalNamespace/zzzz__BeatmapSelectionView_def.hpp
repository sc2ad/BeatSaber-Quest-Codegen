#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace GlobalNamespace {
class LevelBar;
}
namespace GlobalNamespace {
class PreviewDifficultyBeatmap;
}
namespace TMPro {
class TextMeshProUGUI;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapSelectionView;
}
// Type: ::BeatmapSelectionView
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5859))
// CS Name: BeatmapSelectionView
class CORDL_TYPE BeatmapSelectionView : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~BeatmapSelectionView() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapSelectionView", modifiers: " const&", def_value: None }]
constexpr BeatmapSelectionView(BeatmapSelectionView const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapSelectionView", modifiers: "&&", def_value: None }]
constexpr BeatmapSelectionView(BeatmapSelectionView&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapSelectionView(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr BeatmapSelectionView& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapSelectionView& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapSelectionView& operator=(BeatmapSelectionView&& o) noexcept = default;
  constexpr BeatmapSelectionView& operator=(BeatmapSelectionView const& o) noexcept = default;
                


// Fields

 GlobalNamespace::LevelBar __declspec(property(get=__get__levelBar, put=__set__levelBar))  _levelBar;

constexpr void __set__levelBar(GlobalNamespace::LevelBar value) ;

constexpr GlobalNamespace::LevelBar __get__levelBar() const;

 TMPro::TextMeshProUGUI __declspec(property(get=__get__noLevelText, put=__set__noLevelText))  _noLevelText;

constexpr void __set__noLevelText(TMPro::TextMeshProUGUI value) ;

constexpr TMPro::TextMeshProUGUI __get__noLevelText() const;


// Methods

/// @brief Method SetBeatmap addr 0x2185160 size 0xa8 virtual true final false
 void SetBeatmap(GlobalNamespace::PreviewDifficultyBeatmap beatmapLevel) ;

static GlobalNamespace::BeatmapSelectionView New_ctor() ;

/// @brief Method .ctor addr 0x2185208 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BeatmapSelectionView);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapSelectionView, "", "BeatmapSelectionView");
