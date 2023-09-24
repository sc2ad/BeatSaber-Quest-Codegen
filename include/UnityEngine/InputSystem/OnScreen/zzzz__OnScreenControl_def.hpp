#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
struct InlinedArray_1;
}
namespace UnityEngine::InputSystem::OnScreen {
struct UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
// Forward declare root types
namespace UnityEngine::InputSystem::OnScreen {
class OnScreenControl;
}
namespace UnityEngine::InputSystem::OnScreen {
struct UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo;
}
// Type: ::OnScreenDeviceInfo
namespace UnityEngine::InputSystem::OnScreen {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6470))
// CS Name: UnityEngine.InputSystem.OnScreen.OnScreenControl::OnScreenDeviceInfo
struct CORDL_TYPE UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "eventPtr", ty: "UnityEngine::InputSystem::LowLevel::InputEventPtr", modifiers: "", def_value: None }, CppParam { name: "buffer", ty: "Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "device", ty: "UnityEngine::InputSystem::InputDevice", modifiers: "", def_value: None }, CppParam { name: "firstControl", ty: "UnityEngine::InputSystem::OnScreen::OnScreenControl", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo(UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, Unity::Collections::NativeArray_1<uint8_t> buffer, UnityEngine::InputSystem::InputDevice device, UnityEngine::InputSystem::OnScreen::OnScreenControl firstControl) noexcept;


                    constexpr UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo(UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo const&) = default;
                    constexpr UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo(UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo&&) = default;
                    constexpr UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo& operator=(UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo& operator=(UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x28};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::InputSystem::LowLevel::InputEventPtr __declspec(property(get=__get_eventPtr, put=__set_eventPtr))  eventPtr;

constexpr void __set_eventPtr(UnityEngine::InputSystem::LowLevel::InputEventPtr value) ;

constexpr UnityEngine::InputSystem::LowLevel::InputEventPtr __get_eventPtr() const;

 Unity::Collections::NativeArray_1<uint8_t> __declspec(property(get=__get_buffer, put=__set_buffer))  buffer;

constexpr void __set_buffer(Unity::Collections::NativeArray_1<uint8_t> value) ;

constexpr Unity::Collections::NativeArray_1<uint8_t> __get_buffer() const;

 UnityEngine::InputSystem::InputDevice __declspec(property(get=__get_device, put=__set_device))  device;

constexpr void __set_device(UnityEngine::InputSystem::InputDevice value) ;

constexpr UnityEngine::InputSystem::InputDevice __get_device() const;

 UnityEngine::InputSystem::OnScreen::OnScreenControl __declspec(property(get=__get_firstControl, put=__set_firstControl))  firstControl;

constexpr void __set_firstControl(UnityEngine::InputSystem::OnScreen::OnScreenControl value) ;

constexpr UnityEngine::InputSystem::OnScreen::OnScreenControl __get_firstControl() const;


// Methods

/// @brief Method AddControl addr 0x2945c00 size 0x2c virtual false final false
 UnityEngine::InputSystem::OnScreen::UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo AddControl(UnityEngine::InputSystem::OnScreen::OnScreenControl control) ;

/// @brief Method RemoveControl addr 0x2945f78 size 0x110 virtual false final false
 UnityEngine::InputSystem::OnScreen::UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo RemoveControl(UnityEngine::InputSystem::OnScreen::OnScreenControl control) ;

/// @brief Method Destroy addr 0x2945b4c size 0xb4 virtual false final false
 void Destroy() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::OnScreen
// Type: UnityEngine.InputSystem.OnScreen::OnScreenControl
namespace UnityEngine::InputSystem::OnScreen {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6471))
// CS Name: UnityEngine.InputSystem.OnScreen.OnScreenControl
class CORDL_TYPE OnScreenControl : public UnityEngine::MonoBehaviour {
public:
// Declarations
using OnScreenDeviceInfo = UnityEngine::InputSystem::OnScreen::UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~OnScreenControl() = default;

// Ctor Parameters [CppParam { name: "", ty: "OnScreenControl", modifiers: " const&", def_value: None }]
constexpr OnScreenControl(OnScreenControl const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OnScreenControl", modifiers: "&&", def_value: None }]
constexpr OnScreenControl(OnScreenControl&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OnScreenControl(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr OnScreenControl& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OnScreenControl& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OnScreenControl& operator=(OnScreenControl&& o) noexcept = default;
  constexpr OnScreenControl& operator=(OnScreenControl const& o) noexcept = default;
                


// Fields

 UnityEngine::InputSystem::InputControl __declspec(property(get=__get_m_Control, put=__set_m_Control))  m_Control;

constexpr void __set_m_Control(UnityEngine::InputSystem::InputControl value) ;

constexpr UnityEngine::InputSystem::InputControl __get_m_Control() const;

 UnityEngine::InputSystem::OnScreen::OnScreenControl __declspec(property(get=__get_m_NextControlOnDevice, put=__set_m_NextControlOnDevice))  m_NextControlOnDevice;

constexpr void __set_m_NextControlOnDevice(UnityEngine::InputSystem::OnScreen::OnScreenControl value) ;

constexpr UnityEngine::InputSystem::OnScreen::OnScreenControl __get_m_NextControlOnDevice() const;

 UnityEngine::InputSystem::LowLevel::InputEventPtr __declspec(property(get=__get_m_InputEventPtr, put=__set_m_InputEventPtr))  m_InputEventPtr;

constexpr void __set_m_InputEventPtr(UnityEngine::InputSystem::LowLevel::InputEventPtr value) ;

constexpr UnityEngine::InputSystem::LowLevel::InputEventPtr __get_m_InputEventPtr() const;

static UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::OnScreen::UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo> __declspec(property(get=__get_s_OnScreenDevices, put=__set_s_OnScreenDevices))  s_OnScreenDevices;

static void __set_s_OnScreenDevices(UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::OnScreen::UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo> value) ;

static UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::OnScreen::UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo> __get_s_OnScreenDevices() ;


// Properties

 ::StringW __declspec(property(get=get_controlPath, put=set_controlPath))  controlPath;

 UnityEngine::InputSystem::InputControl __declspec(property(get=get_control))  control;

 ::StringW __declspec(property(get=get_controlPathInternal, put=set_controlPathInternal))  controlPathInternal;


// Methods

/// @brief Method get_controlPath addr 0x2945210 size 0xc virtual false final false
 ::StringW get_controlPath() ;

/// @brief Method set_controlPath addr 0x294521c size 0x38 virtual false final false
 void set_controlPath(::StringW value) ;

/// @brief Method get_control addr 0x2945b44 size 0x8 virtual false final false
 UnityEngine::InputSystem::InputControl get_control() ;

/// @brief Method get_controlPathInternal addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_controlPathInternal() ;

/// @brief Method set_controlPathInternal addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_controlPathInternal(::StringW value) ;

/// @brief Method SetupInputControl addr 0x2945254 size 0x8f0 virtual false final false
 void SetupInputControl() ;

/// @brief Method SendValueToControl addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue>
 void SendValueToControl(TValue value) ;

/// @brief Method SentDefaultValueToControl addr 0x2945c2c size 0x134 virtual false final false
 void SentDefaultValueToControl() ;

/// @brief Method OnEnable addr 0x2945d60 size 0x4 virtual true final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x2945d64 size 0x214 virtual true final false
 void OnDisable() ;

static UnityEngine::InputSystem::OnScreen::OnScreenControl New_ctor() ;

/// @brief Method .ctor addr 0x2945208 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::OnScreen
NEED_NO_BOX(UnityEngine::InputSystem::OnScreen::OnScreenControl);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::OnScreen::OnScreenControl, "UnityEngine.InputSystem.OnScreen", "OnScreenControl");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::OnScreen::UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo, "UnityEngine.InputSystem.OnScreen", "OnScreenControl/OnScreenDeviceInfo");
