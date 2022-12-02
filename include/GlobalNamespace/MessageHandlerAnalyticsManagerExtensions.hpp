// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: BGNet::Core::Messages
namespace BGNet::Core::Messages {
  // Forward declaring type: IUnconnectedMessage
  class IUnconnectedMessage;
  // Forward declaring type: IUnconnectedResponse
  class IUnconnectedResponse;
  // Forward declaring type: IUnconnectedReliableRequest
  class IUnconnectedReliableRequest;
  // Forward declaring type: IUnconnectedReliableResponse
  class IUnconnectedReliableResponse;
  // Forward declaring type: IUnconnectedUnreliableMessage
  class IUnconnectedUnreliableMessage;
}
// Forward declaring namespace: BGNet::Core
namespace BGNet::Core {
  // Forward declaring type: IAnalyticsManager
  class IAnalyticsManager;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MessageHandlerAnalyticsManagerExtensions
  class MessageHandlerAnalyticsManagerExtensions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MessageHandlerAnalyticsManagerExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MessageHandlerAnalyticsManagerExtensions*, "", "MessageHandlerAnalyticsManagerExtensions");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: MessageHandlerAnalyticsManagerExtensions
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class MessageHandlerAnalyticsManagerExtensions : public ::Il2CppObject {
    public:
    // static field const value: static private System.String kReceivedMessagesMetricName
    static constexpr const char* kReceivedMessagesMetricName = "ReceivedMessages";
    // Get static field: static private System.String kReceivedMessagesMetricName
    static ::StringW _get_kReceivedMessagesMetricName();
    // Set static field: static private System.String kReceivedMessagesMetricName
    static void _set_kReceivedMessagesMetricName(::StringW value);
    // static field const value: static private System.String kSentMessagesMetricName
    static constexpr const char* kSentMessagesMetricName = "SentMessages";
    // Get static field: static private System.String kSentMessagesMetricName
    static ::StringW _get_kSentMessagesMetricName();
    // Set static field: static private System.String kSentMessagesMetricName
    static void _set_kSentMessagesMetricName(::StringW value);
    // static field const value: static private System.String kDeliveryTypeKey
    static constexpr const char* kDeliveryTypeKey = "DeliveryType";
    // Get static field: static private System.String kDeliveryTypeKey
    static ::StringW _get_kDeliveryTypeKey();
    // Set static field: static private System.String kDeliveryTypeKey
    static void _set_kDeliveryTypeKey(::StringW value);
    // static field const value: static private System.String kMessageCategoryKey
    static constexpr const char* kMessageCategoryKey = "MessageCategory";
    // Get static field: static private System.String kMessageCategoryKey
    static ::StringW _get_kMessageCategoryKey();
    // Set static field: static private System.String kMessageCategoryKey
    static void _set_kMessageCategoryKey(::StringW value);
    // static field const value: static private System.String kMessageTypeKey
    static constexpr const char* kMessageTypeKey = "MessageType";
    // Get static field: static private System.String kMessageTypeKey
    static ::StringW _get_kMessageTypeKey();
    // Set static field: static private System.String kMessageTypeKey
    static void _set_kMessageTypeKey(::StringW value);
    // static field const value: static private System.String kResultKey
    static constexpr const char* kResultKey = "Result";
    // Get static field: static private System.String kResultKey
    static ::StringW _get_kResultKey();
    // Set static field: static private System.String kResultKey
    static void _set_kResultKey(::StringW value);
    // static field const value: static private System.String kDeliveryTypeReliable
    static constexpr const char* kDeliveryTypeReliable = "Reliable";
    // Get static field: static private System.String kDeliveryTypeReliable
    static ::StringW _get_kDeliveryTypeReliable();
    // Set static field: static private System.String kDeliveryTypeReliable
    static void _set_kDeliveryTypeReliable(::StringW value);
    // static field const value: static private System.String kDeliveryTypeUnreliable
    static constexpr const char* kDeliveryTypeUnreliable = "Unreliable";
    // Get static field: static private System.String kDeliveryTypeUnreliable
    static ::StringW _get_kDeliveryTypeUnreliable();
    // Set static field: static private System.String kDeliveryTypeUnreliable
    static void _set_kDeliveryTypeUnreliable(::StringW value);
    // static field const value: static private System.String kMessageCategoryRequest
    static constexpr const char* kMessageCategoryRequest = "Request";
    // Get static field: static private System.String kMessageCategoryRequest
    static ::StringW _get_kMessageCategoryRequest();
    // Set static field: static private System.String kMessageCategoryRequest
    static void _set_kMessageCategoryRequest(::StringW value);
    // static field const value: static private System.String kMessageCategoryResponse
    static constexpr const char* kMessageCategoryResponse = "Response";
    // Get static field: static private System.String kMessageCategoryResponse
    static ::StringW _get_kMessageCategoryResponse();
    // Set static field: static private System.String kMessageCategoryResponse
    static void _set_kMessageCategoryResponse(::StringW value);
    // static field const value: static private System.String kMessageCategoryMessage
    static constexpr const char* kMessageCategoryMessage = "Message";
    // Get static field: static private System.String kMessageCategoryMessage
    static ::StringW _get_kMessageCategoryMessage();
    // Set static field: static private System.String kMessageCategoryMessage
    static void _set_kMessageCategoryMessage(::StringW value);
    // Get static field: static private readonly System.Collections.Generic.Dictionary`2<System.Type,System.String> _typeNameLookup
    static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::StringW>* _get__typeNameLookup();
    // Set static field: static private readonly System.Collections.Generic.Dictionary`2<System.Type,System.String> _typeNameLookup
    static void _set__typeNameLookup(::System::Collections::Generic::Dictionary_2<::System::Type*, ::StringW>* value);
    // Get static field: static private readonly System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Dictionary`2<System.Byte,System.String>> _responseCodeLookup
    static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::Dictionary_2<uint8_t, ::StringW>*>* _get__responseCodeLookup();
    // Set static field: static private readonly System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Dictionary`2<System.Byte,System.String>> _responseCodeLookup
    static void _set__responseCodeLookup(::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::Dictionary_2<uint8_t, ::StringW>*>* value);
    // static private System.Void .cctor()
    // Offset: 0x173A1C8
    static void _cctor();
    // static private System.String GetMessageName(BGNet.Core.Messages.IUnconnectedMessage message)
    // Offset: 0x1738DC4
    static ::StringW GetMessageName(::BGNet::Core::Messages::IUnconnectedMessage* message);
    // static private System.String GetResponseCodeName(BGNet.Core.Messages.IUnconnectedResponse response)
    // Offset: 0x1738F0C
    static ::StringW GetResponseCodeName(::BGNet::Core::Messages::IUnconnectedResponse* response);
    // static public System.Void ReceivedReliableRequestEvent(BGNet.Core.IAnalyticsManager analyticsManager, BGNet.Core.Messages.IUnconnectedReliableRequest request)
    // Offset: 0x17391CC
    static void ReceivedReliableRequestEvent(::BGNet::Core::IAnalyticsManager* analyticsManager, ::BGNet::Core::Messages::IUnconnectedReliableRequest* request);
    // static public System.Void SentReliableRequestEvent(BGNet.Core.IAnalyticsManager analyticsManager, BGNet.Core.Messages.IUnconnectedReliableRequest request)
    // Offset: 0x1739468
    static void SentReliableRequestEvent(::BGNet::Core::IAnalyticsManager* analyticsManager, ::BGNet::Core::Messages::IUnconnectedReliableRequest* request);
    // static public System.Void ReceivedReliableResponseEvent(BGNet.Core.IAnalyticsManager analyticsManager, BGNet.Core.Messages.IUnconnectedReliableResponse response)
    // Offset: 0x1739638
    static void ReceivedReliableResponseEvent(::BGNet::Core::IAnalyticsManager* analyticsManager, ::BGNet::Core::Messages::IUnconnectedReliableResponse* response);
    // static public System.Void SentReliableResponseEvent(BGNet.Core.IAnalyticsManager analyticsManager, BGNet.Core.Messages.IUnconnectedReliableResponse response)
    // Offset: 0x1739834
    static void SentReliableResponseEvent(::BGNet::Core::IAnalyticsManager* analyticsManager, ::BGNet::Core::Messages::IUnconnectedReliableResponse* response);
    // static public System.Void ReceivedUnreliableMessageEvent(BGNet.Core.IAnalyticsManager analyticsManager, BGNet.Core.Messages.IUnconnectedUnreliableMessage message)
    // Offset: 0x1739A30
    static void ReceivedUnreliableMessageEvent(::BGNet::Core::IAnalyticsManager* analyticsManager, ::BGNet::Core::Messages::IUnconnectedUnreliableMessage* message);
    // static public System.Void SentUnreliableMessageEvent(BGNet.Core.IAnalyticsManager analyticsManager, BGNet.Core.Messages.IUnconnectedUnreliableMessage message)
    // Offset: 0x1739C00
    static void SentUnreliableMessageEvent(::BGNet::Core::IAnalyticsManager* analyticsManager, ::BGNet::Core::Messages::IUnconnectedUnreliableMessage* message);
    // static public System.Void ReceivedUnreliableResponseEvent(BGNet.Core.IAnalyticsManager analyticsManager, BGNet.Core.Messages.IUnconnectedResponse response)
    // Offset: 0x1739DD0
    static void ReceivedUnreliableResponseEvent(::BGNet::Core::IAnalyticsManager* analyticsManager, ::BGNet::Core::Messages::IUnconnectedResponse* response);
    // static public System.Void SentUnreliableResponseEvent(BGNet.Core.IAnalyticsManager analyticsManager, BGNet.Core.Messages.IUnconnectedResponse response)
    // Offset: 0x1739FCC
    static void SentUnreliableResponseEvent(::BGNet::Core::IAnalyticsManager* analyticsManager, ::BGNet::Core::Messages::IUnconnectedResponse* response);
  }; // MessageHandlerAnalyticsManagerExtensions
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MessageHandlerAnalyticsManagerExtensions::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::MessageHandlerAnalyticsManagerExtensions::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MessageHandlerAnalyticsManagerExtensions*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MessageHandlerAnalyticsManagerExtensions::GetMessageName
// Il2CppName: GetMessageName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::BGNet::Core::Messages::IUnconnectedMessage*)>(&GlobalNamespace::MessageHandlerAnalyticsManagerExtensions::GetMessageName)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("BGNet.Core.Messages", "IUnconnectedMessage")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MessageHandlerAnalyticsManagerExtensions*), "GetMessageName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MessageHandlerAnalyticsManagerExtensions::GetResponseCodeName
// Il2CppName: GetResponseCodeName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::BGNet::Core::Messages::IUnconnectedResponse*)>(&GlobalNamespace::MessageHandlerAnalyticsManagerExtensions::GetResponseCodeName)> {
  static const MethodInfo* get() {
    static auto* response = &::il2cpp_utils::GetClassFromName("BGNet.Core.Messages", "IUnconnectedResponse")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MessageHandlerAnalyticsManagerExtensions*), "GetResponseCodeName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{response});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MessageHandlerAnalyticsManagerExtensions::ReceivedReliableRequestEvent
// Il2CppName: ReceivedReliableRequestEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::BGNet::Core::IAnalyticsManager*, ::BGNet::Core::Messages::IUnconnectedReliableRequest*)>(&GlobalNamespace::MessageHandlerAnalyticsManagerExtensions::ReceivedReliableRequestEvent)> {
  static const MethodInfo* get() {
    static auto* analyticsManager = &::il2cpp_utils::GetClassFromName("BGNet.Core", "IAnalyticsManager")->byval_arg;
    static auto* request = &::il2cpp_utils::GetClassFromName("BGNet.Core.Messages", "IUnconnectedReliableRequest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MessageHandlerAnalyticsManagerExtensions*), "ReceivedReliableRequestEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{analyticsManager, request});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MessageHandlerAnalyticsManagerExtensions::SentReliableRequestEvent
// Il2CppName: SentReliableRequestEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::BGNet::Core::IAnalyticsManager*, ::BGNet::Core::Messages::IUnconnectedReliableRequest*)>(&GlobalNamespace::MessageHandlerAnalyticsManagerExtensions::SentReliableRequestEvent)> {
  static const MethodInfo* get() {
    static auto* analyticsManager = &::il2cpp_utils::GetClassFromName("BGNet.Core", "IAnalyticsManager")->byval_arg;
    static auto* request = &::il2cpp_utils::GetClassFromName("BGNet.Core.Messages", "IUnconnectedReliableRequest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MessageHandlerAnalyticsManagerExtensions*), "SentReliableRequestEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{analyticsManager, request});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MessageHandlerAnalyticsManagerExtensions::ReceivedReliableResponseEvent
// Il2CppName: ReceivedReliableResponseEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::BGNet::Core::IAnalyticsManager*, ::BGNet::Core::Messages::IUnconnectedReliableResponse*)>(&GlobalNamespace::MessageHandlerAnalyticsManagerExtensions::ReceivedReliableResponseEvent)> {
  static const MethodInfo* get() {
    static auto* analyticsManager = &::il2cpp_utils::GetClassFromName("BGNet.Core", "IAnalyticsManager")->byval_arg;
    static auto* response = &::il2cpp_utils::GetClassFromName("BGNet.Core.Messages", "IUnconnectedReliableResponse")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MessageHandlerAnalyticsManagerExtensions*), "ReceivedReliableResponseEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{analyticsManager, response});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MessageHandlerAnalyticsManagerExtensions::SentReliableResponseEvent
// Il2CppName: SentReliableResponseEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::BGNet::Core::IAnalyticsManager*, ::BGNet::Core::Messages::IUnconnectedReliableResponse*)>(&GlobalNamespace::MessageHandlerAnalyticsManagerExtensions::SentReliableResponseEvent)> {
  static const MethodInfo* get() {
    static auto* analyticsManager = &::il2cpp_utils::GetClassFromName("BGNet.Core", "IAnalyticsManager")->byval_arg;
    static auto* response = &::il2cpp_utils::GetClassFromName("BGNet.Core.Messages", "IUnconnectedReliableResponse")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MessageHandlerAnalyticsManagerExtensions*), "SentReliableResponseEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{analyticsManager, response});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MessageHandlerAnalyticsManagerExtensions::ReceivedUnreliableMessageEvent
// Il2CppName: ReceivedUnreliableMessageEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::BGNet::Core::IAnalyticsManager*, ::BGNet::Core::Messages::IUnconnectedUnreliableMessage*)>(&GlobalNamespace::MessageHandlerAnalyticsManagerExtensions::ReceivedUnreliableMessageEvent)> {
  static const MethodInfo* get() {
    static auto* analyticsManager = &::il2cpp_utils::GetClassFromName("BGNet.Core", "IAnalyticsManager")->byval_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("BGNet.Core.Messages", "IUnconnectedUnreliableMessage")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MessageHandlerAnalyticsManagerExtensions*), "ReceivedUnreliableMessageEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{analyticsManager, message});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MessageHandlerAnalyticsManagerExtensions::SentUnreliableMessageEvent
// Il2CppName: SentUnreliableMessageEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::BGNet::Core::IAnalyticsManager*, ::BGNet::Core::Messages::IUnconnectedUnreliableMessage*)>(&GlobalNamespace::MessageHandlerAnalyticsManagerExtensions::SentUnreliableMessageEvent)> {
  static const MethodInfo* get() {
    static auto* analyticsManager = &::il2cpp_utils::GetClassFromName("BGNet.Core", "IAnalyticsManager")->byval_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("BGNet.Core.Messages", "IUnconnectedUnreliableMessage")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MessageHandlerAnalyticsManagerExtensions*), "SentUnreliableMessageEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{analyticsManager, message});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MessageHandlerAnalyticsManagerExtensions::ReceivedUnreliableResponseEvent
// Il2CppName: ReceivedUnreliableResponseEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::BGNet::Core::IAnalyticsManager*, ::BGNet::Core::Messages::IUnconnectedResponse*)>(&GlobalNamespace::MessageHandlerAnalyticsManagerExtensions::ReceivedUnreliableResponseEvent)> {
  static const MethodInfo* get() {
    static auto* analyticsManager = &::il2cpp_utils::GetClassFromName("BGNet.Core", "IAnalyticsManager")->byval_arg;
    static auto* response = &::il2cpp_utils::GetClassFromName("BGNet.Core.Messages", "IUnconnectedResponse")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MessageHandlerAnalyticsManagerExtensions*), "ReceivedUnreliableResponseEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{analyticsManager, response});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MessageHandlerAnalyticsManagerExtensions::SentUnreliableResponseEvent
// Il2CppName: SentUnreliableResponseEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::BGNet::Core::IAnalyticsManager*, ::BGNet::Core::Messages::IUnconnectedResponse*)>(&GlobalNamespace::MessageHandlerAnalyticsManagerExtensions::SentUnreliableResponseEvent)> {
  static const MethodInfo* get() {
    static auto* analyticsManager = &::il2cpp_utils::GetClassFromName("BGNet.Core", "IAnalyticsManager")->byval_arg;
    static auto* response = &::il2cpp_utils::GetClassFromName("BGNet.Core.Messages", "IUnconnectedResponse")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MessageHandlerAnalyticsManagerExtensions*), "SentUnreliableResponseEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{analyticsManager, response});
  }
};
