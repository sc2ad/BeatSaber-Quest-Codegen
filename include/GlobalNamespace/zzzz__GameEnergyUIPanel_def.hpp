#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine::Playables {
class PlayableDirector;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
class IGameEnergyCounter;
}
namespace UnityEngine::UI {
class Image;
}
// Forward declare root types
namespace GlobalNamespace {
class GameEnergyUIPanel;
}
// Type: ::GameEnergyUIPanel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5133))
// CS Name: GameEnergyUIPanel
class CORDL_TYPE GameEnergyUIPanel : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~GameEnergyUIPanel() = default;

// Ctor Parameters [CppParam { name: "", ty: "GameEnergyUIPanel", modifiers: " const&", def_value: None }]
constexpr GameEnergyUIPanel(GameEnergyUIPanel const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GameEnergyUIPanel", modifiers: "&&", def_value: None }]
constexpr GameEnergyUIPanel(GameEnergyUIPanel&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GameEnergyUIPanel(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr GameEnergyUIPanel& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GameEnergyUIPanel& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GameEnergyUIPanel& operator=(GameEnergyUIPanel&& o) noexcept = default;
  constexpr GameEnergyUIPanel& operator=(GameEnergyUIPanel const& o) noexcept = default;
                


// Fields

 ::UnityEngine::UI::Image __declspec(property(get=__get__energyBar, put=__set__energyBar))  _energyBar;

constexpr void __set__energyBar(::UnityEngine::UI::Image value) ;

constexpr ::UnityEngine::UI::Image __get__energyBar() const;

 ::UnityEngine::Playables::PlayableDirector __declspec(property(get=__get__playableDirector, put=__set__playableDirector))  _playableDirector;

constexpr void __set__playableDirector(::UnityEngine::Playables::PlayableDirector value) ;

constexpr ::UnityEngine::Playables::PlayableDirector __get__playableDirector() const;

 ::UnityEngine::UI::Image __declspec(property(get=__get__batteryLifeSegmentPrefab, put=__set__batteryLifeSegmentPrefab))  _batteryLifeSegmentPrefab;

constexpr void __set__batteryLifeSegmentPrefab(::UnityEngine::UI::Image value) ;

constexpr ::UnityEngine::UI::Image __get__batteryLifeSegmentPrefab() const;

 float_t __declspec(property(get=__get__batterySegmentSeparatorWidth, put=__set__batterySegmentSeparatorWidth))  _batterySegmentSeparatorWidth;

constexpr void __set__batterySegmentSeparatorWidth(float_t value) ;

constexpr float_t __get__batterySegmentSeparatorWidth() const;

 float_t __declspec(property(get=__get__batterySegmentHorizontalPadding, put=__set__batterySegmentHorizontalPadding))  _batterySegmentHorizontalPadding;

constexpr void __set__batterySegmentHorizontalPadding(float_t value) ;

constexpr float_t __get__batterySegmentHorizontalPadding() const;

 ::GlobalNamespace::IGameEnergyCounter __declspec(property(get=__get__gameEnergyCounter, put=__set__gameEnergyCounter))  _gameEnergyCounter;

constexpr void __set__gameEnergyCounter(::GlobalNamespace::IGameEnergyCounter value) ;

constexpr ::GlobalNamespace::IGameEnergyCounter __get__gameEnergyCounter() const;

 ::System::Collections::Generic::List_1<::UnityEngine::UI::Image> __declspec(property(get=__get__batteryLifeSegments, put=__set__batteryLifeSegments))  _batteryLifeSegments;

constexpr void __set__batteryLifeSegments(::System::Collections::Generic::List_1<::UnityEngine::UI::Image> value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::UI::Image> __get__batteryLifeSegments() const;

 int32_t __declspec(property(get=__get__activeBatteryLifeSegmentsCount, put=__set__activeBatteryLifeSegmentsCount))  _activeBatteryLifeSegmentsCount;

constexpr void __set__activeBatteryLifeSegmentsCount(int32_t value) ;

constexpr int32_t __get__activeBatteryLifeSegmentsCount() const;

 ::UnityEngine::RectTransform __declspec(property(get=__get__energyBarRectTransform, put=__set__energyBarRectTransform))  _energyBarRectTransform;

constexpr void __set__energyBarRectTransform(::UnityEngine::RectTransform value) ;

constexpr ::UnityEngine::RectTransform __get__energyBarRectTransform() const;


// Methods

/// @brief Method Start addr 0x2274b78 size 0x184 virtual false final false
 void Start() ;

/// @brief Method Init addr 0x2274cfc size 0x3a0 virtual false final false
 void Init() ;

/// @brief Method OnDestroy addr 0x2275650 size 0x1b8 virtual false final false
 void OnDestroy() ;

/// @brief Method CreateUIForBatteryEnergyType addr 0x227509c size 0x2e4 virtual false final false
 void CreateUIForBatteryEnergyType(int32_t batteryLives) ;

/// @brief Method RefreshEnergyUI addr 0x2275380 size 0x2d0 virtual false final false
 void RefreshEnergyUI(float_t energy) ;

/// @brief Method HandleGameEnergyCounterDidInit addr 0x2275808 size 0x4 virtual false final false
 void HandleGameEnergyCounterDidInit() ;

/// @brief Method HandleGameEnergyDidChange addr 0x227580c size 0x4 virtual false final false
 void HandleGameEnergyDidChange(float_t energy) ;

// Ctor Parameters []
explicit GameEnergyUIPanel() ;

/// @brief Method .ctor addr 0x2275810 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::GameEnergyUIPanel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameEnergyUIPanel, "", "GameEnergyUIPanel");
