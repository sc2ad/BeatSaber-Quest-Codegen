#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Collections {
class IDictionary;
}
namespace System {
class Type;
}
namespace System::Runtime::Remoting::Messaging {
class IMethodCallMessage;
}
namespace System {
class Exception;
}
namespace System::Runtime::Remoting::Messaging {
class IMethodMessage;
}
namespace System::Runtime::Remoting::Messaging {
class IMessage;
}
namespace System::Runtime::Remoting::Messaging {
class IInternalMessage;
}
namespace System::Runtime::Remoting::Messaging {
class LogicalCallContext;
}
namespace System::Runtime::Remoting::Messaging {
class IMethodReturnMessage;
}
namespace System::Reflection {
class MethodBase;
}
namespace System::Runtime::Remoting {
class Identity;
}
namespace System::Runtime::Remoting::Messaging {
class MethodReturnDictionary;
}
namespace System::Runtime::Remoting::Messaging {
class ArgInfo;
}
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
class ReturnMessage;
}
// Type: System.Runtime.Remoting.Messaging::ReturnMessage
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3182))
// CS Name: System.Runtime.Remoting.Messaging.ReturnMessage
class CORDL_TYPE ReturnMessage : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Runtime::Remoting::Messaging::IMethodReturnMessage
constexpr operator  System::Runtime::Remoting::Messaging::IMethodReturnMessage() const noexcept;

/// @brief Convert operator to System::Runtime::Remoting::Messaging::IMethodMessage
constexpr operator  System::Runtime::Remoting::Messaging::IMethodMessage() const noexcept;

/// @brief Convert operator to System::Runtime::Remoting::Messaging::IMessage
constexpr operator  System::Runtime::Remoting::Messaging::IMessage() const noexcept;

/// @brief Convert operator to System::Runtime::Remoting::Messaging::IInternalMessage
constexpr operator  System::Runtime::Remoting::Messaging::IInternalMessage() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x78};

virtual ~ReturnMessage() = default;

// Ctor Parameters [CppParam { name: "", ty: "ReturnMessage", modifiers: " const&", def_value: None }]
constexpr ReturnMessage(ReturnMessage const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ReturnMessage", modifiers: "&&", def_value: None }]
constexpr ReturnMessage(ReturnMessage&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ReturnMessage(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ReturnMessage& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ReturnMessage& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ReturnMessage& operator=(ReturnMessage&& o) noexcept = default;
  constexpr ReturnMessage& operator=(ReturnMessage const& o) noexcept = default;
                


// Fields

 ::ArrayW<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get__outArgs, put=__set__outArgs))  _outArgs;

constexpr void __set__outArgs(::ArrayW<::bs_hook::Il2CppWrapperType> value) ;

constexpr ::ArrayW<::bs_hook::Il2CppWrapperType> __get__outArgs() const;

 ::ArrayW<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get__args, put=__set__args))  _args;

constexpr void __set__args(::ArrayW<::bs_hook::Il2CppWrapperType> value) ;

constexpr ::ArrayW<::bs_hook::Il2CppWrapperType> __get__args() const;

 System::Runtime::Remoting::Messaging::LogicalCallContext __declspec(property(get=__get__callCtx, put=__set__callCtx))  _callCtx;

constexpr void __set__callCtx(System::Runtime::Remoting::Messaging::LogicalCallContext value) ;

constexpr System::Runtime::Remoting::Messaging::LogicalCallContext __get__callCtx() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__returnValue, put=__set__returnValue))  _returnValue;

constexpr void __set__returnValue(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__returnValue() const;

 ::StringW __declspec(property(get=__get__uri, put=__set__uri))  _uri;

constexpr void __set__uri(::StringW value) ;

constexpr ::StringW __get__uri() const;

 System::Exception __declspec(property(get=__get__exception, put=__set__exception))  _exception;

constexpr void __set__exception(System::Exception value) ;

constexpr System::Exception __get__exception() const;

 System::Reflection::MethodBase __declspec(property(get=__get__methodBase, put=__set__methodBase))  _methodBase;

constexpr void __set__methodBase(System::Reflection::MethodBase value) ;

constexpr System::Reflection::MethodBase __get__methodBase() const;

 ::StringW __declspec(property(get=__get__methodName, put=__set__methodName))  _methodName;

constexpr void __set__methodName(::StringW value) ;

constexpr ::StringW __get__methodName() const;

 ::ArrayW<System::Type> __declspec(property(get=__get__methodSignature, put=__set__methodSignature))  _methodSignature;

constexpr void __set__methodSignature(::ArrayW<System::Type> value) ;

constexpr ::ArrayW<System::Type> __get__methodSignature() const;

 ::StringW __declspec(property(get=__get__typeName, put=__set__typeName))  _typeName;

constexpr void __set__typeName(::StringW value) ;

constexpr ::StringW __get__typeName() const;

 System::Runtime::Remoting::Messaging::MethodReturnDictionary __declspec(property(get=__get__properties, put=__set__properties))  _properties;

constexpr void __set__properties(System::Runtime::Remoting::Messaging::MethodReturnDictionary value) ;

constexpr System::Runtime::Remoting::Messaging::MethodReturnDictionary __get__properties() const;

 System::Runtime::Remoting::Identity __declspec(property(get=__get__targetIdentity, put=__set__targetIdentity))  _targetIdentity;

constexpr void __set__targetIdentity(System::Runtime::Remoting::Identity value) ;

constexpr System::Runtime::Remoting::Identity __get__targetIdentity() const;

 System::Runtime::Remoting::Messaging::ArgInfo __declspec(property(get=__get__inArgInfo, put=__set__inArgInfo))  _inArgInfo;

constexpr void __set__inArgInfo(System::Runtime::Remoting::Messaging::ArgInfo value) ;

constexpr System::Runtime::Remoting::Messaging::ArgInfo __get__inArgInfo() const;


// Properties

 int32_t __declspec(property(get=get_ArgCount))  ArgCount;

 ::ArrayW<::bs_hook::Il2CppWrapperType> __declspec(property(get=get_Args))  Args;

 System::Runtime::Remoting::Messaging::LogicalCallContext __declspec(property(get=get_LogicalCallContext))  LogicalCallContext;

 System::Reflection::MethodBase __declspec(property(get=get_MethodBase))  MethodBase;

 ::StringW __declspec(property(get=get_MethodName))  MethodName;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_MethodSignature))  MethodSignature;

 System::Collections::IDictionary __declspec(property(get=get_Properties))  Properties;

 ::StringW __declspec(property(get=get_TypeName))  TypeName;

 ::StringW __declspec(property(get=get_Uri, put=set_Uri))  Uri;

 ::StringW __declspec(property(get=System_Runtime_Remoting_Messaging_IInternalMessage_get_Uri, put=System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri))  System_Runtime_Remoting_Messaging_IInternalMessage_Uri;

 System::Exception __declspec(property(get=get_Exception))  Exception;

 ::ArrayW<::bs_hook::Il2CppWrapperType> __declspec(property(get=get_OutArgs))  OutArgs;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_ReturnValue))  ReturnValue;

 System::Runtime::Remoting::Identity __declspec(property(get=System_Runtime_Remoting_Messaging_IInternalMessage_get_TargetIdentity, put=System_Runtime_Remoting_Messaging_IInternalMessage_set_TargetIdentity))  System_Runtime_Remoting_Messaging_IInternalMessage_TargetIdentity;


// Methods

static System::Runtime::Remoting::Messaging::ReturnMessage New_ctor(::bs_hook::Il2CppWrapperType ret, ::ArrayW<::bs_hook::Il2CppWrapperType> outArgs, int32_t outArgsCount, System::Runtime::Remoting::Messaging::LogicalCallContext callCtx, System::Runtime::Remoting::Messaging::IMethodCallMessage mcm) ;

/// @brief Method .ctor addr 0x232bb94 size 0x168 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType ret, ::ArrayW<::bs_hook::Il2CppWrapperType> outArgs, int32_t outArgsCount, System::Runtime::Remoting::Messaging::LogicalCallContext callCtx, System::Runtime::Remoting::Messaging::IMethodCallMessage mcm) ;

static System::Runtime::Remoting::Messaging::ReturnMessage New_ctor(System::Exception e, System::Runtime::Remoting::Messaging::IMethodCallMessage mcm) ;

/// @brief Method .ctor addr 0x232ba4c size 0x148 virtual false final false
 void _ctor(System::Exception e, System::Runtime::Remoting::Messaging::IMethodCallMessage mcm) ;

/// @brief Method get_ArgCount addr 0x2345d40 size 0x1c virtual true final true
 int32_t get_ArgCount() ;

/// @brief Method get_Args addr 0x2345d5c size 0x8 virtual true final true
 ::ArrayW<::bs_hook::Il2CppWrapperType> get_Args() ;

/// @brief Method get_LogicalCallContext addr 0x2345d64 size 0x6c virtual true final true
 System::Runtime::Remoting::Messaging::LogicalCallContext get_LogicalCallContext() ;

/// @brief Method get_MethodBase addr 0x2345dd0 size 0x8 virtual true final true
 System::Reflection::MethodBase get_MethodBase() ;

/// @brief Method get_MethodName addr 0x2345dd8 size 0x50 virtual true final true
 ::StringW get_MethodName() ;

/// @brief Method get_MethodSignature addr 0x2345e28 size 0x12c virtual true final true
 ::bs_hook::Il2CppWrapperType get_MethodSignature() ;

/// @brief Method get_Properties addr 0x2345f54 size 0x6c virtual true final false
 System::Collections::IDictionary get_Properties() ;

/// @brief Method get_TypeName addr 0x2345fc0 size 0x64 virtual true final true
 ::StringW get_TypeName() ;

/// @brief Method get_Uri addr 0x2346024 size 0x8 virtual true final true
 ::StringW get_Uri() ;

/// @brief Method set_Uri addr 0x234602c size 0x8 virtual false final false
 void set_Uri(::StringW value) ;

/// @brief Method System.Runtime.Remoting.Messaging.IInternalMessage.get_Uri addr 0x2346034 size 0x8 virtual true final true
 ::StringW System_Runtime_Remoting_Messaging_IInternalMessage_get_Uri() ;

/// @brief Method System.Runtime.Remoting.Messaging.IInternalMessage.set_Uri addr 0x234603c size 0x8 virtual true final true
 void System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri(::StringW value) ;

/// @brief Method GetArg addr 0x2346044 size 0x30 virtual true final true
 ::bs_hook::Il2CppWrapperType GetArg(int32_t argNum) ;

/// @brief Method get_Exception addr 0x2346074 size 0x8 virtual true final true
 System::Exception get_Exception() ;

/// @brief Method get_OutArgs addr 0x234607c size 0x98 virtual true final true
 ::ArrayW<::bs_hook::Il2CppWrapperType> get_OutArgs() ;

/// @brief Method get_ReturnValue addr 0x2346114 size 0x8 virtual true final false
 ::bs_hook::Il2CppWrapperType get_ReturnValue() ;

/// @brief Method System.Runtime.Remoting.Messaging.IInternalMessage.get_TargetIdentity addr 0x234611c size 0x8 virtual true final true
 System::Runtime::Remoting::Identity System_Runtime_Remoting_Messaging_IInternalMessage_get_TargetIdentity() ;

/// @brief Method System.Runtime.Remoting.Messaging.IInternalMessage.set_TargetIdentity addr 0x2346124 size 0x1008 virtual true final true
 void System_Runtime_Remoting_Messaging_IInternalMessage_set_TargetIdentity(System::Runtime::Remoting::Identity value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Messaging
NEED_NO_BOX(System::Runtime::Remoting::Messaging::ReturnMessage);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Messaging::ReturnMessage, "System.Runtime.Remoting.Messaging", "ReturnMessage");
