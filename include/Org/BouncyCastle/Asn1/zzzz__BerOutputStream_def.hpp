#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerOutputStream_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class BerOutputStream;
}
// Type: Org.BouncyCastle.Asn1::BerOutputStream
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(457))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(486))
// CS Name: Org.BouncyCastle.Asn1.BerOutputStream
class CORDL_TYPE BerOutputStream : public ::Org::BouncyCastle::Asn1::DerOutputStream {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~BerOutputStream() = default;

// Ctor Parameters [CppParam { name: "", ty: "BerOutputStream", modifiers: " const&", def_value: None }]
constexpr BerOutputStream(BerOutputStream const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BerOutputStream", modifiers: "&&", def_value: None }]
constexpr BerOutputStream(BerOutputStream&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BerOutputStream(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::DerOutputStream(ptr) {
}


  constexpr BerOutputStream& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BerOutputStream& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BerOutputStream& operator=(BerOutputStream&& o) noexcept = default;
  constexpr BerOutputStream& operator=(BerOutputStream const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "os", ty: "::System::IO::Stream", modifiers: "", def_value: None }]
explicit BerOutputStream(::System::IO::Stream os) ;

/// @brief Method .ctor addr 0x1130d78 size 0x4 virtual false final false
 void _ctor(::System::IO::Stream os) ;

/// @brief Method WriteObject addr 0x11326f0 size 0x15c virtual true final false
 void WriteObject(::bs_hook::Il2CppWrapperType obj) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::BerOutputStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::BerOutputStream, "Org.BouncyCastle.Asn1", "BerOutputStream");
