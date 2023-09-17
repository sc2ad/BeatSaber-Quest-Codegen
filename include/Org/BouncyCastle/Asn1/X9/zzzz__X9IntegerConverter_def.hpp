#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Math::EC {
class ECCurve;
}
namespace Org::BouncyCastle::Math::EC {
class ECFieldElement;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X9 {
class X9IntegerConverter;
}
// Type: Org.BouncyCastle.Asn1.X9::X9IntegerConverter
namespace Org::BouncyCastle::Asn1::X9 {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(447))
// CS Name: Org.BouncyCastle.Asn1.X9.X9IntegerConverter
class CORDL_TYPE X9IntegerConverter : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~X9IntegerConverter() = default;

// Ctor Parameters [CppParam { name: "", ty: "X9IntegerConverter", modifiers: " const&", def_value: None }]
constexpr X9IntegerConverter(X9IntegerConverter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X9IntegerConverter", modifiers: "&&", def_value: None }]
constexpr X9IntegerConverter(X9IntegerConverter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X9IntegerConverter(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr X9IntegerConverter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X9IntegerConverter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X9IntegerConverter& operator=(X9IntegerConverter&& o) noexcept = default;
  constexpr X9IntegerConverter& operator=(X9IntegerConverter const& o) noexcept = default;
                


// Methods

/// @brief Method GetByteLength addr 0x11270fc size 0x34 virtual false final false
static int32_t GetByteLength(::Org::BouncyCastle::Math::EC::ECFieldElement fe) ;

/// @brief Method GetByteLength addr 0x1127430 size 0x34 virtual false final false
static int32_t GetByteLength(::Org::BouncyCastle::Math::EC::ECCurve c) ;

/// @brief Method IntegerToBytes addr 0x1127130 size 0xdc virtual false final false
static ::ArrayW<uint8_t> IntegerToBytes(::Org::BouncyCastle::Math::BigInteger s, int32_t qLength) ;

// Ctor Parameters []
explicit X9IntegerConverter() ;

/// @brief Method .ctor addr 0x1127464 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X9
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X9::X9IntegerConverter);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X9::X9IntegerConverter, "Org.BouncyCastle.Asn1.X9", "X9IntegerConverter");
