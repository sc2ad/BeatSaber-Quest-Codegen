#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Reflection {
class MethodBase;
}
namespace System::Runtime::Remoting::Messaging {
class IMessage;
}
namespace System::Runtime::Remoting::Messaging {
class LogicalCallContext;
}
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
class IMethodMessage;
}
// Type: System.Runtime.Remoting.Messaging::IMethodMessage
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3168))
// CS Name: System.Runtime.Remoting.Messaging.IMethodMessage
class CORDL_TYPE IMethodMessage : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::Remoting::Messaging::IMessage
constexpr operator  ::System::Runtime::Remoting::Messaging::IMessage() const noexcept;

~IMethodMessage() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IMethodMessage(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 int32_t __declspec(property(get=get_ArgCount))  ArgCount;

 ::ArrayW<::bs_hook::Il2CppWrapperType> __declspec(property(get=get_Args))  Args;

 ::System::Runtime::Remoting::Messaging::LogicalCallContext __declspec(property(get=get_LogicalCallContext))  LogicalCallContext;

 ::System::Reflection::MethodBase __declspec(property(get=get_MethodBase))  MethodBase;

 ::StringW __declspec(property(get=get_MethodName))  MethodName;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_MethodSignature))  MethodSignature;

 ::StringW __declspec(property(get=get_TypeName))  TypeName;

 ::StringW __declspec(property(get=get_Uri))  Uri;


// Methods

/// @brief Method get_ArgCount addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_ArgCount() ;

/// @brief Method get_Args addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<::bs_hook::Il2CppWrapperType> get_Args() ;

/// @brief Method get_LogicalCallContext addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Runtime::Remoting::Messaging::LogicalCallContext get_LogicalCallContext() ;

/// @brief Method get_MethodBase addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Reflection::MethodBase get_MethodBase() ;

/// @brief Method get_MethodName addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_MethodName() ;

/// @brief Method get_MethodSignature addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType get_MethodSignature() ;

/// @brief Method get_TypeName addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_TypeName() ;

/// @brief Method get_Uri addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_Uri() ;

/// @brief Method GetArg addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType GetArg(int32_t argNum) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Messaging
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::IMethodMessage);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::IMethodMessage, "System.Runtime.Remoting.Messaging", "IMethodMessage");
