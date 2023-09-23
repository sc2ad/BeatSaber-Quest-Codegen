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
class BufferedEncoder;
}
// Type: Org.BouncyCastle.Utilities.Encoders::BufferedEncoder
namespace Org::BouncyCastle::Utilities::Encoders {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1797))
// CS Name: Org.BouncyCastle.Utilities.Encoders.BufferedEncoder
class CORDL_TYPE BufferedEncoder : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~BufferedEncoder() = default;

// Ctor Parameters [CppParam { name: "", ty: "BufferedEncoder", modifiers: " const&", def_value: None }]
constexpr BufferedEncoder(BufferedEncoder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BufferedEncoder", modifiers: "&&", def_value: None }]
constexpr BufferedEncoder(BufferedEncoder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BufferedEncoder(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BufferedEncoder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BufferedEncoder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BufferedEncoder& operator=(BufferedEncoder&& o) noexcept = default;
  constexpr BufferedEncoder& operator=(BufferedEncoder const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get_Buffer, put=__set_Buffer))  Buffer;

constexpr void __set_Buffer(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_Buffer() const;

 int32_t __declspec(property(get=__get_bufOff, put=__set_bufOff))  bufOff;

constexpr void __set_bufOff(int32_t value) ;

constexpr int32_t __get_bufOff() const;

 Org::BouncyCastle::Utilities::Encoders::ITranslator __declspec(property(get=__get_translator, put=__set_translator))  translator;

constexpr void __set_translator(Org::BouncyCastle::Utilities::Encoders::ITranslator value) ;

constexpr Org::BouncyCastle::Utilities::Encoders::ITranslator __get_translator() const;


// Methods

// Ctor Parameters [CppParam { name: "translator", ty: "Org::BouncyCastle::Utilities::Encoders::ITranslator", modifiers: "", def_value: None }, CppParam { name: "bufferSize", ty: "int32_t", modifiers: "", def_value: None }]
explicit BufferedEncoder(Org::BouncyCastle::Utilities::Encoders::ITranslator translator, int32_t bufferSize) ;

/// @brief Method .ctor addr 0x10d11a0 size 0x13c virtual false final false
 void _ctor(Org::BouncyCastle::Utilities::Encoders::ITranslator translator, int32_t bufferSize) ;

/// @brief Method ProcessByte addr 0x10d12dc size 0x128 virtual false final false
 int32_t ProcessByte(uint8_t input, ::ArrayW<uint8_t> outBytes, int32_t outOff) ;

/// @brief Method ProcessBytes addr 0x10d1404 size 0x264 virtual false final false
 int32_t ProcessBytes(::ArrayW<uint8_t> input, int32_t inOff, int32_t len, ::ArrayW<uint8_t> outBytes, int32_t outOff) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Utilities::Encoders
NEED_NO_BOX(Org::BouncyCastle::Utilities::Encoders::BufferedEncoder);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Utilities::Encoders::BufferedEncoder, "Org.BouncyCastle.Utilities.Encoders", "BufferedEncoder");
