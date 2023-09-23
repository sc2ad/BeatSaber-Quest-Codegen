#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::X509 {
class PemParser;
}
// Type: Org.BouncyCastle.X509::PemParser
namespace Org::BouncyCastle::X509 {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1855))
// CS Name: Org.BouncyCastle.X509.PemParser
class CORDL_TYPE PemParser : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~PemParser() = default;

// Ctor Parameters [CppParam { name: "", ty: "PemParser", modifiers: " const&", def_value: None }]
constexpr PemParser(PemParser const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PemParser", modifiers: "&&", def_value: None }]
constexpr PemParser(PemParser&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PemParser(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PemParser& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PemParser& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PemParser& operator=(PemParser&& o) noexcept = default;
  constexpr PemParser& operator=(PemParser const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__header1, put=__set__header1))  _header1;

constexpr void __set__header1(::StringW value) ;

constexpr ::StringW __get__header1() const;

 ::StringW __declspec(property(get=__get__header2, put=__set__header2))  _header2;

constexpr void __set__header2(::StringW value) ;

constexpr ::StringW __get__header2() const;

 ::StringW __declspec(property(get=__get__footer1, put=__set__footer1))  _footer1;

constexpr void __set__footer1(::StringW value) ;

constexpr ::StringW __get__footer1() const;

 ::StringW __declspec(property(get=__get__footer2, put=__set__footer2))  _footer2;

constexpr void __set__footer2(::StringW value) ;

constexpr ::StringW __get__footer2() const;


// Methods

// Ctor Parameters [CppParam { name: "type", ty: "::StringW", modifiers: "", def_value: None }]
explicit PemParser(::StringW type) ;

/// @brief Method .ctor addr 0x10e98dc size 0x118 virtual false final false
 void _ctor(::StringW type) ;

/// @brief Method ReadLine addr 0x10e99f4 size 0xd0 virtual false final false
 ::StringW ReadLine(System::IO::Stream inStream) ;

/// @brief Method ReadPemObject addr 0x10e9ac4 size 0x1214 virtual false final false
 Org::BouncyCastle::Asn1::Asn1Sequence ReadPemObject(System::IO::Stream inStream) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::X509
NEED_NO_BOX(Org::BouncyCastle::X509::PemParser);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::X509::PemParser, "Org.BouncyCastle.X509", "PemParser");
