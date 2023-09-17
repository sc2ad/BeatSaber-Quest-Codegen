#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace System::Runtime::Remoting {
class ServerIdentity;
}
namespace System::Runtime::Remoting::Lifetime {
class LeaseManager;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace System::Runtime::Remoting::Lifetime {
class LifetimeServices;
}
// Type: System.Runtime.Remoting.Lifetime::LifetimeServices
namespace System::Runtime::Remoting::Lifetime {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3093))
// CS Name: System.Runtime.Remoting.Lifetime.LifetimeServices
class CORDL_TYPE LifetimeServices : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~LifetimeServices() = default;

// Ctor Parameters [CppParam { name: "", ty: "LifetimeServices", modifiers: " const&", def_value: None }]
constexpr LifetimeServices(LifetimeServices const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LifetimeServices", modifiers: "&&", def_value: None }]
constexpr LifetimeServices(LifetimeServices&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LifetimeServices(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LifetimeServices& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LifetimeServices& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LifetimeServices& operator=(LifetimeServices&& o) noexcept = default;
  constexpr LifetimeServices& operator=(LifetimeServices const& o) noexcept = default;
                


// Fields

static ::System::TimeSpan __declspec(property(get=__get__leaseManagerPollTime, put=__set__leaseManagerPollTime))  _leaseManagerPollTime;

static void __set__leaseManagerPollTime(::System::TimeSpan value) ;

static ::System::TimeSpan __get__leaseManagerPollTime() ;

static ::System::TimeSpan __declspec(property(get=__get__leaseTime, put=__set__leaseTime))  _leaseTime;

static void __set__leaseTime(::System::TimeSpan value) ;

static ::System::TimeSpan __get__leaseTime() ;

static ::System::TimeSpan __declspec(property(get=__get__renewOnCallTime, put=__set__renewOnCallTime))  _renewOnCallTime;

static void __set__renewOnCallTime(::System::TimeSpan value) ;

static ::System::TimeSpan __get__renewOnCallTime() ;

static ::System::TimeSpan __declspec(property(get=__get__sponsorshipTimeout, put=__set__sponsorshipTimeout))  _sponsorshipTimeout;

static void __set__sponsorshipTimeout(::System::TimeSpan value) ;

static ::System::TimeSpan __get__sponsorshipTimeout() ;

static ::System::Runtime::Remoting::Lifetime::LeaseManager __declspec(property(get=__get__leaseManager, put=__set__leaseManager))  _leaseManager;

static void __set__leaseManager(::System::Runtime::Remoting::Lifetime::LeaseManager value) ;

static ::System::Runtime::Remoting::Lifetime::LeaseManager __get__leaseManager() ;


// Properties

static ::System::TimeSpan __declspec(property(get=get_LeaseManagerPollTime, put=set_LeaseManagerPollTime))  LeaseManagerPollTime;

static ::System::TimeSpan __declspec(property(get=get_LeaseTime, put=set_LeaseTime))  LeaseTime;

static ::System::TimeSpan __declspec(property(get=get_RenewOnCallTime, put=set_RenewOnCallTime))  RenewOnCallTime;

static ::System::TimeSpan __declspec(property(get=get_SponsorshipTimeout, put=set_SponsorshipTimeout))  SponsorshipTimeout;


// Methods

/// @brief Method get_LeaseManagerPollTime addr 0x232ffc0 size 0x58 virtual false final false
static ::System::TimeSpan get_LeaseManagerPollTime() ;

/// @brief Method set_LeaseManagerPollTime addr 0x2330018 size 0x74 virtual false final false
static void set_LeaseManagerPollTime(::System::TimeSpan value) ;

/// @brief Method get_LeaseTime addr 0x233008c size 0x58 virtual false final false
static ::System::TimeSpan get_LeaseTime() ;

/// @brief Method set_LeaseTime addr 0x23300e4 size 0x5c virtual false final false
static void set_LeaseTime(::System::TimeSpan value) ;

/// @brief Method get_RenewOnCallTime addr 0x2330140 size 0x58 virtual false final false
static ::System::TimeSpan get_RenewOnCallTime() ;

/// @brief Method set_RenewOnCallTime addr 0x2330198 size 0x5c virtual false final false
static void set_RenewOnCallTime(::System::TimeSpan value) ;

/// @brief Method get_SponsorshipTimeout addr 0x23301f4 size 0x58 virtual false final false
static ::System::TimeSpan get_SponsorshipTimeout() ;

/// @brief Method set_SponsorshipTimeout addr 0x233024c size 0x5c virtual false final false
static void set_SponsorshipTimeout(::System::TimeSpan value) ;

/// @brief Method TrackLifetime addr 0x2326868 size 0x68 virtual false final false
static void TrackLifetime(::System::Runtime::Remoting::ServerIdentity identity) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Lifetime
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::Remoting::Lifetime::LifetimeServices);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Lifetime::LifetimeServices, "System.Runtime.Remoting.Lifetime", "LifetimeServices");
