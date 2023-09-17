#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
namespace {
namespace System::Runtime::Remoting::Messaging {
class IMessageSink;
}
// Forward declare root types
namespace System::Runtime::Remoting {
class IEnvoyInfo;
}
// Type: System.Runtime.Remoting::IEnvoyInfo
namespace System::Runtime::Remoting {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3054))
// CS Name: System.Runtime.Remoting.IEnvoyInfo
class CORDL_TYPE IEnvoyInfo : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IEnvoyInfo() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IEnvoyInfo(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::System::Runtime::Remoting::Messaging::IMessageSink __declspec(property(get=get_EnvoySinks))  EnvoySinks;


// Methods

/// @brief Method get_EnvoySinks addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Runtime::Remoting::Messaging::IMessageSink get_EnvoySinks() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::Remoting::IEnvoyInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::IEnvoyInfo, "System.Runtime.Remoting", "IEnvoyInfo");
