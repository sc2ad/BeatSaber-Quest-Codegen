#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerInputModule_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::EventSystems {
class TouchInputModule;
}
// Type: UnityEngine.EventSystems::TouchInputModule
namespace UnityEngine::EventSystems {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13142))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13145))
// CS Name: UnityEngine.EventSystems.TouchInputModule
class CORDL_TYPE TouchInputModule : public UnityEngine::EventSystems::PointerInputModule {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~TouchInputModule() = default;

// Ctor Parameters [CppParam { name: "", ty: "TouchInputModule", modifiers: " const&", def_value: None }]
constexpr TouchInputModule(TouchInputModule const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TouchInputModule", modifiers: "&&", def_value: None }]
constexpr TouchInputModule(TouchInputModule&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TouchInputModule(void* ptr) noexcept : UnityEngine::EventSystems::PointerInputModule(ptr) {
}


  constexpr TouchInputModule& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TouchInputModule& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TouchInputModule& operator=(TouchInputModule&& o) noexcept = default;
  constexpr TouchInputModule& operator=(TouchInputModule const& o) noexcept = default;
                


// Fields

 UnityEngine::Vector2 __declspec(property(get=__get_m_LastMousePosition, put=__set_m_LastMousePosition))  m_LastMousePosition;

constexpr void __set_m_LastMousePosition(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get_m_LastMousePosition() const;

 UnityEngine::Vector2 __declspec(property(get=__get_m_MousePosition, put=__set_m_MousePosition))  m_MousePosition;

constexpr void __set_m_MousePosition(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get_m_MousePosition() const;

 UnityEngine::EventSystems::PointerEventData __declspec(property(get=__get_m_InputPointerEvent, put=__set_m_InputPointerEvent))  m_InputPointerEvent;

constexpr void __set_m_InputPointerEvent(UnityEngine::EventSystems::PointerEventData value) ;

constexpr UnityEngine::EventSystems::PointerEventData __get_m_InputPointerEvent() const;

 bool __declspec(property(get=__get_m_ForceModuleActive, put=__set_m_ForceModuleActive))  m_ForceModuleActive;

constexpr void __set_m_ForceModuleActive(bool value) ;

constexpr bool __get_m_ForceModuleActive() const;


// Properties

 bool __declspec(property(get=get_allowActivationOnStandalone, put=set_allowActivationOnStandalone))  allowActivationOnStandalone;

 bool __declspec(property(get=get_forceModuleActive, put=set_forceModuleActive))  forceModuleActive;


// Methods

static UnityEngine::EventSystems::TouchInputModule New_ctor() ;

/// @brief Method .ctor addr 0x2c25e2c size 0x4 virtual false final false
 void _ctor() ;

/// @brief Method get_allowActivationOnStandalone addr 0x2c25e30 size 0x8 virtual false final false
 bool get_allowActivationOnStandalone() ;

/// @brief Method set_allowActivationOnStandalone addr 0x2c25e38 size 0xc virtual false final false
 void set_allowActivationOnStandalone(bool value) ;

/// @brief Method get_forceModuleActive addr 0x2c25e44 size 0x8 virtual false final false
 bool get_forceModuleActive() ;

/// @brief Method set_forceModuleActive addr 0x2c25e4c size 0xc virtual false final false
 void set_forceModuleActive(bool value) ;

/// @brief Method UpdateModule addr 0x2c25e58 size 0x150 virtual true final false
 void UpdateModule() ;

/// @brief Method IsModuleSupported addr 0x2c25fa8 size 0x38 virtual true final false
 bool IsModuleSupported() ;

/// @brief Method ShouldActivateModule addr 0x2c25fe0 size 0xa4 virtual true final false
 bool ShouldActivateModule() ;

/// @brief Method UseFakeInput addr 0x2c26084 size 0x30 virtual false final false
 bool UseFakeInput() ;

/// @brief Method Process addr 0x2c260b4 size 0x28 virtual true final false
 void Process() ;

/// @brief Method FakeTouches addr 0x2c260dc size 0x124 virtual false final false
 void FakeTouches() ;

/// @brief Method ProcessTouchEvents addr 0x2c26200 size 0x148 virtual false final false
 void ProcessTouchEvents() ;

/// @brief Method ProcessTouchPress addr 0x2c26348 size 0x668 virtual false final false
 void ProcessTouchPress(UnityEngine::EventSystems::PointerEventData pointerEvent, bool pressed, bool released) ;

/// @brief Method DeactivateModule addr 0x2c269b0 size 0x4 virtual true final false
 void DeactivateModule() ;

/// @brief Method ToString addr 0x2c269b4 size 0x250 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::EventSystems
NEED_NO_BOX(UnityEngine::EventSystems::TouchInputModule);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::EventSystems::TouchInputModule, "UnityEngine.EventSystems", "TouchInputModule");
