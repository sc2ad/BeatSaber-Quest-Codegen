#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System::Runtime::Remoting {
class Identity;
}
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
class IInternalMessage;
}
// Type: System.Runtime.Remoting.Messaging::IInternalMessage
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3163))
// CS Name: System.Runtime.Remoting.Messaging.IInternalMessage
class CORDL_TYPE IInternalMessage : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IInternalMessage() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IInternalMessage(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::System::Runtime::Remoting::Identity __declspec(property(get=get_TargetIdentity, put=set_TargetIdentity))  TargetIdentity;

 ::StringW __declspec(property(get=get_Uri, put=set_Uri))  Uri;


// Methods

/// @brief Method get_TargetIdentity addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Runtime::Remoting::Identity get_TargetIdentity() ;

/// @brief Method set_TargetIdentity addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_TargetIdentity(::System::Runtime::Remoting::Identity value) ;

/// @brief Method get_Uri addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_Uri() ;

/// @brief Method set_Uri addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_Uri(::StringW value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Messaging
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::IInternalMessage);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::IInternalMessage, "System.Runtime.Remoting.Messaging", "IInternalMessage");
