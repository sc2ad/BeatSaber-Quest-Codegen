#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/OnScreen/zzzz__OnScreenControl_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::EventSystems {
class IPointerUpHandler;
}
namespace UnityEngine::EventSystems {
class IPointerDownHandler;
}
namespace UnityEngine::EventSystems {
class IDragHandler;
}
// Forward declare root types
namespace UnityEngine::InputSystem::OnScreen {
class OnScreenStick;
}
// Type: UnityEngine.InputSystem.OnScreen::OnScreenStick
namespace UnityEngine::InputSystem::OnScreen {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6471))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6472))
// CS Name: UnityEngine.InputSystem.OnScreen.OnScreenStick
class CORDL_TYPE OnScreenStick : public UnityEngine::InputSystem::OnScreen::OnScreenControl {
public:
// Declarations
/// @brief Convert operator to UnityEngine::EventSystems::IPointerDownHandler
constexpr operator  UnityEngine::EventSystems::IPointerDownHandler() const noexcept;

/// @brief Convert operator to UnityEngine::EventSystems::IEventSystemHandler
constexpr operator  UnityEngine::EventSystems::IEventSystemHandler() const noexcept;

/// @brief Convert operator to UnityEngine::EventSystems::IPointerUpHandler
constexpr operator  UnityEngine::EventSystems::IPointerUpHandler() const noexcept;

/// @brief Convert operator to UnityEngine::EventSystems::IDragHandler
constexpr operator  UnityEngine::EventSystems::IDragHandler() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~OnScreenStick() = default;

// Ctor Parameters [CppParam { name: "", ty: "OnScreenStick", modifiers: " const&", def_value: None }]
constexpr OnScreenStick(OnScreenStick const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OnScreenStick", modifiers: "&&", def_value: None }]
constexpr OnScreenStick(OnScreenStick&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OnScreenStick(void* ptr) noexcept : UnityEngine::InputSystem::OnScreen::OnScreenControl(ptr) {
}


  constexpr OnScreenStick& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OnScreenStick& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OnScreenStick& operator=(OnScreenStick&& o) noexcept = default;
  constexpr OnScreenStick& operator=(OnScreenStick const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_m_MovementRange, put=__set_m_MovementRange))  m_MovementRange;

constexpr void __set_m_MovementRange(float_t value) ;

constexpr float_t __get_m_MovementRange() const;

 ::StringW __declspec(property(get=__get_m_ControlPath, put=__set_m_ControlPath))  m_ControlPath;

constexpr void __set_m_ControlPath(::StringW value) ;

constexpr ::StringW __get_m_ControlPath() const;

 UnityEngine::Vector3 __declspec(property(get=__get_m_StartPos, put=__set_m_StartPos))  m_StartPos;

constexpr void __set_m_StartPos(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_m_StartPos() const;

 UnityEngine::Vector2 __declspec(property(get=__get_m_PointerDownPos, put=__set_m_PointerDownPos))  m_PointerDownPos;

constexpr void __set_m_PointerDownPos(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get_m_PointerDownPos() const;


// Properties

 float_t __declspec(property(get=get_movementRange, put=set_movementRange))  movementRange;

 ::StringW __declspec(property(get=get_controlPathInternal, put=set_controlPathInternal))  controlPathInternal;


// Methods

/// @brief Method OnPointerDown addr 0x2946088 size 0x124 virtual true final true
 void OnPointerDown(UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method OnDrag addr 0x29461ac size 0x224 virtual true final true
 void OnDrag(UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method OnPointerUp addr 0x29463d0 size 0xc4 virtual true final true
 void OnPointerUp(UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method Start addr 0x2946494 size 0x78 virtual false final false
 void Start() ;

/// @brief Method get_movementRange addr 0x294650c size 0x8 virtual false final false
 float_t get_movementRange() ;

/// @brief Method set_movementRange addr 0x2946514 size 0x8 virtual false final false
 void set_movementRange(float_t value) ;

/// @brief Method get_controlPathInternal addr 0x294651c size 0x8 virtual true final false
 ::StringW get_controlPathInternal() ;

/// @brief Method set_controlPathInternal addr 0x2946524 size 0x8 virtual true final false
 void set_controlPathInternal(::StringW value) ;

static UnityEngine::InputSystem::OnScreen::OnScreenStick New_ctor() ;

/// @brief Method .ctor addr 0x294652c size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::OnScreen
NEED_NO_BOX(UnityEngine::InputSystem::OnScreen::OnScreenStick);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::OnScreen::OnScreenStick, "UnityEngine.InputSystem.OnScreen", "OnScreenStick");
