#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Collections {
class IDictionary;
}
namespace System {
class Type;
}
namespace System::Runtime::Remoting::Messaging {
class IMethodCallMessage;
}
namespace System::Runtime::Remoting::Messaging {
class LogicalCallContext;
}
namespace System::Runtime::Remoting::Messaging {
class IInternalMessage;
}
namespace System::Reflection {
class MethodBase;
}
namespace System::Runtime::Remoting::Messaging {
class ArgInfo;
}
namespace System::Runtime::Remoting::Messaging {
class CADMethodReturnMessage;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Remoting::Messaging {
class IMethodReturnMessage;
}
namespace System::Runtime::Remoting::Messaging {
class IMessage;
}
namespace System::Runtime::Remoting {
class Identity;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Remoting::Messaging {
class IMethodMessage;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
class MethodResponse;
}
// Type: System.Runtime.Remoting.Messaging::MethodResponse
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3174))
// CS Name: System.Runtime.Remoting.Messaging.MethodResponse
class CORDL_TYPE MethodResponse : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::Remoting::Messaging::IMethodReturnMessage
constexpr operator  ::System::Runtime::Remoting::Messaging::IMethodReturnMessage() const noexcept;

/// @brief Convert operator to ::System::Runtime::Remoting::Messaging::IMethodMessage
constexpr operator  ::System::Runtime::Remoting::Messaging::IMethodMessage() const noexcept;

/// @brief Convert operator to ::System::Runtime::Remoting::Messaging::IMessage
constexpr operator  ::System::Runtime::Remoting::Messaging::IMessage() const noexcept;

/// @brief Convert operator to ::System::Runtime::Serialization::ISerializable
constexpr operator  ::System::Runtime::Serialization::ISerializable() const noexcept;

/// @brief Convert operator to ::System::Runtime::Remoting::Messaging::IInternalMessage
constexpr operator  ::System::Runtime::Remoting::Messaging::IInternalMessage() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x88};

virtual ~MethodResponse() = default;

// Ctor Parameters [CppParam { name: "", ty: "MethodResponse", modifiers: " const&", def_value: None }]
constexpr MethodResponse(MethodResponse const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MethodResponse", modifiers: "&&", def_value: None }]
constexpr MethodResponse(MethodResponse&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MethodResponse(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MethodResponse& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MethodResponse& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MethodResponse& operator=(MethodResponse&& o) noexcept = default;
  constexpr MethodResponse& operator=(MethodResponse const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__methodName, put=__set__methodName))  _methodName;

constexpr void __set__methodName(::StringW value) ;

constexpr ::StringW __get__methodName() const;

 ::StringW __declspec(property(get=__get__uri, put=__set__uri))  _uri;

constexpr void __set__uri(::StringW value) ;

constexpr ::StringW __get__uri() const;

 ::StringW __declspec(property(get=__get__typeName, put=__set__typeName))  _typeName;

constexpr void __set__typeName(::StringW value) ;

constexpr ::StringW __get__typeName() const;

 ::System::Reflection::MethodBase __declspec(property(get=__get__methodBase, put=__set__methodBase))  _methodBase;

constexpr void __set__methodBase(::System::Reflection::MethodBase value) ;

constexpr ::System::Reflection::MethodBase __get__methodBase() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__returnValue, put=__set__returnValue))  _returnValue;

constexpr void __set__returnValue(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__returnValue() const;

 ::System::Exception __declspec(property(get=__get__exception, put=__set__exception))  _exception;

constexpr void __set__exception(::System::Exception value) ;

constexpr ::System::Exception __get__exception() const;

 ::ArrayW<::System::Type> __declspec(property(get=__get__methodSignature, put=__set__methodSignature))  _methodSignature;

constexpr void __set__methodSignature(::ArrayW<::System::Type> value) ;

constexpr ::ArrayW<::System::Type> __get__methodSignature() const;

 ::System::Runtime::Remoting::Messaging::ArgInfo __declspec(property(get=__get__inArgInfo, put=__set__inArgInfo))  _inArgInfo;

constexpr void __set__inArgInfo(::System::Runtime::Remoting::Messaging::ArgInfo value) ;

constexpr ::System::Runtime::Remoting::Messaging::ArgInfo __get__inArgInfo() const;

 ::ArrayW<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get__args, put=__set__args))  _args;

constexpr void __set__args(::ArrayW<::bs_hook::Il2CppWrapperType> value) ;

constexpr ::ArrayW<::bs_hook::Il2CppWrapperType> __get__args() const;

 ::ArrayW<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get__outArgs, put=__set__outArgs))  _outArgs;

constexpr void __set__outArgs(::ArrayW<::bs_hook::Il2CppWrapperType> value) ;

constexpr ::ArrayW<::bs_hook::Il2CppWrapperType> __get__outArgs() const;

 ::System::Runtime::Remoting::Messaging::IMethodCallMessage __declspec(property(get=__get__callMsg, put=__set__callMsg))  _callMsg;

constexpr void __set__callMsg(::System::Runtime::Remoting::Messaging::IMethodCallMessage value) ;

constexpr ::System::Runtime::Remoting::Messaging::IMethodCallMessage __get__callMsg() const;

 ::System::Runtime::Remoting::Messaging::LogicalCallContext __declspec(property(get=__get__callContext, put=__set__callContext))  _callContext;

constexpr void __set__callContext(::System::Runtime::Remoting::Messaging::LogicalCallContext value) ;

constexpr ::System::Runtime::Remoting::Messaging::LogicalCallContext __get__callContext() const;

 ::System::Runtime::Remoting::Identity __declspec(property(get=__get__targetIdentity, put=__set__targetIdentity))  _targetIdentity;

constexpr void __set__targetIdentity(::System::Runtime::Remoting::Identity value) ;

constexpr ::System::Runtime::Remoting::Identity __get__targetIdentity() const;

 ::System::Collections::IDictionary __declspec(property(get=__get_ExternalProperties, put=__set_ExternalProperties))  ExternalProperties;

constexpr void __set_ExternalProperties(::System::Collections::IDictionary value) ;

constexpr ::System::Collections::IDictionary __get_ExternalProperties() const;

 ::System::Collections::IDictionary __declspec(property(get=__get_InternalProperties, put=__set_InternalProperties))  InternalProperties;

constexpr void __set_InternalProperties(::System::Collections::IDictionary value) ;

constexpr ::System::Collections::IDictionary __get_InternalProperties() const;


// Properties

 int32_t __declspec(property(get=get_ArgCount))  ArgCount;

 ::ArrayW<::bs_hook::Il2CppWrapperType> __declspec(property(get=get_Args))  Args;

 ::System::Exception __declspec(property(get=get_Exception))  Exception;

 ::System::Runtime::Remoting::Messaging::LogicalCallContext __declspec(property(get=get_LogicalCallContext))  LogicalCallContext;

 ::System::Reflection::MethodBase __declspec(property(get=get_MethodBase))  MethodBase;

 ::StringW __declspec(property(get=get_MethodName))  MethodName;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_MethodSignature))  MethodSignature;

 ::ArrayW<::bs_hook::Il2CppWrapperType> __declspec(property(get=get_OutArgs))  OutArgs;

 ::System::Collections::IDictionary __declspec(property(get=get_Properties))  Properties;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_ReturnValue))  ReturnValue;

 ::StringW __declspec(property(get=get_TypeName))  TypeName;

 ::StringW __declspec(property(get=get_Uri, put=set_Uri))  Uri;

 ::StringW __declspec(property(get=System_Runtime_Remoting_Messaging_IInternalMessage_get_Uri, put=System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri))  System_Runtime_Remoting_Messaging_IInternalMessage_Uri;

 ::System::Runtime::Remoting::Identity __declspec(property(get=System_Runtime_Remoting_Messaging_IInternalMessage_get_TargetIdentity, put=System_Runtime_Remoting_Messaging_IInternalMessage_set_TargetIdentity))  System_Runtime_Remoting_Messaging_IInternalMessage_TargetIdentity;


// Methods

// Ctor Parameters [CppParam { name: "e", ty: "::System::Exception", modifiers: "", def_value: None }, CppParam { name: "msg", ty: "::System::Runtime::Remoting::Messaging::IMethodCallMessage", modifiers: "", def_value: None }]
explicit MethodResponse(::System::Exception e, ::System::Runtime::Remoting::Messaging::IMethodCallMessage msg) ;

/// @brief Method .ctor addr 0x23360ec size 0x114 virtual false final false
 void _ctor(::System::Exception e, ::System::Runtime::Remoting::Messaging::IMethodCallMessage msg) ;

// Ctor Parameters [CppParam { name: "returnValue", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "outArgs", ty: "::ArrayW<::bs_hook::Il2CppWrapperType>", modifiers: "", def_value: None }, CppParam { name: "callCtx", ty: "::System::Runtime::Remoting::Messaging::LogicalCallContext", modifiers: "", def_value: None }, CppParam { name: "msg", ty: "::System::Runtime::Remoting::Messaging::IMethodCallMessage", modifiers: "", def_value: None }]
explicit MethodResponse(::bs_hook::Il2CppWrapperType returnValue, ::ArrayW<::bs_hook::Il2CppWrapperType> outArgs, ::System::Runtime::Remoting::Messaging::LogicalCallContext callCtx, ::System::Runtime::Remoting::Messaging::IMethodCallMessage msg) ;

/// @brief Method .ctor addr 0x232d9c0 size 0xd4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType returnValue, ::ArrayW<::bs_hook::Il2CppWrapperType> outArgs, ::System::Runtime::Remoting::Messaging::LogicalCallContext callCtx, ::System::Runtime::Remoting::Messaging::IMethodCallMessage msg) ;

// Ctor Parameters [CppParam { name: "msg", ty: "::System::Runtime::Remoting::Messaging::IMethodCallMessage", modifiers: "", def_value: None }, CppParam { name: "retmsg", ty: "::System::Runtime::Remoting::Messaging::CADMethodReturnMessage", modifiers: "", def_value: None }]
explicit MethodResponse(::System::Runtime::Remoting::Messaging::IMethodCallMessage msg, ::System::Runtime::Remoting::Messaging::CADMethodReturnMessage retmsg) ;

/// @brief Method .ctor addr 0x23377b4 size 0x244 virtual false final false
 void _ctor(::System::Runtime::Remoting::Messaging::IMethodCallMessage msg, ::System::Runtime::Remoting::Messaging::CADMethodReturnMessage retmsg) ;

// Ctor Parameters [CppParam { name: "info", ty: "::System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "::System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit MethodResponse(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x234109c size 0x78 virtual false final false
 void _ctor(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method InitMethodProperty addr 0x2343c18 size 0x4a8 virtual false final false
 void InitMethodProperty(::StringW key, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method get_ArgCount addr 0x23440c0 size 0x18 virtual true final true
 int32_t get_ArgCount() ;

/// @brief Method get_Args addr 0x23440d8 size 0x8 virtual true final true
 ::ArrayW<::bs_hook::Il2CppWrapperType> get_Args() ;

/// @brief Method get_Exception addr 0x23440e0 size 0x8 virtual true final true
 ::System::Exception get_Exception() ;

/// @brief Method get_LogicalCallContext addr 0x23440e8 size 0x6c virtual true final true
 ::System::Runtime::Remoting::Messaging::LogicalCallContext get_LogicalCallContext() ;

/// @brief Method get_MethodBase addr 0x2344154 size 0x10c virtual true final true
 ::System::Reflection::MethodBase get_MethodBase() ;

/// @brief Method get_MethodName addr 0x2344260 size 0xb8 virtual true final true
 ::StringW get_MethodName() ;

/// @brief Method get_MethodSignature addr 0x23443d0 size 0x114 virtual true final true
 ::bs_hook::Il2CppWrapperType get_MethodSignature() ;

/// @brief Method get_OutArgs addr 0x23444e4 size 0xa4 virtual true final true
 ::ArrayW<::bs_hook::Il2CppWrapperType> get_OutArgs() ;

/// @brief Method get_Properties addr 0x2341118 size 0x94 virtual true final false
 ::System::Collections::IDictionary get_Properties() ;

/// @brief Method get_ReturnValue addr 0x2344684 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType get_ReturnValue() ;

/// @brief Method get_TypeName addr 0x2344318 size 0xb8 virtual true final true
 ::StringW get_TypeName() ;

/// @brief Method get_Uri addr 0x234468c size 0xb8 virtual true final true
 ::StringW get_Uri() ;

/// @brief Method set_Uri addr 0x2344744 size 0x8 virtual false final false
 void set_Uri(::StringW value) ;

/// @brief Method System.Runtime.Remoting.Messaging.IInternalMessage.get_Uri addr 0x234474c size 0x4 virtual true final true
 ::StringW System_Runtime_Remoting_Messaging_IInternalMessage_get_Uri() ;

/// @brief Method System.Runtime.Remoting.Messaging.IInternalMessage.set_Uri addr 0x2344750 size 0x8 virtual true final true
 void System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri(::StringW value) ;

/// @brief Method GetArg addr 0x2344758 size 0x34 virtual true final true
 ::bs_hook::Il2CppWrapperType GetArg(int32_t argNum) ;

/// @brief Method GetObjectData addr 0x234478c size 0x4b0 virtual true final false
 void GetObjectData(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method System.Runtime.Remoting.Messaging.IInternalMessage.get_TargetIdentity addr 0x2344c3c size 0x8 virtual true final true
 ::System::Runtime::Remoting::Identity System_Runtime_Remoting_Messaging_IInternalMessage_get_TargetIdentity() ;

/// @brief Method System.Runtime.Remoting.Messaging.IInternalMessage.set_TargetIdentity addr 0x2344c44 size 0x8 virtual true final true
 void System_Runtime_Remoting_Messaging_IInternalMessage_set_TargetIdentity(::System::Runtime::Remoting::Identity value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Messaging
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::MethodResponse);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::MethodResponse, "System.Runtime.Remoting.Messaging", "MethodResponse");
