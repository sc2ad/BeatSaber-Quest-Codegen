#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
namespace System {
struct TimeSpan;
}
namespace System::Runtime::Remoting::Lifetime {
class ILease;
}
// Forward declare root types
namespace System::Runtime::Remoting::Lifetime {
class ISponsor;
}
// Type: System.Runtime.Remoting.Lifetime::ISponsor
namespace System::Runtime::Remoting::Lifetime {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3087))
// CS Name: System.Runtime.Remoting.Lifetime.ISponsor
class CORDL_TYPE ISponsor : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ISponsor() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ISponsor(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method Renewal addr 0x0 size 0xffffffffffffffff virtual true final false
 System::TimeSpan Renewal(System::Runtime::Remoting::Lifetime::ILease lease) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Lifetime
NEED_NO_BOX(System::Runtime::Remoting::Lifetime::ISponsor);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Lifetime::ISponsor, "System.Runtime.Remoting.Lifetime", "ISponsor");
