#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Name;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1Choice;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Ocsp {
class ResponderID;
}
// Type: Org.BouncyCastle.Asn1.Ocsp::ResponderID
namespace Org::BouncyCastle::Asn1::Ocsp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(216))
// CS Name: Org.BouncyCastle.Asn1.Ocsp.ResponderID
class CORDL_TYPE ResponderID : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Asn1::IAsn1Choice
constexpr operator  Org::BouncyCastle::Asn1::IAsn1Choice() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~ResponderID() = default;

// Ctor Parameters [CppParam { name: "", ty: "ResponderID", modifiers: " const&", def_value: None }]
constexpr ResponderID(ResponderID const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ResponderID", modifiers: "&&", def_value: None }]
constexpr ResponderID(ResponderID&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ResponderID(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr ResponderID& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ResponderID& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ResponderID& operator=(ResponderID&& o) noexcept = default;
  constexpr ResponderID& operator=(ResponderID const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::Asn1Encodable __declspec(property(get=__get_id, put=__set_id))  id;

constexpr void __set_id(Org::BouncyCastle::Asn1::Asn1Encodable value) ;

constexpr Org::BouncyCastle::Asn1::Asn1Encodable __get_id() const;


// Properties

 Org::BouncyCastle::Asn1::X509::X509Name __declspec(property(get=get_Name))  Name;


// Methods

/// @brief Method GetInstance addr 0xef43b4 size 0x1ec virtual false final false
static Org::BouncyCastle::Asn1::Ocsp::ResponderID GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "id", ty: "Org::BouncyCastle::Asn1::Asn1OctetString", modifiers: "", def_value: None }]
explicit ResponderID(Org::BouncyCastle::Asn1::Asn1OctetString id) ;

/// @brief Method .ctor addr 0xef45a0 size 0x78 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1OctetString id) ;

// Ctor Parameters [CppParam { name: "id", ty: "Org::BouncyCastle::Asn1::X509::X509Name", modifiers: "", def_value: None }]
explicit ResponderID(Org::BouncyCastle::Asn1::X509::X509Name id) ;

/// @brief Method .ctor addr 0xef4618 size 0x78 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::X509::X509Name id) ;

/// @brief Method GetInstance addr 0xef4690 size 0x1c virtual false final false
static Org::BouncyCastle::Asn1::Ocsp::ResponderID GetInstance(Org::BouncyCastle::Asn1::Asn1TaggedObject obj, bool isExplicit) ;

/// @brief Method GetKeyHash addr 0xef46ac size 0x88 virtual true final false
 ::ArrayW<uint8_t> GetKeyHash() ;

/// @brief Method get_Name addr 0xef4734 size 0xb0 virtual true final false
 Org::BouncyCastle::Asn1::X509::X509Name get_Name() ;

/// @brief Method ToAsn1Object addr 0xef47e4 size 0xc0 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Ocsp
NEED_NO_BOX(Org::BouncyCastle::Asn1::Ocsp::ResponderID);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Ocsp::ResponderID, "Org.BouncyCastle.Asn1.Ocsp", "ResponderID");
