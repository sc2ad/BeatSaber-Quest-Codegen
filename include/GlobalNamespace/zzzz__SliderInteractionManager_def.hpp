#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
namespace GlobalNamespace {
struct ColorType;
}
namespace GlobalNamespace {
class SliderController;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
class BeatmapObjectManager;
}
// Forward declare root types
namespace GlobalNamespace {
class SliderInteractionManager;
}
// Type: ::SliderInteractionManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4935))
// CS Name: SliderInteractionManager
class CORDL_TYPE SliderInteractionManager : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~SliderInteractionManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "SliderInteractionManager", modifiers: " const&", def_value: None }]
constexpr SliderInteractionManager(SliderInteractionManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SliderInteractionManager", modifiers: "&&", def_value: None }]
constexpr SliderInteractionManager(SliderInteractionManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SliderInteractionManager(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr SliderInteractionManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SliderInteractionManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SliderInteractionManager& operator=(SliderInteractionManager&& o) noexcept = default;
  constexpr SliderInteractionManager& operator=(SliderInteractionManager const& o) noexcept = default;
                


// Fields

 GlobalNamespace::ColorType __declspec(property(get=__get__colorType, put=__set__colorType))  _colorType;

constexpr void __set__colorType(GlobalNamespace::ColorType value) ;

constexpr GlobalNamespace::ColorType __get__colorType() const;

 GlobalNamespace::BeatmapObjectManager __declspec(property(get=__get__beatmapObjectManager, put=__set__beatmapObjectManager))  _beatmapObjectManager;

constexpr void __set__beatmapObjectManager(GlobalNamespace::BeatmapObjectManager value) ;

constexpr GlobalNamespace::BeatmapObjectManager __get__beatmapObjectManager() const;

 float_t __declspec(property(get=__get__saberInteractionParam_k__BackingField, put=__set__saberInteractionParam_k__BackingField))  _saberInteractionParam_k__BackingField;

constexpr void __set__saberInteractionParam_k__BackingField(float_t value) ;

constexpr float_t __get__saberInteractionParam_k__BackingField() const;

 System::Action_1<float_t> __declspec(property(get=__get_sliderWasAddedToActiveSlidersEvent, put=__set_sliderWasAddedToActiveSlidersEvent))  sliderWasAddedToActiveSlidersEvent;

constexpr void __set_sliderWasAddedToActiveSlidersEvent(System::Action_1<float_t> value) ;

constexpr System::Action_1<float_t> __get_sliderWasAddedToActiveSlidersEvent() const;

 System::Action __declspec(property(get=__get_allSliderWereRemovedFromActiveSlidersEvent, put=__set_allSliderWereRemovedFromActiveSlidersEvent))  allSliderWereRemovedFromActiveSlidersEvent;

constexpr void __set_allSliderWereRemovedFromActiveSlidersEvent(System::Action value) ;

constexpr System::Action __get_allSliderWereRemovedFromActiveSlidersEvent() const;

 System::Collections::Generic::List_1<GlobalNamespace::SliderController> __declspec(property(get=__get__activeSliders, put=__set__activeSliders))  _activeSliders;

constexpr void __set__activeSliders(System::Collections::Generic::List_1<GlobalNamespace::SliderController> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::SliderController> __get__activeSliders() const;


// Properties

 GlobalNamespace::ColorType __declspec(property(get=get_colorType))  colorType;

 float_t __declspec(property(get=get_saberInteractionParam, put=set_saberInteractionParam))  saberInteractionParam;


// Methods

/// @brief Method get_colorType addr 0x224b1b4 size 0x8 virtual false final false
 GlobalNamespace::ColorType get_colorType() ;

/// @brief Method get_saberInteractionParam addr 0x224b1bc size 0x8 virtual false final false
 float_t get_saberInteractionParam() ;

/// @brief Method set_saberInteractionParam addr 0x224b1c4 size 0x8 virtual false final false
 void set_saberInteractionParam(float_t value) ;

/// @brief Method add_sliderWasAddedToActiveSlidersEvent addr 0x224ae18 size 0xb0 virtual false final false
 void add_sliderWasAddedToActiveSlidersEvent(System::Action_1<float_t> value) ;

/// @brief Method remove_sliderWasAddedToActiveSlidersEvent addr 0x224b050 size 0xb0 virtual false final false
 void remove_sliderWasAddedToActiveSlidersEvent(System::Action_1<float_t> value) ;

/// @brief Method add_allSliderWereRemovedFromActiveSlidersEvent addr 0x224aec8 size 0x9c virtual false final false
 void add_allSliderWereRemovedFromActiveSlidersEvent(System::Action value) ;

/// @brief Method remove_allSliderWereRemovedFromActiveSlidersEvent addr 0x224b100 size 0x9c virtual false final false
 void remove_allSliderWereRemovedFromActiveSlidersEvent(System::Action value) ;

/// @brief Method Start addr 0x224b1cc size 0xe0 virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x224b2ac size 0xf0 virtual false final false
 void OnDestroy() ;

/// @brief Method Update addr 0x224b39c size 0x164 virtual false final false
 void Update() ;

/// @brief Method AddActiveSlider addr 0x224b500 size 0x220 virtual false final false
 void AddActiveSlider(GlobalNamespace::SliderController newSliderController) ;

/// @brief Method RemoveActiveSlider addr 0x224b720 size 0x98 virtual false final false
 void RemoveActiveSlider(GlobalNamespace::SliderController sliderController) ;

/// @brief Method HandleSliderWasSpawned addr 0x224b7b8 size 0x34 virtual false final false
 void HandleSliderWasSpawned(GlobalNamespace::SliderController sliderController) ;

/// @brief Method HandleSliderWasDespawned addr 0x224b7ec size 0x34 virtual false final false
 void HandleSliderWasDespawned(GlobalNamespace::SliderController sliderController) ;

// Ctor Parameters []
explicit SliderInteractionManager() ;

/// @brief Method .ctor addr 0x224b820 size 0x7c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::SliderInteractionManager);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SliderInteractionManager, "", "SliderInteractionManager");
