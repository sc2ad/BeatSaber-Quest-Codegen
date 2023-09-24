#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/EventSystems/zzzz__AbstractEventData_def.hpp"
namespace UnityEngine::EventSystems {
class BaseInputModule;
}
namespace UnityEngine::EventSystems {
class EventSystem;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace UnityEngine::EventSystems {
class BaseEventData;
}
// Type: UnityEngine.EventSystems::BaseEventData
namespace UnityEngine::EventSystems {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13103))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13104))
// CS Name: UnityEngine.EventSystems.BaseEventData
class CORDL_TYPE BaseEventData : public UnityEngine::EventSystems::AbstractEventData {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~BaseEventData() = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseEventData", modifiers: " const&", def_value: None }]
constexpr BaseEventData(BaseEventData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseEventData", modifiers: "&&", def_value: None }]
constexpr BaseEventData(BaseEventData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BaseEventData(void* ptr) noexcept : UnityEngine::EventSystems::AbstractEventData(ptr) {
}


  constexpr BaseEventData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BaseEventData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BaseEventData& operator=(BaseEventData&& o) noexcept = default;
  constexpr BaseEventData& operator=(BaseEventData const& o) noexcept = default;
                


// Fields

 UnityEngine::EventSystems::EventSystem __declspec(property(get=__get_m_EventSystem, put=__set_m_EventSystem))  m_EventSystem;

constexpr void __set_m_EventSystem(UnityEngine::EventSystems::EventSystem value) ;

constexpr UnityEngine::EventSystems::EventSystem __get_m_EventSystem() const;


// Properties

 UnityEngine::EventSystems::BaseInputModule __declspec(property(get=get_currentInputModule))  currentInputModule;

 UnityEngine::GameObject __declspec(property(get=get_selectedObject, put=set_selectedObject))  selectedObject;


// Methods

static UnityEngine::EventSystems::BaseEventData New_ctor(UnityEngine::EventSystems::EventSystem eventSystem) ;

/// @brief Method .ctor addr 0x2c1c240 size 0x28 virtual false final false
 void _ctor(UnityEngine::EventSystems::EventSystem eventSystem) ;

/// @brief Method get_currentInputModule addr 0x2c1c28c size 0x1c virtual false final false
 UnityEngine::EventSystems::BaseInputModule get_currentInputModule() ;

/// @brief Method get_selectedObject addr 0x2c1c2a8 size 0x1c virtual false final false
 UnityEngine::GameObject get_selectedObject() ;

/// @brief Method set_selectedObject addr 0x2c1c2c4 size 0x1c virtual false final false
 void set_selectedObject(UnityEngine::GameObject value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::EventSystems
NEED_NO_BOX(UnityEngine::EventSystems::BaseEventData);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::EventSystems::BaseEventData, "UnityEngine.EventSystems", "BaseEventData");
