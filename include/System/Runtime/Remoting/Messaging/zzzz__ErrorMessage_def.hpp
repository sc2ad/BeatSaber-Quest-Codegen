#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Collections {
class IDictionary;
}
namespace System::Runtime::Remoting::Messaging {
class LogicalCallContext;
}
namespace System::Runtime::Remoting::Messaging {
class IMethodMessage;
}
namespace System::Runtime::Remoting::Messaging {
class IMessage;
}
namespace System::Runtime::Remoting::Messaging {
class IMethodCallMessage;
}
namespace System::Reflection {
class MethodBase;
}
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
class ErrorMessage;
}
// Type: System.Runtime.Remoting.Messaging::ErrorMessage
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3160))
// CS Name: System.Runtime.Remoting.Messaging.ErrorMessage
class CORDL_TYPE ErrorMessage : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Runtime::Remoting::Messaging::IMethodCallMessage
constexpr operator  System::Runtime::Remoting::Messaging::IMethodCallMessage() const noexcept;

/// @brief Convert operator to System::Runtime::Remoting::Messaging::IMethodMessage
constexpr operator  System::Runtime::Remoting::Messaging::IMethodMessage() const noexcept;

/// @brief Convert operator to System::Runtime::Remoting::Messaging::IMessage
constexpr operator  System::Runtime::Remoting::Messaging::IMessage() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~ErrorMessage() = default;

// Ctor Parameters [CppParam { name: "", ty: "ErrorMessage", modifiers: " const&", def_value: None }]
constexpr ErrorMessage(ErrorMessage const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ErrorMessage", modifiers: "&&", def_value: None }]
constexpr ErrorMessage(ErrorMessage&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ErrorMessage(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ErrorMessage& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ErrorMessage& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ErrorMessage& operator=(ErrorMessage&& o) noexcept = default;
  constexpr ErrorMessage& operator=(ErrorMessage const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__uri, put=__set__uri))  _uri;

constexpr void __set__uri(::StringW value) ;

constexpr ::StringW __get__uri() const;


// Properties

 int32_t __declspec(property(get=get_ArgCount))  ArgCount;

 ::ArrayW<::bs_hook::Il2CppWrapperType> __declspec(property(get=get_Args))  Args;

 System::Reflection::MethodBase __declspec(property(get=get_MethodBase))  MethodBase;

 ::StringW __declspec(property(get=get_MethodName))  MethodName;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_MethodSignature))  MethodSignature;

 System::Collections::IDictionary __declspec(property(get=get_Properties))  Properties;

 ::StringW __declspec(property(get=get_TypeName))  TypeName;

 ::StringW __declspec(property(get=get_Uri))  Uri;

 System::Runtime::Remoting::Messaging::LogicalCallContext __declspec(property(get=get_LogicalCallContext))  LogicalCallContext;


// Methods

static System::Runtime::Remoting::Messaging::ErrorMessage New_ctor() ;

/// @brief Method .ctor addr 0x2337170 size 0x50 virtual false final false
 void _ctor() ;

/// @brief Method get_ArgCount addr 0x234138c size 0x8 virtual true final true
 int32_t get_ArgCount() ;

/// @brief Method get_Args addr 0x2341394 size 0x8 virtual true final true
 ::ArrayW<::bs_hook::Il2CppWrapperType> get_Args() ;

/// @brief Method get_MethodBase addr 0x234139c size 0x8 virtual true final true
 System::Reflection::MethodBase get_MethodBase() ;

/// @brief Method get_MethodName addr 0x23413a4 size 0x40 virtual true final true
 ::StringW get_MethodName() ;

/// @brief Method get_MethodSignature addr 0x23413e4 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType get_MethodSignature() ;

/// @brief Method get_Properties addr 0x23413ec size 0x8 virtual true final false
 System::Collections::IDictionary get_Properties() ;

/// @brief Method get_TypeName addr 0x23413f4 size 0x40 virtual true final true
 ::StringW get_TypeName() ;

/// @brief Method get_Uri addr 0x2341434 size 0x8 virtual true final true
 ::StringW get_Uri() ;

/// @brief Method GetArg addr 0x234143c size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType GetArg(int32_t arg_num) ;

/// @brief Method get_LogicalCallContext addr 0x2341444 size 0x8 virtual true final true
 System::Runtime::Remoting::Messaging::LogicalCallContext get_LogicalCallContext() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Messaging
NEED_NO_BOX(System::Runtime::Remoting::Messaging::ErrorMessage);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Messaging::ErrorMessage, "System.Runtime.Remoting.Messaging", "ErrorMessage");
