#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerSequence_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class DerOutputStream;
}
namespace System::Collections {
class IEnumerator;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class LazyDerSequence;
}
// Type: Org.BouncyCastle.Asn1::LazyDerSequence
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(487))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(525))
// CS Name: Org.BouncyCastle.Asn1.LazyDerSequence
class CORDL_TYPE LazyDerSequence : public Org::BouncyCastle::Asn1::DerSequence {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~LazyDerSequence() = default;

// Ctor Parameters [CppParam { name: "", ty: "LazyDerSequence", modifiers: " const&", def_value: None }]
constexpr LazyDerSequence(LazyDerSequence const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LazyDerSequence", modifiers: "&&", def_value: None }]
constexpr LazyDerSequence(LazyDerSequence&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LazyDerSequence(void* ptr) noexcept : Org::BouncyCastle::Asn1::DerSequence(ptr) {
}


  constexpr LazyDerSequence& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LazyDerSequence& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LazyDerSequence& operator=(LazyDerSequence&& o) noexcept = default;
  constexpr LazyDerSequence& operator=(LazyDerSequence const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get_encoded, put=__set_encoded))  encoded;

constexpr void __set_encoded(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_encoded() const;


// Properties

 Org::BouncyCastle::Asn1::Asn1Encodable __declspec(property(get=get_Item))  Item;

 int32_t __declspec(property(get=get_Count))  Count;


// Methods

static Org::BouncyCastle::Asn1::LazyDerSequence New_ctor(::ArrayW<uint8_t> encoded) ;

/// @brief Method .ctor addr 0x113b288 size 0x68 virtual false final false
 void _ctor(::ArrayW<uint8_t> encoded) ;

/// @brief Method Parse addr 0x113b3cc size 0x168 virtual false final false
 void Parse() ;

/// @brief Method get_Item addr 0x113b534 size 0x28 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Encodable get_Item(int32_t index) ;

/// @brief Method GetEnumerator addr 0x113b55c size 0x24 virtual true final false
 System::Collections::IEnumerator GetEnumerator() ;

/// @brief Method get_Count addr 0x113b580 size 0x24 virtual true final false
 int32_t get_Count() ;

/// @brief Method Encode addr 0x113b5a4 size 0xcc virtual true final false
 void Encode(Org::BouncyCastle::Asn1::DerOutputStream derOut) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1
NEED_NO_BOX(Org::BouncyCastle::Asn1::LazyDerSequence);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::LazyDerSequence, "Org.BouncyCastle.Asn1", "LazyDerSequence");
