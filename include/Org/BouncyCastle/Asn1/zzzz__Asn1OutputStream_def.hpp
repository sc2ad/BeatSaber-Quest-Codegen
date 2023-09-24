#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerOutputStream_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class Asn1OutputStream;
}
// Type: Org.BouncyCastle.Asn1::Asn1OutputStream
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(457))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(458))
// CS Name: Org.BouncyCastle.Asn1.Asn1OutputStream
class CORDL_TYPE Asn1OutputStream : public Org::BouncyCastle::Asn1::DerOutputStream {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~Asn1OutputStream() = default;

// Ctor Parameters [CppParam { name: "", ty: "Asn1OutputStream", modifiers: " const&", def_value: None }]
constexpr Asn1OutputStream(Asn1OutputStream const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Asn1OutputStream", modifiers: "&&", def_value: None }]
constexpr Asn1OutputStream(Asn1OutputStream&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Asn1OutputStream(void* ptr) noexcept : Org::BouncyCastle::Asn1::DerOutputStream(ptr) {
}


  constexpr Asn1OutputStream& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Asn1OutputStream& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Asn1OutputStream& operator=(Asn1OutputStream&& o) noexcept = default;
  constexpr Asn1OutputStream& operator=(Asn1OutputStream const& o) noexcept = default;
                


// Methods

static Org::BouncyCastle::Asn1::Asn1OutputStream New_ctor(System::IO::Stream os) ;

/// @brief Method .ctor addr 0x112ce38 size 0x4 virtual false final false
 void _ctor(System::IO::Stream os) ;

/// @brief Method WriteObject addr 0x112ce3c size 0x15c virtual true final false
 void WriteObject(::bs_hook::Il2CppWrapperType obj) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1
NEED_NO_BOX(Org::BouncyCastle::Asn1::Asn1OutputStream);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Asn1OutputStream, "Org.BouncyCastle.Asn1", "Asn1OutputStream");
