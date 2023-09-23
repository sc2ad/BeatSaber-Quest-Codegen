#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Xml {
class Ucs4Decoder;
}
namespace System::Text {
class Encoding;
}
namespace System::Text {
class Encoder;
}
namespace System::Text {
class Decoder;
}
// Forward declare root types
namespace System::Xml {
class Ucs4Encoding;
}
// Type: System.Xml::Ucs4Encoding
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2870))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11499))
// CS Name: System.Xml.Ucs4Encoding
class CORDL_TYPE Ucs4Encoding : public System::Text::Encoding {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~Ucs4Encoding() = default;

// Ctor Parameters [CppParam { name: "", ty: "Ucs4Encoding", modifiers: " const&", def_value: None }]
constexpr Ucs4Encoding(Ucs4Encoding const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Ucs4Encoding", modifiers: "&&", def_value: None }]
constexpr Ucs4Encoding(Ucs4Encoding&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Ucs4Encoding(void* ptr) noexcept : System::Text::Encoding(ptr) {
}


  constexpr Ucs4Encoding& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Ucs4Encoding& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Ucs4Encoding& operator=(Ucs4Encoding&& o) noexcept = default;
  constexpr Ucs4Encoding& operator=(Ucs4Encoding const& o) noexcept = default;
                


// Fields

 System::Xml::Ucs4Decoder __declspec(property(get=__get_ucs4Decoder, put=__set_ucs4Decoder))  ucs4Decoder;

constexpr void __set_ucs4Decoder(System::Xml::Ucs4Decoder value) ;

constexpr System::Xml::Ucs4Decoder __get_ucs4Decoder() const;


// Properties

 ::StringW __declspec(property(get=get_WebName))  WebName;

 int32_t __declspec(property(get=get_CodePage))  CodePage;

static System::Text::Encoding __declspec(property(get=get_UCS4_Littleendian))  UCS4_Littleendian;

static System::Text::Encoding __declspec(property(get=get_UCS4_Bigendian))  UCS4_Bigendian;

static System::Text::Encoding __declspec(property(get=get_UCS4_2143))  UCS4_2143;

static System::Text::Encoding __declspec(property(get=get_UCS4_3412))  UCS4_3412;


// Methods

/// @brief Method get_WebName addr 0x271225c size 0xc virtual true final false
 ::StringW get_WebName() ;

/// @brief Method GetDecoder addr 0x2712268 size 0x8 virtual true final false
 System::Text::Decoder GetDecoder() ;

/// @brief Method GetByteCount addr 0x2712270 size 0x60 virtual true final false
 int32_t GetByteCount(::ArrayW<char16_t> chars, int32_t index, int32_t count) ;

/// @brief Method GetBytes addr 0x27122d0 size 0x8 virtual true final false
 ::ArrayW<uint8_t> GetBytes(::StringW s) ;

/// @brief Method GetBytes addr 0x27122d8 size 0x8 virtual true final false
 int32_t GetBytes(::ArrayW<char16_t> chars, int32_t charIndex, int32_t charCount, ::ArrayW<uint8_t> bytes, int32_t byteIndex) ;

/// @brief Method GetMaxByteCount addr 0x27122e0 size 0x8 virtual true final false
 int32_t GetMaxByteCount(int32_t charCount) ;

/// @brief Method GetCharCount addr 0x27122e8 size 0x20 virtual true final false
 int32_t GetCharCount(::ArrayW<uint8_t> bytes, int32_t index, int32_t count) ;

/// @brief Method GetChars addr 0x2712308 size 0x20 virtual true final false
 int32_t GetChars(::ArrayW<uint8_t> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t> chars, int32_t charIndex) ;

/// @brief Method GetMaxCharCount addr 0x2712328 size 0x18 virtual true final false
 int32_t GetMaxCharCount(int32_t byteCount) ;

/// @brief Method get_CodePage addr 0x2712340 size 0x8 virtual true final false
 int32_t get_CodePage() ;

/// @brief Method GetEncoder addr 0x2712348 size 0x8 virtual true final false
 System::Text::Encoder GetEncoder() ;

/// @brief Method get_UCS4_Littleendian addr 0x2712350 size 0x58 virtual false final false
static System::Text::Encoding get_UCS4_Littleendian() ;

/// @brief Method get_UCS4_Bigendian addr 0x2712410 size 0x58 virtual false final false
static System::Text::Encoding get_UCS4_Bigendian() ;

/// @brief Method get_UCS4_2143 addr 0x27124d0 size 0x58 virtual false final false
static System::Text::Encoding get_UCS4_2143() ;

/// @brief Method get_UCS4_3412 addr 0x2712590 size 0x58 virtual false final false
static System::Text::Encoding get_UCS4_3412() ;

// Ctor Parameters []
explicit Ucs4Encoding() ;

/// @brief Method .ctor addr 0x2712650 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
NEED_NO_BOX(System::Xml::Ucs4Encoding);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Ucs4Encoding, "System.Xml", "Ucs4Encoding");
