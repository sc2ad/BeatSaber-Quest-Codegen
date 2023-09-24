#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRControllerHelper__ControllerType;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRInput__Controller;
}
namespace UnityEngine {
class Animator;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__OVRControllerHelper__ControllerType;
}
namespace GlobalNamespace {
class OVRControllerHelper;
}
// Type: ::ControllerType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8880))
// CS Name: OVRControllerHelper::ControllerType
struct CORDL_TYPE GlobalNamespace__OVRControllerHelper__ControllerType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OVRControllerHelper__ControllerType(int32_t value__) noexcept;


                    constexpr GlobalNamespace__OVRControllerHelper__ControllerType(GlobalNamespace__OVRControllerHelper__ControllerType const&) = default;
                    constexpr GlobalNamespace__OVRControllerHelper__ControllerType(GlobalNamespace__OVRControllerHelper__ControllerType&&) = default;
                    constexpr GlobalNamespace__OVRControllerHelper__ControllerType& operator=(GlobalNamespace__OVRControllerHelper__ControllerType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVRControllerHelper__ControllerType& operator=(GlobalNamespace__OVRControllerHelper__ControllerType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRControllerHelper__ControllerType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__OVRControllerHelper__ControllerType_Unwrapped : int32_t {
__QuestAndRiftS = 1,
__Rift = 2,
__Quest2 = 3,
__TouchPro = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__OVRControllerHelper__ControllerType_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__OVRControllerHelper__ControllerType_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field QuestAndRiftS offset 0
static GlobalNamespace::GlobalNamespace__OVRControllerHelper__ControllerType const QuestAndRiftS;

/// @brief Field Rift offset 0
static GlobalNamespace::GlobalNamespace__OVRControllerHelper__ControllerType const Rift;

/// @brief Field Quest2 offset 0
static GlobalNamespace::GlobalNamespace__OVRControllerHelper__ControllerType const Quest2;

/// @brief Field TouchPro offset 0
static GlobalNamespace::GlobalNamespace__OVRControllerHelper__ControllerType const TouchPro;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::OVRControllerHelper
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8881))
// CS Name: OVRControllerHelper
class CORDL_TYPE OVRControllerHelper : public UnityEngine::MonoBehaviour {
public:
// Declarations
using ControllerType = GlobalNamespace::GlobalNamespace__OVRControllerHelper__ControllerType;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVRControllerHelper() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRControllerHelper", modifiers: " const&", def_value: None }]
constexpr OVRControllerHelper(OVRControllerHelper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRControllerHelper", modifiers: "&&", def_value: None }]
constexpr OVRControllerHelper(OVRControllerHelper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRControllerHelper(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr OVRControllerHelper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRControllerHelper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRControllerHelper& operator=(OVRControllerHelper&& o) noexcept = default;
  constexpr OVRControllerHelper& operator=(OVRControllerHelper const& o) noexcept = default;
                


// Fields

 UnityEngine::GameObject __declspec(property(get=__get_m_modelOculusTouchQuestAndRiftSLeftController, put=__set_m_modelOculusTouchQuestAndRiftSLeftController))  m_modelOculusTouchQuestAndRiftSLeftController;

constexpr void __set_m_modelOculusTouchQuestAndRiftSLeftController(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get_m_modelOculusTouchQuestAndRiftSLeftController() const;

 UnityEngine::GameObject __declspec(property(get=__get_m_modelOculusTouchQuestAndRiftSRightController, put=__set_m_modelOculusTouchQuestAndRiftSRightController))  m_modelOculusTouchQuestAndRiftSRightController;

constexpr void __set_m_modelOculusTouchQuestAndRiftSRightController(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get_m_modelOculusTouchQuestAndRiftSRightController() const;

 UnityEngine::GameObject __declspec(property(get=__get_m_modelOculusTouchRiftLeftController, put=__set_m_modelOculusTouchRiftLeftController))  m_modelOculusTouchRiftLeftController;

constexpr void __set_m_modelOculusTouchRiftLeftController(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get_m_modelOculusTouchRiftLeftController() const;

 UnityEngine::GameObject __declspec(property(get=__get_m_modelOculusTouchRiftRightController, put=__set_m_modelOculusTouchRiftRightController))  m_modelOculusTouchRiftRightController;

constexpr void __set_m_modelOculusTouchRiftRightController(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get_m_modelOculusTouchRiftRightController() const;

 UnityEngine::GameObject __declspec(property(get=__get_m_modelOculusTouchQuest2LeftController, put=__set_m_modelOculusTouchQuest2LeftController))  m_modelOculusTouchQuest2LeftController;

constexpr void __set_m_modelOculusTouchQuest2LeftController(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get_m_modelOculusTouchQuest2LeftController() const;

 UnityEngine::GameObject __declspec(property(get=__get_m_modelOculusTouchQuest2RightController, put=__set_m_modelOculusTouchQuest2RightController))  m_modelOculusTouchQuest2RightController;

constexpr void __set_m_modelOculusTouchQuest2RightController(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get_m_modelOculusTouchQuest2RightController() const;

 UnityEngine::GameObject __declspec(property(get=__get_m_modelMetaTouchProLeftController, put=__set_m_modelMetaTouchProLeftController))  m_modelMetaTouchProLeftController;

constexpr void __set_m_modelMetaTouchProLeftController(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get_m_modelMetaTouchProLeftController() const;

 UnityEngine::GameObject __declspec(property(get=__get_m_modelMetaTouchProRightController, put=__set_m_modelMetaTouchProRightController))  m_modelMetaTouchProRightController;

constexpr void __set_m_modelMetaTouchProRightController(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get_m_modelMetaTouchProRightController() const;

 GlobalNamespace::GlobalNamespace__OVRInput__Controller __declspec(property(get=__get_m_controller, put=__set_m_controller))  m_controller;

constexpr void __set_m_controller(GlobalNamespace::GlobalNamespace__OVRInput__Controller value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRInput__Controller __get_m_controller() const;

 UnityEngine::Animator __declspec(property(get=__get_m_animator, put=__set_m_animator))  m_animator;

constexpr void __set_m_animator(UnityEngine::Animator value) ;

constexpr UnityEngine::Animator __get_m_animator() const;

 UnityEngine::GameObject __declspec(property(get=__get_m_activeController, put=__set_m_activeController))  m_activeController;

constexpr void __set_m_activeController(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get_m_activeController() const;

 bool __declspec(property(get=__get_m_controllerModelsInitialized, put=__set_m_controllerModelsInitialized))  m_controllerModelsInitialized;

constexpr void __set_m_controllerModelsInitialized(bool value) ;

constexpr bool __get_m_controllerModelsInitialized() const;

 bool __declspec(property(get=__get_m_hasInputFocus, put=__set_m_hasInputFocus))  m_hasInputFocus;

constexpr void __set_m_hasInputFocus(bool value) ;

constexpr bool __get_m_hasInputFocus() const;

 bool __declspec(property(get=__get_m_hasInputFocusPrev, put=__set_m_hasInputFocusPrev))  m_hasInputFocusPrev;

constexpr void __set_m_hasInputFocusPrev(bool value) ;

constexpr bool __get_m_hasInputFocusPrev() const;

 GlobalNamespace::GlobalNamespace__OVRControllerHelper__ControllerType __declspec(property(get=__get_activeControllerType, put=__set_activeControllerType))  activeControllerType;

constexpr void __set_activeControllerType(GlobalNamespace::GlobalNamespace__OVRControllerHelper__ControllerType value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRControllerHelper__ControllerType __get_activeControllerType() const;

 bool __declspec(property(get=__get_m_prevControllerConnected, put=__set_m_prevControllerConnected))  m_prevControllerConnected;

constexpr void __set_m_prevControllerConnected(bool value) ;

constexpr bool __get_m_prevControllerConnected() const;

 bool __declspec(property(get=__get_m_prevControllerConnectedCached, put=__set_m_prevControllerConnectedCached))  m_prevControllerConnectedCached;

constexpr void __set_m_prevControllerConnectedCached(bool value) ;

constexpr bool __get_m_prevControllerConnectedCached() const;


// Methods

/// @brief Method Start addr 0x261968c size 0x70 virtual false final false
 void Start() ;

/// @brief Method InitializeControllerModels addr 0x26196fc size 0x420 virtual false final false
 void InitializeControllerModels() ;

/// @brief Method Update addr 0x2619b1c size 0x6a4 virtual false final false
 void Update() ;

/// @brief Method InputFocusAquired addr 0x261a1c0 size 0xc virtual false final false
 void InputFocusAquired() ;

/// @brief Method InputFocusLost addr 0x261a1cc size 0x8 virtual false final false
 void InputFocusLost() ;

static GlobalNamespace::OVRControllerHelper New_ctor() ;

/// @brief Method .ctor addr 0x261a1d4 size 0x18 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRControllerHelper__ControllerType, "", "OVRControllerHelper/ControllerType");
NEED_NO_BOX(GlobalNamespace::OVRControllerHelper);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRControllerHelper, "", "OVRControllerHelper");
