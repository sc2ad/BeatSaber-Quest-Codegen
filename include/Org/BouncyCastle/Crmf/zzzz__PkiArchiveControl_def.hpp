#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crmf {
class IControl;
}
namespace Org::BouncyCastle::Cms {
class CmsEnvelopedData;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1::Crmf {
class PkiArchiveOptions;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
// Forward declare root types
namespace Org::BouncyCastle::Crmf {
class PkiArchiveControl;
}
// Type: Org.BouncyCastle.Crmf::PkiArchiveControl
namespace Org::BouncyCastle::Crmf {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(703))
// CS Name: Org.BouncyCastle.Crmf.PkiArchiveControl
class CORDL_TYPE PkiArchiveControl : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crmf::IControl
constexpr operator  Org::BouncyCastle::Crmf::IControl() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~PkiArchiveControl() = default;

// Ctor Parameters [CppParam { name: "", ty: "PkiArchiveControl", modifiers: " const&", def_value: None }]
constexpr PkiArchiveControl(PkiArchiveControl const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PkiArchiveControl", modifiers: "&&", def_value: None }]
constexpr PkiArchiveControl(PkiArchiveControl&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PkiArchiveControl(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PkiArchiveControl& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PkiArchiveControl& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PkiArchiveControl& operator=(PkiArchiveControl&& o) noexcept = default;
  constexpr PkiArchiveControl& operator=(PkiArchiveControl const& o) noexcept = default;
                


// Fields

static int32_t __declspec(property(get=__get_encryptedPrivKey, put=__set_encryptedPrivKey))  encryptedPrivKey;

static void __set_encryptedPrivKey(int32_t value) ;

static int32_t __get_encryptedPrivKey() ;

static int32_t __declspec(property(get=__get_keyGenParameters, put=__set_keyGenParameters))  keyGenParameters;

static void __set_keyGenParameters(int32_t value) ;

static int32_t __get_keyGenParameters() ;

static int32_t __declspec(property(get=__get_archiveRemGenPrivKey, put=__set_archiveRemGenPrivKey))  archiveRemGenPrivKey;

static void __set_archiveRemGenPrivKey(int32_t value) ;

static int32_t __get_archiveRemGenPrivKey() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_type, put=__set_type))  type;

static void __set_type(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_type() ;

 Org::BouncyCastle::Asn1::Crmf::PkiArchiveOptions __declspec(property(get=__get_pkiArchiveOptions, put=__set_pkiArchiveOptions))  pkiArchiveOptions;

constexpr void __set_pkiArchiveOptions(Org::BouncyCastle::Asn1::Crmf::PkiArchiveOptions value) ;

constexpr Org::BouncyCastle::Asn1::Crmf::PkiArchiveOptions __get_pkiArchiveOptions() const;


// Properties

 Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=get_Type))  Type;

 Org::BouncyCastle::Asn1::Asn1Encodable __declspec(property(get=get_Value))  Value;

 int32_t __declspec(property(get=get_ArchiveType))  ArchiveType;

 bool __declspec(property(get=get_EnvelopedData))  EnvelopedData;


// Methods

static Org::BouncyCastle::Crmf::PkiArchiveControl New_ctor(Org::BouncyCastle::Asn1::Crmf::PkiArchiveOptions pkiArchiveOptions) ;

/// @brief Method .ctor addr 0x11830b4 size 0x28 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Crmf::PkiArchiveOptions pkiArchiveOptions) ;

/// @brief Method get_Type addr 0x118661c size 0x58 virtual true final true
 Org::BouncyCastle::Asn1::DerObjectIdentifier get_Type() ;

/// @brief Method get_Value addr 0x1186674 size 0x8 virtual true final true
 Org::BouncyCastle::Asn1::Asn1Encodable get_Value() ;

/// @brief Method get_ArchiveType addr 0x118667c size 0x20 virtual false final false
 int32_t get_ArchiveType() ;

/// @brief Method get_EnvelopedData addr 0x118669c size 0x44 virtual false final false
 bool get_EnvelopedData() ;

/// @brief Method GetEnvelopedData addr 0x11866e0 size 0x264 virtual false final false
 Org::BouncyCastle::Cms::CmsEnvelopedData GetEnvelopedData() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crmf
NEED_NO_BOX(Org::BouncyCastle::Crmf::PkiArchiveControl);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crmf::PkiArchiveControl, "Org.BouncyCastle.Crmf", "PkiArchiveControl");
