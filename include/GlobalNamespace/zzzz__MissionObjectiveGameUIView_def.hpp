#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
namespace {
namespace UnityEngine {
class Sprite;
}
namespace GlobalNamespace {
class MissionObjectiveChecker;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine::UI {
class Image;
}
namespace TMPro {
class TextMeshProUGUI;
}
// Forward declare root types
namespace GlobalNamespace {
class MissionObjectiveGameUIView;
}
// Type: ::MissionObjectiveGameUIView
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5135))
// CS Name: MissionObjectiveGameUIView
class CORDL_TYPE MissionObjectiveGameUIView : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa0};

virtual ~MissionObjectiveGameUIView() = default;

// Ctor Parameters [CppParam { name: "", ty: "MissionObjectiveGameUIView", modifiers: " const&", def_value: None }]
constexpr MissionObjectiveGameUIView(MissionObjectiveGameUIView const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MissionObjectiveGameUIView", modifiers: "&&", def_value: None }]
constexpr MissionObjectiveGameUIView(MissionObjectiveGameUIView&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MissionObjectiveGameUIView(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MissionObjectiveGameUIView& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MissionObjectiveGameUIView& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MissionObjectiveGameUIView& operator=(MissionObjectiveGameUIView&& o) noexcept = default;
  constexpr MissionObjectiveGameUIView& operator=(MissionObjectiveGameUIView const& o) noexcept = default;
                


// Fields

 ::UnityEngine::Sprite __declspec(property(get=__get__notFailedIcon, put=__set__notFailedIcon))  _notFailedIcon;

constexpr void __set__notFailedIcon(::UnityEngine::Sprite value) ;

constexpr ::UnityEngine::Sprite __get__notFailedIcon() const;

 ::UnityEngine::Sprite __declspec(property(get=__get__failedIcon, put=__set__failedIcon))  _failedIcon;

constexpr void __set__failedIcon(::UnityEngine::Sprite value) ;

constexpr ::UnityEngine::Sprite __get__failedIcon() const;

 ::UnityEngine::Sprite __declspec(property(get=__get__notClearedIcon, put=__set__notClearedIcon))  _notClearedIcon;

constexpr void __set__notClearedIcon(::UnityEngine::Sprite value) ;

constexpr ::UnityEngine::Sprite __get__notClearedIcon() const;

 ::UnityEngine::Sprite __declspec(property(get=__get__clearedIcon, put=__set__clearedIcon))  _clearedIcon;

constexpr void __set__clearedIcon(::UnityEngine::Sprite value) ;

constexpr ::UnityEngine::Sprite __get__clearedIcon() const;

 ::UnityEngine::UI::Image __declspec(property(get=__get__resultIcon, put=__set__resultIcon))  _resultIcon;

constexpr void __set__resultIcon(::UnityEngine::UI::Image value) ;

constexpr ::UnityEngine::UI::Image __get__resultIcon() const;

 ::UnityEngine::Color __declspec(property(get=__get__finalClearIconColor, put=__set__finalClearIconColor))  _finalClearIconColor;

constexpr void __set__finalClearIconColor(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get__finalClearIconColor() const;

 ::UnityEngine::Color __declspec(property(get=__get__finalFailIconColor, put=__set__finalFailIconColor))  _finalFailIconColor;

constexpr void __set__finalFailIconColor(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get__finalFailIconColor() const;

 ::UnityEngine::Color __declspec(property(get=__get__nonFinalIconColor, put=__set__nonFinalIconColor))  _nonFinalIconColor;

constexpr void __set__nonFinalIconColor(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get__nonFinalIconColor() const;

 ::UnityEngine::ParticleSystem __declspec(property(get=__get__clearedPS, put=__set__clearedPS))  _clearedPS;

constexpr void __set__clearedPS(::UnityEngine::ParticleSystem value) ;

constexpr ::UnityEngine::ParticleSystem __get__clearedPS() const;

 int32_t __declspec(property(get=__get__numberOfParticles, put=__set__numberOfParticles))  _numberOfParticles;

constexpr void __set__numberOfParticles(int32_t value) ;

constexpr int32_t __get__numberOfParticles() const;

 ::TMPro::TextMeshProUGUI __declspec(property(get=__get__nameText, put=__set__nameText))  _nameText;

constexpr void __set__nameText(::TMPro::TextMeshProUGUI value) ;

constexpr ::TMPro::TextMeshProUGUI __get__nameText() const;

 ::TMPro::TextMeshProUGUI __declspec(property(get=__get__valueText, put=__set__valueText))  _valueText;

constexpr void __set__valueText(::TMPro::TextMeshProUGUI value) ;

constexpr ::TMPro::TextMeshProUGUI __get__valueText() const;

 ::TMPro::TextMeshProUGUI __declspec(property(get=__get__conditionText, put=__set__conditionText))  _conditionText;

constexpr void __set__conditionText(::TMPro::TextMeshProUGUI value) ;

constexpr ::TMPro::TextMeshProUGUI __get__conditionText() const;

 ::GlobalNamespace::MissionObjectiveChecker __declspec(property(get=__get__missionObjectiveChecker, put=__set__missionObjectiveChecker))  _missionObjectiveChecker;

constexpr void __set__missionObjectiveChecker(::GlobalNamespace::MissionObjectiveChecker value) ;

constexpr ::GlobalNamespace::MissionObjectiveChecker __get__missionObjectiveChecker() const;


// Methods

/// @brief Method SetMissionObjectiveChecker addr 0x2275b04 size 0x27c virtual false final false
 void SetMissionObjectiveChecker(::GlobalNamespace::MissionObjectiveChecker missionObjectiveChecker) ;

/// @brief Method HandleMissionObjectiveStatusDidChange addr 0x2275edc size 0x4 virtual false final false
 void HandleMissionObjectiveStatusDidChange(::GlobalNamespace::MissionObjectiveChecker missionObjectiveChecker) ;

/// @brief Method HandleMissionObjectiveCheckedValueDidChange addr 0x2275ee0 size 0x4 virtual false final false
 void HandleMissionObjectiveCheckedValueDidChange(::GlobalNamespace::MissionObjectiveChecker missionObjectiveChecker) ;

/// @brief Method RefreshIcon addr 0x2275d80 size 0x104 virtual false final false
 void RefreshIcon() ;

/// @brief Method RefreshValue addr 0x2275e84 size 0x58 virtual false final false
 void RefreshValue() ;

// Ctor Parameters []
explicit MissionObjectiveGameUIView() ;

/// @brief Method .ctor addr 0x2275ee4 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::MissionObjectiveGameUIView);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionObjectiveGameUIView, "", "MissionObjectiveGameUIView");
