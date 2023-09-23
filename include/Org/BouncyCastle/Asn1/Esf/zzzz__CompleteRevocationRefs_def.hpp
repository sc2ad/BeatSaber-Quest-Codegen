#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1::Esf {
class CrlOcspRef;
}
namespace System::Collections {
class IEnumerable;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Esf {
class CompleteRevocationRefs;
}
// Type: Org.BouncyCastle.Asn1.Esf::CompleteRevocationRefs
namespace Org::BouncyCastle::Asn1::Esf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(139))
// CS Name: Org.BouncyCastle.Asn1.Esf.CompleteRevocationRefs
class CORDL_TYPE CompleteRevocationRefs : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~CompleteRevocationRefs() = default;

// Ctor Parameters [CppParam { name: "", ty: "CompleteRevocationRefs", modifiers: " const&", def_value: None }]
constexpr CompleteRevocationRefs(CompleteRevocationRefs const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CompleteRevocationRefs", modifiers: "&&", def_value: None }]
constexpr CompleteRevocationRefs(CompleteRevocationRefs&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CompleteRevocationRefs(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr CompleteRevocationRefs& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CompleteRevocationRefs& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CompleteRevocationRefs& operator=(CompleteRevocationRefs&& o) noexcept = default;
  constexpr CompleteRevocationRefs& operator=(CompleteRevocationRefs const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::Asn1Sequence __declspec(property(get=__get_crlOcspRefs, put=__set_crlOcspRefs))  crlOcspRefs;

constexpr void __set_crlOcspRefs(Org::BouncyCastle::Asn1::Asn1Sequence value) ;

constexpr Org::BouncyCastle::Asn1::Asn1Sequence __get_crlOcspRefs() const;


// Methods

/// @brief Method GetInstance addr 0xe02874 size 0x188 virtual false final false
static Org::BouncyCastle::Asn1::Esf::CompleteRevocationRefs GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "seq", ty: "Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit CompleteRevocationRefs(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xe029fc size 0x34c virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

// Ctor Parameters [CppParam { name: "crlOcspRefs", ty: "::ArrayW<Org::BouncyCastle::Asn1::Esf::CrlOcspRef>", modifiers: "", def_value: None }]
explicit CompleteRevocationRefs(::ArrayW<Org::BouncyCastle::Asn1::Esf::CrlOcspRef> crlOcspRefs) ;

/// @brief Method .ctor addr 0xe02ed0 size 0xc4 virtual false final false
 void _ctor(::ArrayW<Org::BouncyCastle::Asn1::Esf::CrlOcspRef> crlOcspRefs) ;

// Ctor Parameters [CppParam { name: "crlOcspRefs", ty: "System::Collections::IEnumerable", modifiers: "", def_value: None }]
explicit CompleteRevocationRefs(System::Collections::IEnumerable crlOcspRefs) ;

/// @brief Method .ctor addr 0xe02f94 size 0x1a4 virtual false final false
 void _ctor(System::Collections::IEnumerable crlOcspRefs) ;

/// @brief Method GetCrlOcspRefs addr 0xe03138 size 0x120 virtual false final false
 ::ArrayW<Org::BouncyCastle::Asn1::Esf::CrlOcspRef> GetCrlOcspRefs() ;

/// @brief Method ToAsn1Object addr 0xe03258 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Esf
NEED_NO_BOX(Org::BouncyCastle::Asn1::Esf::CompleteRevocationRefs);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Esf::CompleteRevocationRefs, "Org.BouncyCastle.Asn1.Esf", "CompleteRevocationRefs");
