#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine::EventSystems {
class BaseInputModule;
}
namespace UnityEngine::EventSystems {
class UnityEngine__EventSystems__EventSystem____c__DisplayClass52_0;
}
namespace UnityEngine::EventSystems {
struct UnityEngine__EventSystems__EventSystem__UIToolkitOverrideConfig;
}
namespace UnityEngine {
class GameObject;
}
namespace System {
template<typename T>
class Comparison_1;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::EventSystems {
struct RaycastResult;
}
namespace UnityEngine::EventSystems {
class BaseEventData;
}
namespace UnityEngine::UIElements {
class BaseRuntimePanel;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace UnityEngine::EventSystems {
class EventSystem;
}
namespace UnityEngine::EventSystems {
class UnityEngine__EventSystems__EventSystem____c__DisplayClass52_0;
}
namespace UnityEngine::EventSystems {
struct UnityEngine__EventSystems__EventSystem__UIToolkitOverrideConfig;
}
// Type: ::UIToolkitOverrideConfig
namespace UnityEngine::EventSystems {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13128))
// CS Name: UnityEngine.EventSystems.EventSystem::UIToolkitOverrideConfig
struct CORDL_TYPE UnityEngine__EventSystems__EventSystem__UIToolkitOverrideConfig : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "activeEventSystem", ty: "UnityEngine::EventSystems::EventSystem", modifiers: "", def_value: None }, CppParam { name: "sendEvents", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "createPanelGameObjectsOnStart", ty: "bool", modifiers: "", def_value: None }]
constexpr UnityEngine__EventSystems__EventSystem__UIToolkitOverrideConfig(UnityEngine::EventSystems::EventSystem activeEventSystem, bool sendEvents, bool createPanelGameObjectsOnStart) noexcept;


                    constexpr UnityEngine__EventSystems__EventSystem__UIToolkitOverrideConfig(UnityEngine__EventSystems__EventSystem__UIToolkitOverrideConfig const&) = default;
                    constexpr UnityEngine__EventSystems__EventSystem__UIToolkitOverrideConfig(UnityEngine__EventSystems__EventSystem__UIToolkitOverrideConfig&&) = default;
                    constexpr UnityEngine__EventSystems__EventSystem__UIToolkitOverrideConfig& operator=(UnityEngine__EventSystems__EventSystem__UIToolkitOverrideConfig const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__EventSystems__EventSystem__UIToolkitOverrideConfig& operator=(UnityEngine__EventSystems__EventSystem__UIToolkitOverrideConfig&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__EventSystems__EventSystem__UIToolkitOverrideConfig(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::EventSystems::EventSystem __declspec(property(get=__get_activeEventSystem, put=__set_activeEventSystem))  activeEventSystem;

constexpr void __set_activeEventSystem(UnityEngine::EventSystems::EventSystem value) ;

constexpr UnityEngine::EventSystems::EventSystem __get_activeEventSystem() const;

 bool __declspec(property(get=__get_sendEvents, put=__set_sendEvents))  sendEvents;

constexpr void __set_sendEvents(bool value) ;

constexpr bool __get_sendEvents() const;

 bool __declspec(property(get=__get_createPanelGameObjectsOnStart, put=__set_createPanelGameObjectsOnStart))  createPanelGameObjectsOnStart;

constexpr void __set_createPanelGameObjectsOnStart(bool value) ;

constexpr bool __get_createPanelGameObjectsOnStart() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::EventSystems
// Type: ::<>c__DisplayClass52_0
namespace UnityEngine::EventSystems {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13129))
// CS Name: UnityEngine.EventSystems.EventSystem::<>c__DisplayClass52_0
class CORDL_TYPE UnityEngine__EventSystems__EventSystem____c__DisplayClass52_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~UnityEngine__EventSystems__EventSystem____c__DisplayClass52_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__EventSystems__EventSystem____c__DisplayClass52_0", modifiers: " const&", def_value: None }]
constexpr UnityEngine__EventSystems__EventSystem____c__DisplayClass52_0(UnityEngine__EventSystems__EventSystem____c__DisplayClass52_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__EventSystems__EventSystem____c__DisplayClass52_0", modifiers: "&&", def_value: None }]
constexpr UnityEngine__EventSystems__EventSystem____c__DisplayClass52_0(UnityEngine__EventSystems__EventSystem____c__DisplayClass52_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__EventSystems__EventSystem____c__DisplayClass52_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__EventSystems__EventSystem____c__DisplayClass52_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__EventSystems__EventSystem____c__DisplayClass52_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__EventSystems__EventSystem____c__DisplayClass52_0& operator=(UnityEngine__EventSystems__EventSystem____c__DisplayClass52_0&& o) noexcept = default;
  constexpr UnityEngine__EventSystems__EventSystem____c__DisplayClass52_0& operator=(UnityEngine__EventSystems__EventSystem____c__DisplayClass52_0 const& o) noexcept = default;
                


// Fields

 UnityEngine::GameObject __declspec(property(get=__get_go, put=__set_go))  go;

constexpr void __set_go(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get_go() const;


// Methods

static UnityEngine::EventSystems::UnityEngine__EventSystems__EventSystem____c__DisplayClass52_0 New_ctor() ;

/// @brief Method .ctor addr 0x2c1e8d8 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <CreateUIToolkitPanelGameObject>b__0 addr 0x2c1f494 size 0x5c virtual false final false
 void _CreateUIToolkitPanelGameObject_b__0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::EventSystems
// Type: UnityEngine.EventSystems::EventSystem
namespace UnityEngine::EventSystems {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13153))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13130))
// CS Name: UnityEngine.EventSystems.EventSystem
class CORDL_TYPE EventSystem : public UnityEngine::EventSystems::UIBehaviour {
public:
// Declarations
using __c__DisplayClass52_0 = UnityEngine::EventSystems::UnityEngine__EventSystems__EventSystem____c__DisplayClass52_0;

using UIToolkitOverrideConfig = UnityEngine::EventSystems::UnityEngine__EventSystems__EventSystem__UIToolkitOverrideConfig;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~EventSystem() = default;

// Ctor Parameters [CppParam { name: "", ty: "EventSystem", modifiers: " const&", def_value: None }]
constexpr EventSystem(EventSystem const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EventSystem", modifiers: "&&", def_value: None }]
constexpr EventSystem(EventSystem&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EventSystem(void* ptr) noexcept : UnityEngine::EventSystems::UIBehaviour(ptr) {
}


  constexpr EventSystem& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EventSystem& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EventSystem& operator=(EventSystem&& o) noexcept = default;
  constexpr EventSystem& operator=(EventSystem const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<UnityEngine::EventSystems::BaseInputModule> __declspec(property(get=__get_m_SystemInputModules, put=__set_m_SystemInputModules))  m_SystemInputModules;

constexpr void __set_m_SystemInputModules(System::Collections::Generic::List_1<UnityEngine::EventSystems::BaseInputModule> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::EventSystems::BaseInputModule> __get_m_SystemInputModules() const;

 UnityEngine::EventSystems::BaseInputModule __declspec(property(get=__get_m_CurrentInputModule, put=__set_m_CurrentInputModule))  m_CurrentInputModule;

constexpr void __set_m_CurrentInputModule(UnityEngine::EventSystems::BaseInputModule value) ;

constexpr UnityEngine::EventSystems::BaseInputModule __get_m_CurrentInputModule() const;

static System::Collections::Generic::List_1<UnityEngine::EventSystems::EventSystem> __declspec(property(get=__get_m_EventSystems, put=__set_m_EventSystems))  m_EventSystems;

static void __set_m_EventSystems(System::Collections::Generic::List_1<UnityEngine::EventSystems::EventSystem> value) ;

static System::Collections::Generic::List_1<UnityEngine::EventSystems::EventSystem> __get_m_EventSystems() ;

 UnityEngine::GameObject __declspec(property(get=__get_m_FirstSelected, put=__set_m_FirstSelected))  m_FirstSelected;

constexpr void __set_m_FirstSelected(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get_m_FirstSelected() const;

 bool __declspec(property(get=__get_m_sendNavigationEvents, put=__set_m_sendNavigationEvents))  m_sendNavigationEvents;

constexpr void __set_m_sendNavigationEvents(bool value) ;

constexpr bool __get_m_sendNavigationEvents() const;

 int32_t __declspec(property(get=__get_m_DragThreshold, put=__set_m_DragThreshold))  m_DragThreshold;

constexpr void __set_m_DragThreshold(int32_t value) ;

constexpr int32_t __get_m_DragThreshold() const;

 UnityEngine::GameObject __declspec(property(get=__get_m_CurrentSelected, put=__set_m_CurrentSelected))  m_CurrentSelected;

constexpr void __set_m_CurrentSelected(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get_m_CurrentSelected() const;

 bool __declspec(property(get=__get_m_HasFocus, put=__set_m_HasFocus))  m_HasFocus;

constexpr void __set_m_HasFocus(bool value) ;

constexpr bool __get_m_HasFocus() const;

 bool __declspec(property(get=__get_m_SelectionGuard, put=__set_m_SelectionGuard))  m_SelectionGuard;

constexpr void __set_m_SelectionGuard(bool value) ;

constexpr bool __get_m_SelectionGuard() const;

 UnityEngine::EventSystems::BaseEventData __declspec(property(get=__get_m_DummyData, put=__set_m_DummyData))  m_DummyData;

constexpr void __set_m_DummyData(UnityEngine::EventSystems::BaseEventData value) ;

constexpr UnityEngine::EventSystems::BaseEventData __get_m_DummyData() const;

static System::Comparison_1<UnityEngine::EventSystems::RaycastResult> __declspec(property(get=__get_s_RaycastComparer, put=__set_s_RaycastComparer))  s_RaycastComparer;

static void __set_s_RaycastComparer(System::Comparison_1<UnityEngine::EventSystems::RaycastResult> value) ;

static System::Comparison_1<UnityEngine::EventSystems::RaycastResult> __get_s_RaycastComparer() ;

static UnityEngine::EventSystems::UnityEngine__EventSystems__EventSystem__UIToolkitOverrideConfig __declspec(property(get=__get_s_UIToolkitOverride, put=__set_s_UIToolkitOverride))  s_UIToolkitOverride;

static void __set_s_UIToolkitOverride(UnityEngine::EventSystems::UnityEngine__EventSystems__EventSystem__UIToolkitOverrideConfig value) ;

static UnityEngine::EventSystems::UnityEngine__EventSystems__EventSystem__UIToolkitOverrideConfig __get_s_UIToolkitOverride() ;


// Properties

static UnityEngine::EventSystems::EventSystem __declspec(property(get=get_current, put=set_current))  current;

 bool __declspec(property(get=get_sendNavigationEvents, put=set_sendNavigationEvents))  sendNavigationEvents;

 int32_t __declspec(property(get=get_pixelDragThreshold, put=set_pixelDragThreshold))  pixelDragThreshold;

 UnityEngine::EventSystems::BaseInputModule __declspec(property(get=get_currentInputModule))  currentInputModule;

 UnityEngine::GameObject __declspec(property(get=get_firstSelectedGameObject, put=set_firstSelectedGameObject))  firstSelectedGameObject;

 UnityEngine::GameObject __declspec(property(get=get_currentSelectedGameObject))  currentSelectedGameObject;

 UnityEngine::GameObject __declspec(property(get=get_lastSelectedGameObject))  lastSelectedGameObject;

 bool __declspec(property(get=get_isFocused))  isFocused;

 bool __declspec(property(get=get_alreadySelecting))  alreadySelecting;

 UnityEngine::EventSystems::BaseEventData __declspec(property(get=get_baseEventDataCache))  baseEventDataCache;

 bool __declspec(property(get=get_isUIToolkitActiveEventSystem))  isUIToolkitActiveEventSystem;

 bool __declspec(property(get=get_sendUIToolkitEvents))  sendUIToolkitEvents;

 bool __declspec(property(get=get_createUIToolkitPanelGameObjectsOnStart))  createUIToolkitPanelGameObjectsOnStart;


// Methods

/// @brief Method get_current addr 0x2c1d71c size 0xc4 virtual false final false
static UnityEngine::EventSystems::EventSystem get_current() ;

/// @brief Method set_current addr 0x2c1d7e0 size 0x194 virtual false final false
static void set_current(UnityEngine::EventSystems::EventSystem value) ;

/// @brief Method get_sendNavigationEvents addr 0x2c1d974 size 0x8 virtual false final false
 bool get_sendNavigationEvents() ;

/// @brief Method set_sendNavigationEvents addr 0x2c1d97c size 0xc virtual false final false
 void set_sendNavigationEvents(bool value) ;

/// @brief Method get_pixelDragThreshold addr 0x2c1d988 size 0x8 virtual false final false
 int32_t get_pixelDragThreshold() ;

/// @brief Method set_pixelDragThreshold addr 0x2c1d990 size 0x8 virtual false final false
 void set_pixelDragThreshold(int32_t value) ;

/// @brief Method get_currentInputModule addr 0x2c1d998 size 0x8 virtual false final false
 UnityEngine::EventSystems::BaseInputModule get_currentInputModule() ;

/// @brief Method get_firstSelectedGameObject addr 0x2c1d9a0 size 0x8 virtual false final false
 UnityEngine::GameObject get_firstSelectedGameObject() ;

/// @brief Method set_firstSelectedGameObject addr 0x2c1d9a8 size 0x8 virtual false final false
 void set_firstSelectedGameObject(UnityEngine::GameObject value) ;

/// @brief Method get_currentSelectedGameObject addr 0x2c1d9b0 size 0x8 virtual false final false
 UnityEngine::GameObject get_currentSelectedGameObject() ;

/// @brief Method get_lastSelectedGameObject addr 0x2c1d9b8 size 0x8 virtual false final false
 UnityEngine::GameObject get_lastSelectedGameObject() ;

/// @brief Method get_isFocused addr 0x2c1d9c0 size 0x8 virtual false final false
 bool get_isFocused() ;

static UnityEngine::EventSystems::EventSystem New_ctor() ;

/// @brief Method .ctor addr 0x2c1d9c8 size 0x90 virtual false final false
 void _ctor() ;

/// @brief Method UpdateModules addr 0x2c1da58 size 0x140 virtual false final false
 void UpdateModules() ;

/// @brief Method get_alreadySelecting addr 0x2c1db98 size 0x8 virtual false final false
 bool get_alreadySelecting() ;

/// @brief Method SetSelectedGameObject addr 0x2c1c2e0 size 0x224 virtual false final false
 void SetSelectedGameObject(UnityEngine::GameObject selected, UnityEngine::EventSystems::BaseEventData pointer) ;

/// @brief Method get_baseEventDataCache addr 0x2c1dba0 size 0x70 virtual false final false
 UnityEngine::EventSystems::BaseEventData get_baseEventDataCache() ;

/// @brief Method SetSelectedGameObject addr 0x2c19834 size 0x2c virtual false final false
 void SetSelectedGameObject(UnityEngine::GameObject selected) ;

/// @brief Method RaycastComparer addr 0x2c1dc10 size 0x364 virtual false final false
static int32_t RaycastComparer(UnityEngine::EventSystems::RaycastResult lhs, UnityEngine::EventSystems::RaycastResult rhs) ;

/// @brief Method RaycastAll addr 0x2c1e02c size 0x1f0 virtual false final false
 void RaycastAll(UnityEngine::EventSystems::PointerEventData eventData, System::Collections::Generic::List_1<UnityEngine::EventSystems::RaycastResult> raycastResults) ;

/// @brief Method IsPointerOverGameObject addr 0x2c1e21c size 0x8 virtual false final false
 bool IsPointerOverGameObject() ;

/// @brief Method IsPointerOverGameObject addr 0x2c1e224 size 0xa4 virtual false final false
 bool IsPointerOverGameObject(int32_t pointerId) ;

/// @brief Method get_isUIToolkitActiveEventSystem addr 0x2c1e2c8 size 0xf0 virtual false final false
 bool get_isUIToolkitActiveEventSystem() ;

/// @brief Method get_sendUIToolkitEvents addr 0x2c1e3b8 size 0x74 virtual false final false
 bool get_sendUIToolkitEvents() ;

/// @brief Method get_createUIToolkitPanelGameObjectsOnStart addr 0x2c1e42c size 0x74 virtual false final false
 bool get_createUIToolkitPanelGameObjectsOnStart() ;

/// @brief Method SetUITookitEventSystemOverride addr 0x2c1e4a0 size 0x19c virtual false final false
static void SetUITookitEventSystemOverride(UnityEngine::EventSystems::EventSystem activeEventSystem, bool sendEvents, bool createPanelGameObjectsOnStart) ;

/// @brief Method CreateUIToolkitPanelGameObject addr 0x2c1e63c size 0x29c virtual false final false
 void CreateUIToolkitPanelGameObject(UnityEngine::UIElements::BaseRuntimePanel panel) ;

/// @brief Method Start addr 0x2c1e8e0 size 0x23c virtual true final false
 void Start() ;

/// @brief Method OnDestroy addr 0x2c1eb20 size 0xa4 virtual true final false
 void OnDestroy() ;

/// @brief Method OnEnable addr 0x2c1ebc8 size 0x110 virtual true final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x2c1ecd8 size 0x108 virtual true final false
 void OnDisable() ;

/// @brief Method TickModules addr 0x2c1ede0 size 0x100 virtual false final false
 void TickModules() ;

/// @brief Method OnApplicationFocus addr 0x2c1eee0 size 0x14 virtual true final false
 void OnApplicationFocus(bool hasFocus) ;

/// @brief Method Update addr 0x2c1eef4 size 0x260 virtual true final false
 void Update() ;

/// @brief Method ChangeEventModule addr 0x2c1f154 size 0xf8 virtual false final false
 void ChangeEventModule(UnityEngine::EventSystems::BaseInputModule module) ;

/// @brief Method ToString addr 0x2c1f24c size 0x158 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::EventSystems
NEED_NO_BOX(UnityEngine::EventSystems::EventSystem);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::EventSystems::EventSystem, "UnityEngine.EventSystems", "EventSystem");
NEED_NO_BOX(UnityEngine::EventSystems::UnityEngine__EventSystems__EventSystem____c__DisplayClass52_0);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::EventSystems::UnityEngine__EventSystems__EventSystem____c__DisplayClass52_0, "UnityEngine.EventSystems", "EventSystem/<>c__DisplayClass52_0");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::EventSystems::UnityEngine__EventSystems__EventSystem__UIToolkitOverrideConfig, "UnityEngine.EventSystems", "EventSystem/UIToolkitOverrideConfig");
