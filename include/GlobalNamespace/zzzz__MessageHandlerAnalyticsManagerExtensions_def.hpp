#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace BGNet::Core::Messages {
class IUnconnectedResponse;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace BGNet::Core {
class IAnalyticsManager;
}
namespace BGNet::Core::Messages {
class IUnconnectedUnreliableMessage;
}
namespace System {
class Type;
}
namespace BGNet::Core::Messages {
class IUnconnectedReliableRequest;
}
namespace BGNet::Core::Messages {
class IUnconnectedMessage;
}
namespace BGNet::Core::Messages {
class IUnconnectedReliableResponse;
}
// Forward declare root types
namespace GlobalNamespace {
class MessageHandlerAnalyticsManagerExtensions;
}
namespace {
// Type: ::MessageHandlerAnalyticsManagerExtensions
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12795))
// CS Name: MessageHandlerAnalyticsManagerExtensions
class CORDL_TYPE MessageHandlerAnalyticsManagerExtensions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~MessageHandlerAnalyticsManagerExtensions() = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageHandlerAnalyticsManagerExtensions", modifiers: " const&", def_value: None }]
constexpr MessageHandlerAnalyticsManagerExtensions(MessageHandlerAnalyticsManagerExtensions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageHandlerAnalyticsManagerExtensions", modifiers: "&&", def_value: None }]
constexpr MessageHandlerAnalyticsManagerExtensions(MessageHandlerAnalyticsManagerExtensions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MessageHandlerAnalyticsManagerExtensions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MessageHandlerAnalyticsManagerExtensions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MessageHandlerAnalyticsManagerExtensions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MessageHandlerAnalyticsManagerExtensions& operator=(MessageHandlerAnalyticsManagerExtensions&& o) noexcept = default;
  constexpr MessageHandlerAnalyticsManagerExtensions& operator=(MessageHandlerAnalyticsManagerExtensions const& o) noexcept = default;
                


// Fields

/// @brief Field kReceivedMessagesMetricName offset 0
static constexpr ::ConstString  kReceivedMessagesMetricName{u"ReceivedMessages"};

/// @brief Field kSentMessagesMetricName offset 0
static constexpr ::ConstString  kSentMessagesMetricName{u"SentMessages"};

/// @brief Field kDeliveryTypeKey offset 0
static constexpr ::ConstString  kDeliveryTypeKey{u"DeliveryType"};

/// @brief Field kMessageCategoryKey offset 0
static constexpr ::ConstString  kMessageCategoryKey{u"MessageCategory"};

/// @brief Field kMessageTypeKey offset 0
static constexpr ::ConstString  kMessageTypeKey{u"MessageType"};

/// @brief Field kResultKey offset 0
static constexpr ::ConstString  kResultKey{u"Result"};

/// @brief Field kDeliveryTypeReliable offset 0
static constexpr ::ConstString  kDeliveryTypeReliable{u"Reliable"};

/// @brief Field kDeliveryTypeUnreliable offset 0
static constexpr ::ConstString  kDeliveryTypeUnreliable{u"Unreliable"};

/// @brief Field kMessageCategoryRequest offset 0
static constexpr ::ConstString  kMessageCategoryRequest{u"Request"};

/// @brief Field kMessageCategoryResponse offset 0
static constexpr ::ConstString  kMessageCategoryResponse{u"Response"};

/// @brief Field kMessageCategoryMessage offset 0
static constexpr ::ConstString  kMessageCategoryMessage{u"Message"};

static System::Collections::Generic::Dictionary_2<System::Type,::StringW> __declspec(property(get=__get__typeNameLookup, put=__set__typeNameLookup))  _typeNameLookup;

static void __set__typeNameLookup(System::Collections::Generic::Dictionary_2<System::Type,::StringW> value) ;

static System::Collections::Generic::Dictionary_2<System::Type,::StringW> __get__typeNameLookup() ;

static System::Collections::Generic::Dictionary_2<System::Type,System::Collections::Generic::Dictionary_2<uint8_t,::StringW>> __declspec(property(get=__get__responseCodeLookup, put=__set__responseCodeLookup))  _responseCodeLookup;

static void __set__responseCodeLookup(System::Collections::Generic::Dictionary_2<System::Type,System::Collections::Generic::Dictionary_2<uint8_t,::StringW>> value) ;

static System::Collections::Generic::Dictionary_2<System::Type,System::Collections::Generic::Dictionary_2<uint8_t,::StringW>> __get__responseCodeLookup() ;


// Methods

/// @brief Method GetMessageName addr 0xdc26a0 size 0x140 virtual false final false
static ::StringW GetMessageName(BGNet::Core::Messages::IUnconnectedMessage message) ;

/// @brief Method GetResponseCodeName addr 0xdc27e0 size 0x2e8 virtual false final false
static ::StringW GetResponseCodeName(BGNet::Core::Messages::IUnconnectedResponse response) ;

/// @brief Method ReceivedReliableRequestEvent addr 0xdc2ac8 size 0x230 virtual false final false
static void ReceivedReliableRequestEvent(BGNet::Core::IAnalyticsManager analyticsManager, BGNet::Core::Messages::IUnconnectedReliableRequest request) ;

/// @brief Method SentReliableRequestEvent addr 0xdc2db8 size 0x230 virtual false final false
static void SentReliableRequestEvent(BGNet::Core::IAnalyticsManager analyticsManager, BGNet::Core::Messages::IUnconnectedReliableRequest request) ;

/// @brief Method ReceivedReliableResponseEvent addr 0xdc2fe8 size 0x268 virtual false final false
static void ReceivedReliableResponseEvent(BGNet::Core::IAnalyticsManager analyticsManager, BGNet::Core::Messages::IUnconnectedReliableResponse response) ;

/// @brief Method SentReliableResponseEvent addr 0xdc3250 size 0x268 virtual false final false
static void SentReliableResponseEvent(BGNet::Core::IAnalyticsManager analyticsManager, BGNet::Core::Messages::IUnconnectedReliableResponse response) ;

/// @brief Method ReceivedUnreliableMessageEvent addr 0xdc34b8 size 0x230 virtual false final false
static void ReceivedUnreliableMessageEvent(BGNet::Core::IAnalyticsManager analyticsManager, BGNet::Core::Messages::IUnconnectedUnreliableMessage message) ;

/// @brief Method SentUnreliableMessageEvent addr 0xdc36e8 size 0x230 virtual false final false
static void SentUnreliableMessageEvent(BGNet::Core::IAnalyticsManager analyticsManager, BGNet::Core::Messages::IUnconnectedUnreliableMessage message) ;

/// @brief Method ReceivedUnreliableResponseEvent addr 0xdc3918 size 0x268 virtual false final false
static void ReceivedUnreliableResponseEvent(BGNet::Core::IAnalyticsManager analyticsManager, BGNet::Core::Messages::IUnconnectedResponse response) ;

/// @brief Method SentUnreliableResponseEvent addr 0xdc3b80 size 0x268 virtual false final false
static void SentUnreliableResponseEvent(BGNet::Core::IAnalyticsManager analyticsManager, BGNet::Core::Messages::IUnconnectedResponse response) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MessageHandlerAnalyticsManagerExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MessageHandlerAnalyticsManagerExtensions, "", "MessageHandlerAnalyticsManagerExtensions");
} // end anonymous namespace
