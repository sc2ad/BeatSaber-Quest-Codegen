#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
namespace System::Runtime::Remoting::Messaging {
class IMethodMessage;
}
namespace System::Runtime::Remoting::Messaging {
class IMethodReturnMessage;
}
namespace System::Runtime::Remoting::Messaging {
class IMessage;
}
// Forward declare root types
namespace System::Runtime::Remoting::Activation {
class IConstructionReturnMessage;
}
// Type: System.Runtime.Remoting.Activation::IConstructionReturnMessage
namespace System::Runtime::Remoting::Activation {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3131))
// CS Name: System.Runtime.Remoting.Activation.IConstructionReturnMessage
class CORDL_TYPE IConstructionReturnMessage : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to System::Runtime::Remoting::Messaging::IMethodReturnMessage
constexpr operator  System::Runtime::Remoting::Messaging::IMethodReturnMessage() const noexcept;

/// @brief Convert operator to System::Runtime::Remoting::Messaging::IMethodMessage
constexpr operator  System::Runtime::Remoting::Messaging::IMethodMessage() const noexcept;

/// @brief Convert operator to System::Runtime::Remoting::Messaging::IMessage
constexpr operator  System::Runtime::Remoting::Messaging::IMessage() const noexcept;

~IConstructionReturnMessage() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IConstructionReturnMessage(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Activation
NEED_NO_BOX(System::Runtime::Remoting::Activation::IConstructionReturnMessage);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Activation::IConstructionReturnMessage, "System.Runtime.Remoting.Activation", "IConstructionReturnMessage");
