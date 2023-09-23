#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Utilities::Encoders {
class ITranslator;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::Encoders {
class BufferedDecoder;
}
// Type: Org.BouncyCastle.Utilities.Encoders::BufferedDecoder
namespace Org::BouncyCastle::Utilities::Encoders {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1796))
// CS Name: Org.BouncyCastle.Utilities.Encoders.BufferedDecoder
class CORDL_TYPE BufferedDecoder : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~BufferedDecoder() = default;

// Ctor Parameters [CppParam { name: "", ty: "BufferedDecoder", modifiers: " const&", def_value: None }]
constexpr BufferedDecoder(BufferedDecoder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BufferedDecoder", modifiers: "&&", def_value: None }]
constexpr BufferedDecoder(BufferedDecoder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BufferedDecoder(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BufferedDecoder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BufferedDecoder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BufferedDecoder& operator=(BufferedDecoder&& o) noexcept = default;
  constexpr BufferedDecoder& operator=(BufferedDecoder const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get_buffer, put=__set_buffer))  buffer;

constexpr void __set_buffer(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_buffer() const;

 int32_t __declspec(property(get=__get_bufOff, put=__set_bufOff))  bufOff;

constexpr void __set_bufOff(int32_t value) ;

constexpr int32_t __get_bufOff() const;

 Org::BouncyCastle::Utilities::Encoders::ITranslator __declspec(property(get=__get_translator, put=__set_translator))  translator;

constexpr void __set_translator(Org::BouncyCastle::Utilities::Encoders::ITranslator value) ;

constexpr Org::BouncyCastle::Utilities::Encoders::ITranslator __get_translator() const;


// Methods

// Ctor Parameters [CppParam { name: "translator", ty: "Org::BouncyCastle::Utilities::Encoders::ITranslator", modifiers: "", def_value: None }, CppParam { name: "bufferSize", ty: "int32_t", modifiers: "", def_value: None }]
explicit BufferedDecoder(Org::BouncyCastle::Utilities::Encoders::ITranslator translator, int32_t bufferSize) ;

/// @brief Method .ctor addr 0x10d0cd8 size 0x13c virtual false final false
 void _ctor(Org::BouncyCastle::Utilities::Encoders::ITranslator translator, int32_t bufferSize) ;

/// @brief Method ProcessByte addr 0x10d0e14 size 0x128 virtual false final false
 int32_t ProcessByte(uint8_t input, ::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method ProcessBytes addr 0x10d0f3c size 0x264 virtual false final false
 int32_t ProcessBytes(::ArrayW<uint8_t> input, int32_t inOff, int32_t len, ::ArrayW<uint8_t> outBytes, int32_t outOff) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Utilities::Encoders
NEED_NO_BOX(Org::BouncyCastle::Utilities::Encoders::BufferedDecoder);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Utilities::Encoders::BufferedDecoder, "Org.BouncyCastle.Utilities.Encoders", "BufferedDecoder");
