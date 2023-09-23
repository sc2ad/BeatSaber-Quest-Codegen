#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Generator_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class DerGenerator;
}
// Type: Org.BouncyCastle.Asn1::DerGenerator
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(451))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(508))
// CS Name: Org.BouncyCastle.Asn1.DerGenerator
class CORDL_TYPE DerGenerator : public Org::BouncyCastle::Asn1::Asn1Generator {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~DerGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "DerGenerator", modifiers: " const&", def_value: None }]
constexpr DerGenerator(DerGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DerGenerator", modifiers: "&&", def_value: None }]
constexpr DerGenerator(DerGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DerGenerator(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Generator(ptr) {
}


  constexpr DerGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DerGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DerGenerator& operator=(DerGenerator&& o) noexcept = default;
  constexpr DerGenerator& operator=(DerGenerator const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__tagged, put=__set__tagged))  _tagged;

constexpr void __set__tagged(bool value) ;

constexpr bool __get__tagged() const;

 bool __declspec(property(get=__get__isExplicit, put=__set__isExplicit))  _isExplicit;

constexpr void __set__isExplicit(bool value) ;

constexpr bool __get__isExplicit() const;

 int32_t __declspec(property(get=__get__tagNo, put=__set__tagNo))  _tagNo;

constexpr void __set__tagNo(int32_t value) ;

constexpr int32_t __get__tagNo() const;


// Methods

// Ctor Parameters [CppParam { name: "outStream", ty: "System::IO::Stream", modifiers: "", def_value: None }]
explicit DerGenerator(System::IO::Stream outStream) ;

/// @brief Method .ctor addr 0x1137964 size 0x2c virtual false final false
 void _ctor(System::IO::Stream outStream) ;

// Ctor Parameters [CppParam { name: "outStream", ty: "System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "tagNo", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "isExplicit", ty: "bool", modifiers: "", def_value: None }]
explicit DerGenerator(System::IO::Stream outStream, int32_t tagNo, bool isExplicit) ;

/// @brief Method .ctor addr 0x1137990 size 0x4c virtual false final false
 void _ctor(System::IO::Stream outStream, int32_t tagNo, bool isExplicit) ;

/// @brief Method WriteLength addr 0x11379dc size 0xac virtual false final false
static void WriteLength(System::IO::Stream outStr, int32_t length) ;

/// @brief Method WriteDerEncoded addr 0x1137a88 size 0x60 virtual false final false
static void WriteDerEncoded(System::IO::Stream outStream, int32_t tag, ::ArrayW<uint8_t> bytes) ;

/// @brief Method WriteDerEncoded addr 0x1137ae8 size 0xe0 virtual false final false
 void WriteDerEncoded(int32_t tag, ::ArrayW<uint8_t> bytes) ;

/// @brief Method WriteDerEncoded addr 0x1137bc8 size 0x34 virtual false final false
static void WriteDerEncoded(System::IO::Stream outStr, int32_t tag, System::IO::Stream inStr) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1
NEED_NO_BOX(Org::BouncyCastle::Asn1::DerGenerator);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::DerGenerator, "Org.BouncyCastle.Asn1", "DerGenerator");
