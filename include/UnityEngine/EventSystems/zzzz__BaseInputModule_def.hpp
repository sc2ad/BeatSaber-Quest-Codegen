#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::EventSystems {
struct MoveDirection;
}
namespace UnityEngine::EventSystems {
class EventSystem;
}
namespace UnityEngine::EventSystems {
class BaseEventData;
}
namespace UnityEngine::EventSystems {
class AxisEventData;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine::EventSystems {
class BaseInput;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::EventSystems {
struct RaycastResult;
}
// Forward declare root types
namespace UnityEngine::EventSystems {
class BaseInputModule;
}
// Type: UnityEngine.EventSystems::BaseInputModule
namespace UnityEngine::EventSystems {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13153))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13138))
// CS Name: UnityEngine.EventSystems.BaseInputModule
class CORDL_TYPE BaseInputModule : public ::UnityEngine::EventSystems::UIBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~BaseInputModule() = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseInputModule", modifiers: " const&", def_value: None }]
constexpr BaseInputModule(BaseInputModule const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseInputModule", modifiers: "&&", def_value: None }]
constexpr BaseInputModule(BaseInputModule&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BaseInputModule(void* ptr) noexcept : ::UnityEngine::EventSystems::UIBehaviour(ptr) {
}


  constexpr BaseInputModule& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BaseInputModule& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BaseInputModule& operator=(BaseInputModule&& o) noexcept = default;
  constexpr BaseInputModule& operator=(BaseInputModule const& o) noexcept = default;
                


// Fields

 ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult> __declspec(property(get=__get_m_RaycastResultCache, put=__set_m_RaycastResultCache))  m_RaycastResultCache;

constexpr void __set_m_RaycastResultCache(::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult> value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult> __get_m_RaycastResultCache() const;

 bool __declspec(property(get=__get_m_SendPointerHoverToParent, put=__set_m_SendPointerHoverToParent))  m_SendPointerHoverToParent;

constexpr void __set_m_SendPointerHoverToParent(bool value) ;

constexpr bool __get_m_SendPointerHoverToParent() const;

 ::UnityEngine::EventSystems::AxisEventData __declspec(property(get=__get_m_AxisEventData, put=__set_m_AxisEventData))  m_AxisEventData;

constexpr void __set_m_AxisEventData(::UnityEngine::EventSystems::AxisEventData value) ;

constexpr ::UnityEngine::EventSystems::AxisEventData __get_m_AxisEventData() const;

 ::UnityEngine::EventSystems::EventSystem __declspec(property(get=__get_m_EventSystem, put=__set_m_EventSystem))  m_EventSystem;

constexpr void __set_m_EventSystem(::UnityEngine::EventSystems::EventSystem value) ;

constexpr ::UnityEngine::EventSystems::EventSystem __get_m_EventSystem() const;

 ::UnityEngine::EventSystems::BaseEventData __declspec(property(get=__get_m_BaseEventData, put=__set_m_BaseEventData))  m_BaseEventData;

constexpr void __set_m_BaseEventData(::UnityEngine::EventSystems::BaseEventData value) ;

constexpr ::UnityEngine::EventSystems::BaseEventData __get_m_BaseEventData() const;

 ::UnityEngine::EventSystems::BaseInput __declspec(property(get=__get_m_InputOverride, put=__set_m_InputOverride))  m_InputOverride;

constexpr void __set_m_InputOverride(::UnityEngine::EventSystems::BaseInput value) ;

constexpr ::UnityEngine::EventSystems::BaseInput __get_m_InputOverride() const;

 ::UnityEngine::EventSystems::BaseInput __declspec(property(get=__get_m_DefaultInput, put=__set_m_DefaultInput))  m_DefaultInput;

constexpr void __set_m_DefaultInput(::UnityEngine::EventSystems::BaseInput value) ;

constexpr ::UnityEngine::EventSystems::BaseInput __get_m_DefaultInput() const;


// Properties

 bool __declspec(property(get=get_sendPointerHoverToParent, put=set_sendPointerHoverToParent))  sendPointerHoverToParent;

 ::UnityEngine::EventSystems::BaseInput __declspec(property(get=get_input))  input;

 ::UnityEngine::EventSystems::BaseInput __declspec(property(get=get_inputOverride, put=set_inputOverride))  inputOverride;

 ::UnityEngine::EventSystems::EventSystem __declspec(property(get=get_eventSystem))  eventSystem;


// Methods

/// @brief Method get_sendPointerHoverToParent addr 0x2c2169c size 0x8 virtual false final false
 bool get_sendPointerHoverToParent() ;

/// @brief Method set_sendPointerHoverToParent addr 0x2c216a4 size 0xc virtual false final false
 void set_sendPointerHoverToParent(bool value) ;

/// @brief Method get_input addr 0x2c216b0 size 0x218 virtual false final false
 ::UnityEngine::EventSystems::BaseInput get_input() ;

/// @brief Method get_inputOverride addr 0x2c218c8 size 0x8 virtual false final false
 ::UnityEngine::EventSystems::BaseInput get_inputOverride() ;

/// @brief Method set_inputOverride addr 0x2c218d0 size 0x8 virtual false final false
 void set_inputOverride(::UnityEngine::EventSystems::BaseInput value) ;

/// @brief Method get_eventSystem addr 0x2c218d8 size 0x8 virtual false final false
 ::UnityEngine::EventSystems::EventSystem get_eventSystem() ;

/// @brief Method OnEnable addr 0x2c218e0 size 0x58 virtual true final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x2c21938 size 0x18 virtual true final false
 void OnDisable() ;

/// @brief Method Process addr 0x0 size 0xffffffffffffffff virtual true final false
 void Process() ;

/// @brief Method FindFirstRaycast addr 0x2c21950 size 0x114 virtual false final false
static ::UnityEngine::EventSystems::RaycastResult FindFirstRaycast(::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult> candidates) ;

/// @brief Method DetermineMoveDirection addr 0x2c21a64 size 0x54 virtual false final false
static ::UnityEngine::EventSystems::MoveDirection DetermineMoveDirection(float_t x, float_t y) ;

/// @brief Method DetermineMoveDirection addr 0x2c21ab8 size 0x50 virtual false final false
static ::UnityEngine::EventSystems::MoveDirection DetermineMoveDirection(float_t x, float_t y, float_t deadZone) ;

/// @brief Method FindCommonRoot addr 0x2c21b08 size 0x174 virtual false final false
static ::UnityEngine::GameObject FindCommonRoot(::UnityEngine::GameObject g1, ::UnityEngine::GameObject g2) ;

/// @brief Method HandlePointerExitAndEnter addr 0x2c21c7c size 0xa48 virtual false final false
 void HandlePointerExitAndEnter(::UnityEngine::EventSystems::PointerEventData currentPointerData, ::UnityEngine::GameObject newEnterTarget) ;

/// @brief Method GetAxisEventData addr 0x2c226c4 size 0x100 virtual true final false
 ::UnityEngine::EventSystems::AxisEventData GetAxisEventData(float_t x, float_t y, float_t moveDeadZone) ;

/// @brief Method GetBaseEventData addr 0x2c227c4 size 0x84 virtual true final false
 ::UnityEngine::EventSystems::BaseEventData GetBaseEventData() ;

/// @brief Method IsPointerOverGameObject addr 0x2c22848 size 0x8 virtual true final false
 bool IsPointerOverGameObject(int32_t pointerId) ;

/// @brief Method ShouldActivateModule addr 0x2c22850 size 0x40 virtual true final false
 bool ShouldActivateModule() ;

/// @brief Method DeactivateModule addr 0x2c22890 size 0x4 virtual true final false
 void DeactivateModule() ;

/// @brief Method ActivateModule addr 0x2c22894 size 0x4 virtual true final false
 void ActivateModule() ;

/// @brief Method UpdateModule addr 0x2c22898 size 0x4 virtual true final false
 void UpdateModule() ;

/// @brief Method IsModuleSupported addr 0x2c2289c size 0x8 virtual true final false
 bool IsModuleSupported() ;

/// @brief Method ConvertUIToolkitPointerId addr 0x2c228a4 size 0x7c virtual true final false
 int32_t ConvertUIToolkitPointerId(::UnityEngine::EventSystems::PointerEventData sourcePointerData) ;

// Ctor Parameters []
explicit BaseInputModule() ;

/// @brief Method .ctor addr 0x2c22920 size 0x84 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::EventSystems
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::EventSystems::BaseInputModule);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::BaseInputModule, "UnityEngine.EventSystems", "BaseInputModule");
