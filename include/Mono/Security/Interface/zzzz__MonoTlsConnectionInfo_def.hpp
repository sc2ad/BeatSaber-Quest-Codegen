#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace Mono::Security::Interface {
struct TlsProtocols;
}
namespace Mono::Security::Interface {
struct CipherSuiteCode;
}
// Forward declare root types
namespace Mono::Security::Interface {
class MonoTlsConnectionInfo;
}
// Type: Mono.Security.Interface::MonoTlsConnectionInfo
namespace Mono::Security::Interface {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13989))
// CS Name: Mono.Security.Interface.MonoTlsConnectionInfo
class CORDL_TYPE MonoTlsConnectionInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~MonoTlsConnectionInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "MonoTlsConnectionInfo", modifiers: " const&", def_value: None }]
constexpr MonoTlsConnectionInfo(MonoTlsConnectionInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MonoTlsConnectionInfo", modifiers: "&&", def_value: None }]
constexpr MonoTlsConnectionInfo(MonoTlsConnectionInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MonoTlsConnectionInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MonoTlsConnectionInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MonoTlsConnectionInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MonoTlsConnectionInfo& operator=(MonoTlsConnectionInfo&& o) noexcept = default;
  constexpr MonoTlsConnectionInfo& operator=(MonoTlsConnectionInfo const& o) noexcept = default;
                


// Fields

 Mono::Security::Interface::CipherSuiteCode __declspec(property(get=__get__CipherSuiteCode_k__BackingField, put=__set__CipherSuiteCode_k__BackingField))  _CipherSuiteCode_k__BackingField;

constexpr void __set__CipherSuiteCode_k__BackingField(Mono::Security::Interface::CipherSuiteCode value) ;

constexpr Mono::Security::Interface::CipherSuiteCode __get__CipherSuiteCode_k__BackingField() const;

 Mono::Security::Interface::TlsProtocols __declspec(property(get=__get__ProtocolVersion_k__BackingField, put=__set__ProtocolVersion_k__BackingField))  _ProtocolVersion_k__BackingField;

constexpr void __set__ProtocolVersion_k__BackingField(Mono::Security::Interface::TlsProtocols value) ;

constexpr Mono::Security::Interface::TlsProtocols __get__ProtocolVersion_k__BackingField() const;

 ::StringW __declspec(property(get=__get__PeerDomainName_k__BackingField, put=__set__PeerDomainName_k__BackingField))  _PeerDomainName_k__BackingField;

constexpr void __set__PeerDomainName_k__BackingField(::StringW value) ;

constexpr ::StringW __get__PeerDomainName_k__BackingField() const;


// Properties

 Mono::Security::Interface::CipherSuiteCode __declspec(property(get=get_CipherSuiteCode, put=set_CipherSuiteCode))  CipherSuiteCode;

 Mono::Security::Interface::TlsProtocols __declspec(property(get=get_ProtocolVersion, put=set_ProtocolVersion))  ProtocolVersion;

 ::StringW __declspec(property(put=set_PeerDomainName))  PeerDomainName;


// Methods

/// @brief Method get_CipherSuiteCode addr 0x2295498 size 0x8 virtual false final false
 Mono::Security::Interface::CipherSuiteCode get_CipherSuiteCode() ;

/// @brief Method set_CipherSuiteCode addr 0x22954a0 size 0x8 virtual false final false
 void set_CipherSuiteCode(Mono::Security::Interface::CipherSuiteCode value) ;

/// @brief Method get_ProtocolVersion addr 0x22954a8 size 0x8 virtual false final false
 Mono::Security::Interface::TlsProtocols get_ProtocolVersion() ;

/// @brief Method set_ProtocolVersion addr 0x22954b0 size 0x8 virtual false final false
 void set_ProtocolVersion(Mono::Security::Interface::TlsProtocols value) ;

/// @brief Method set_PeerDomainName addr 0x22954b8 size 0x8 virtual false final false
 void set_PeerDomainName(::StringW value) ;

/// @brief Method ToString addr 0x22954c0 size 0xbc virtual true final false
 ::StringW ToString() ;

// Ctor Parameters []
explicit MonoTlsConnectionInfo() ;

/// @brief Method .ctor addr 0x229557c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Security::Interface
NEED_NO_BOX(Mono::Security::Interface::MonoTlsConnectionInfo);
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::Interface::MonoTlsConnectionInfo, "Mono.Security.Interface", "MonoTlsConnectionInfo");
