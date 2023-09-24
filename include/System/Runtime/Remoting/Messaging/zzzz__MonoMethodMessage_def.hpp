#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Runtime::Remoting::Messaging {
class IMethodCallMessage;
}
namespace System::Runtime::Remoting::Messaging {
class IInternalMessage;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System::Runtime::Remoting::Messaging {
class IMessage;
}
namespace System::Runtime::Remoting::Messaging {
class IMethodReturnMessage;
}
namespace System::Runtime::Remoting::Messaging {
class LogicalCallContext;
}
namespace System::Reflection {
class RuntimeMethodInfo;
}
namespace System {
class Exception;
}
namespace System::Runtime::Remoting::Messaging {
struct CallType;
}
namespace System::Runtime::Remoting::Messaging {
class MCMDictionary;
}
namespace System {
class Type;
}
namespace System::Runtime::Remoting::Messaging {
class IMethodMessage;
}
namespace System::Runtime::Remoting::Messaging {
class AsyncResult;
}
namespace System::Runtime::Remoting {
class Identity;
}
namespace System::Reflection {
class MethodBase;
}
namespace System::Collections {
class IDictionary;
}
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
class MonoMethodMessage;
}
// Type: System.Runtime.Remoting.Messaging::MonoMethodMessage
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3176))
// CS Name: System.Runtime.Remoting.Messaging.MonoMethodMessage
class CORDL_TYPE MonoMethodMessage : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Runtime::Remoting::Messaging::IMethodCallMessage
constexpr operator  System::Runtime::Remoting::Messaging::IMethodCallMessage() const noexcept;

/// @brief Convert operator to System::Runtime::Remoting::Messaging::IMethodMessage
constexpr operator  System::Runtime::Remoting::Messaging::IMethodMessage() const noexcept;

/// @brief Convert operator to System::Runtime::Remoting::Messaging::IMessage
constexpr operator  System::Runtime::Remoting::Messaging::IMessage() const noexcept;

/// @brief Convert operator to System::Runtime::Remoting::Messaging::IMethodReturnMessage
constexpr operator  System::Runtime::Remoting::Messaging::IMethodReturnMessage() const noexcept;

/// @brief Convert operator to System::Runtime::Remoting::Messaging::IInternalMessage
constexpr operator  System::Runtime::Remoting::Messaging::IInternalMessage() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x78};

virtual ~MonoMethodMessage() = default;

// Ctor Parameters [CppParam { name: "", ty: "MonoMethodMessage", modifiers: " const&", def_value: None }]
constexpr MonoMethodMessage(MonoMethodMessage const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MonoMethodMessage", modifiers: "&&", def_value: None }]
constexpr MonoMethodMessage(MonoMethodMessage&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MonoMethodMessage(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MonoMethodMessage& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MonoMethodMessage& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MonoMethodMessage& operator=(MonoMethodMessage&& o) noexcept = default;
  constexpr MonoMethodMessage& operator=(MonoMethodMessage const& o) noexcept = default;
                


// Fields

 System::Reflection::RuntimeMethodInfo __declspec(property(get=__get_method, put=__set_method))  method;

constexpr void __set_method(System::Reflection::RuntimeMethodInfo value) ;

constexpr System::Reflection::RuntimeMethodInfo __get_method() const;

 ::ArrayW<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get_args, put=__set_args))  args;

constexpr void __set_args(::ArrayW<::bs_hook::Il2CppWrapperType> value) ;

constexpr ::ArrayW<::bs_hook::Il2CppWrapperType> __get_args() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_names, put=__set_names))  names;

constexpr void __set_names(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_names() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_arg_types, put=__set_arg_types))  arg_types;

constexpr void __set_arg_types(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_arg_types() const;

 System::Runtime::Remoting::Messaging::LogicalCallContext __declspec(property(get=__get_ctx, put=__set_ctx))  ctx;

constexpr void __set_ctx(System::Runtime::Remoting::Messaging::LogicalCallContext value) ;

constexpr System::Runtime::Remoting::Messaging::LogicalCallContext __get_ctx() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_rval, put=__set_rval))  rval;

constexpr void __set_rval(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_rval() const;

 System::Exception __declspec(property(get=__get_exc, put=__set_exc))  exc;

constexpr void __set_exc(System::Exception value) ;

constexpr System::Exception __get_exc() const;

 System::Runtime::Remoting::Messaging::AsyncResult __declspec(property(get=__get_asyncResult, put=__set_asyncResult))  asyncResult;

constexpr void __set_asyncResult(System::Runtime::Remoting::Messaging::AsyncResult value) ;

constexpr System::Runtime::Remoting::Messaging::AsyncResult __get_asyncResult() const;

 System::Runtime::Remoting::Messaging::CallType __declspec(property(get=__get_call_type, put=__set_call_type))  call_type;

constexpr void __set_call_type(System::Runtime::Remoting::Messaging::CallType value) ;

constexpr System::Runtime::Remoting::Messaging::CallType __get_call_type() const;

 ::StringW __declspec(property(get=__get_uri, put=__set_uri))  uri;

constexpr void __set_uri(::StringW value) ;

constexpr ::StringW __get_uri() const;

 System::Runtime::Remoting::Messaging::MCMDictionary __declspec(property(get=__get_properties, put=__set_properties))  properties;

constexpr void __set_properties(System::Runtime::Remoting::Messaging::MCMDictionary value) ;

constexpr System::Runtime::Remoting::Messaging::MCMDictionary __get_properties() const;

 System::Runtime::Remoting::Identity __declspec(property(get=__get_identity, put=__set_identity))  identity;

constexpr void __set_identity(System::Runtime::Remoting::Identity value) ;

constexpr System::Runtime::Remoting::Identity __get_identity() const;

 ::ArrayW<System::Type> __declspec(property(get=__get_methodSignature, put=__set_methodSignature))  methodSignature;

constexpr void __set_methodSignature(::ArrayW<System::Type> value) ;

constexpr ::ArrayW<System::Type> __get_methodSignature() const;


// Properties

 System::Collections::IDictionary __declspec(property(get=get_Properties))  Properties;

 int32_t __declspec(property(get=get_ArgCount))  ArgCount;

 ::ArrayW<::bs_hook::Il2CppWrapperType> __declspec(property(get=get_Args))  Args;

 System::Runtime::Remoting::Messaging::LogicalCallContext __declspec(property(get=get_LogicalCallContext, put=set_LogicalCallContext))  LogicalCallContext;

 System::Reflection::MethodBase __declspec(property(get=get_MethodBase))  MethodBase;

 ::StringW __declspec(property(get=get_MethodName))  MethodName;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_MethodSignature))  MethodSignature;

 ::StringW __declspec(property(get=get_TypeName))  TypeName;

 ::StringW __declspec(property(get=get_Uri, put=set_Uri))  Uri;

 System::Exception __declspec(property(get=get_Exception))  Exception;

 int32_t __declspec(property(get=get_OutArgCount))  OutArgCount;

 ::ArrayW<::bs_hook::Il2CppWrapperType> __declspec(property(get=get_OutArgs))  OutArgs;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_ReturnValue))  ReturnValue;

 System::Runtime::Remoting::Identity __declspec(property(get=System_Runtime_Remoting_Messaging_IInternalMessage_get_TargetIdentity, put=System_Runtime_Remoting_Messaging_IInternalMessage_set_TargetIdentity))  System_Runtime_Remoting_Messaging_IInternalMessage_TargetIdentity;

 System::Runtime::Remoting::Messaging::AsyncResult __declspec(property(get=get_AsyncResult))  AsyncResult;

 System::Runtime::Remoting::Messaging::CallType __declspec(property(get=get_CallType))  CallType;


// Methods

/// @brief Method InitMessage addr 0x2344edc size 0x294 virtual false final false
 void InitMessage(System::Reflection::RuntimeMethodInfo method, ::ArrayW<::bs_hook::Il2CppWrapperType> out_args) ;

static System::Runtime::Remoting::Messaging::MonoMethodMessage New_ctor(System::Reflection::MethodBase method, ::ArrayW<::bs_hook::Il2CppWrapperType> out_args) ;

/// @brief Method .ctor addr 0x2345170 size 0xc8 virtual false final false
 void _ctor(System::Reflection::MethodBase method, ::ArrayW<::bs_hook::Il2CppWrapperType> out_args) ;

static System::Runtime::Remoting::Messaging::MonoMethodMessage New_ctor(System::Reflection::MethodInfo minfo, ::ArrayW<::bs_hook::Il2CppWrapperType> in_args, ::ArrayW<::bs_hook::Il2CppWrapperType> out_args) ;

/// @brief Method .ctor addr 0x232a744 size 0x138 virtual false final false
 void _ctor(System::Reflection::MethodInfo minfo, ::ArrayW<::bs_hook::Il2CppWrapperType> in_args, ::ArrayW<::bs_hook::Il2CppWrapperType> out_args) ;

/// @brief Method GetMethodInfo addr 0x2345238 size 0xb4 virtual false final false
static System::Reflection::MethodInfo GetMethodInfo(System::Type type, ::StringW methodName) ;

static System::Runtime::Remoting::Messaging::MonoMethodMessage New_ctor(System::Type type, ::StringW methodName, ::ArrayW<::bs_hook::Il2CppWrapperType> in_args) ;

/// @brief Method .ctor addr 0x23452ec size 0x38 virtual false final false
 void _ctor(System::Type type, ::StringW methodName, ::ArrayW<::bs_hook::Il2CppWrapperType> in_args) ;

/// @brief Method get_Properties addr 0x2345324 size 0x6c virtual true final true
 System::Collections::IDictionary get_Properties() ;

/// @brief Method get_ArgCount addr 0x2345390 size 0x38 virtual true final true
 int32_t get_ArgCount() ;

/// @brief Method get_Args addr 0x23453c8 size 0x8 virtual true final true
 ::ArrayW<::bs_hook::Il2CppWrapperType> get_Args() ;

/// @brief Method get_LogicalCallContext addr 0x23453d0 size 0x8 virtual true final true
 System::Runtime::Remoting::Messaging::LogicalCallContext get_LogicalCallContext() ;

/// @brief Method set_LogicalCallContext addr 0x23453d8 size 0x8 virtual false final false
 void set_LogicalCallContext(System::Runtime::Remoting::Messaging::LogicalCallContext value) ;

/// @brief Method get_MethodBase addr 0x23453e0 size 0x8 virtual true final true
 System::Reflection::MethodBase get_MethodBase() ;

/// @brief Method get_MethodName addr 0x23453e8 size 0x80 virtual true final true
 ::StringW get_MethodName() ;

/// @brief Method get_MethodSignature addr 0x2345468 size 0x11c virtual true final true
 ::bs_hook::Il2CppWrapperType get_MethodSignature() ;

/// @brief Method get_TypeName addr 0x2345584 size 0x94 virtual true final true
 ::StringW get_TypeName() ;

/// @brief Method get_Uri addr 0x2345618 size 0x8 virtual true final true
 ::StringW get_Uri() ;

/// @brief Method set_Uri addr 0x2345620 size 0x8 virtual true final true
 void set_Uri(::StringW value) ;

/// @brief Method GetArg addr 0x232c9c4 size 0x34 virtual true final true
 ::bs_hook::Il2CppWrapperType GetArg(int32_t arg_num) ;

/// @brief Method get_Exception addr 0x2345628 size 0x8 virtual true final true
 System::Exception get_Exception() ;

/// @brief Method get_OutArgCount addr 0x2345630 size 0x6c virtual true final true
 int32_t get_OutArgCount() ;

/// @brief Method get_OutArgs addr 0x234569c size 0x128 virtual true final true
 ::ArrayW<::bs_hook::Il2CppWrapperType> get_OutArgs() ;

/// @brief Method get_ReturnValue addr 0x23457c4 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType get_ReturnValue() ;

/// @brief Method System.Runtime.Remoting.Messaging.IInternalMessage.get_TargetIdentity addr 0x23457cc size 0x8 virtual true final true
 System::Runtime::Remoting::Identity System_Runtime_Remoting_Messaging_IInternalMessage_get_TargetIdentity() ;

/// @brief Method System.Runtime.Remoting.Messaging.IInternalMessage.set_TargetIdentity addr 0x23457d4 size 0x8 virtual true final true
 void System_Runtime_Remoting_Messaging_IInternalMessage_set_TargetIdentity(System::Runtime::Remoting::Identity value) ;

/// @brief Method get_AsyncResult addr 0x23457dc size 0x8 virtual false final false
 System::Runtime::Remoting::Messaging::AsyncResult get_AsyncResult() ;

/// @brief Method get_CallType addr 0x232b794 size 0x7c virtual false final false
 System::Runtime::Remoting::Messaging::CallType get_CallType() ;

/// @brief Method NeedsOutProcessing addr 0x232c934 size 0x90 virtual false final false
 bool NeedsOutProcessing(ByRef<int32_t> outCount) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Messaging
NEED_NO_BOX(System::Runtime::Remoting::Messaging::MonoMethodMessage);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Messaging::MonoMethodMessage, "System.Runtime.Remoting.Messaging", "MonoMethodMessage");
