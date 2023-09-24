#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/OnScreen/zzzz__OnScreenControl_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::EventSystems {
class IPointerDownHandler;
}
namespace UnityEngine::EventSystems {
class IPointerUpHandler;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
// Forward declare root types
namespace UnityEngine::InputSystem::OnScreen {
class OnScreenButton;
}
// Type: UnityEngine.InputSystem.OnScreen::OnScreenButton
namespace UnityEngine::InputSystem::OnScreen {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6471))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6469))
// CS Name: UnityEngine.InputSystem.OnScreen.OnScreenButton
class CORDL_TYPE OnScreenButton : public UnityEngine::InputSystem::OnScreen::OnScreenControl {
public:
// Declarations
/// @brief Convert operator to UnityEngine::EventSystems::IPointerDownHandler
constexpr operator  UnityEngine::EventSystems::IPointerDownHandler() const noexcept;

/// @brief Convert operator to UnityEngine::EventSystems::IEventSystemHandler
constexpr operator  UnityEngine::EventSystems::IEventSystemHandler() const noexcept;

/// @brief Convert operator to UnityEngine::EventSystems::IPointerUpHandler
constexpr operator  UnityEngine::EventSystems::IPointerUpHandler() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~OnScreenButton() = default;

// Ctor Parameters [CppParam { name: "", ty: "OnScreenButton", modifiers: " const&", def_value: None }]
constexpr OnScreenButton(OnScreenButton const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OnScreenButton", modifiers: "&&", def_value: None }]
constexpr OnScreenButton(OnScreenButton&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OnScreenButton(void* ptr) noexcept : UnityEngine::InputSystem::OnScreen::OnScreenControl(ptr) {
}


  constexpr OnScreenButton& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OnScreenButton& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OnScreenButton& operator=(OnScreenButton&& o) noexcept = default;
  constexpr OnScreenButton& operator=(OnScreenButton const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_m_ControlPath, put=__set_m_ControlPath))  m_ControlPath;

constexpr void __set_m_ControlPath(::StringW value) ;

constexpr ::StringW __get_m_ControlPath() const;


// Properties

 ::StringW __declspec(property(get=get_controlPathInternal, put=set_controlPathInternal))  controlPathInternal;


// Methods

/// @brief Method OnPointerUp addr 0x2945158 size 0x4c virtual true final true
 void OnPointerUp(UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method OnPointerDown addr 0x29451a4 size 0x4c virtual true final true
 void OnPointerDown(UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method get_controlPathInternal addr 0x29451f0 size 0x8 virtual true final false
 ::StringW get_controlPathInternal() ;

/// @brief Method set_controlPathInternal addr 0x29451f8 size 0x8 virtual true final false
 void set_controlPathInternal(::StringW value) ;

static UnityEngine::InputSystem::OnScreen::OnScreenButton New_ctor() ;

/// @brief Method .ctor addr 0x2945200 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::OnScreen
NEED_NO_BOX(UnityEngine::InputSystem::OnScreen::OnScreenButton);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::OnScreen::OnScreenButton, "UnityEngine.InputSystem.OnScreen", "OnScreenButton");
