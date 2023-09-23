#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace GlobalNamespace {
struct ConnectionFailedReason;
}
// Forward declare root types
namespace GlobalNamespace {
class ConnectionFailedReasonMethods;
}
// Type: ::ConnectionFailedReasonMethods
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4494))
// CS Name: ConnectionFailedReasonMethods
class CORDL_TYPE ConnectionFailedReasonMethods : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ConnectionFailedReasonMethods() = default;

// Ctor Parameters [CppParam { name: "", ty: "ConnectionFailedReasonMethods", modifiers: " const&", def_value: None }]
constexpr ConnectionFailedReasonMethods(ConnectionFailedReasonMethods const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ConnectionFailedReasonMethods", modifiers: "&&", def_value: None }]
constexpr ConnectionFailedReasonMethods(ConnectionFailedReasonMethods&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ConnectionFailedReasonMethods(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ConnectionFailedReasonMethods& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ConnectionFailedReasonMethods& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ConnectionFailedReasonMethods& operator=(ConnectionFailedReasonMethods&& o) noexcept = default;
  constexpr ConnectionFailedReasonMethods& operator=(ConnectionFailedReasonMethods const& o) noexcept = default;
                


// Fields

/// @brief Field kConnectionFailedUnknown offset 0
static constexpr ::ConstString  kConnectionFailedUnknown{u"SERVER_CONNECTION_FAILED_TRY_AGAIN"};

/// @brief Field kConnectionFailedConnectionCanceled offset 0
static constexpr ::ConstString  kConnectionFailedConnectionCanceled{u"SERVER_CONNECTION_FAILED_TRY_AGAIN"};

/// @brief Field kConnectionFailedServerUnreachable offset 0
static constexpr ::ConstString  kConnectionFailedServerUnreachable{u"SERVER_CONNECTION_FAILED_TRY_AGAIN"};

/// @brief Field kConnectionFailedServerDoesNotExist offset 0
static constexpr ::ConstString  kConnectionFailedServerDoesNotExist{u"CONNECTION_FAILED_SERVER_DOES_NOT_EXIST"};

/// @brief Field kConnectionFailedServerAtCapacity offset 0
static constexpr ::ConstString  kConnectionFailedServerAtCapacity{u"CONNECTION_FAILED_SERVER_AT_CAPACITY"};

/// @brief Field kConnectionFailedVersionMismatch offset 0
static constexpr ::ConstString  kConnectionFailedVersionMismatch{u"CONNECTION_FAILED_VERSION_MISMATCH"};

/// @brief Field kConnectionFailedInvalidPassword offset 0
static constexpr ::ConstString  kConnectionFailedInvalidPassword{u"CONNECTION_FAILED_INVALID_PASSWORD"};

/// @brief Field kConnectionFailedMasterServerUnreachable offset 0
static constexpr ::ConstString  kConnectionFailedMasterServerUnreachable{u"SERVER_CONNECTION_FAILED_TRY_AGAIN"};

/// @brief Field kConnectionFailedMasterServerNotAuthenticated offset 0
static constexpr ::ConstString  kConnectionFailedMasterServerNotAuthenticated{u"SERVER_CONNECTION_FAILED_TRY_AGAIN"};

/// @brief Field kConnectionFailedNetworkNotConnected offset 0
static constexpr ::ConstString  kConnectionFailedNetworkNotConnected{u"CONNECTION_FAILED_NETWORK_NOT_CONNECTED"};

/// @brief Field kConnectionFailedMasterServerCertificateValidationFailed offset 0
static constexpr ::ConstString  kConnectionFailedMasterServerCertificateValidationFailed{u"CONNECTION_FAILED_NETWORK_NOT_CONNECTED"};

/// @brief Field kConnectionFailedServerIsTerminating offset 0
static constexpr ::ConstString  kConnectionFailedServerIsTerminating{u"CONNECTION_FAILED_SERVER_DOES_NOT_EXIST"};

/// @brief Field kConnectionFailedTimeout offset 0
static constexpr ::ConstString  kConnectionFailedTimeout{u"CONNECTION_FAILED_TIMEOUT"};

/// @brief Field kConnectionFailedFailedToFindMatch offset 0
static constexpr ::ConstString  kConnectionFailedFailedToFindMatch{u"CONNECTION_FAILED_FAILED_TO_FIND_MATCH"};


// Methods

/// @brief Method LocalizedKey addr 0x21f2d3c size 0xb4 virtual false final false
static ::StringW LocalizedKey(GlobalNamespace::ConnectionFailedReason connectionFailedReason) ;

/// @brief Method ErrorCode addr 0x21f2df0 size 0x80 virtual false final false
static ::StringW ErrorCode(GlobalNamespace::ConnectionFailedReason connectionFailedReason) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ConnectionFailedReasonMethods);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ConnectionFailedReasonMethods, "", "ConnectionFailedReasonMethods");
