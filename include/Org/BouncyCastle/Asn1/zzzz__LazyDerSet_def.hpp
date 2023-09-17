#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerSet_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace System::Collections {
class IEnumerator;
}
namespace Org::BouncyCastle::Asn1 {
class DerOutputStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class LazyDerSet;
}
// Type: Org.BouncyCastle.Asn1::LazyDerSet
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(491))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(526))
// CS Name: Org.BouncyCastle.Asn1.LazyDerSet
class CORDL_TYPE LazyDerSet : public ::Org::BouncyCastle::Asn1::DerSet {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~LazyDerSet() = default;

// Ctor Parameters [CppParam { name: "", ty: "LazyDerSet", modifiers: " const&", def_value: None }]
constexpr LazyDerSet(LazyDerSet const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LazyDerSet", modifiers: "&&", def_value: None }]
constexpr LazyDerSet(LazyDerSet&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LazyDerSet(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::DerSet(ptr) {
}


  constexpr LazyDerSet& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LazyDerSet& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LazyDerSet& operator=(LazyDerSet&& o) noexcept = default;
  constexpr LazyDerSet& operator=(LazyDerSet const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get_encoded, put=__set_encoded))  encoded;

constexpr void __set_encoded(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_encoded() const;


// Properties

 ::Org::BouncyCastle::Asn1::Asn1Encodable __declspec(property(get=get_Item))  Item;

 int32_t __declspec(property(get=get_Count))  Count;


// Methods

// Ctor Parameters [CppParam { name: "encoded", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit LazyDerSet(::ArrayW<uint8_t> encoded) ;

/// @brief Method .ctor addr 0x113b364 size 0x68 virtual false final false
 void _ctor(::ArrayW<uint8_t> encoded) ;

/// @brief Method Parse addr 0x113b670 size 0x168 virtual false final false
 void Parse() ;

/// @brief Method get_Item addr 0x113b7d8 size 0x28 virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Encodable get_Item(int32_t index) ;

/// @brief Method GetEnumerator addr 0x113b800 size 0x24 virtual true final false
 ::System::Collections::IEnumerator GetEnumerator() ;

/// @brief Method get_Count addr 0x113b824 size 0x24 virtual true final false
 int32_t get_Count() ;

/// @brief Method Encode addr 0x113b848 size 0xcc virtual true final false
 void Encode(::Org::BouncyCastle::Asn1::DerOutputStream derOut) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::LazyDerSet);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::LazyDerSet, "Org.BouncyCastle.Asn1", "LazyDerSet");
