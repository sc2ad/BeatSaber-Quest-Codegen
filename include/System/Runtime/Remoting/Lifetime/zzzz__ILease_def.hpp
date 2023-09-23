#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
namespace System {
struct TimeSpan;
}
namespace System::Runtime::Remoting::Lifetime {
struct LeaseState;
}
// Forward declare root types
namespace System::Runtime::Remoting::Lifetime {
class ILease;
}
// Type: System.Runtime.Remoting.Lifetime::ILease
namespace System::Runtime::Remoting::Lifetime {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3086))
// CS Name: System.Runtime.Remoting.Lifetime.ILease
class CORDL_TYPE ILease : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ILease() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ILease(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 System::TimeSpan __declspec(property(get=get_CurrentLeaseTime))  CurrentLeaseTime;

 System::Runtime::Remoting::Lifetime::LeaseState __declspec(property(get=get_CurrentState))  CurrentState;

 System::TimeSpan __declspec(property(get=get_RenewOnCallTime))  RenewOnCallTime;


// Methods

/// @brief Method get_CurrentLeaseTime addr 0x0 size 0xffffffffffffffff virtual true final false
 System::TimeSpan get_CurrentLeaseTime() ;

/// @brief Method get_CurrentState addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Runtime::Remoting::Lifetime::LeaseState get_CurrentState() ;

/// @brief Method get_RenewOnCallTime addr 0x0 size 0xffffffffffffffff virtual true final false
 System::TimeSpan get_RenewOnCallTime() ;

/// @brief Method Renew addr 0x0 size 0xffffffffffffffff virtual true final false
 System::TimeSpan Renew(System::TimeSpan renewalTime) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Lifetime
NEED_NO_BOX(System::Runtime::Remoting::Lifetime::ILease);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Lifetime::ILease, "System.Runtime.Remoting.Lifetime", "ILease");
