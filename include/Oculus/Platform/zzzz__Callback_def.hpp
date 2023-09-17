#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace Oculus::Platform {
struct ____Oculus__Platform__Message__MessageType;
}
namespace Oculus::Platform {
class Request;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Oculus::Platform {
template<typename T>
class ____Oculus__Platform__Message_1__Callback;
}
namespace Oculus::Platform {
class Message;
}
namespace Oculus::Platform {
class ____Oculus__Platform__Message__Callback;
}
// Forward declare root types
namespace Oculus::Platform {
template<typename T>
class ____Oculus__Platform__Callback__RequestCallback_1;
}
namespace Oculus::Platform {
class Callback;
}
namespace Oculus::Platform {
class ____Oculus__Platform__Callback__RequestCallback;
}
namespace Oculus::Platform {
template<::cordl_internals::il2cpp_reference_type T>
class ____Oculus__Platform__Callback__RequestCallback_1<T>;
}
// Type: ::RequestCallback
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13166))
// CS Name: Oculus.Platform.Callback::RequestCallback
class CORDL_TYPE ____Oculus__Platform__Callback__RequestCallback : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____Oculus__Platform__Callback__RequestCallback() = default;

// Ctor Parameters [CppParam { name: "", ty: "____Oculus__Platform__Callback__RequestCallback", modifiers: " const&", def_value: None }]
constexpr ____Oculus__Platform__Callback__RequestCallback(____Oculus__Platform__Callback__RequestCallback const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____Oculus__Platform__Callback__RequestCallback", modifiers: "&&", def_value: None }]
constexpr ____Oculus__Platform__Callback__RequestCallback(____Oculus__Platform__Callback__RequestCallback&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____Oculus__Platform__Callback__RequestCallback(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____Oculus__Platform__Callback__RequestCallback& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____Oculus__Platform__Callback__RequestCallback& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____Oculus__Platform__Callback__RequestCallback& operator=(____Oculus__Platform__Callback__RequestCallback&& o) noexcept = default;
  constexpr ____Oculus__Platform__Callback__RequestCallback& operator=(____Oculus__Platform__Callback__RequestCallback const& o) noexcept = default;
                


// Fields

 ::Oculus::Platform::____Oculus__Platform__Message__Callback __declspec(property(get=__get_messageCallback, put=__set_messageCallback))  messageCallback;

constexpr void __set_messageCallback(::Oculus::Platform::____Oculus__Platform__Message__Callback value) ;

constexpr ::Oculus::Platform::____Oculus__Platform__Message__Callback __get_messageCallback() const;


// Methods

// Ctor Parameters []
explicit ____Oculus__Platform__Callback__RequestCallback() ;

/// @brief Method .ctor addr 0x2554670 size 0x8 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "callback", ty: "::Oculus::Platform::____Oculus__Platform__Message__Callback", modifiers: "", def_value: None }]
explicit ____Oculus__Platform__Callback__RequestCallback(::Oculus::Platform::____Oculus__Platform__Message__Callback callback) ;

/// @brief Method .ctor addr 0x2553c78 size 0x28 virtual false final false
 void _ctor(::Oculus::Platform::____Oculus__Platform__Message__Callback callback) ;

/// @brief Method HandleMessage addr 0x2554678 size 0x1c virtual true final false
 void HandleMessage(::Oculus::Platform::Message msg) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
// Type: ::RequestCallback`1
// Type: Oculus.Platform::Callback
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13168))
// CS Name: Oculus.Platform.Callback
class CORDL_TYPE Callback : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
template<typename T>
using RequestCallback_1 = ::Oculus::Platform::____Oculus__Platform__Callback__RequestCallback_1<T>;

using RequestCallback = ::Oculus::Platform::____Oculus__Platform__Callback__RequestCallback;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Callback() = default;

// Ctor Parameters [CppParam { name: "", ty: "Callback", modifiers: " const&", def_value: None }]
constexpr Callback(Callback const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Callback", modifiers: "&&", def_value: None }]
constexpr Callback(Callback&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Callback(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Callback& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Callback& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Callback& operator=(Callback&& o) noexcept = default;
  constexpr Callback& operator=(Callback const& o) noexcept = default;
                


// Fields

static ::System::Collections::Generic::Dictionary_2<uint64_t,::Oculus::Platform::Request> __declspec(property(get=__get_requestIDsToRequests, put=__set_requestIDsToRequests))  requestIDsToRequests;

static void __set_requestIDsToRequests(::System::Collections::Generic::Dictionary_2<uint64_t,::Oculus::Platform::Request> value) ;

static ::System::Collections::Generic::Dictionary_2<uint64_t,::Oculus::Platform::Request> __get_requestIDsToRequests() ;

static ::System::Collections::Generic::Dictionary_2<::Oculus::Platform::____Oculus__Platform__Message__MessageType,::Oculus::Platform::____Oculus__Platform__Callback__RequestCallback> __declspec(property(get=__get_notificationCallbacks, put=__set_notificationCallbacks))  notificationCallbacks;

static void __set_notificationCallbacks(::System::Collections::Generic::Dictionary_2<::Oculus::Platform::____Oculus__Platform__Message__MessageType,::Oculus::Platform::____Oculus__Platform__Callback__RequestCallback> value) ;

static ::System::Collections::Generic::Dictionary_2<::Oculus::Platform::____Oculus__Platform__Message__MessageType,::Oculus::Platform::____Oculus__Platform__Callback__RequestCallback> __get_notificationCallbacks() ;

static bool __declspec(property(get=__get_hasRegisteredRoomInviteNotificationHandler, put=__set_hasRegisteredRoomInviteNotificationHandler))  hasRegisteredRoomInviteNotificationHandler;

static void __set_hasRegisteredRoomInviteNotificationHandler(bool value) ;

static bool __get_hasRegisteredRoomInviteNotificationHandler() ;

static ::System::Collections::Generic::List_1<::Oculus::Platform::Message> __declspec(property(get=__get_pendingRoomInviteNotifications, put=__set_pendingRoomInviteNotifications))  pendingRoomInviteNotifications;

static void __set_pendingRoomInviteNotifications(::System::Collections::Generic::List_1<::Oculus::Platform::Message> value) ;

static ::System::Collections::Generic::List_1<::Oculus::Platform::Message> __get_pendingRoomInviteNotifications() ;

static bool __declspec(property(get=__get_hasRegisteredJoinIntentNotificationHandler, put=__set_hasRegisteredJoinIntentNotificationHandler))  hasRegisteredJoinIntentNotificationHandler;

static void __set_hasRegisteredJoinIntentNotificationHandler(bool value) ;

static bool __get_hasRegisteredJoinIntentNotificationHandler() ;

static ::Oculus::Platform::Message __declspec(property(get=__get_latestPendingJoinIntentNotifications, put=__set_latestPendingJoinIntentNotifications))  latestPendingJoinIntentNotifications;

static void __set_latestPendingJoinIntentNotifications(::Oculus::Platform::Message value) ;

static ::Oculus::Platform::Message __get_latestPendingJoinIntentNotifications() ;


// Methods

/// @brief Method SetNotificationCallback addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void SetNotificationCallback(::Oculus::Platform::____Oculus__Platform__Message__MessageType type, ::Oculus::Platform::____Oculus__Platform__Message_1__Callback<T> callback) ;

/// @brief Method SetNotificationCallback addr 0x2553b64 size 0x114 virtual false final false
static void SetNotificationCallback(::Oculus::Platform::____Oculus__Platform__Message__MessageType type, ::Oculus::Platform::____Oculus__Platform__Message__Callback callback) ;

/// @brief Method AddRequest addr 0x2553ca0 size 0xdc virtual false final false
static void AddRequest(::Oculus::Platform::Request request) ;

/// @brief Method RunCallbacks addr 0x2553d7c size 0x6c virtual false final false
static void RunCallbacks() ;

/// @brief Method RunLimitedCallbacks addr 0x25541b0 size 0x88 virtual false final false
static void RunLimitedCallbacks(uint32_t limit) ;

/// @brief Method OnApplicationQuit addr 0x2554238 size 0xa4 virtual false final false
static void OnApplicationQuit() ;

/// @brief Method FlushRoomInviteNotificationQueue addr 0x25542dc size 0x1c8 virtual false final false
static void FlushRoomInviteNotificationQueue() ;

/// @brief Method FlushJoinIntentNotificationQueue addr 0x25544a4 size 0xa0 virtual false final false
static void FlushJoinIntentNotificationQueue() ;

/// @brief Method HandleMessage addr 0x2553ebc size 0x2f4 virtual false final false
static void HandleMessage(::Oculus::Platform::Message msg) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
// Type: ::RequestCallback`1
namespace Oculus::Platform {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13167)), TypeDefinitionIndex(TypeDefinitionIndex(13166))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13167), inst: 2 })
// CS Name: Oculus.Platform.Callback::RequestCallback`1
class CORDL_TYPE ____Oculus__Platform__Callback__RequestCallback_1<T> : public ::Oculus::Platform::____Oculus__Platform__Callback__RequestCallback {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____Oculus__Platform__Callback__RequestCallback_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "____Oculus__Platform__Callback__RequestCallback_1", modifiers: " const&", def_value: None }]
constexpr ____Oculus__Platform__Callback__RequestCallback_1(____Oculus__Platform__Callback__RequestCallback_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____Oculus__Platform__Callback__RequestCallback_1", modifiers: "&&", def_value: None }]
constexpr ____Oculus__Platform__Callback__RequestCallback_1(____Oculus__Platform__Callback__RequestCallback_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____Oculus__Platform__Callback__RequestCallback_1(void* ptr) noexcept : ::Oculus::Platform::____Oculus__Platform__Callback__RequestCallback(ptr) {
}


  constexpr ____Oculus__Platform__Callback__RequestCallback_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____Oculus__Platform__Callback__RequestCallback_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____Oculus__Platform__Callback__RequestCallback_1& operator=(____Oculus__Platform__Callback__RequestCallback_1&& o) noexcept = default;
  constexpr ____Oculus__Platform__Callback__RequestCallback_1& operator=(____Oculus__Platform__Callback__RequestCallback_1 const& o) noexcept = default;
                


// Fields

 ::Oculus::Platform::____Oculus__Platform__Message_1__Callback<T> __declspec(property(get=__get_callback, put=__set_callback))  callback;

constexpr void __set_callback(::Oculus::Platform::____Oculus__Platform__Message_1__Callback<T> value) ;

constexpr ::Oculus::Platform::____Oculus__Platform__Message_1__Callback<T> __get_callback() const;


// Methods

// Ctor Parameters [CppParam { name: "callback", ty: "::Oculus::Platform::____Oculus__Platform__Message_1__Callback<T>", modifiers: "", def_value: None }]
explicit ____Oculus__Platform__Callback__RequestCallback_1(::Oculus::Platform::____Oculus__Platform__Message_1__Callback<T> callback) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::Oculus::Platform::____Oculus__Platform__Message_1__Callback<T> callback) ;

/// @brief Method HandleMessage addr 0x0 size 0xffffffffffffffff virtual true final false
 void HandleMessage(::Oculus::Platform::Message msg) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Oculus::Platform::____Oculus__Platform__Callback__RequestCallback_1, "Oculus.Platform", "Callback/RequestCallback`1");
NEED_NO_BOX(::Oculus::Platform::Callback);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Callback, "Oculus.Platform", "Callback");
NEED_NO_BOX(::Oculus::Platform::____Oculus__Platform__Callback__RequestCallback);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::____Oculus__Platform__Callback__RequestCallback, "Oculus.Platform", "Callback/RequestCallback");
