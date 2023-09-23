#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine::InputSystem::Utilities {
struct InternedString;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine::InputSystem {
struct InputDeviceChange;
}
namespace UnityEngine::InputSystem {
struct InputControlLayoutChange;
}
namespace System {
class Exception;
}
namespace System {
template<typename T>
class IObserver_1;
}
namespace UnityEngine::InputSystem {
class InputManager;
}
namespace System {
template<typename T>
class IObservable_1;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace UnityEngine::InputSystem::Layouts {
struct InputDeviceDescription;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
struct UnityEngine__InputSystem__InputRemoting__Flags;
}
namespace UnityEngine::InputSystem {
struct UnityEngine__InputSystem__InputRemoting__MessageType;
}
namespace GlobalNamespace {
class UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg____c;
}
namespace GlobalNamespace {
class UnityEngine__InputSystem__InputRemoting__NewDeviceMsg____c;
}
namespace UnityEngine::InputSystem {
class InputRemoting;
}
namespace UnityEngine::InputSystem {
class UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg;
}
namespace UnityEngine::InputSystem {
class UnityEngine__InputSystem__InputRemoting__ConnectMsg;
}
namespace UnityEngine::InputSystem {
class UnityEngine__InputSystem__InputRemoting__DisconnectMsg;
}
namespace UnityEngine::InputSystem {
class UnityEngine__InputSystem__InputRemoting__NewDeviceMsg;
}
namespace UnityEngine::InputSystem {
class UnityEngine__InputSystem__InputRemoting__NewEventsMsg;
}
namespace UnityEngine::InputSystem {
class UnityEngine__InputSystem__InputRemoting__NewLayoutMsg;
}
namespace UnityEngine::InputSystem {
class UnityEngine__InputSystem__InputRemoting__RemoveDeviceMsg;
}
namespace UnityEngine::InputSystem {
class UnityEngine__InputSystem__InputRemoting__StartSendingMsg;
}
namespace UnityEngine::InputSystem {
class UnityEngine__InputSystem__InputRemoting__StopSendingMsg;
}
namespace UnityEngine::InputSystem {
class UnityEngine__InputSystem__InputRemoting__Subscriber;
}
namespace GlobalNamespace {
struct UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg__Data;
}
namespace GlobalNamespace {
struct UnityEngine__InputSystem__InputRemoting__NewDeviceMsg__Data;
}
namespace GlobalNamespace {
struct UnityEngine__InputSystem__InputRemoting__NewLayoutMsg__Data;
}
namespace UnityEngine::InputSystem {
struct UnityEngine__InputSystem__InputRemoting__Message;
}
namespace UnityEngine::InputSystem {
struct UnityEngine__InputSystem__InputRemoting__RemoteInputDevice;
}
namespace UnityEngine::InputSystem {
struct UnityEngine__InputSystem__InputRemoting__RemoteSender;
}
// Type: ::MessageType
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6334))
// CS Name: UnityEngine.InputSystem.InputRemoting::MessageType
struct CORDL_TYPE UnityEngine__InputSystem__InputRemoting__MessageType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__InputRemoting__MessageType(int32_t value__) noexcept;


                    constexpr UnityEngine__InputSystem__InputRemoting__MessageType(UnityEngine__InputSystem__InputRemoting__MessageType const&) = default;
                    constexpr UnityEngine__InputSystem__InputRemoting__MessageType(UnityEngine__InputSystem__InputRemoting__MessageType&&) = default;
                    constexpr UnityEngine__InputSystem__InputRemoting__MessageType& operator=(UnityEngine__InputSystem__InputRemoting__MessageType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__InputRemoting__MessageType& operator=(UnityEngine__InputSystem__InputRemoting__MessageType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__InputRemoting__MessageType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__InputSystem__InputRemoting__MessageType_Unwrapped : int32_t {
__Connect = 0,
__Disconnect = 1,
__NewLayout = 2,
__NewDevice = 3,
__NewEvents = 4,
__RemoveDevice = 5,
__RemoveLayout = 6,
__ChangeUsages = 7,
__StartSending = 8,
__StopSending = 9,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__InputSystem__InputRemoting__MessageType_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__InputSystem__InputRemoting__MessageType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Connect offset 0
static UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__MessageType const Connect;

/// @brief Field Disconnect offset 0
static UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__MessageType const Disconnect;

/// @brief Field NewLayout offset 0
static UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__MessageType const NewLayout;

/// @brief Field NewDevice offset 0
static UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__MessageType const NewDevice;

/// @brief Field NewEvents offset 0
static UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__MessageType const NewEvents;

/// @brief Field RemoveDevice offset 0
static UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__MessageType const RemoveDevice;

/// @brief Field RemoveLayout offset 0
static UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__MessageType const RemoveLayout;

/// @brief Field ChangeUsages offset 0
static UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__MessageType const ChangeUsages;

/// @brief Field StartSending offset 0
static UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__MessageType const StartSending;

/// @brief Field StopSending offset 0
static UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__MessageType const StopSending;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: ::Message
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6335))
// CS Name: UnityEngine.InputSystem.InputRemoting::Message
struct CORDL_TYPE UnityEngine__InputSystem__InputRemoting__Message : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "participantId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "type", ty: "UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__MessageType", modifiers: "", def_value: None }, CppParam { name: "data", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__InputRemoting__Message(int32_t participantId, UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__MessageType type, ::ArrayW<uint8_t> data) noexcept;


                    constexpr UnityEngine__InputSystem__InputRemoting__Message(UnityEngine__InputSystem__InputRemoting__Message const&) = default;
                    constexpr UnityEngine__InputSystem__InputRemoting__Message(UnityEngine__InputSystem__InputRemoting__Message&&) = default;
                    constexpr UnityEngine__InputSystem__InputRemoting__Message& operator=(UnityEngine__InputSystem__InputRemoting__Message const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__InputRemoting__Message& operator=(UnityEngine__InputSystem__InputRemoting__Message&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__InputRemoting__Message(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_participantId, put=__set_participantId))  participantId;

constexpr void __set_participantId(int32_t value) ;

constexpr int32_t __get_participantId() const;

 UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__MessageType __declspec(property(get=__get_type, put=__set_type))  type;

constexpr void __set_type(UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__MessageType value) ;

constexpr UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__MessageType __get_type() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_data, put=__set_data))  data;

constexpr void __set_data(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_data() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: ::Flags
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6336))
// CS Name: UnityEngine.InputSystem.InputRemoting::Flags
struct CORDL_TYPE UnityEngine__InputSystem__InputRemoting__Flags : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__InputRemoting__Flags(int32_t value__) noexcept;


                    constexpr UnityEngine__InputSystem__InputRemoting__Flags(UnityEngine__InputSystem__InputRemoting__Flags const&) = default;
                    constexpr UnityEngine__InputSystem__InputRemoting__Flags(UnityEngine__InputSystem__InputRemoting__Flags&&) = default;
                    constexpr UnityEngine__InputSystem__InputRemoting__Flags& operator=(UnityEngine__InputSystem__InputRemoting__Flags const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__InputRemoting__Flags& operator=(UnityEngine__InputSystem__InputRemoting__Flags&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__InputRemoting__Flags(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__InputSystem__InputRemoting__Flags_Unwrapped : int32_t {
__Sending = 1,
__StartSendingOnConnect = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__InputSystem__InputRemoting__Flags_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__InputSystem__InputRemoting__Flags_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Sending offset 0
static UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Flags const Sending;

/// @brief Field StartSendingOnConnect offset 0
static UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Flags const StartSendingOnConnect;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: ::RemoteSender
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6337))
// CS Name: UnityEngine.InputSystem.InputRemoting::RemoteSender
struct CORDL_TYPE UnityEngine__InputSystem__InputRemoting__RemoteSender : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "senderId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "layouts", ty: "::ArrayW<UnityEngine::InputSystem::Utilities::InternedString>", modifiers: "", def_value: None }, CppParam { name: "devices", ty: "::ArrayW<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__RemoteInputDevice>", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__InputRemoting__RemoteSender(int32_t senderId, ::ArrayW<UnityEngine::InputSystem::Utilities::InternedString> layouts, ::ArrayW<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__RemoteInputDevice> devices) noexcept;


                    constexpr UnityEngine__InputSystem__InputRemoting__RemoteSender(UnityEngine__InputSystem__InputRemoting__RemoteSender const&) = default;
                    constexpr UnityEngine__InputSystem__InputRemoting__RemoteSender(UnityEngine__InputSystem__InputRemoting__RemoteSender&&) = default;
                    constexpr UnityEngine__InputSystem__InputRemoting__RemoteSender& operator=(UnityEngine__InputSystem__InputRemoting__RemoteSender const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__InputRemoting__RemoteSender& operator=(UnityEngine__InputSystem__InputRemoting__RemoteSender&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__InputRemoting__RemoteSender(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_senderId, put=__set_senderId))  senderId;

constexpr void __set_senderId(int32_t value) ;

constexpr int32_t __get_senderId() const;

 ::ArrayW<UnityEngine::InputSystem::Utilities::InternedString> __declspec(property(get=__get_layouts, put=__set_layouts))  layouts;

constexpr void __set_layouts(::ArrayW<UnityEngine::InputSystem::Utilities::InternedString> value) ;

constexpr ::ArrayW<UnityEngine::InputSystem::Utilities::InternedString> __get_layouts() const;

 ::ArrayW<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__RemoteInputDevice> __declspec(property(get=__get_devices, put=__set_devices))  devices;

constexpr void __set_devices(::ArrayW<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__RemoteInputDevice> value) ;

constexpr ::ArrayW<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__RemoteInputDevice> __get_devices() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: ::RemoteInputDevice
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6338))
// CS Name: UnityEngine.InputSystem.InputRemoting::RemoteInputDevice
struct CORDL_TYPE UnityEngine__InputSystem__InputRemoting__RemoteInputDevice : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "remoteId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "localId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "description", ty: "UnityEngine::InputSystem::Layouts::InputDeviceDescription", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__InputRemoting__RemoteInputDevice(int32_t remoteId, int32_t localId, UnityEngine::InputSystem::Layouts::InputDeviceDescription description) noexcept;


                    constexpr UnityEngine__InputSystem__InputRemoting__RemoteInputDevice(UnityEngine__InputSystem__InputRemoting__RemoteInputDevice const&) = default;
                    constexpr UnityEngine__InputSystem__InputRemoting__RemoteInputDevice(UnityEngine__InputSystem__InputRemoting__RemoteInputDevice&&) = default;
                    constexpr UnityEngine__InputSystem__InputRemoting__RemoteInputDevice& operator=(UnityEngine__InputSystem__InputRemoting__RemoteInputDevice const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__InputRemoting__RemoteInputDevice& operator=(UnityEngine__InputSystem__InputRemoting__RemoteInputDevice&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x40};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__InputRemoting__RemoteInputDevice(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_remoteId, put=__set_remoteId))  remoteId;

constexpr void __set_remoteId(int32_t value) ;

constexpr int32_t __get_remoteId() const;

 int32_t __declspec(property(get=__get_localId, put=__set_localId))  localId;

constexpr void __set_localId(int32_t value) ;

constexpr int32_t __get_localId() const;

 UnityEngine::InputSystem::Layouts::InputDeviceDescription __declspec(property(get=__get_description, put=__set_description))  description;

constexpr void __set_description(UnityEngine::InputSystem::Layouts::InputDeviceDescription value) ;

constexpr UnityEngine::InputSystem::Layouts::InputDeviceDescription __get_description() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: ::Subscriber
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6339))
// CS Name: UnityEngine.InputSystem.InputRemoting::Subscriber
class CORDL_TYPE UnityEngine__InputSystem__InputRemoting__Subscriber : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~UnityEngine__InputSystem__InputRemoting__Subscriber() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__InputRemoting__Subscriber", modifiers: " const&", def_value: None }]
constexpr UnityEngine__InputSystem__InputRemoting__Subscriber(UnityEngine__InputSystem__InputRemoting__Subscriber const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__InputRemoting__Subscriber", modifiers: "&&", def_value: None }]
constexpr UnityEngine__InputSystem__InputRemoting__Subscriber(UnityEngine__InputSystem__InputRemoting__Subscriber&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__InputRemoting__Subscriber(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__InputSystem__InputRemoting__Subscriber& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__InputSystem__InputRemoting__Subscriber& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__InputSystem__InputRemoting__Subscriber& operator=(UnityEngine__InputSystem__InputRemoting__Subscriber&& o) noexcept = default;
  constexpr UnityEngine__InputSystem__InputRemoting__Subscriber& operator=(UnityEngine__InputSystem__InputRemoting__Subscriber const& o) noexcept = default;
                


// Fields

 UnityEngine::InputSystem::InputRemoting __declspec(property(get=__get_owner, put=__set_owner))  owner;

constexpr void __set_owner(UnityEngine::InputSystem::InputRemoting value) ;

constexpr UnityEngine::InputSystem::InputRemoting __get_owner() const;

 System::IObserver_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message> __declspec(property(get=__get_observer, put=__set_observer))  observer;

constexpr void __set_observer(System::IObserver_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message> value) ;

constexpr System::IObserver_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message> __get_observer() const;


// Methods

/// @brief Method Dispose addr 0x2913688 size 0x58 virtual true final true
 void Dispose() ;

// Ctor Parameters []
explicit UnityEngine__InputSystem__InputRemoting__Subscriber() ;

/// @brief Method .ctor addr 0x2911e8c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: ::ConnectMsg
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6340))
// CS Name: UnityEngine.InputSystem.InputRemoting::ConnectMsg
class CORDL_TYPE UnityEngine__InputSystem__InputRemoting__ConnectMsg : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__InputSystem__InputRemoting__ConnectMsg() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__InputRemoting__ConnectMsg", modifiers: " const&", def_value: None }]
constexpr UnityEngine__InputSystem__InputRemoting__ConnectMsg(UnityEngine__InputSystem__InputRemoting__ConnectMsg const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__InputRemoting__ConnectMsg", modifiers: "&&", def_value: None }]
constexpr UnityEngine__InputSystem__InputRemoting__ConnectMsg(UnityEngine__InputSystem__InputRemoting__ConnectMsg&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__InputRemoting__ConnectMsg(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__InputSystem__InputRemoting__ConnectMsg& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__InputSystem__InputRemoting__ConnectMsg& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__InputSystem__InputRemoting__ConnectMsg& operator=(UnityEngine__InputSystem__InputRemoting__ConnectMsg&& o) noexcept = default;
  constexpr UnityEngine__InputSystem__InputRemoting__ConnectMsg& operator=(UnityEngine__InputSystem__InputRemoting__ConnectMsg const& o) noexcept = default;
                


// Methods

/// @brief Method Process addr 0x29111e8 size 0x44 virtual false final false
static void Process(UnityEngine::InputSystem::InputRemoting receiver) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: ::StartSendingMsg
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6341))
// CS Name: UnityEngine.InputSystem.InputRemoting::StartSendingMsg
class CORDL_TYPE UnityEngine__InputSystem__InputRemoting__StartSendingMsg : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__InputSystem__InputRemoting__StartSendingMsg() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__InputRemoting__StartSendingMsg", modifiers: " const&", def_value: None }]
constexpr UnityEngine__InputSystem__InputRemoting__StartSendingMsg(UnityEngine__InputSystem__InputRemoting__StartSendingMsg const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__InputRemoting__StartSendingMsg", modifiers: "&&", def_value: None }]
constexpr UnityEngine__InputSystem__InputRemoting__StartSendingMsg(UnityEngine__InputSystem__InputRemoting__StartSendingMsg&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__InputRemoting__StartSendingMsg(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__InputSystem__InputRemoting__StartSendingMsg& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__InputSystem__InputRemoting__StartSendingMsg& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__InputSystem__InputRemoting__StartSendingMsg& operator=(UnityEngine__InputSystem__InputRemoting__StartSendingMsg&& o) noexcept = default;
  constexpr UnityEngine__InputSystem__InputRemoting__StartSendingMsg& operator=(UnityEngine__InputSystem__InputRemoting__StartSendingMsg const& o) noexcept = default;
                


// Methods

/// @brief Method Process addr 0x2911d80 size 0x10 virtual false final false
static void Process(UnityEngine::InputSystem::InputRemoting receiver) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: ::StopSendingMsg
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6342))
// CS Name: UnityEngine.InputSystem.InputRemoting::StopSendingMsg
class CORDL_TYPE UnityEngine__InputSystem__InputRemoting__StopSendingMsg : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__InputSystem__InputRemoting__StopSendingMsg() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__InputRemoting__StopSendingMsg", modifiers: " const&", def_value: None }]
constexpr UnityEngine__InputSystem__InputRemoting__StopSendingMsg(UnityEngine__InputSystem__InputRemoting__StopSendingMsg const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__InputRemoting__StopSendingMsg", modifiers: "&&", def_value: None }]
constexpr UnityEngine__InputSystem__InputRemoting__StopSendingMsg(UnityEngine__InputSystem__InputRemoting__StopSendingMsg&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__InputRemoting__StopSendingMsg(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__InputSystem__InputRemoting__StopSendingMsg& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__InputSystem__InputRemoting__StopSendingMsg& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__InputSystem__InputRemoting__StopSendingMsg& operator=(UnityEngine__InputSystem__InputRemoting__StopSendingMsg&& o) noexcept = default;
  constexpr UnityEngine__InputSystem__InputRemoting__StopSendingMsg& operator=(UnityEngine__InputSystem__InputRemoting__StopSendingMsg const& o) noexcept = default;
                


// Methods

/// @brief Method Process addr 0x2911d90 size 0x10 virtual false final false
static void Process(UnityEngine::InputSystem::InputRemoting receiver) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: ::DisconnectMsg
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6343))
// CS Name: UnityEngine.InputSystem.InputRemoting::DisconnectMsg
class CORDL_TYPE UnityEngine__InputSystem__InputRemoting__DisconnectMsg : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__InputSystem__InputRemoting__DisconnectMsg() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__InputRemoting__DisconnectMsg", modifiers: " const&", def_value: None }]
constexpr UnityEngine__InputSystem__InputRemoting__DisconnectMsg(UnityEngine__InputSystem__InputRemoting__DisconnectMsg const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__InputRemoting__DisconnectMsg", modifiers: "&&", def_value: None }]
constexpr UnityEngine__InputSystem__InputRemoting__DisconnectMsg(UnityEngine__InputSystem__InputRemoting__DisconnectMsg&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__InputRemoting__DisconnectMsg(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__InputSystem__InputRemoting__DisconnectMsg& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__InputSystem__InputRemoting__DisconnectMsg& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__InputSystem__InputRemoting__DisconnectMsg& operator=(UnityEngine__InputSystem__InputRemoting__DisconnectMsg&& o) noexcept = default;
  constexpr UnityEngine__InputSystem__InputRemoting__DisconnectMsg& operator=(UnityEngine__InputSystem__InputRemoting__DisconnectMsg const& o) noexcept = default;
                


// Methods

/// @brief Method Process addr 0x291122c size 0x94 virtual false final false
static void Process(UnityEngine::InputSystem::InputRemoting receiver, UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message msg) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: ::Data
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6344))
// CS Name: UnityEngine.InputSystem.InputRemoting::NewLayoutMsg::Data
struct CORDL_TYPE UnityEngine__InputSystem__InputRemoting__NewLayoutMsg__Data : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "layoutJson", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "isOverride", ty: "bool", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__InputRemoting__NewLayoutMsg__Data(::StringW name, ::StringW layoutJson, bool isOverride) noexcept;


                    constexpr UnityEngine__InputSystem__InputRemoting__NewLayoutMsg__Data(UnityEngine__InputSystem__InputRemoting__NewLayoutMsg__Data const&) = default;
                    constexpr UnityEngine__InputSystem__InputRemoting__NewLayoutMsg__Data(UnityEngine__InputSystem__InputRemoting__NewLayoutMsg__Data&&) = default;
                    constexpr UnityEngine__InputSystem__InputRemoting__NewLayoutMsg__Data& operator=(UnityEngine__InputSystem__InputRemoting__NewLayoutMsg__Data const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__InputRemoting__NewLayoutMsg__Data& operator=(UnityEngine__InputSystem__InputRemoting__NewLayoutMsg__Data&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__InputRemoting__NewLayoutMsg__Data(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::StringW __declspec(property(get=__get_name, put=__set_name))  name;

constexpr void __set_name(::StringW value) ;

constexpr ::StringW __get_name() const;

 ::StringW __declspec(property(get=__get_layoutJson, put=__set_layoutJson))  layoutJson;

constexpr void __set_layoutJson(::StringW value) ;

constexpr ::StringW __get_layoutJson() const;

 bool __declspec(property(get=__get_isOverride, put=__set_isOverride))  isOverride;

constexpr void __set_isOverride(bool value) ;

constexpr bool __get_isOverride() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::NewLayoutMsg
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6345))
// CS Name: UnityEngine.InputSystem.InputRemoting::NewLayoutMsg
class CORDL_TYPE UnityEngine__InputSystem__InputRemoting__NewLayoutMsg : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Data = GlobalNamespace::UnityEngine__InputSystem__InputRemoting__NewLayoutMsg__Data;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__InputSystem__InputRemoting__NewLayoutMsg() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__InputRemoting__NewLayoutMsg", modifiers: " const&", def_value: None }]
constexpr UnityEngine__InputSystem__InputRemoting__NewLayoutMsg(UnityEngine__InputSystem__InputRemoting__NewLayoutMsg const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__InputRemoting__NewLayoutMsg", modifiers: "&&", def_value: None }]
constexpr UnityEngine__InputSystem__InputRemoting__NewLayoutMsg(UnityEngine__InputSystem__InputRemoting__NewLayoutMsg&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__InputRemoting__NewLayoutMsg(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__InputSystem__InputRemoting__NewLayoutMsg& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__InputSystem__InputRemoting__NewLayoutMsg& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__InputSystem__InputRemoting__NewLayoutMsg& operator=(UnityEngine__InputSystem__InputRemoting__NewLayoutMsg&& o) noexcept = default;
  constexpr UnityEngine__InputSystem__InputRemoting__NewLayoutMsg& operator=(UnityEngine__InputSystem__InputRemoting__NewLayoutMsg const& o) noexcept = default;
                


// Methods

/// @brief Method Create addr 0x2912204 size 0x24c virtual false final false
static System::Nullable_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message> Create(UnityEngine::InputSystem::InputRemoting sender, ::StringW layoutName) ;

/// @brief Method Process addr 0x29112c0 size 0xf8 virtual false final false
static void Process(UnityEngine::InputSystem::InputRemoting receiver, UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message msg) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: ::Data
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6346))
// CS Name: UnityEngine.InputSystem.InputRemoting::NewDeviceMsg::Data
struct CORDL_TYPE UnityEngine__InputSystem__InputRemoting__NewDeviceMsg__Data : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "layout", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "deviceId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "usages", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None }, CppParam { name: "description", ty: "UnityEngine::InputSystem::Layouts::InputDeviceDescription", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__InputRemoting__NewDeviceMsg__Data(::StringW name, ::StringW layout, int32_t deviceId, ::ArrayW<::StringW> usages, UnityEngine::InputSystem::Layouts::InputDeviceDescription description) noexcept;


                    constexpr UnityEngine__InputSystem__InputRemoting__NewDeviceMsg__Data(UnityEngine__InputSystem__InputRemoting__NewDeviceMsg__Data const&) = default;
                    constexpr UnityEngine__InputSystem__InputRemoting__NewDeviceMsg__Data(UnityEngine__InputSystem__InputRemoting__NewDeviceMsg__Data&&) = default;
                    constexpr UnityEngine__InputSystem__InputRemoting__NewDeviceMsg__Data& operator=(UnityEngine__InputSystem__InputRemoting__NewDeviceMsg__Data const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__InputRemoting__NewDeviceMsg__Data& operator=(UnityEngine__InputSystem__InputRemoting__NewDeviceMsg__Data&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x58};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__InputRemoting__NewDeviceMsg__Data(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::StringW __declspec(property(get=__get_name, put=__set_name))  name;

constexpr void __set_name(::StringW value) ;

constexpr ::StringW __get_name() const;

 ::StringW __declspec(property(get=__get_layout, put=__set_layout))  layout;

constexpr void __set_layout(::StringW value) ;

constexpr ::StringW __get_layout() const;

 int32_t __declspec(property(get=__get_deviceId, put=__set_deviceId))  deviceId;

constexpr void __set_deviceId(int32_t value) ;

constexpr int32_t __get_deviceId() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_usages, put=__set_usages))  usages;

constexpr void __set_usages(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_usages() const;

 UnityEngine::InputSystem::Layouts::InputDeviceDescription __declspec(property(get=__get_description, put=__set_description))  description;

constexpr void __set_description(UnityEngine::InputSystem::Layouts::InputDeviceDescription value) ;

constexpr UnityEngine::InputSystem::Layouts::InputDeviceDescription __get_description() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6347))
// CS Name: UnityEngine.InputSystem.InputRemoting::NewDeviceMsg::<>c
class CORDL_TYPE UnityEngine__InputSystem__InputRemoting__NewDeviceMsg____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__InputSystem__InputRemoting__NewDeviceMsg____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__InputRemoting__NewDeviceMsg____c", modifiers: " const&", def_value: None }]
constexpr UnityEngine__InputSystem__InputRemoting__NewDeviceMsg____c(UnityEngine__InputSystem__InputRemoting__NewDeviceMsg____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__InputRemoting__NewDeviceMsg____c", modifiers: "&&", def_value: None }]
constexpr UnityEngine__InputSystem__InputRemoting__NewDeviceMsg____c(UnityEngine__InputSystem__InputRemoting__NewDeviceMsg____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__InputRemoting__NewDeviceMsg____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__InputSystem__InputRemoting__NewDeviceMsg____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__InputSystem__InputRemoting__NewDeviceMsg____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__InputSystem__InputRemoting__NewDeviceMsg____c& operator=(UnityEngine__InputSystem__InputRemoting__NewDeviceMsg____c&& o) noexcept = default;
  constexpr UnityEngine__InputSystem__InputRemoting__NewDeviceMsg____c& operator=(UnityEngine__InputSystem__InputRemoting__NewDeviceMsg____c const& o) noexcept = default;
                


// Fields

static GlobalNamespace::UnityEngine__InputSystem__InputRemoting__NewDeviceMsg____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(GlobalNamespace::UnityEngine__InputSystem__InputRemoting__NewDeviceMsg____c value) ;

static GlobalNamespace::UnityEngine__InputSystem__InputRemoting__NewDeviceMsg____c __get___9() ;

static System::Func_2<UnityEngine::InputSystem::Utilities::InternedString,::StringW> __declspec(property(get=__get___9__1_0, put=__set___9__1_0))  __9__1_0;

static void __set___9__1_0(System::Func_2<UnityEngine::InputSystem::Utilities::InternedString,::StringW> value) ;

static System::Func_2<UnityEngine::InputSystem::Utilities::InternedString,::StringW> __get___9__1_0() ;


// Methods

// Ctor Parameters []
explicit UnityEngine__InputSystem__InputRemoting__NewDeviceMsg____c() ;

/// @brief Method .ctor addr 0x2913e88 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <Create>b__1_0 addr 0x2913e90 size 0x24 virtual false final false
 ::StringW _Create_b__1_0(UnityEngine::InputSystem::Utilities::InternedString x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::NewDeviceMsg
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6348))
// CS Name: UnityEngine.InputSystem.InputRemoting::NewDeviceMsg
class CORDL_TYPE UnityEngine__InputSystem__InputRemoting__NewDeviceMsg : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = GlobalNamespace::UnityEngine__InputSystem__InputRemoting__NewDeviceMsg____c;

using Data = GlobalNamespace::UnityEngine__InputSystem__InputRemoting__NewDeviceMsg__Data;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__InputSystem__InputRemoting__NewDeviceMsg() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__InputRemoting__NewDeviceMsg", modifiers: " const&", def_value: None }]
constexpr UnityEngine__InputSystem__InputRemoting__NewDeviceMsg(UnityEngine__InputSystem__InputRemoting__NewDeviceMsg const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__InputRemoting__NewDeviceMsg", modifiers: "&&", def_value: None }]
constexpr UnityEngine__InputSystem__InputRemoting__NewDeviceMsg(UnityEngine__InputSystem__InputRemoting__NewDeviceMsg&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__InputRemoting__NewDeviceMsg(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__InputSystem__InputRemoting__NewDeviceMsg& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__InputSystem__InputRemoting__NewDeviceMsg& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__InputSystem__InputRemoting__NewDeviceMsg& operator=(UnityEngine__InputSystem__InputRemoting__NewDeviceMsg&& o) noexcept = default;
  constexpr UnityEngine__InputSystem__InputRemoting__NewDeviceMsg& operator=(UnityEngine__InputSystem__InputRemoting__NewDeviceMsg const& o) noexcept = default;
                


// Methods

/// @brief Method Create addr 0x2912640 size 0x200 virtual false final false
static UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message Create(UnityEngine::InputSystem::InputDevice device) ;

/// @brief Method Process addr 0x29113b8 size 0x538 virtual false final false
static void Process(UnityEngine::InputSystem::InputRemoting receiver, UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message msg) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: ::NewEventsMsg
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6349))
// CS Name: UnityEngine.InputSystem.InputRemoting::NewEventsMsg
class CORDL_TYPE UnityEngine__InputSystem__InputRemoting__NewEventsMsg : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__InputSystem__InputRemoting__NewEventsMsg() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__InputRemoting__NewEventsMsg", modifiers: " const&", def_value: None }]
constexpr UnityEngine__InputSystem__InputRemoting__NewEventsMsg(UnityEngine__InputSystem__InputRemoting__NewEventsMsg const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__InputRemoting__NewEventsMsg", modifiers: "&&", def_value: None }]
constexpr UnityEngine__InputSystem__InputRemoting__NewEventsMsg(UnityEngine__InputSystem__InputRemoting__NewEventsMsg&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__InputRemoting__NewEventsMsg(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__InputSystem__InputRemoting__NewEventsMsg& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__InputSystem__InputRemoting__NewEventsMsg& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__InputSystem__InputRemoting__NewEventsMsg& operator=(UnityEngine__InputSystem__InputRemoting__NewEventsMsg&& o) noexcept = default;
  constexpr UnityEngine__InputSystem__InputRemoting__NewEventsMsg& operator=(UnityEngine__InputSystem__InputRemoting__NewEventsMsg const& o) noexcept = default;
                


// Methods

/// @brief Method CreateResetEvent addr 0x2912d4c size 0x78 virtual false final false
static UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message CreateResetEvent(UnityEngine::InputSystem::InputDevice device, bool isHardReset) ;

/// @brief Method CreateStateEvent addr 0x2912840 size 0xfc virtual false final false
static UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message CreateStateEvent(UnityEngine::InputSystem::InputDevice device) ;

/// @brief Method Create addr 0x29129a0 size 0xd8 virtual false final false
static UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message Create(void* events, int32_t eventCount) ;

/// @brief Method Process addr 0x29118f0 size 0xc0 virtual false final false
static void Process(UnityEngine::InputSystem::InputRemoting receiver, UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message msg) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: ::Data
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6350))
// CS Name: UnityEngine.InputSystem.InputRemoting::ChangeUsageMsg::Data
struct CORDL_TYPE UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg__Data : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "deviceId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "usages", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg__Data(int32_t deviceId, ::ArrayW<::StringW> usages) noexcept;


                    constexpr UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg__Data(UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg__Data const&) = default;
                    constexpr UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg__Data(UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg__Data&&) = default;
                    constexpr UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg__Data& operator=(UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg__Data const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg__Data& operator=(UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg__Data&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg__Data(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_deviceId, put=__set_deviceId))  deviceId;

constexpr void __set_deviceId(int32_t value) ;

constexpr int32_t __get_deviceId() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_usages, put=__set_usages))  usages;

constexpr void __set_usages(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_usages() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6351))
// CS Name: UnityEngine.InputSystem.InputRemoting::ChangeUsageMsg::<>c
class CORDL_TYPE UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg____c", modifiers: " const&", def_value: None }]
constexpr UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg____c(UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg____c", modifiers: "&&", def_value: None }]
constexpr UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg____c(UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg____c& operator=(UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg____c&& o) noexcept = default;
  constexpr UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg____c& operator=(UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg____c const& o) noexcept = default;
                


// Fields

static GlobalNamespace::UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(GlobalNamespace::UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg____c value) ;

static GlobalNamespace::UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg____c __get___9() ;

static System::Func_2<UnityEngine::InputSystem::Utilities::InternedString,::StringW> __declspec(property(get=__get___9__1_0, put=__set___9__1_0))  __9__1_0;

static void __set___9__1_0(System::Func_2<UnityEngine::InputSystem::Utilities::InternedString,::StringW> value) ;

static System::Func_2<UnityEngine::InputSystem::Utilities::InternedString,::StringW> __get___9__1_0() ;


// Methods

// Ctor Parameters []
explicit UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg____c() ;

/// @brief Method .ctor addr 0x2914050 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <Create>b__1_0 addr 0x2914058 size 0x24 virtual false final false
 ::StringW _Create_b__1_0(UnityEngine::InputSystem::Utilities::InternedString x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ChangeUsageMsg
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6352))
// CS Name: UnityEngine.InputSystem.InputRemoting::ChangeUsageMsg
class CORDL_TYPE UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = GlobalNamespace::UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg____c;

using Data = GlobalNamespace::UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg__Data;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg", modifiers: " const&", def_value: None }]
constexpr UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg(UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg", modifiers: "&&", def_value: None }]
constexpr UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg(UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg& operator=(UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg&& o) noexcept = default;
  constexpr UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg& operator=(UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg const& o) noexcept = default;
                


// Methods

/// @brief Method Create addr 0x2912ba8 size 0x1a4 virtual false final false
static UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message Create(UnityEngine::InputSystem::InputDevice device) ;

/// @brief Method Process addr 0x29119b0 size 0x310 virtual false final false
static void Process(UnityEngine::InputSystem::InputRemoting receiver, UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message msg) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: ::RemoveDeviceMsg
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6353))
// CS Name: UnityEngine.InputSystem.InputRemoting::RemoveDeviceMsg
class CORDL_TYPE UnityEngine__InputSystem__InputRemoting__RemoveDeviceMsg : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__InputSystem__InputRemoting__RemoveDeviceMsg() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__InputRemoting__RemoveDeviceMsg", modifiers: " const&", def_value: None }]
constexpr UnityEngine__InputSystem__InputRemoting__RemoveDeviceMsg(UnityEngine__InputSystem__InputRemoting__RemoveDeviceMsg const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__InputRemoting__RemoveDeviceMsg", modifiers: "&&", def_value: None }]
constexpr UnityEngine__InputSystem__InputRemoting__RemoveDeviceMsg(UnityEngine__InputSystem__InputRemoting__RemoveDeviceMsg&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__InputRemoting__RemoveDeviceMsg(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__InputSystem__InputRemoting__RemoveDeviceMsg& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__InputSystem__InputRemoting__RemoveDeviceMsg& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__InputSystem__InputRemoting__RemoveDeviceMsg& operator=(UnityEngine__InputSystem__InputRemoting__RemoveDeviceMsg&& o) noexcept = default;
  constexpr UnityEngine__InputSystem__InputRemoting__RemoveDeviceMsg& operator=(UnityEngine__InputSystem__InputRemoting__RemoveDeviceMsg const& o) noexcept = default;
                


// Methods

/// @brief Method Create addr 0x2912b38 size 0x70 virtual false final false
static UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message Create(UnityEngine::InputSystem::InputDevice device) ;

/// @brief Method Process addr 0x2911cc0 size 0xc0 virtual false final false
static void Process(UnityEngine::InputSystem::InputRemoting receiver, UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message msg) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputRemoting
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6354))
// CS Name: UnityEngine.InputSystem.InputRemoting
class CORDL_TYPE InputRemoting : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using RemoveDeviceMsg = UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__RemoveDeviceMsg;

using ChangeUsageMsg = UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg;

using NewEventsMsg = UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__NewEventsMsg;

using NewDeviceMsg = UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__NewDeviceMsg;

using NewLayoutMsg = UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__NewLayoutMsg;

using DisconnectMsg = UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__DisconnectMsg;

using StopSendingMsg = UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__StopSendingMsg;

using StartSendingMsg = UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__StartSendingMsg;

using ConnectMsg = UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__ConnectMsg;

using Subscriber = UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Subscriber;

using RemoteInputDevice = UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__RemoteInputDevice;

using RemoteSender = UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__RemoteSender;

using Flags = UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Flags;

using Message = UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message;

using MessageType = UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__MessageType;

/// @brief Convert operator to System::IObservable_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message>
constexpr operator  System::IObservable_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message>() const noexcept;

/// @brief Convert operator to System::IObserver_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message>
constexpr operator  System::IObserver_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~InputRemoting() = default;

// Ctor Parameters [CppParam { name: "", ty: "InputRemoting", modifiers: " const&", def_value: None }]
constexpr InputRemoting(InputRemoting const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InputRemoting", modifiers: "&&", def_value: None }]
constexpr InputRemoting(InputRemoting&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InputRemoting(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr InputRemoting& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InputRemoting& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InputRemoting& operator=(InputRemoting&& o) noexcept = default;
  constexpr InputRemoting& operator=(InputRemoting const& o) noexcept = default;
                


// Fields

 UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Flags __declspec(property(get=__get_m_Flags, put=__set_m_Flags))  m_Flags;

constexpr void __set_m_Flags(UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Flags value) ;

constexpr UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Flags __get_m_Flags() const;

 UnityEngine::InputSystem::InputManager __declspec(property(get=__get_m_LocalManager, put=__set_m_LocalManager))  m_LocalManager;

constexpr void __set_m_LocalManager(UnityEngine::InputSystem::InputManager value) ;

constexpr UnityEngine::InputSystem::InputManager __get_m_LocalManager() const;

 ::ArrayW<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Subscriber> __declspec(property(get=__get_m_Subscribers, put=__set_m_Subscribers))  m_Subscribers;

constexpr void __set_m_Subscribers(::ArrayW<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Subscriber> value) ;

constexpr ::ArrayW<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Subscriber> __get_m_Subscribers() const;

 ::ArrayW<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__RemoteSender> __declspec(property(get=__get_m_Senders, put=__set_m_Senders))  m_Senders;

constexpr void __set_m_Senders(::ArrayW<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__RemoteSender> value) ;

constexpr ::ArrayW<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__RemoteSender> __get_m_Senders() const;


// Properties

 bool __declspec(property(get=get_sending, put=set_sending))  sending;

 UnityEngine::InputSystem::InputManager __declspec(property(get=get_manager))  manager;


// Methods

/// @brief Method get_sending addr 0x2910bac size 0xc virtual false final false
 bool get_sending() ;

/// @brief Method set_sending addr 0x2910bb8 size 0x1c virtual false final false
 void set_sending(bool value) ;

// Ctor Parameters [CppParam { name: "manager", ty: "UnityEngine::InputSystem::InputManager", modifiers: "", def_value: None }, CppParam { name: "startSendingOnConnect", ty: "bool", modifiers: "", def_value: None }]
explicit InputRemoting(UnityEngine::InputSystem::InputManager manager, bool startSendingOnConnect) ;

/// @brief Method .ctor addr 0x2910bd4 size 0x8c virtual false final false
 void _ctor(UnityEngine::InputSystem::InputManager manager, bool startSendingOnConnect) ;

/// @brief Method StartSending addr 0x2910c60 size 0x17c virtual false final false
 void StartSending() ;

/// @brief Method StopSending addr 0x2910efc size 0x160 virtual false final false
 void StopSending() ;

/// @brief Method System.IObserver<UnityEngine.InputSystem.InputRemoting.Message>.OnNext addr 0x2911164 size 0x84 virtual true final true
 void System_IObserver_UnityEngine_InputSystem_InputRemoting_Message__OnNext(UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message msg) ;

/// @brief Method System.IObserver<UnityEngine.InputSystem.InputRemoting.Message>.OnError addr 0x2911da0 size 0x4 virtual true final true
 void System_IObserver_UnityEngine_InputSystem_InputRemoting_Message__OnError(System::Exception error) ;

/// @brief Method System.IObserver<UnityEngine.InputSystem.InputRemoting.Message>.OnCompleted addr 0x2911da4 size 0x4 virtual true final true
 void System_IObserver_UnityEngine_InputSystem_InputRemoting_Message__OnCompleted() ;

/// @brief Method Subscribe addr 0x2911da8 size 0xe4 virtual true final true
 System::IDisposable Subscribe(System::IObserver_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message> observer) ;

/// @brief Method SendInitialMessages addr 0x2910ee4 size 0x18 virtual false final false
 void SendInitialMessages() ;

/// @brief Method SendAllGeneratedLayouts addr 0x2911e94 size 0x154 virtual false final false
 void SendAllGeneratedLayouts() ;

/// @brief Method SendLayout addr 0x2912150 size 0xb4 virtual false final false
 void SendLayout(::StringW layoutName) ;

/// @brief Method SendAllDevices addr 0x2911fe8 size 0x168 virtual false final false
 void SendAllDevices() ;

/// @brief Method SendDevice addr 0x29125bc size 0x84 virtual false final false
 void SendDevice(UnityEngine::InputSystem::InputDevice device) ;

/// @brief Method SendEvent addr 0x291293c size 0x64 virtual false final false
 void SendEvent(UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, UnityEngine::InputSystem::InputDevice device) ;

/// @brief Method SendDeviceChange addr 0x2912a78 size 0xc0 virtual false final false
 void SendDeviceChange(UnityEngine::InputSystem::InputDevice device, UnityEngine::InputSystem::InputDeviceChange change) ;

/// @brief Method SendLayoutChange addr 0x2912dc4 size 0x104 virtual false final false
 void SendLayoutChange(::StringW layout, UnityEngine::InputSystem::InputControlLayoutChange change) ;

/// @brief Method Send addr 0x2912450 size 0x104 virtual false final false
 void Send(UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message msg) ;

/// @brief Method FindOrCreateSenderRecord addr 0x2912ec8 size 0xa4 virtual false final false
 int32_t FindOrCreateSenderRecord(int32_t senderId) ;

/// @brief Method BuildLayoutNamespace addr 0x2912f6c size 0xa0 virtual false final false
static UnityEngine::InputSystem::Utilities::InternedString BuildLayoutNamespace(int32_t senderId) ;

/// @brief Method FindLocalDeviceId addr 0x291300c size 0x74 virtual false final false
 int32_t FindLocalDeviceId(int32_t remoteDeviceId, int32_t senderIndex) ;

/// @brief Method TryGetDeviceByRemoteId addr 0x2913080 size 0x28 virtual false final false
 UnityEngine::InputSystem::InputDevice TryGetDeviceByRemoteId(int32_t remoteDeviceId, int32_t senderIndex) ;

/// @brief Method get_manager addr 0x2913120 size 0x8 virtual false final false
 UnityEngine::InputSystem::InputManager get_manager() ;

/// @brief Method RemoveRemoteDevices addr 0x2913128 size 0xfc virtual false final false
 void RemoveRemoteDevices(int32_t participantId) ;

/// @brief Method SerializeData addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TData>
static ::ArrayW<uint8_t> SerializeData(TData data) ;

/// @brief Method DeserializeData addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TData>
static TData DeserializeData(::ArrayW<uint8_t> data) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Flags, "UnityEngine.InputSystem", "InputRemoting/Flags");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__MessageType, "UnityEngine.InputSystem", "InputRemoting/MessageType");
NEED_NO_BOX(GlobalNamespace::UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg____c);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg____c, "UnityEngine.InputSystem", "InputRemoting/ChangeUsageMsg/<>c");
NEED_NO_BOX(GlobalNamespace::UnityEngine__InputSystem__InputRemoting__NewDeviceMsg____c);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::UnityEngine__InputSystem__InputRemoting__NewDeviceMsg____c, "UnityEngine.InputSystem", "InputRemoting/NewDeviceMsg/<>c");
NEED_NO_BOX(UnityEngine::InputSystem::InputRemoting);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::InputRemoting, "UnityEngine.InputSystem", "InputRemoting");
NEED_NO_BOX(UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg, "UnityEngine.InputSystem", "InputRemoting/ChangeUsageMsg");
NEED_NO_BOX(UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__ConnectMsg);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__ConnectMsg, "UnityEngine.InputSystem", "InputRemoting/ConnectMsg");
NEED_NO_BOX(UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__DisconnectMsg);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__DisconnectMsg, "UnityEngine.InputSystem", "InputRemoting/DisconnectMsg");
NEED_NO_BOX(UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__NewDeviceMsg);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__NewDeviceMsg, "UnityEngine.InputSystem", "InputRemoting/NewDeviceMsg");
NEED_NO_BOX(UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__NewEventsMsg);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__NewEventsMsg, "UnityEngine.InputSystem", "InputRemoting/NewEventsMsg");
NEED_NO_BOX(UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__NewLayoutMsg);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__NewLayoutMsg, "UnityEngine.InputSystem", "InputRemoting/NewLayoutMsg");
NEED_NO_BOX(UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__RemoveDeviceMsg);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__RemoveDeviceMsg, "UnityEngine.InputSystem", "InputRemoting/RemoveDeviceMsg");
NEED_NO_BOX(UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__StartSendingMsg);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__StartSendingMsg, "UnityEngine.InputSystem", "InputRemoting/StartSendingMsg");
NEED_NO_BOX(UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__StopSendingMsg);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__StopSendingMsg, "UnityEngine.InputSystem", "InputRemoting/StopSendingMsg");
NEED_NO_BOX(UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Subscriber);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Subscriber, "UnityEngine.InputSystem", "InputRemoting/Subscriber");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg__Data, "UnityEngine.InputSystem", "InputRemoting/ChangeUsageMsg/Data");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::UnityEngine__InputSystem__InputRemoting__NewDeviceMsg__Data, "UnityEngine.InputSystem", "InputRemoting/NewDeviceMsg/Data");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::UnityEngine__InputSystem__InputRemoting__NewLayoutMsg__Data, "UnityEngine.InputSystem", "InputRemoting/NewLayoutMsg/Data");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message, "UnityEngine.InputSystem", "InputRemoting/Message");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__RemoteInputDevice, "UnityEngine.InputSystem", "InputRemoting/RemoteInputDevice");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__RemoteSender, "UnityEngine.InputSystem", "InputRemoting/RemoteSender");
