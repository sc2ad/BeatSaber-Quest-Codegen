#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace GlobalNamespace {
struct DisconnectedReason;
}
// Forward declare root types
namespace GlobalNamespace {
class DisconnectedReasonMethods;
}
// Type: ::DisconnectedReasonMethods
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4495))
// CS Name: DisconnectedReasonMethods
class CORDL_TYPE DisconnectedReasonMethods : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~DisconnectedReasonMethods() = default;

// Ctor Parameters [CppParam { name: "", ty: "DisconnectedReasonMethods", modifiers: " const&", def_value: None }]
constexpr DisconnectedReasonMethods(DisconnectedReasonMethods const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DisconnectedReasonMethods", modifiers: "&&", def_value: None }]
constexpr DisconnectedReasonMethods(DisconnectedReasonMethods&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DisconnectedReasonMethods(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DisconnectedReasonMethods& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DisconnectedReasonMethods& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DisconnectedReasonMethods& operator=(DisconnectedReasonMethods&& o) noexcept = default;
  constexpr DisconnectedReasonMethods& operator=(DisconnectedReasonMethods const& o) noexcept = default;
                


// Fields

/// @brief Field kDisconnectedUnknown offset 0
static constexpr ::ConstString  kDisconnectedUnknown{u"DISCONNECTED_UNKNOWN"};

/// @brief Field kDisconnectedUserInitiated offset 0
static constexpr ::ConstString  kDisconnectedUserInitiated{u"DISCONNECTED_USER_INITIATED"};

/// @brief Field kDisconnectedTimeout offset 0
static constexpr ::ConstString  kDisconnectedTimeout{u"DISCONNECTED_TIMEOUT"};

/// @brief Field kDisconnectedKicked offset 0
static constexpr ::ConstString  kDisconnectedKicked{u"DISCONNECTED_KICKED"};

/// @brief Field kDisconnectedServerAtCapacity offset 0
static constexpr ::ConstString  kDisconnectedServerAtCapacity{u"DISCONNECTED_SERVER_AT_CAPACITY"};

/// @brief Field kDisconnectedServerConnectionClosed offset 0
static constexpr ::ConstString  kDisconnectedServerConnectionClosed{u"DISCONNECTED_SERVER_SHUT_DOWN"};

/// @brief Field kDisconnectedMasterServerUnreachable offset 0
static constexpr ::ConstString  kDisconnectedMasterServerUnreachable{u"DISCONNECTED_MASTER_SERVER_UNREACHABLE"};

/// @brief Field kDisconnectedServerTerminated offset 0
static constexpr ::ConstString  kDisconnectedServerTerminated{u"DISCONNECTED_SERVER_SHUT_DOWN"};


// Methods

/// @brief Method LocalizedKey addr 0x21f2e70 size 0xa8 virtual false final false
static ::StringW LocalizedKey(GlobalNamespace::DisconnectedReason connectionFailedReason) ;

/// @brief Method ErrorCode addr 0x21f2f18 size 0x80 virtual false final false
static ::StringW ErrorCode(GlobalNamespace::DisconnectedReason disconnectedReason) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::DisconnectedReasonMethods);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DisconnectedReasonMethods, "", "DisconnectedReasonMethods");
