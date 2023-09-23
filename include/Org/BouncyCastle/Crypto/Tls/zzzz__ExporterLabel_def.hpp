#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class ExporterLabel;
}
// Type: Org.BouncyCastle.Crypto.Tls::ExporterLabel
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1242))
// CS Name: Org.BouncyCastle.Crypto.Tls.ExporterLabel
class CORDL_TYPE ExporterLabel : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ExporterLabel() = default;

// Ctor Parameters [CppParam { name: "", ty: "ExporterLabel", modifiers: " const&", def_value: None }]
constexpr ExporterLabel(ExporterLabel const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ExporterLabel", modifiers: "&&", def_value: None }]
constexpr ExporterLabel(ExporterLabel&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ExporterLabel(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ExporterLabel& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ExporterLabel& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ExporterLabel& operator=(ExporterLabel&& o) noexcept = default;
  constexpr ExporterLabel& operator=(ExporterLabel const& o) noexcept = default;
                


// Fields

/// @brief Field client_finished offset 0
static constexpr ::ConstString  client_finished{u"client finished"};

/// @brief Field server_finished offset 0
static constexpr ::ConstString  server_finished{u"server finished"};

/// @brief Field master_secret offset 0
static constexpr ::ConstString  master_secret{u"master secret"};

/// @brief Field key_expansion offset 0
static constexpr ::ConstString  key_expansion{u"key expansion"};

/// @brief Field client_EAP_encryption offset 0
static constexpr ::ConstString  client_EAP_encryption{u"client EAP encryption"};

/// @brief Field ttls_keying_material offset 0
static constexpr ::ConstString  ttls_keying_material{u"ttls keying material"};

/// @brief Field ttls_challenge offset 0
static constexpr ::ConstString  ttls_challenge{u"ttls challenge"};

/// @brief Field dtls_srtp offset 0
static constexpr ::ConstString  dtls_srtp{u"EXTRACTOR-dtls_srtp"};

static ::StringW __declspec(property(get=__get_extended_master_secret, put=__set_extended_master_secret))  extended_master_secret;

static void __set_extended_master_secret(::StringW value) ;

static ::StringW __get_extended_master_secret() ;


// Methods

// Ctor Parameters []
explicit ExporterLabel() ;

/// @brief Method .ctor addr 0xf0427c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::ExporterLabel);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::ExporterLabel, "Org.BouncyCastle.Crypto.Tls", "ExporterLabel");
