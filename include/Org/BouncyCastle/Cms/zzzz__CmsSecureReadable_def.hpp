#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Cms {
class CmsReadable;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class KeyParameter;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsSecureReadable;
}
// Type: Org.BouncyCastle.Cms::CmsSecureReadable
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(626))
// CS Name: Org.BouncyCastle.Cms.CmsSecureReadable
class CORDL_TYPE CmsSecureReadable : public ::cordl_internals::InterfaceW {
public:
// Declarations
~CmsSecureReadable() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CmsSecureReadable(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=get_Algorithm))  Algorithm;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_CryptoObject))  CryptoObject;


// Methods

/// @brief Method get_Algorithm addr 0x0 size 0xffffffffffffffff virtual true final false
 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier get_Algorithm() ;

/// @brief Method get_CryptoObject addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType get_CryptoObject() ;

/// @brief Method GetReadable addr 0x0 size 0xffffffffffffffff virtual true final false
 Org::BouncyCastle::Cms::CmsReadable GetReadable(Org::BouncyCastle::Crypto::Parameters::KeyParameter key) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Cms
NEED_NO_BOX(Org::BouncyCastle::Cms::CmsSecureReadable);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Cms::CmsSecureReadable, "Org.BouncyCastle.Cms", "CmsSecureReadable");
