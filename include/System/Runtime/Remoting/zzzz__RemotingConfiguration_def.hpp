#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Runtime::Remoting {
class ActivatedServiceTypeEntry;
}
namespace System::Collections {
class ArrayList;
}
namespace System::Runtime::Remoting {
class ChannelData;
}
namespace System::Runtime::Remoting {
class ProviderData;
}
namespace System {
class Type;
}
namespace System::Runtime::Remoting {
struct CustomErrorsModes;
}
namespace System::Runtime::Remoting {
class WellKnownServiceTypeEntry;
}
namespace System::Collections {
class Hashtable;
}
namespace System::Runtime::Remoting {
class ActivatedClientTypeEntry;
}
namespace System::Runtime::Remoting {
class WellKnownClientTypeEntry;
}
// Forward declare root types
namespace System::Runtime::Remoting {
class RemotingConfiguration;
}
// Type: System.Runtime.Remoting::RemotingConfiguration
namespace System::Runtime::Remoting {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3060))
// CS Name: System.Runtime.Remoting.RemotingConfiguration
class CORDL_TYPE RemotingConfiguration : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~RemotingConfiguration() = default;

// Ctor Parameters [CppParam { name: "", ty: "RemotingConfiguration", modifiers: " const&", def_value: None }]
constexpr RemotingConfiguration(RemotingConfiguration const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RemotingConfiguration", modifiers: "&&", def_value: None }]
constexpr RemotingConfiguration(RemotingConfiguration&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RemotingConfiguration(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RemotingConfiguration& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RemotingConfiguration& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RemotingConfiguration& operator=(RemotingConfiguration&& o) noexcept = default;
  constexpr RemotingConfiguration& operator=(RemotingConfiguration const& o) noexcept = default;
                


// Fields

static ::StringW __declspec(property(get=__get_applicationID, put=__set_applicationID))  applicationID;

static void __set_applicationID(::StringW value) ;

static ::StringW __get_applicationID() ;

static ::StringW __declspec(property(get=__get_applicationName, put=__set_applicationName))  applicationName;

static void __set_applicationName(::StringW value) ;

static ::StringW __get_applicationName() ;

static ::StringW __declspec(property(get=__get_processGuid, put=__set_processGuid))  processGuid;

static void __set_processGuid(::StringW value) ;

static ::StringW __get_processGuid() ;

static bool __declspec(property(get=__get_defaultConfigRead, put=__set_defaultConfigRead))  defaultConfigRead;

static void __set_defaultConfigRead(bool value) ;

static bool __get_defaultConfigRead() ;

static bool __declspec(property(get=__get_defaultDelayedConfigRead, put=__set_defaultDelayedConfigRead))  defaultDelayedConfigRead;

static void __set_defaultDelayedConfigRead(bool value) ;

static bool __get_defaultDelayedConfigRead() ;

static System::Runtime::Remoting::CustomErrorsModes __declspec(property(get=__get__errorMode, put=__set__errorMode))  _errorMode;

static void __set__errorMode(System::Runtime::Remoting::CustomErrorsModes value) ;

static System::Runtime::Remoting::CustomErrorsModes __get__errorMode() ;

static System::Collections::Hashtable __declspec(property(get=__get_wellKnownClientEntries, put=__set_wellKnownClientEntries))  wellKnownClientEntries;

static void __set_wellKnownClientEntries(System::Collections::Hashtable value) ;

static System::Collections::Hashtable __get_wellKnownClientEntries() ;

static System::Collections::Hashtable __declspec(property(get=__get_activatedClientEntries, put=__set_activatedClientEntries))  activatedClientEntries;

static void __set_activatedClientEntries(System::Collections::Hashtable value) ;

static System::Collections::Hashtable __get_activatedClientEntries() ;

static System::Collections::Hashtable __declspec(property(get=__get_wellKnownServiceEntries, put=__set_wellKnownServiceEntries))  wellKnownServiceEntries;

static void __set_wellKnownServiceEntries(System::Collections::Hashtable value) ;

static System::Collections::Hashtable __get_wellKnownServiceEntries() ;

static System::Collections::Hashtable __declspec(property(get=__get_activatedServiceEntries, put=__set_activatedServiceEntries))  activatedServiceEntries;

static void __set_activatedServiceEntries(System::Collections::Hashtable value) ;

static System::Collections::Hashtable __get_activatedServiceEntries() ;

static System::Collections::Hashtable __declspec(property(get=__get_channelTemplates, put=__set_channelTemplates))  channelTemplates;

static void __set_channelTemplates(System::Collections::Hashtable value) ;

static System::Collections::Hashtable __get_channelTemplates() ;

static System::Collections::Hashtable __declspec(property(get=__get_clientProviderTemplates, put=__set_clientProviderTemplates))  clientProviderTemplates;

static void __set_clientProviderTemplates(System::Collections::Hashtable value) ;

static System::Collections::Hashtable __get_clientProviderTemplates() ;

static System::Collections::Hashtable __declspec(property(get=__get_serverProviderTemplates, put=__set_serverProviderTemplates))  serverProviderTemplates;

static void __set_serverProviderTemplates(System::Collections::Hashtable value) ;

static System::Collections::Hashtable __get_serverProviderTemplates() ;


// Properties

static ::StringW __declspec(property(get=get_ApplicationName, put=set_ApplicationName))  ApplicationName;

static ::StringW __declspec(property(get=get_ProcessId))  ProcessId;


// Methods

/// @brief Method get_ApplicationName addr 0x231b580 size 0x58 virtual false final false
static ::StringW get_ApplicationName() ;

/// @brief Method set_ApplicationName addr 0x231b5d8 size 0x5c virtual false final false
static void set_ApplicationName(::StringW value) ;

/// @brief Method get_ProcessId addr 0x231b634 size 0xa8 virtual false final false
static ::StringW get_ProcessId() ;

/// @brief Method LoadDefaultDelayedChannels addr 0x231b6dc size 0x36c virtual false final false
static void LoadDefaultDelayedChannels() ;

/// @brief Method IsActivationAllowed addr 0x231bb00 size 0x144 virtual false final false
static bool IsActivationAllowed(System::Type svrType) ;

/// @brief Method IsRemotelyActivatedClientType addr 0x231bc44 size 0x18c virtual false final false
static System::Runtime::Remoting::ActivatedClientTypeEntry IsRemotelyActivatedClientType(System::Type svrType) ;

/// @brief Method IsWellKnownClientType addr 0x231bdd0 size 0x18c virtual false final false
static System::Runtime::Remoting::WellKnownClientTypeEntry IsWellKnownClientType(System::Type svrType) ;

/// @brief Method RegisterActivatedClientType addr 0x231bf5c size 0x28c virtual false final false
static void RegisterActivatedClientType(System::Runtime::Remoting::ActivatedClientTypeEntry entry) ;

/// @brief Method RegisterActivatedServiceType addr 0x231c1e8 size 0x144 virtual false final false
static void RegisterActivatedServiceType(System::Runtime::Remoting::ActivatedServiceTypeEntry entry) ;

/// @brief Method RegisterWellKnownClientType addr 0x231c32c size 0x28c virtual false final false
static void RegisterWellKnownClientType(System::Runtime::Remoting::WellKnownClientTypeEntry entry) ;

/// @brief Method RegisterWellKnownServiceType addr 0x231c5b8 size 0x188 virtual false final false
static void RegisterWellKnownServiceType(System::Runtime::Remoting::WellKnownServiceTypeEntry entry) ;

/// @brief Method RegisterChannelTemplate addr 0x231c85c size 0x7c virtual false final false
static void RegisterChannelTemplate(System::Runtime::Remoting::ChannelData channel) ;

/// @brief Method RegisterClientProviderTemplate addr 0x231c8d8 size 0x7c virtual false final false
static void RegisterClientProviderTemplate(System::Runtime::Remoting::ProviderData prov) ;

/// @brief Method RegisterServerProviderTemplate addr 0x231c954 size 0x7c virtual false final false
static void RegisterServerProviderTemplate(System::Runtime::Remoting::ProviderData prov) ;

/// @brief Method RegisterChannels addr 0x231c9d0 size 0xc90 virtual false final false
static void RegisterChannels(System::Collections::ArrayList channels, bool onlyDelayed) ;

/// @brief Method RegisterTypes addr 0x231e77c size 0x520 virtual false final false
static void RegisterTypes(System::Collections::ArrayList types) ;

/// @brief Method CustomErrorsEnabled addr 0x231ec9c size 0x94 virtual false final false
static bool CustomErrorsEnabled(bool isLocalRequest) ;

/// @brief Method SetCustomErrorsMode addr 0x231ed30 size 0x260 virtual false final false
static void SetCustomErrorsMode(::StringW mode) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting
NEED_NO_BOX(System::Runtime::Remoting::RemotingConfiguration);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::RemotingConfiguration, "System.Runtime.Remoting", "RemotingConfiguration");
