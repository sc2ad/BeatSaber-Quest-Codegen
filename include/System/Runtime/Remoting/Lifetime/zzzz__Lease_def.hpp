#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MarshalByRefObject_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::Runtime::Remoting::Lifetime {
class ISponsor;
}
namespace System::Runtime::Remoting::Lifetime {
struct LeaseState;
}
namespace System::Runtime::Remoting::Lifetime {
class System__Runtime__Remoting__Lifetime__Lease__RenewalDelegate;
}
namespace System {
struct TimeSpan;
}
namespace System {
struct DateTime;
}
namespace System::Runtime::Remoting::Lifetime {
class ILease;
}
namespace System::Collections {
class Queue;
}
namespace System::Collections {
class ArrayList;
}
namespace System {
class IAsyncResult;
}
namespace System {
class AsyncCallback;
}
// Forward declare root types
namespace System::Runtime::Remoting::Lifetime {
class Lease;
}
namespace System::Runtime::Remoting::Lifetime {
class System__Runtime__Remoting__Lifetime__Lease__RenewalDelegate;
}
// Type: ::RenewalDelegate
namespace System::Runtime::Remoting::Lifetime {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3088))
// CS Name: System.Runtime.Remoting.Lifetime.Lease::RenewalDelegate
class CORDL_TYPE System__Runtime__Remoting__Lifetime__Lease__RenewalDelegate : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~System__Runtime__Remoting__Lifetime__Lease__RenewalDelegate() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Runtime__Remoting__Lifetime__Lease__RenewalDelegate", modifiers: " const&", def_value: None }]
constexpr System__Runtime__Remoting__Lifetime__Lease__RenewalDelegate(System__Runtime__Remoting__Lifetime__Lease__RenewalDelegate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Runtime__Remoting__Lifetime__Lease__RenewalDelegate", modifiers: "&&", def_value: None }]
constexpr System__Runtime__Remoting__Lifetime__Lease__RenewalDelegate(System__Runtime__Remoting__Lifetime__Lease__RenewalDelegate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Runtime__Remoting__Lifetime__Lease__RenewalDelegate(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr System__Runtime__Remoting__Lifetime__Lease__RenewalDelegate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Runtime__Remoting__Lifetime__Lease__RenewalDelegate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Runtime__Remoting__Lifetime__Lease__RenewalDelegate& operator=(System__Runtime__Remoting__Lifetime__Lease__RenewalDelegate&& o) noexcept = default;
  constexpr System__Runtime__Remoting__Lifetime__Lease__RenewalDelegate& operator=(System__Runtime__Remoting__Lifetime__Lease__RenewalDelegate const& o) noexcept = default;
                


// Methods

static System::Runtime::Remoting::Lifetime::System__Runtime__Remoting__Lifetime__Lease__RenewalDelegate New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x232f0b0 size 0x12c virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x232f408 size 0x14 virtual true final false
 System::TimeSpan Invoke(System::Runtime::Remoting::Lifetime::ILease lease) ;

/// @brief Method BeginInvoke addr 0x232f1dc size 0x20 virtual true final false
 System::IAsyncResult BeginInvoke(System::Runtime::Remoting::Lifetime::ILease lease, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x232f3e0 size 0x28 virtual true final false
 System::TimeSpan EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Lifetime
// Type: System.Runtime.Remoting.Lifetime::Lease
namespace System::Runtime::Remoting::Lifetime {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2604))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3089))
// CS Name: System.Runtime.Remoting.Lifetime.Lease
class CORDL_TYPE Lease : public System::MarshalByRefObject {
public:
// Declarations
using RenewalDelegate = System::Runtime::Remoting::Lifetime::System__Runtime__Remoting__Lifetime__Lease__RenewalDelegate;

/// @brief Convert operator to System::Runtime::Remoting::Lifetime::ILease
constexpr operator  System::Runtime::Remoting::Lifetime::ILease() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~Lease() = default;

// Ctor Parameters [CppParam { name: "", ty: "Lease", modifiers: " const&", def_value: None }]
constexpr Lease(Lease const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Lease", modifiers: "&&", def_value: None }]
constexpr Lease(Lease&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Lease(void* ptr) noexcept : System::MarshalByRefObject(ptr) {
}


  constexpr Lease& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Lease& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Lease& operator=(Lease&& o) noexcept = default;
  constexpr Lease& operator=(Lease const& o) noexcept = default;
                


// Fields

 System::DateTime __declspec(property(get=__get__leaseExpireTime, put=__set__leaseExpireTime))  _leaseExpireTime;

constexpr void __set__leaseExpireTime(System::DateTime value) ;

constexpr System::DateTime __get__leaseExpireTime() const;

 System::Runtime::Remoting::Lifetime::LeaseState __declspec(property(get=__get__currentState, put=__set__currentState))  _currentState;

constexpr void __set__currentState(System::Runtime::Remoting::Lifetime::LeaseState value) ;

constexpr System::Runtime::Remoting::Lifetime::LeaseState __get__currentState() const;

 System::TimeSpan __declspec(property(get=__get__initialLeaseTime, put=__set__initialLeaseTime))  _initialLeaseTime;

constexpr void __set__initialLeaseTime(System::TimeSpan value) ;

constexpr System::TimeSpan __get__initialLeaseTime() const;

 System::TimeSpan __declspec(property(get=__get__renewOnCallTime, put=__set__renewOnCallTime))  _renewOnCallTime;

constexpr void __set__renewOnCallTime(System::TimeSpan value) ;

constexpr System::TimeSpan __get__renewOnCallTime() const;

 System::TimeSpan __declspec(property(get=__get__sponsorshipTimeout, put=__set__sponsorshipTimeout))  _sponsorshipTimeout;

constexpr void __set__sponsorshipTimeout(System::TimeSpan value) ;

constexpr System::TimeSpan __get__sponsorshipTimeout() const;

 System::Collections::ArrayList __declspec(property(get=__get__sponsors, put=__set__sponsors))  _sponsors;

constexpr void __set__sponsors(System::Collections::ArrayList value) ;

constexpr System::Collections::ArrayList __get__sponsors() const;

 System::Collections::Queue __declspec(property(get=__get__renewingSponsors, put=__set__renewingSponsors))  _renewingSponsors;

constexpr void __set__renewingSponsors(System::Collections::Queue value) ;

constexpr System::Collections::Queue __get__renewingSponsors() const;

 System::Runtime::Remoting::Lifetime::System__Runtime__Remoting__Lifetime__Lease__RenewalDelegate __declspec(property(get=__get__renewalDelegate, put=__set__renewalDelegate))  _renewalDelegate;

constexpr void __set__renewalDelegate(System::Runtime::Remoting::Lifetime::System__Runtime__Remoting__Lifetime__Lease__RenewalDelegate value) ;

constexpr System::Runtime::Remoting::Lifetime::System__Runtime__Remoting__Lifetime__Lease__RenewalDelegate __get__renewalDelegate() const;


// Properties

 System::TimeSpan __declspec(property(get=get_CurrentLeaseTime))  CurrentLeaseTime;

 System::Runtime::Remoting::Lifetime::LeaseState __declspec(property(get=get_CurrentState))  CurrentState;

 System::TimeSpan __declspec(property(get=get_RenewOnCallTime))  RenewOnCallTime;


// Methods

static System::Runtime::Remoting::Lifetime::Lease New_ctor() ;

/// @brief Method .ctor addr 0x2326710 size 0x158 virtual false final false
 void _ctor() ;

/// @brief Method get_CurrentLeaseTime addr 0x232ea78 size 0x68 virtual true final true
 System::TimeSpan get_CurrentLeaseTime() ;

/// @brief Method get_CurrentState addr 0x232eae0 size 0x8 virtual true final true
 System::Runtime::Remoting::Lifetime::LeaseState get_CurrentState() ;

/// @brief Method Activate addr 0x232eae8 size 0xc virtual false final false
 void Activate() ;

/// @brief Method get_RenewOnCallTime addr 0x232eaf4 size 0x8 virtual true final true
 System::TimeSpan get_RenewOnCallTime() ;

/// @brief Method Renew addr 0x232eafc size 0x8c virtual true final true
 System::TimeSpan Renew(System::TimeSpan renewalTime) ;

/// @brief Method Unregister addr 0x232eb88 size 0x144 virtual true final true
 void Unregister(System::Runtime::Remoting::Lifetime::ISponsor obj) ;

/// @brief Method UpdateState addr 0x232eccc size 0x1a0 virtual false final false
 void UpdateState() ;

/// @brief Method CheckNextSponsor addr 0x232ee6c size 0x244 virtual false final false
 void CheckNextSponsor() ;

/// @brief Method ProcessSponsorResponse addr 0x232f1fc size 0x1e4 virtual false final false
 void ProcessSponsorResponse(::bs_hook::Il2CppWrapperType state, bool timedOut) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Lifetime
NEED_NO_BOX(System::Runtime::Remoting::Lifetime::Lease);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Lifetime::Lease, "System.Runtime.Remoting.Lifetime", "Lease");
NEED_NO_BOX(System::Runtime::Remoting::Lifetime::System__Runtime__Remoting__Lifetime__Lease__RenewalDelegate);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Lifetime::System__Runtime__Remoting__Lifetime__Lease__RenewalDelegate, "System.Runtime.Remoting.Lifetime", "Lease/RenewalDelegate");
