#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
namespace GlobalNamespace {
class Vector3SO;
}
namespace System {
template<typename T>
class Action_1;
}
namespace HMUI {
class ButtonBinder;
}
namespace UnityEngine::UI {
class Button;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace GlobalNamespace {
class IVRPlatformHelper;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerHeightSettingsController;
}
// Type: ::PlayerHeightSettingsController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5699))
// CS Name: PlayerHeightSettingsController
class CORDL_TYPE PlayerHeightSettingsController : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~PlayerHeightSettingsController() = default;

// Ctor Parameters [CppParam { name: "", ty: "PlayerHeightSettingsController", modifiers: " const&", def_value: None }]
constexpr PlayerHeightSettingsController(PlayerHeightSettingsController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PlayerHeightSettingsController", modifiers: "&&", def_value: None }]
constexpr PlayerHeightSettingsController(PlayerHeightSettingsController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PlayerHeightSettingsController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr PlayerHeightSettingsController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PlayerHeightSettingsController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PlayerHeightSettingsController& operator=(PlayerHeightSettingsController&& o) noexcept = default;
  constexpr PlayerHeightSettingsController& operator=(PlayerHeightSettingsController const& o) noexcept = default;
                


// Fields

 TMPro::TextMeshProUGUI __declspec(property(get=__get__text, put=__set__text))  _text;

constexpr void __set__text(TMPro::TextMeshProUGUI value) ;

constexpr TMPro::TextMeshProUGUI __get__text() const;

 UnityEngine::UI::Button __declspec(property(get=__get__setButton, put=__set__setButton))  _setButton;

constexpr void __set__setButton(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get__setButton() const;

 GlobalNamespace::Vector3SO __declspec(property(get=__get__roomCenter, put=__set__roomCenter))  _roomCenter;

constexpr void __set__roomCenter(GlobalNamespace::Vector3SO value) ;

constexpr GlobalNamespace::Vector3SO __get__roomCenter() const;

 GlobalNamespace::IVRPlatformHelper __declspec(property(get=__get__vrPlatformHelper, put=__set__vrPlatformHelper))  _vrPlatformHelper;

constexpr void __set__vrPlatformHelper(GlobalNamespace::IVRPlatformHelper value) ;

constexpr GlobalNamespace::IVRPlatformHelper __get__vrPlatformHelper() const;

 System::Action_1<float_t> __declspec(property(get=__get_valueDidChangeEvent, put=__set_valueDidChangeEvent))  valueDidChangeEvent;

constexpr void __set_valueDidChangeEvent(System::Action_1<float_t> value) ;

constexpr System::Action_1<float_t> __get_valueDidChangeEvent() const;

 HMUI::ButtonBinder __declspec(property(get=__get__buttonBinder, put=__set__buttonBinder))  _buttonBinder;

constexpr void __set__buttonBinder(HMUI::ButtonBinder value) ;

constexpr HMUI::ButtonBinder __get__buttonBinder() const;

 float_t __declspec(property(get=__get__value, put=__set__value))  _value;

constexpr void __set__value(float_t value) ;

constexpr float_t __get__value() const;


// Properties

 float_t __declspec(property(get=get_value))  value;


// Methods

/// @brief Method add_valueDidChangeEvent addr 0x2154370 size 0xb0 virtual false final false
 void add_valueDidChangeEvent(System::Action_1<float_t> value) ;

/// @brief Method remove_valueDidChangeEvent addr 0x2154420 size 0xb0 virtual false final false
 void remove_valueDidChangeEvent(System::Action_1<float_t> value) ;

/// @brief Method get_value addr 0x21544d0 size 0x8 virtual false final false
 float_t get_value() ;

/// @brief Method Awake addr 0x21544d8 size 0xc4 virtual false final false
 void Awake() ;

/// @brief Method Init addr 0x215459c size 0x8 virtual false final false
 void Init(float_t playerHeight) ;

/// @brief Method AutoSetHeight addr 0x215464c size 0x120 virtual false final false
 void AutoSetHeight() ;

/// @brief Method RefreshUI addr 0x21545a4 size 0xa8 virtual false final false
 void RefreshUI() ;

// Ctor Parameters []
explicit PlayerHeightSettingsController() ;

/// @brief Method .ctor addr 0x215476c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::PlayerHeightSettingsController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerHeightSettingsController, "", "PlayerHeightSettingsController");
