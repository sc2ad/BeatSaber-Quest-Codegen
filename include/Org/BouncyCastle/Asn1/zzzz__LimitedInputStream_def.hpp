#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseInputStream_def.hpp"
#include <cstdint>
namespace {
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class LimitedInputStream;
}
// Type: Org.BouncyCastle.Asn1::LimitedInputStream
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(498))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(500))
// CS Name: Org.BouncyCastle.Asn1.LimitedInputStream
class CORDL_TYPE LimitedInputStream : public ::Org::BouncyCastle::Utilities::IO::BaseInputStream {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~LimitedInputStream() = default;

// Ctor Parameters [CppParam { name: "", ty: "LimitedInputStream", modifiers: " const&", def_value: None }]
constexpr LimitedInputStream(LimitedInputStream const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LimitedInputStream", modifiers: "&&", def_value: None }]
constexpr LimitedInputStream(LimitedInputStream&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LimitedInputStream(void* ptr) noexcept : ::Org::BouncyCastle::Utilities::IO::BaseInputStream(ptr) {
}


  constexpr LimitedInputStream& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LimitedInputStream& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LimitedInputStream& operator=(LimitedInputStream&& o) noexcept = default;
  constexpr LimitedInputStream& operator=(LimitedInputStream const& o) noexcept = default;
                


// Fields

 ::System::IO::Stream __declspec(property(get=__get__in, put=__set__in))  _in;

constexpr void __set__in(::System::IO::Stream value) ;

constexpr ::System::IO::Stream __get__in() const;

 int32_t __declspec(property(get=__get__limit, put=__set__limit))  _limit;

constexpr void __set__limit(int32_t value) ;

constexpr int32_t __get__limit() const;


// Properties

 int32_t __declspec(property(get=get_Limit))  Limit;


// Methods

// Ctor Parameters [CppParam { name: "inStream", ty: "::System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "limit", ty: "int32_t", modifiers: "", def_value: None }]
explicit LimitedInputStream(::System::IO::Stream inStream, int32_t limit) ;

/// @brief Method .ctor addr 0x1134f08 size 0x2c virtual false final false
 void _ctor(::System::IO::Stream inStream, int32_t limit) ;

/// @brief Method get_Limit addr 0x1134f34 size 0x8 virtual true final false
 int32_t get_Limit() ;

/// @brief Method SetParentEofDetect addr 0x1134f3c size 0x90 virtual true final false
 void SetParentEofDetect(bool on) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::LimitedInputStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::LimitedInputStream, "Org.BouncyCastle.Asn1", "LimitedInputStream");
