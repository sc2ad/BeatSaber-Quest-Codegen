#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
namespace GlobalNamespace {
struct GlobalNamespace__RankModel__Rank;
}
namespace GlobalNamespace {
class RelativeScoreAndImmediateRankCounter;
}
namespace System::Text {
class StringBuilder;
}
namespace TMPro {
class TextMeshProUGUI;
}
// Forward declare root types
namespace GlobalNamespace {
class ImmediateRankUIPanel;
}
// Type: ::ImmediateRankUIPanel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5134))
// CS Name: ImmediateRankUIPanel
class CORDL_TYPE ImmediateRankUIPanel : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~ImmediateRankUIPanel() = default;

// Ctor Parameters [CppParam { name: "", ty: "ImmediateRankUIPanel", modifiers: " const&", def_value: None }]
constexpr ImmediateRankUIPanel(ImmediateRankUIPanel const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ImmediateRankUIPanel", modifiers: "&&", def_value: None }]
constexpr ImmediateRankUIPanel(ImmediateRankUIPanel&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ImmediateRankUIPanel(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr ImmediateRankUIPanel& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ImmediateRankUIPanel& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ImmediateRankUIPanel& operator=(ImmediateRankUIPanel&& o) noexcept = default;
  constexpr ImmediateRankUIPanel& operator=(ImmediateRankUIPanel const& o) noexcept = default;
                


// Fields

 TMPro::TextMeshProUGUI __declspec(property(get=__get__rankText, put=__set__rankText))  _rankText;

constexpr void __set__rankText(TMPro::TextMeshProUGUI value) ;

constexpr TMPro::TextMeshProUGUI __get__rankText() const;

 TMPro::TextMeshProUGUI __declspec(property(get=__get__relativeScoreText, put=__set__relativeScoreText))  _relativeScoreText;

constexpr void __set__relativeScoreText(TMPro::TextMeshProUGUI value) ;

constexpr TMPro::TextMeshProUGUI __get__relativeScoreText() const;

 GlobalNamespace::RelativeScoreAndImmediateRankCounter __declspec(property(get=__get__relativeScoreAndImmediateRankCounter, put=__set__relativeScoreAndImmediateRankCounter))  _relativeScoreAndImmediateRankCounter;

constexpr void __set__relativeScoreAndImmediateRankCounter(GlobalNamespace::RelativeScoreAndImmediateRankCounter value) ;

constexpr GlobalNamespace::RelativeScoreAndImmediateRankCounter __get__relativeScoreAndImmediateRankCounter() const;

 System::Text::StringBuilder __declspec(property(get=__get__stringBuilder, put=__set__stringBuilder))  _stringBuilder;

constexpr void __set__stringBuilder(System::Text::StringBuilder value) ;

constexpr System::Text::StringBuilder __get__stringBuilder() const;

 float_t __declspec(property(get=__get__prevRelativeScore, put=__set__prevRelativeScore))  _prevRelativeScore;

constexpr void __set__prevRelativeScore(float_t value) ;

constexpr float_t __get__prevRelativeScore() const;

 GlobalNamespace::GlobalNamespace__RankModel__Rank __declspec(property(get=__get__prevImmediateRank, put=__set__prevImmediateRank))  _prevImmediateRank;

constexpr void __set__prevImmediateRank(GlobalNamespace::GlobalNamespace__RankModel__Rank value) ;

constexpr GlobalNamespace::GlobalNamespace__RankModel__Rank __get__prevImmediateRank() const;


// Methods

/// @brief Method Start addr 0x2275820 size 0xc4 virtual false final false
 void Start() ;

/// @brief Method HandleRelativeScoreAndImmediateRankCounterRelativeScoreOrImmediateRankDidChange addr 0x2275aec size 0x4 virtual false final false
 void HandleRelativeScoreAndImmediateRankCounterRelativeScoreOrImmediateRankDidChange() ;

/// @brief Method RefreshUI addr 0x22758e4 size 0x16c virtual false final false
 void RefreshUI() ;

static GlobalNamespace::ImmediateRankUIPanel New_ctor() ;

/// @brief Method .ctor addr 0x2275af0 size 0x14 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ImmediateRankUIPanel);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ImmediateRankUIPanel, "", "ImmediateRankUIPanel");
