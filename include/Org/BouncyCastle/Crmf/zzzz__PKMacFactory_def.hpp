#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1::Cmp {
class PbmParameter;
}
namespace Org::BouncyCastle::Crypto {
class IStreamCalculator;
}
namespace Org::BouncyCastle::Crypto {
class IMacFactory;
}
// Forward declare root types
namespace Org::BouncyCastle::Crmf {
class PKMacFactory;
}
// Type: Org.BouncyCastle.Crmf::PKMacFactory
namespace Org::BouncyCastle::Crmf {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(708))
// CS Name: Org.BouncyCastle.Crmf.PKMacFactory
class CORDL_TYPE PKMacFactory : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::IMacFactory
constexpr operator  Org::BouncyCastle::Crypto::IMacFactory() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~PKMacFactory() = default;

// Ctor Parameters [CppParam { name: "", ty: "PKMacFactory", modifiers: " const&", def_value: None }]
constexpr PKMacFactory(PKMacFactory const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PKMacFactory", modifiers: "&&", def_value: None }]
constexpr PKMacFactory(PKMacFactory&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PKMacFactory(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PKMacFactory& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PKMacFactory& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PKMacFactory& operator=(PKMacFactory&& o) noexcept = default;
  constexpr PKMacFactory& operator=(PKMacFactory const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::Cmp::PbmParameter __declspec(property(get=__get_parameters, put=__set_parameters))  parameters;

constexpr void __set_parameters(Org::BouncyCastle::Asn1::Cmp::PbmParameter value) ;

constexpr Org::BouncyCastle::Asn1::Cmp::PbmParameter __get_parameters() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_key, put=__set_key))  key;

constexpr void __set_key(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_key() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_AlgorithmDetails))  AlgorithmDetails;


// Methods

static Org::BouncyCastle::Crmf::PKMacFactory New_ctor(::ArrayW<uint8_t> key, Org::BouncyCastle::Asn1::Cmp::PbmParameter parameters) ;

/// @brief Method .ctor addr 0x1186e28 size 0x7c virtual false final false
 void _ctor(::ArrayW<uint8_t> key, Org::BouncyCastle::Asn1::Cmp::PbmParameter parameters) ;

/// @brief Method get_AlgorithmDetails addr 0x1186ea4 size 0x9c virtual true final false
 ::bs_hook::Il2CppWrapperType get_AlgorithmDetails() ;

/// @brief Method CreateCalculator addr 0x1186f40 size 0x174 virtual true final false
 Org::BouncyCastle::Crypto::IStreamCalculator CreateCalculator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crmf
NEED_NO_BOX(Org::BouncyCastle::Crmf::PKMacFactory);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crmf::PKMacFactory, "Org.BouncyCastle.Crmf", "PKMacFactory");
