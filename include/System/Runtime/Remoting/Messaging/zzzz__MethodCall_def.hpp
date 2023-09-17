#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Runtime::Remoting::Messaging {
class IMethodMessage;
}
namespace System::Runtime::Remoting::Messaging {
class LogicalCallContext;
}
namespace System::Runtime::Remoting {
class Identity;
}
namespace System::Runtime::Remoting::Messaging {
class IMessage;
}
namespace System::Runtime::Remoting::Messaging {
class CADMethodCallMessage;
}
namespace System::Runtime::Remoting::Messaging {
class IMethodCallMessage;
}
namespace System::Reflection {
class MethodBase;
}
namespace System::Collections {
class IDictionary;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Remoting::Messaging {
class IInternalMessage;
}
namespace System {
class Type;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
class MethodCall;
}
// Type: System.Runtime.Remoting.Messaging::MethodCall
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3170))
// CS Name: System.Runtime.Remoting.Messaging.MethodCall
class CORDL_TYPE MethodCall : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::Remoting::Messaging::IMethodCallMessage
constexpr operator  ::System::Runtime::Remoting::Messaging::IMethodCallMessage() const noexcept;

/// @brief Convert operator to ::System::Runtime::Remoting::Messaging::IMethodMessage
constexpr operator  ::System::Runtime::Remoting::Messaging::IMethodMessage() const noexcept;

/// @brief Convert operator to ::System::Runtime::Remoting::Messaging::IMessage
constexpr operator  ::System::Runtime::Remoting::Messaging::IMessage() const noexcept;

/// @brief Convert operator to ::System::Runtime::Serialization::ISerializable
constexpr operator  ::System::Runtime::Serialization::ISerializable() const noexcept;

/// @brief Convert operator to ::System::Runtime::Remoting::Messaging::IInternalMessage
constexpr operator  ::System::Runtime::Remoting::Messaging::IInternalMessage() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~MethodCall() = default;

// Ctor Parameters [CppParam { name: "", ty: "MethodCall", modifiers: " const&", def_value: None }]
constexpr MethodCall(MethodCall const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MethodCall", modifiers: "&&", def_value: None }]
constexpr MethodCall(MethodCall&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MethodCall(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MethodCall& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MethodCall& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MethodCall& operator=(MethodCall&& o) noexcept = default;
  constexpr MethodCall& operator=(MethodCall const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__uri, put=__set__uri))  _uri;

constexpr void __set__uri(::StringW value) ;

constexpr ::StringW __get__uri() const;

 ::StringW __declspec(property(get=__get__typeName, put=__set__typeName))  _typeName;

constexpr void __set__typeName(::StringW value) ;

constexpr ::StringW __get__typeName() const;

 ::StringW __declspec(property(get=__get__methodName, put=__set__methodName))  _methodName;

constexpr void __set__methodName(::StringW value) ;

constexpr ::StringW __get__methodName() const;

 ::ArrayW<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get__args, put=__set__args))  _args;

constexpr void __set__args(::ArrayW<::bs_hook::Il2CppWrapperType> value) ;

constexpr ::ArrayW<::bs_hook::Il2CppWrapperType> __get__args() const;

 ::ArrayW<::System::Type> __declspec(property(get=__get__methodSignature, put=__set__methodSignature))  _methodSignature;

constexpr void __set__methodSignature(::ArrayW<::System::Type> value) ;

constexpr ::ArrayW<::System::Type> __get__methodSignature() const;

 ::System::Reflection::MethodBase __declspec(property(get=__get__methodBase, put=__set__methodBase))  _methodBase;

constexpr void __set__methodBase(::System::Reflection::MethodBase value) ;

constexpr ::System::Reflection::MethodBase __get__methodBase() const;

 ::System::Runtime::Remoting::Messaging::LogicalCallContext __declspec(property(get=__get__callContext, put=__set__callContext))  _callContext;

constexpr void __set__callContext(::System::Runtime::Remoting::Messaging::LogicalCallContext value) ;

constexpr ::System::Runtime::Remoting::Messaging::LogicalCallContext __get__callContext() const;

 ::System::Runtime::Remoting::Identity __declspec(property(get=__get__targetIdentity, put=__set__targetIdentity))  _targetIdentity;

constexpr void __set__targetIdentity(::System::Runtime::Remoting::Identity value) ;

constexpr ::System::Runtime::Remoting::Identity __get__targetIdentity() const;

 ::ArrayW<::System::Type> __declspec(property(get=__get__genericArguments, put=__set__genericArguments))  _genericArguments;

constexpr void __set__genericArguments(::ArrayW<::System::Type> value) ;

constexpr ::ArrayW<::System::Type> __get__genericArguments() const;

 ::System::Collections::IDictionary __declspec(property(get=__get_ExternalProperties, put=__set_ExternalProperties))  ExternalProperties;

constexpr void __set_ExternalProperties(::System::Collections::IDictionary value) ;

constexpr ::System::Collections::IDictionary __get_ExternalProperties() const;

 ::System::Collections::IDictionary __declspec(property(get=__get_InternalProperties, put=__set_InternalProperties))  InternalProperties;

constexpr void __set_InternalProperties(::System::Collections::IDictionary value) ;

constexpr ::System::Collections::IDictionary __get_InternalProperties() const;


// Properties

 int32_t __declspec(property(get=get_ArgCount))  ArgCount;

 ::ArrayW<::bs_hook::Il2CppWrapperType> __declspec(property(get=get_Args))  Args;

 ::System::Runtime::Remoting::Messaging::LogicalCallContext __declspec(property(get=get_LogicalCallContext))  LogicalCallContext;

 ::System::Reflection::MethodBase __declspec(property(get=get_MethodBase))  MethodBase;

 ::StringW __declspec(property(get=get_MethodName))  MethodName;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_MethodSignature))  MethodSignature;

 ::System::Collections::IDictionary __declspec(property(get=get_Properties))  Properties;

 ::StringW __declspec(property(get=get_TypeName))  TypeName;

 ::StringW __declspec(property(get=get_Uri, put=set_Uri))  Uri;

 ::StringW __declspec(property(get=System_Runtime_Remoting_Messaging_IInternalMessage_get_Uri, put=System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri))  System_Runtime_Remoting_Messaging_IInternalMessage_Uri;

 ::System::Runtime::Remoting::Identity __declspec(property(get=System_Runtime_Remoting_Messaging_IInternalMessage_get_TargetIdentity, put=System_Runtime_Remoting_Messaging_IInternalMessage_set_TargetIdentity))  System_Runtime_Remoting_Messaging_IInternalMessage_TargetIdentity;

 ::ArrayW<::System::Type> __declspec(property(get=get_GenericArguments))  GenericArguments;


// Methods

// Ctor Parameters [CppParam { name: "info", ty: "::System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "::System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit MethodCall(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x233ee5c size 0x98 virtual false final false
 void _ctor(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

// Ctor Parameters [CppParam { name: "msg", ty: "::System::Runtime::Remoting::Messaging::CADMethodCallMessage", modifiers: "", def_value: None }]
explicit MethodCall(::System::Runtime::Remoting::Messaging::CADMethodCallMessage msg) ;

/// @brief Method .ctor addr 0x234158c size 0x114 virtual false final false
 void _ctor(::System::Runtime::Remoting::Messaging::CADMethodCallMessage msg) ;

// Ctor Parameters []
explicit MethodCall() ;

/// @brief Method .ctor addr 0x233ee50 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method CopyFrom addr 0x232df90 size 0x35c virtual false final false
 void CopyFrom(::System::Runtime::Remoting::Messaging::IMethodMessage call) ;

/// @brief Method InitMethodProperty addr 0x233f444 size 0x41c virtual true final false
 void InitMethodProperty(::StringW key, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method GetObjectData addr 0x233f9f8 size 0x490 virtual true final false
 void GetObjectData(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method get_ArgCount addr 0x23416a0 size 0x1c virtual true final true
 int32_t get_ArgCount() ;

/// @brief Method get_Args addr 0x23416bc size 0x8 virtual true final true
 ::ArrayW<::bs_hook::Il2CppWrapperType> get_Args() ;

/// @brief Method get_LogicalCallContext addr 0x23416c4 size 0x6c virtual true final true
 ::System::Runtime::Remoting::Messaging::LogicalCallContext get_LogicalCallContext() ;

/// @brief Method get_MethodBase addr 0x2341730 size 0x30 virtual true final true
 ::System::Reflection::MethodBase get_MethodBase() ;

/// @brief Method get_MethodName addr 0x2341d74 size 0x34 virtual true final true
 ::StringW get_MethodName() ;

/// @brief Method get_MethodSignature addr 0x2341da8 size 0x12c virtual true final true
 ::bs_hook::Il2CppWrapperType get_MethodSignature() ;

/// @brief Method get_Properties addr 0x233feb8 size 0x30 virtual true final false
 ::System::Collections::IDictionary get_Properties() ;

/// @brief Method InitDictionary addr 0x2341ed4 size 0x84 virtual true final false
 void InitDictionary() ;

/// @brief Method get_TypeName addr 0x2341fd4 size 0x48 virtual true final true
 ::StringW get_TypeName() ;

/// @brief Method get_Uri addr 0x234201c size 0x8 virtual true final true
 ::StringW get_Uri() ;

/// @brief Method set_Uri addr 0x2342024 size 0x8 virtual false final false
 void set_Uri(::StringW value) ;

/// @brief Method System.Runtime.Remoting.Messaging.IInternalMessage.get_Uri addr 0x234202c size 0x8 virtual true final true
 ::StringW System_Runtime_Remoting_Messaging_IInternalMessage_get_Uri() ;

/// @brief Method System.Runtime.Remoting.Messaging.IInternalMessage.set_Uri addr 0x2342034 size 0x8 virtual true final true
 void System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri(::StringW value) ;

/// @brief Method GetArg addr 0x234203c size 0x30 virtual true final true
 ::bs_hook::Il2CppWrapperType GetArg(int32_t argNum) ;

/// @brief Method Init addr 0x234206c size 0x4 virtual true final false
 void Init() ;

/// @brief Method ResolveMethod addr 0x2341760 size 0x614 virtual false final false
 void ResolveMethod() ;

/// @brief Method CastTo addr 0x2342070 size 0x190 virtual false final false
 ::System::Type CastTo(::StringW clientType, ::System::Type serverType) ;

/// @brief Method GetTypeNameFromAssemblyQualifiedName addr 0x234223c size 0xa8 virtual false final false
static ::StringW GetTypeNameFromAssemblyQualifiedName(::StringW aqname) ;

/// @brief Method System.Runtime.Remoting.Messaging.IInternalMessage.get_TargetIdentity addr 0x23422e4 size 0x8 virtual true final true
 ::System::Runtime::Remoting::Identity System_Runtime_Remoting_Messaging_IInternalMessage_get_TargetIdentity() ;

/// @brief Method System.Runtime.Remoting.Messaging.IInternalMessage.set_TargetIdentity addr 0x23422ec size 0x8 virtual true final true
 void System_Runtime_Remoting_Messaging_IInternalMessage_set_TargetIdentity(::System::Runtime::Remoting::Identity value) ;

/// @brief Method get_GenericArguments addr 0x2342200 size 0x3c virtual false final false
 ::ArrayW<::System::Type> get_GenericArguments() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Messaging
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::MethodCall);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::MethodCall, "System.Runtime.Remoting.Messaging", "MethodCall");
