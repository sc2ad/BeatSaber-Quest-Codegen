#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/UI/zzzz__Selectable_def.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::EventSystems {
class ISubmitHandler;
}
namespace UnityEngine::EventSystems {
class IPointerClickHandler;
}
namespace UnityEngine::UI {
class ICanvasElement;
}
namespace UnityEngine::UI {
struct CanvasUpdate;
}
namespace UnityEngine::UI {
class Graphic;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine::UI {
class ToggleGroup;
}
namespace UnityEngine::EventSystems {
class BaseEventData;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
// Forward declare root types
namespace UnityEngine::UI {
struct UnityEngine__UI__Toggle__ToggleTransition;
}
namespace UnityEngine::UI {
class Toggle;
}
namespace UnityEngine::UI {
class UnityEngine__UI__Toggle__ToggleEvent;
}
// Type: ::ToggleTransition
namespace UnityEngine::UI {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13068))
// CS Name: UnityEngine.UI.Toggle::ToggleTransition
struct CORDL_TYPE UnityEngine__UI__Toggle__ToggleTransition : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__UI__Toggle__ToggleTransition(int32_t value__) noexcept;


                    constexpr UnityEngine__UI__Toggle__ToggleTransition(UnityEngine__UI__Toggle__ToggleTransition const&) = default;
                    constexpr UnityEngine__UI__Toggle__ToggleTransition(UnityEngine__UI__Toggle__ToggleTransition&&) = default;
                    constexpr UnityEngine__UI__Toggle__ToggleTransition& operator=(UnityEngine__UI__Toggle__ToggleTransition const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UI__Toggle__ToggleTransition& operator=(UnityEngine__UI__Toggle__ToggleTransition&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UI__Toggle__ToggleTransition(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__UI__Toggle__ToggleTransition_Unwrapped : int32_t {
__None = 0,
__Fade = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__UI__Toggle__ToggleTransition_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__UI__Toggle__ToggleTransition_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static UnityEngine::UI::UnityEngine__UI__Toggle__ToggleTransition const None;

/// @brief Field Fade offset 0
static UnityEngine::UI::UnityEngine__UI__Toggle__ToggleTransition const Fade;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
// Type: ::ToggleEvent
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10401), inst: 99 }), TypeDefinitionIndex(TypeDefinitionIndex(10401))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13069))
// CS Name: UnityEngine.UI.Toggle::ToggleEvent
class CORDL_TYPE UnityEngine__UI__Toggle__ToggleEvent : public UnityEngine::Events::UnityEvent_1<bool> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~UnityEngine__UI__Toggle__ToggleEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UI__Toggle__ToggleEvent", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UI__Toggle__ToggleEvent(UnityEngine__UI__Toggle__ToggleEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UI__Toggle__ToggleEvent", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UI__Toggle__ToggleEvent(UnityEngine__UI__Toggle__ToggleEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UI__Toggle__ToggleEvent(void* ptr) noexcept : UnityEngine::Events::UnityEvent_1<bool>(ptr) {
}


  constexpr UnityEngine__UI__Toggle__ToggleEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UI__Toggle__ToggleEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UI__Toggle__ToggleEvent& operator=(UnityEngine__UI__Toggle__ToggleEvent&& o) noexcept = default;
  constexpr UnityEngine__UI__Toggle__ToggleEvent& operator=(UnityEngine__UI__Toggle__ToggleEvent const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit UnityEngine__UI__Toggle__ToggleEvent() ;

/// @brief Method .ctor addr 0x2c13660 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
// Type: UnityEngine.UI::Toggle
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13058))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13070))
// CS Name: UnityEngine.UI.Toggle
class CORDL_TYPE Toggle : public UnityEngine::UI::Selectable {
public:
// Declarations
using ToggleEvent = UnityEngine::UI::UnityEngine__UI__Toggle__ToggleEvent;

using ToggleTransition = UnityEngine::UI::UnityEngine__UI__Toggle__ToggleTransition;

/// @brief Convert operator to UnityEngine::EventSystems::IPointerClickHandler
constexpr operator  UnityEngine::EventSystems::IPointerClickHandler() const noexcept;

/// @brief Convert operator to UnityEngine::EventSystems::IEventSystemHandler
constexpr operator  UnityEngine::EventSystems::IEventSystemHandler() const noexcept;

/// @brief Convert operator to UnityEngine::EventSystems::ISubmitHandler
constexpr operator  UnityEngine::EventSystems::ISubmitHandler() const noexcept;

/// @brief Convert operator to UnityEngine::UI::ICanvasElement
constexpr operator  UnityEngine::UI::ICanvasElement() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x120};

virtual ~Toggle() = default;

// Ctor Parameters [CppParam { name: "", ty: "Toggle", modifiers: " const&", def_value: None }]
constexpr Toggle(Toggle const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Toggle", modifiers: "&&", def_value: None }]
constexpr Toggle(Toggle&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Toggle(void* ptr) noexcept : UnityEngine::UI::Selectable(ptr) {
}


  constexpr Toggle& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Toggle& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Toggle& operator=(Toggle&& o) noexcept = default;
  constexpr Toggle& operator=(Toggle const& o) noexcept = default;
                


// Fields

 UnityEngine::UI::UnityEngine__UI__Toggle__ToggleTransition __declspec(property(get=__get_toggleTransition, put=__set_toggleTransition))  toggleTransition;

constexpr void __set_toggleTransition(UnityEngine::UI::UnityEngine__UI__Toggle__ToggleTransition value) ;

constexpr UnityEngine::UI::UnityEngine__UI__Toggle__ToggleTransition __get_toggleTransition() const;

 UnityEngine::UI::Graphic __declspec(property(get=__get_graphic, put=__set_graphic))  graphic;

constexpr void __set_graphic(UnityEngine::UI::Graphic value) ;

constexpr UnityEngine::UI::Graphic __get_graphic() const;

 UnityEngine::UI::ToggleGroup __declspec(property(get=__get_m_Group, put=__set_m_Group))  m_Group;

constexpr void __set_m_Group(UnityEngine::UI::ToggleGroup value) ;

constexpr UnityEngine::UI::ToggleGroup __get_m_Group() const;

 UnityEngine::UI::UnityEngine__UI__Toggle__ToggleEvent __declspec(property(get=__get_onValueChanged, put=__set_onValueChanged))  onValueChanged;

constexpr void __set_onValueChanged(UnityEngine::UI::UnityEngine__UI__Toggle__ToggleEvent value) ;

constexpr UnityEngine::UI::UnityEngine__UI__Toggle__ToggleEvent __get_onValueChanged() const;

 bool __declspec(property(get=__get_m_IsOn, put=__set_m_IsOn))  m_IsOn;

constexpr void __set_m_IsOn(bool value) ;

constexpr bool __get_m_IsOn() const;


// Properties

 UnityEngine::UI::ToggleGroup __declspec(property(get=get_group, put=set_group))  group;

 bool __declspec(property(get=get_isOn, put=set_isOn))  isOn;


// Methods

/// @brief Method get_group addr 0x2c133ac size 0x8 virtual false final false
 UnityEngine::UI::ToggleGroup get_group() ;

/// @brief Method set_group addr 0x2c133b4 size 0x20 virtual false final false
 void set_group(UnityEngine::UI::ToggleGroup value) ;

// Ctor Parameters []
explicit Toggle() ;

/// @brief Method .ctor addr 0x2c135d4 size 0x8c virtual false final false
 void _ctor() ;

/// @brief Method Rebuild addr 0x2c136a8 size 0x4 virtual true final false
 void Rebuild(UnityEngine::UI::CanvasUpdate executing) ;

/// @brief Method LayoutComplete addr 0x2c136ac size 0x4 virtual true final false
 void LayoutComplete() ;

/// @brief Method GraphicUpdateComplete addr 0x2c136b0 size 0x4 virtual true final false
 void GraphicUpdateComplete() ;

/// @brief Method OnDestroy addr 0x2c136b4 size 0x80 virtual true final false
 void OnDestroy() ;

/// @brief Method OnEnable addr 0x2c13b20 size 0x2c virtual true final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x2c13b4c size 0x20 virtual true final false
 void OnDisable() ;

/// @brief Method OnDidApplyAnimationProperties addr 0x2c13b6c size 0x124 virtual true final false
 void OnDidApplyAnimationProperties() ;

/// @brief Method SetToggleGroup addr 0x2c133d4 size 0x13c virtual false final false
 void SetToggleGroup(UnityEngine::UI::ToggleGroup newGroup, bool setMemberValue) ;

/// @brief Method get_isOn addr 0x2c14074 size 0x8 virtual false final false
 bool get_isOn() ;

/// @brief Method set_isOn addr 0x2c1407c size 0xc virtual false final false
 void set_isOn(bool value) ;

/// @brief Method SetIsOnWithoutNotify addr 0x2c14088 size 0xc virtual false final false
 void SetIsOnWithoutNotify(bool value) ;

/// @brief Method Set addr 0x2c13c90 size 0x174 virtual false final false
 void Set(bool value, bool sendCallback) ;

/// @brief Method PlayEffect addr 0x2c13510 size 0xc4 virtual false final false
 void PlayEffect(bool instant) ;

/// @brief Method Start addr 0x2c141d0 size 0x8 virtual true final false
 void Start() ;

/// @brief Method InternalToggle addr 0x2c141d8 size 0x54 virtual false final false
 void InternalToggle() ;

/// @brief Method OnPointerClick addr 0x2c1422c size 0x24 virtual true final false
 void OnPointerClick(UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method OnSubmit addr 0x2c14250 size 0x4 virtual true final false
 void OnSubmit(UnityEngine::EventSystems::BaseEventData eventData) ;

/// @brief Method UnityEngine.UI.ICanvasElement.get_transform addr 0x2c14254 size 0x8 virtual true final true
 UnityEngine::Transform UnityEngine_UI_ICanvasElement_get_transform() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::UnityEngine__UI__Toggle__ToggleTransition, "UnityEngine.UI", "Toggle/ToggleTransition");
NEED_NO_BOX(UnityEngine::UI::Toggle);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::Toggle, "UnityEngine.UI", "Toggle");
NEED_NO_BOX(UnityEngine::UI::UnityEngine__UI__Toggle__ToggleEvent);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::UnityEngine__UI__Toggle__ToggleEvent, "UnityEngine.UI", "Toggle/ToggleEvent");
