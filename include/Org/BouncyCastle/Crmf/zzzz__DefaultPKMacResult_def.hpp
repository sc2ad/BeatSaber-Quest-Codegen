#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class IMac;
}
namespace Org::BouncyCastle::Crypto {
class IBlockResult;
}
// Forward declare root types
namespace Org::BouncyCastle::Crmf {
class DefaultPKMacResult;
}
// Type: Org.BouncyCastle.Crmf::DefaultPKMacResult
namespace Org::BouncyCastle::Crmf {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(710))
// CS Name: Org.BouncyCastle.Crmf.DefaultPKMacResult
class CORDL_TYPE DefaultPKMacResult : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::IBlockResult
constexpr operator  Org::BouncyCastle::Crypto::IBlockResult() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~DefaultPKMacResult() = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultPKMacResult", modifiers: " const&", def_value: None }]
constexpr DefaultPKMacResult(DefaultPKMacResult const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultPKMacResult", modifiers: "&&", def_value: None }]
constexpr DefaultPKMacResult(DefaultPKMacResult&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DefaultPKMacResult(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DefaultPKMacResult& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DefaultPKMacResult& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DefaultPKMacResult& operator=(DefaultPKMacResult&& o) noexcept = default;
  constexpr DefaultPKMacResult& operator=(DefaultPKMacResult const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Crypto::IMac __declspec(property(get=__get_mac, put=__set_mac))  mac;

constexpr void __set_mac(Org::BouncyCastle::Crypto::IMac value) ;

constexpr Org::BouncyCastle::Crypto::IMac __get_mac() const;


// Methods

// Ctor Parameters [CppParam { name: "mac", ty: "Org::BouncyCastle::Crypto::IMac", modifiers: "", def_value: None }]
explicit DefaultPKMacResult(Org::BouncyCastle::Crypto::IMac mac) ;

/// @brief Method .ctor addr 0x1186e00 size 0x28 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::IMac mac) ;

/// @brief Method Collect addr 0x11870b4 size 0x148 virtual true final true
 ::ArrayW<uint8_t> Collect() ;

/// @brief Method Collect addr 0x11871fc size 0x40 virtual true final true
 int32_t Collect(::ArrayW<uint8_t> sig, int32_t sigOff) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crmf
NEED_NO_BOX(Org::BouncyCastle::Crmf::DefaultPKMacResult);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crmf::DefaultPKMacResult, "Org.BouncyCastle.Crmf", "DefaultPKMacResult");
