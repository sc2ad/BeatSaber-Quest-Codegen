#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System {
template<typename T>
struct Span_1;
}
namespace System::Numerics {
struct BigInteger;
}
namespace System::Globalization {
class NumberFormatInfo;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
// Forward declare root types
namespace System::Numerics {
class BigNumber;
}
// Type: System.Numerics::BigNumber
namespace System::Numerics {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15627))
// CS Name: System.Numerics.BigNumber
class CORDL_TYPE BigNumber : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~BigNumber() = default;

// Ctor Parameters [CppParam { name: "", ty: "BigNumber", modifiers: " const&", def_value: None }]
constexpr BigNumber(BigNumber const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BigNumber", modifiers: "&&", def_value: None }]
constexpr BigNumber(BigNumber&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BigNumber(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BigNumber& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BigNumber& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BigNumber& operator=(BigNumber&& o) noexcept = default;
  constexpr BigNumber& operator=(BigNumber const& o) noexcept = default;
                


// Methods

/// @brief Method ParseFormatSpecifier addr 0x26b51e0 size 0xf0 virtual false final false
static char16_t ParseFormatSpecifier(System::ReadOnlySpan_1<char16_t> format, ByRef<int32_t> digits) ;

/// @brief Method FormatBigIntegerToHex addr 0x26b52d0 size 0x5e4 virtual false final false
static ::StringW FormatBigIntegerToHex(bool targetSpan, System::Numerics::BigInteger value, char16_t format, int32_t digits, System::Globalization::NumberFormatInfo info, System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten, ByRef<bool> spanSuccess) ;

/// @brief Method FormatBigInteger addr 0x26b3f7c size 0xac virtual false final false
static ::StringW FormatBigInteger(System::Numerics::BigInteger value, ::StringW format, System::Globalization::NumberFormatInfo info) ;

/// @brief Method FormatBigInteger addr 0x26b5eb8 size 0xa00 virtual false final false
static ::StringW FormatBigInteger(bool targetSpan, System::Numerics::BigInteger value, ::StringW formatString, System::ReadOnlySpan_1<char16_t> formatSpan, System::Globalization::NumberFormatInfo info, System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten, ByRef<bool> spanSuccess) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Numerics
NEED_NO_BOX(System::Numerics::BigNumber);
DEFINE_IL2CPP_ARG_TYPE(System::Numerics::BigNumber, "System.Numerics", "BigNumber");
