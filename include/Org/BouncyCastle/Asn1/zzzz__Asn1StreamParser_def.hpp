#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1EncodableVector;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1Convertible;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class Asn1StreamParser;
}
// Type: Org.BouncyCastle.Asn1::Asn1StreamParser
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(467))
// CS Name: Org.BouncyCastle.Asn1.Asn1StreamParser
class CORDL_TYPE Asn1StreamParser : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~Asn1StreamParser() = default;

// Ctor Parameters [CppParam { name: "", ty: "Asn1StreamParser", modifiers: " const&", def_value: None }]
constexpr Asn1StreamParser(Asn1StreamParser const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Asn1StreamParser", modifiers: "&&", def_value: None }]
constexpr Asn1StreamParser(Asn1StreamParser&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Asn1StreamParser(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Asn1StreamParser& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Asn1StreamParser& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Asn1StreamParser& operator=(Asn1StreamParser&& o) noexcept = default;
  constexpr Asn1StreamParser& operator=(Asn1StreamParser const& o) noexcept = default;
                


// Fields

 System::IO::Stream __declspec(property(get=__get__in, put=__set__in))  _in;

constexpr void __set__in(System::IO::Stream value) ;

constexpr System::IO::Stream __get__in() const;

 int32_t __declspec(property(get=__get__limit, put=__set__limit))  _limit;

constexpr void __set__limit(int32_t value) ;

constexpr int32_t __get__limit() const;

 ::ArrayW<::ArrayW<uint8_t>> __declspec(property(get=__get_tmpBuffers, put=__set_tmpBuffers))  tmpBuffers;

constexpr void __set_tmpBuffers(::ArrayW<::ArrayW<uint8_t>> value) ;

constexpr ::ArrayW<::ArrayW<uint8_t>> __get_tmpBuffers() const;


// Methods

static Org::BouncyCastle::Asn1::Asn1StreamParser New_ctor(System::IO::Stream inStream) ;

/// @brief Method .ctor addr 0x1129a1c size 0x30 virtual false final false
 void _ctor(System::IO::Stream inStream) ;

static Org::BouncyCastle::Asn1::Asn1StreamParser New_ctor(System::IO::Stream inStream, int32_t limit) ;

/// @brief Method .ctor addr 0x112b178 size 0xf0 virtual false final false
 void _ctor(System::IO::Stream inStream, int32_t limit) ;

static Org::BouncyCastle::Asn1::Asn1StreamParser New_ctor(::ArrayW<uint8_t> encoding) ;

/// @brief Method .ctor addr 0x112ed20 size 0x80 virtual false final false
 void _ctor(::ArrayW<uint8_t> encoding) ;

/// @brief Method ReadIndef addr 0x112eda0 size 0x18c virtual false final false
 Org::BouncyCastle::Asn1::IAsn1Convertible ReadIndef(int32_t tagValue) ;

/// @brief Method ReadImplicit addr 0x112ef2c size 0x2c8 virtual false final false
 Org::BouncyCastle::Asn1::IAsn1Convertible ReadImplicit(bool constructed, int32_t tag) ;

/// @brief Method ReadTaggedObject addr 0x1129a4c size 0x23c virtual false final false
 Org::BouncyCastle::Asn1::Asn1Object ReadTaggedObject(bool constructed, int32_t tag) ;

/// @brief Method ReadObject addr 0x112f428 size 0x5dc virtual true final false
 Org::BouncyCastle::Asn1::IAsn1Convertible ReadObject() ;

/// @brief Method Set00Check addr 0x112fa04 size 0x90 virtual false final false
 void Set00Check(bool enabled) ;

/// @brief Method ReadVector addr 0x112f26c size 0x128 virtual false final false
 Org::BouncyCastle::Asn1::Asn1EncodableVector ReadVector() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1
NEED_NO_BOX(Org::BouncyCastle::Asn1::Asn1StreamParser);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Asn1StreamParser, "Org.BouncyCastle.Asn1", "Asn1StreamParser");
