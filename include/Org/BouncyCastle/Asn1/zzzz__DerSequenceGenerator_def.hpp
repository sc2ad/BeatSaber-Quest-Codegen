#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerGenerator_def.hpp"
#include <cstdint>
namespace {
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace System::IO {
class MemoryStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class DerSequenceGenerator;
}
// Type: Org.BouncyCastle.Asn1::DerSequenceGenerator
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(508))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(513))
// CS Name: Org.BouncyCastle.Asn1.DerSequenceGenerator
class CORDL_TYPE DerSequenceGenerator : public ::Org::BouncyCastle::Asn1::DerGenerator {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~DerSequenceGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "DerSequenceGenerator", modifiers: " const&", def_value: None }]
constexpr DerSequenceGenerator(DerSequenceGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DerSequenceGenerator", modifiers: "&&", def_value: None }]
constexpr DerSequenceGenerator(DerSequenceGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DerSequenceGenerator(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::DerGenerator(ptr) {
}


  constexpr DerSequenceGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DerSequenceGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DerSequenceGenerator& operator=(DerSequenceGenerator&& o) noexcept = default;
  constexpr DerSequenceGenerator& operator=(DerSequenceGenerator const& o) noexcept = default;
                


// Fields

 ::System::IO::MemoryStream __declspec(property(get=__get__bOut, put=__set__bOut))  _bOut;

constexpr void __set__bOut(::System::IO::MemoryStream value) ;

constexpr ::System::IO::MemoryStream __get__bOut() const;


// Methods

// Ctor Parameters [CppParam { name: "outStream", ty: "::System::IO::Stream", modifiers: "", def_value: None }]
explicit DerSequenceGenerator(::System::IO::Stream outStream) ;

/// @brief Method .ctor addr 0x1138b64 size 0x80 virtual false final false
 void _ctor(::System::IO::Stream outStream) ;

// Ctor Parameters [CppParam { name: "outStream", ty: "::System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "tagNo", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "isExplicit", ty: "bool", modifiers: "", def_value: None }]
explicit DerSequenceGenerator(::System::IO::Stream outStream, int32_t tagNo, bool isExplicit) ;

/// @brief Method .ctor addr 0x1138be4 size 0xa4 virtual false final false
 void _ctor(::System::IO::Stream outStream, int32_t tagNo, bool isExplicit) ;

/// @brief Method AddObject addr 0x1138c88 size 0x80 virtual true final false
 void AddObject(::Org::BouncyCastle::Asn1::Asn1Encodable obj) ;

/// @brief Method GetRawOutputStream addr 0x1138d08 size 0x8 virtual true final false
 ::System::IO::Stream GetRawOutputStream() ;

/// @brief Method Close addr 0x1138d10 size 0x38 virtual true final false
 void Close() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::DerSequenceGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::DerSequenceGenerator, "Org.BouncyCastle.Asn1", "DerSequenceGenerator");
