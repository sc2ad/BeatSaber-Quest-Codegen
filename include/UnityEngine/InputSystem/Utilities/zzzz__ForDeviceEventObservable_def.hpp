#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace UnityEngine::InputSystem {
class InputDevice;
}
namespace System {
class Type;
}
namespace System {
template<typename T>
class IObservable_1;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace System {
template<typename T>
class IObserver_1;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::InputSystem::Utilities {
class UnityEngine__InputSystem__Utilities__ForDeviceEventObservable__ForDevice;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
class ForDeviceEventObservable;
}
namespace UnityEngine::InputSystem::Utilities {
class UnityEngine__InputSystem__Utilities__ForDeviceEventObservable__ForDevice;
}
// Type: ::ForDevice
namespace UnityEngine::InputSystem::Utilities {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6768))
// CS Name: UnityEngine.InputSystem.Utilities.ForDeviceEventObservable::ForDevice
class CORDL_TYPE UnityEngine__InputSystem__Utilities__ForDeviceEventObservable__ForDevice : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::IObserver_1<UnityEngine::InputSystem::LowLevel::InputEventPtr>
constexpr operator  System::IObserver_1<UnityEngine::InputSystem::LowLevel::InputEventPtr>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~UnityEngine__InputSystem__Utilities__ForDeviceEventObservable__ForDevice() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__Utilities__ForDeviceEventObservable__ForDevice", modifiers: " const&", def_value: None }]
constexpr UnityEngine__InputSystem__Utilities__ForDeviceEventObservable__ForDevice(UnityEngine__InputSystem__Utilities__ForDeviceEventObservable__ForDevice const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__Utilities__ForDeviceEventObservable__ForDevice", modifiers: "&&", def_value: None }]
constexpr UnityEngine__InputSystem__Utilities__ForDeviceEventObservable__ForDevice(UnityEngine__InputSystem__Utilities__ForDeviceEventObservable__ForDevice&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__Utilities__ForDeviceEventObservable__ForDevice(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__InputSystem__Utilities__ForDeviceEventObservable__ForDevice& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__InputSystem__Utilities__ForDeviceEventObservable__ForDevice& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__InputSystem__Utilities__ForDeviceEventObservable__ForDevice& operator=(UnityEngine__InputSystem__Utilities__ForDeviceEventObservable__ForDevice&& o) noexcept = default;
  constexpr UnityEngine__InputSystem__Utilities__ForDeviceEventObservable__ForDevice& operator=(UnityEngine__InputSystem__Utilities__ForDeviceEventObservable__ForDevice const& o) noexcept = default;
                


// Fields

 System::IObserver_1<UnityEngine::InputSystem::LowLevel::InputEventPtr> __declspec(property(get=__get_m_Observer, put=__set_m_Observer))  m_Observer;

constexpr void __set_m_Observer(System::IObserver_1<UnityEngine::InputSystem::LowLevel::InputEventPtr> value) ;

constexpr System::IObserver_1<UnityEngine::InputSystem::LowLevel::InputEventPtr> __get_m_Observer() const;

 UnityEngine::InputSystem::InputDevice __declspec(property(get=__get_m_Device, put=__set_m_Device))  m_Device;

constexpr void __set_m_Device(UnityEngine::InputSystem::InputDevice value) ;

constexpr UnityEngine::InputSystem::InputDevice __get_m_Device() const;

 System::Type __declspec(property(get=__get_m_DeviceType, put=__set_m_DeviceType))  m_DeviceType;

constexpr void __set_m_DeviceType(System::Type value) ;

constexpr System::Type __get_m_DeviceType() const;


// Methods

static UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__ForDeviceEventObservable__ForDevice New_ctor(System::Type deviceType, UnityEngine::InputSystem::InputDevice device, System::IObserver_1<UnityEngine::InputSystem::LowLevel::InputEventPtr> observer) ;

/// @brief Method .ctor addr 0x2983428 size 0x3c virtual false final false
 void _ctor(System::Type deviceType, UnityEngine::InputSystem::InputDevice device, System::IObserver_1<UnityEngine::InputSystem::LowLevel::InputEventPtr> observer) ;

/// @brief Method OnCompleted addr 0x2983464 size 0x4 virtual true final true
 void OnCompleted() ;

/// @brief Method OnError addr 0x2983468 size 0x58 virtual true final true
 void OnError(System::Exception error) ;

/// @brief Method OnNext addr 0x29834c0 size 0x184 virtual true final true
 void OnNext(UnityEngine::InputSystem::LowLevel::InputEventPtr value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: UnityEngine.InputSystem.Utilities::ForDeviceEventObservable
namespace UnityEngine::InputSystem::Utilities {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6769))
// CS Name: UnityEngine.InputSystem.Utilities.ForDeviceEventObservable
class CORDL_TYPE ForDeviceEventObservable : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using ForDevice = UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__ForDeviceEventObservable__ForDevice;

/// @brief Convert operator to System::IObservable_1<UnityEngine::InputSystem::LowLevel::InputEventPtr>
constexpr operator  System::IObservable_1<UnityEngine::InputSystem::LowLevel::InputEventPtr>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~ForDeviceEventObservable() = default;

// Ctor Parameters [CppParam { name: "", ty: "ForDeviceEventObservable", modifiers: " const&", def_value: None }]
constexpr ForDeviceEventObservable(ForDeviceEventObservable const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ForDeviceEventObservable", modifiers: "&&", def_value: None }]
constexpr ForDeviceEventObservable(ForDeviceEventObservable&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ForDeviceEventObservable(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ForDeviceEventObservable& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ForDeviceEventObservable& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ForDeviceEventObservable& operator=(ForDeviceEventObservable&& o) noexcept = default;
  constexpr ForDeviceEventObservable& operator=(ForDeviceEventObservable const& o) noexcept = default;
                


// Fields

 System::IObservable_1<UnityEngine::InputSystem::LowLevel::InputEventPtr> __declspec(property(get=__get_m_Source, put=__set_m_Source))  m_Source;

constexpr void __set_m_Source(System::IObservable_1<UnityEngine::InputSystem::LowLevel::InputEventPtr> value) ;

constexpr System::IObservable_1<UnityEngine::InputSystem::LowLevel::InputEventPtr> __get_m_Source() const;

 UnityEngine::InputSystem::InputDevice __declspec(property(get=__get_m_Device, put=__set_m_Device))  m_Device;

constexpr void __set_m_Device(UnityEngine::InputSystem::InputDevice value) ;

constexpr UnityEngine::InputSystem::InputDevice __get_m_Device() const;

 System::Type __declspec(property(get=__get_m_DeviceType, put=__set_m_DeviceType))  m_DeviceType;

constexpr void __set_m_DeviceType(System::Type value) ;

constexpr System::Type __get_m_DeviceType() const;


// Methods

static UnityEngine::InputSystem::Utilities::ForDeviceEventObservable New_ctor(System::IObservable_1<UnityEngine::InputSystem::LowLevel::InputEventPtr> source, System::Type deviceType, UnityEngine::InputSystem::InputDevice device) ;

/// @brief Method .ctor addr 0x29832fc size 0x3c virtual false final false
 void _ctor(System::IObservable_1<UnityEngine::InputSystem::LowLevel::InputEventPtr> source, System::Type deviceType, UnityEngine::InputSystem::InputDevice device) ;

/// @brief Method Subscribe addr 0x2983338 size 0xf0 virtual true final true
 System::IDisposable Subscribe(System::IObserver_1<UnityEngine::InputSystem::LowLevel::InputEventPtr> observer) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
NEED_NO_BOX(UnityEngine::InputSystem::Utilities::ForDeviceEventObservable);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Utilities::ForDeviceEventObservable, "UnityEngine.InputSystem.Utilities", "ForDeviceEventObservable");
NEED_NO_BOX(UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__ForDeviceEventObservable__ForDevice);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__ForDeviceEventObservable__ForDevice, "UnityEngine.InputSystem.Utilities", "ForDeviceEventObservable/ForDevice");
