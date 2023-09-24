#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace UnityEngine::UI {
class Graphic;
}
namespace UnityEngine {
struct Color;
}
namespace HMUI {
class ButtonBinder;
}
namespace UnityEngine::UI {
class Button;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class PreviousColorPanelController;
}
// Type: ::PreviousColorPanelController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5505))
// CS Name: PreviousColorPanelController
class CORDL_TYPE PreviousColorPanelController : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~PreviousColorPanelController() = default;

// Ctor Parameters [CppParam { name: "", ty: "PreviousColorPanelController", modifiers: " const&", def_value: None }]
constexpr PreviousColorPanelController(PreviousColorPanelController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PreviousColorPanelController", modifiers: "&&", def_value: None }]
constexpr PreviousColorPanelController(PreviousColorPanelController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PreviousColorPanelController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr PreviousColorPanelController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PreviousColorPanelController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PreviousColorPanelController& operator=(PreviousColorPanelController&& o) noexcept = default;
  constexpr PreviousColorPanelController& operator=(PreviousColorPanelController const& o) noexcept = default;
                


// Fields

 ::ArrayW<UnityEngine::UI::Graphic> __declspec(property(get=__get__graphics, put=__set__graphics))  _graphics;

constexpr void __set__graphics(::ArrayW<UnityEngine::UI::Graphic> value) ;

constexpr ::ArrayW<UnityEngine::UI::Graphic> __get__graphics() const;

 UnityEngine::UI::Button __declspec(property(get=__get__button, put=__set__button))  _button;

constexpr void __set__button(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get__button() const;

 System::Action_1<UnityEngine::Color> __declspec(property(get=__get_colorWasSelectedEvent, put=__set_colorWasSelectedEvent))  colorWasSelectedEvent;

constexpr void __set_colorWasSelectedEvent(System::Action_1<UnityEngine::Color> value) ;

constexpr System::Action_1<UnityEngine::Color> __get_colorWasSelectedEvent() const;

/// @brief Field kMaxColors offset 0
static constexpr int32_t  kMaxColors{2};

 HMUI::ButtonBinder __declspec(property(get=__get__buttonBinder, put=__set__buttonBinder))  _buttonBinder;

constexpr void __set__buttonBinder(HMUI::ButtonBinder value) ;

constexpr HMUI::ButtonBinder __get__buttonBinder() const;

 UnityEngine::Color __declspec(property(get=__get__color, put=__set__color))  _color;

constexpr void __set__color(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__color() const;

 UnityEngine::Color __declspec(property(get=__get__graphicsColor, put=__set__graphicsColor))  _graphicsColor;

constexpr void __set__graphicsColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__graphicsColor() const;


// Methods

/// @brief Method add_colorWasSelectedEvent addr 0x211fca8 size 0xb0 virtual false final false
 void add_colorWasSelectedEvent(System::Action_1<UnityEngine::Color> value) ;

/// @brief Method remove_colorWasSelectedEvent addr 0x211fef4 size 0xb0 virtual false final false
 void remove_colorWasSelectedEvent(System::Action_1<UnityEngine::Color> value) ;

/// @brief Method Awake addr 0x2120df4 size 0xc4 virtual false final false
 void Awake() ;

/// @brief Method OnDestroy addr 0x2120eb8 size 0x1c virtual false final false
 void OnDestroy() ;

/// @brief Method AddColor addr 0x211f950 size 0xa4 virtual false final false
 void AddColor(UnityEngine::Color color) ;

/// @brief Method DiscardUpcomingColor addr 0x212010c size 0xc virtual false final false
 void DiscardUpcomingColor() ;

static GlobalNamespace::PreviousColorPanelController New_ctor() ;

/// @brief Method .ctor addr 0x2120ed4 size 0x18 virtual false final false
 void _ctor() ;

/// @brief Method <Awake>b__9_0 addr 0x2120eec size 0x24 virtual false final false
 void _Awake_b__9_0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::PreviousColorPanelController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PreviousColorPanelController, "", "PreviousColorPanelController");
