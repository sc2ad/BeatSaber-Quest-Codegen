#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__BerGenerator_def.hpp"
#include <cstdint>
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class BerSequenceGenerator;
}
// Type: Org.BouncyCastle.Asn1::BerSequenceGenerator
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(476))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(489))
// CS Name: Org.BouncyCastle.Asn1.BerSequenceGenerator
class CORDL_TYPE BerSequenceGenerator : public Org::BouncyCastle::Asn1::BerGenerator {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~BerSequenceGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "BerSequenceGenerator", modifiers: " const&", def_value: None }]
constexpr BerSequenceGenerator(BerSequenceGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BerSequenceGenerator", modifiers: "&&", def_value: None }]
constexpr BerSequenceGenerator(BerSequenceGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BerSequenceGenerator(void* ptr) noexcept : Org::BouncyCastle::Asn1::BerGenerator(ptr) {
}


  constexpr BerSequenceGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BerSequenceGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BerSequenceGenerator& operator=(BerSequenceGenerator&& o) noexcept = default;
  constexpr BerSequenceGenerator& operator=(BerSequenceGenerator const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "outStream", ty: "System::IO::Stream", modifiers: "", def_value: None }]
explicit BerSequenceGenerator(System::IO::Stream outStream) ;

/// @brief Method .ctor addr 0x11331a8 size 0x34 virtual false final false
 void _ctor(System::IO::Stream outStream) ;

// Ctor Parameters [CppParam { name: "outStream", ty: "System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "tagNo", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "isExplicit", ty: "bool", modifiers: "", def_value: None }]
explicit BerSequenceGenerator(System::IO::Stream outStream, int32_t tagNo, bool isExplicit) ;

/// @brief Method .ctor addr 0x11331dc size 0x54 virtual false final false
 void _ctor(System::IO::Stream outStream, int32_t tagNo, bool isExplicit) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1
NEED_NO_BOX(Org::BouncyCastle::Asn1::BerSequenceGenerator);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::BerSequenceGenerator, "Org.BouncyCastle.Asn1", "BerSequenceGenerator");
