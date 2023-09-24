#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/zzzz__Ucs4Decoder_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
// Forward declare root types
namespace System::Xml {
class Ucs4Decoder4321;
}
// Type: System.Xml::Ucs4Decoder4321
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11504))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11505))
// CS Name: System.Xml.Ucs4Decoder4321
class CORDL_TYPE Ucs4Decoder4321 : public System::Xml::Ucs4Decoder {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~Ucs4Decoder4321() = default;

// Ctor Parameters [CppParam { name: "", ty: "Ucs4Decoder4321", modifiers: " const&", def_value: None }]
constexpr Ucs4Decoder4321(Ucs4Decoder4321 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Ucs4Decoder4321", modifiers: "&&", def_value: None }]
constexpr Ucs4Decoder4321(Ucs4Decoder4321&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Ucs4Decoder4321(void* ptr) noexcept : System::Xml::Ucs4Decoder(ptr) {
}


  constexpr Ucs4Decoder4321& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Ucs4Decoder4321& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Ucs4Decoder4321& operator=(Ucs4Decoder4321&& o) noexcept = default;
  constexpr Ucs4Decoder4321& operator=(Ucs4Decoder4321 const& o) noexcept = default;
                


// Methods

/// @brief Method GetFullChars addr 0x2712d78 size 0x214 virtual true final false
 int32_t GetFullChars(::ArrayW<uint8_t> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t> chars, int32_t charIndex) ;

static System::Xml::Ucs4Decoder4321 New_ctor() ;

/// @brief Method .ctor addr 0x2712714 size 0x4 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
NEED_NO_BOX(System::Xml::Ucs4Decoder4321);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Ucs4Decoder4321, "System.Xml", "Ucs4Decoder4321");
