#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__BerGenerator_def.hpp"
#include <cstdint>
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class BerSetGenerator;
}
// Type: Org.BouncyCastle.Asn1::BerSetGenerator
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(476))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(493))
// CS Name: Org.BouncyCastle.Asn1.BerSetGenerator
class CORDL_TYPE BerSetGenerator : public Org::BouncyCastle::Asn1::BerGenerator {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~BerSetGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "BerSetGenerator", modifiers: " const&", def_value: None }]
constexpr BerSetGenerator(BerSetGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BerSetGenerator", modifiers: "&&", def_value: None }]
constexpr BerSetGenerator(BerSetGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BerSetGenerator(void* ptr) noexcept : Org::BouncyCastle::Asn1::BerGenerator(ptr) {
}


  constexpr BerSetGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BerSetGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BerSetGenerator& operator=(BerSetGenerator&& o) noexcept = default;
  constexpr BerSetGenerator& operator=(BerSetGenerator const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "outStream", ty: "System::IO::Stream", modifiers: "", def_value: None }]
explicit BerSetGenerator(System::IO::Stream outStream) ;

/// @brief Method .ctor addr 0x1133e14 size 0x34 virtual false final false
 void _ctor(System::IO::Stream outStream) ;

// Ctor Parameters [CppParam { name: "outStream", ty: "System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "tagNo", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "isExplicit", ty: "bool", modifiers: "", def_value: None }]
explicit BerSetGenerator(System::IO::Stream outStream, int32_t tagNo, bool isExplicit) ;

/// @brief Method .ctor addr 0x1133e48 size 0x54 virtual false final false
 void _ctor(System::IO::Stream outStream, int32_t tagNo, bool isExplicit) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1
NEED_NO_BOX(Org::BouncyCastle::Asn1::BerSetGenerator);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::BerSetGenerator, "Org.BouncyCastle.Asn1", "BerSetGenerator");
