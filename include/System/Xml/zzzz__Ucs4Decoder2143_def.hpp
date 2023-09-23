#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/zzzz__Ucs4Decoder_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
// Forward declare root types
namespace System::Xml {
class Ucs4Decoder2143;
}
// Type: System.Xml::Ucs4Decoder2143
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11504))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11507))
// CS Name: System.Xml.Ucs4Decoder2143
class CORDL_TYPE Ucs4Decoder2143 : public System::Xml::Ucs4Decoder {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~Ucs4Decoder2143() = default;

// Ctor Parameters [CppParam { name: "", ty: "Ucs4Decoder2143", modifiers: " const&", def_value: None }]
constexpr Ucs4Decoder2143(Ucs4Decoder2143 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Ucs4Decoder2143", modifiers: "&&", def_value: None }]
constexpr Ucs4Decoder2143(Ucs4Decoder2143&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Ucs4Decoder2143(void* ptr) noexcept : System::Xml::Ucs4Decoder(ptr) {
}


  constexpr Ucs4Decoder2143& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Ucs4Decoder2143& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Ucs4Decoder2143& operator=(Ucs4Decoder2143&& o) noexcept = default;
  constexpr Ucs4Decoder2143& operator=(Ucs4Decoder2143 const& o) noexcept = default;
                


// Methods

/// @brief Method GetFullChars addr 0x27131a0 size 0x214 virtual true final false
 int32_t GetFullChars(::ArrayW<uint8_t> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t> chars, int32_t charIndex) ;

// Ctor Parameters []
explicit Ucs4Decoder2143() ;

/// @brief Method .ctor addr 0x27127cc size 0x4 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
NEED_NO_BOX(System::Xml::Ucs4Decoder2143);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Ucs4Decoder2143, "System.Xml", "Ucs4Decoder2143");
