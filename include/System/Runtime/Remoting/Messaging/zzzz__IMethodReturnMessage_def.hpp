#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace System::Runtime::Remoting::Messaging {
class IMessage;
}
namespace System::Runtime::Remoting::Messaging {
class IMethodMessage;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
class IMethodReturnMessage;
}
// Type: System.Runtime.Remoting.Messaging::IMethodReturnMessage
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3169))
// CS Name: System.Runtime.Remoting.Messaging.IMethodReturnMessage
class CORDL_TYPE IMethodReturnMessage : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to System::Runtime::Remoting::Messaging::IMethodMessage
constexpr operator  System::Runtime::Remoting::Messaging::IMethodMessage() const noexcept;

/// @brief Convert operator to System::Runtime::Remoting::Messaging::IMessage
constexpr operator  System::Runtime::Remoting::Messaging::IMessage() const noexcept;

~IMethodReturnMessage() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IMethodReturnMessage(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 System::Exception __declspec(property(get=get_Exception))  Exception;

 ::ArrayW<::bs_hook::Il2CppWrapperType> __declspec(property(get=get_OutArgs))  OutArgs;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_ReturnValue))  ReturnValue;


// Methods

/// @brief Method get_Exception addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Exception get_Exception() ;

/// @brief Method get_OutArgs addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<::bs_hook::Il2CppWrapperType> get_OutArgs() ;

/// @brief Method get_ReturnValue addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType get_ReturnValue() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Messaging
NEED_NO_BOX(System::Runtime::Remoting::Messaging::IMethodReturnMessage);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Messaging::IMethodReturnMessage, "System.Runtime.Remoting.Messaging", "IMethodReturnMessage");
