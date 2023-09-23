#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
class IMessageCtrl;
}
// Type: System.Runtime.Remoting.Messaging::IMessageCtrl
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3165))
// CS Name: System.Runtime.Remoting.Messaging.IMessageCtrl
class CORDL_TYPE IMessageCtrl : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IMessageCtrl() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IMessageCtrl(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Messaging
NEED_NO_BOX(System::Runtime::Remoting::Messaging::IMessageCtrl);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Messaging::IMessageCtrl, "System.Runtime.Remoting.Messaging", "IMessageCtrl");
