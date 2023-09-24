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
class HexTranslator;
}
// Type: Org.BouncyCastle.Utilities.Encoders::HexTranslator
namespace Org::BouncyCastle::Utilities::Encoders {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1801))
// CS Name: Org.BouncyCastle.Utilities.Encoders.HexTranslator
class CORDL_TYPE HexTranslator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Utilities::Encoders::ITranslator
constexpr operator  Org::BouncyCastle::Utilities::Encoders::ITranslator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~HexTranslator() = default;

// Ctor Parameters [CppParam { name: "", ty: "HexTranslator", modifiers: " const&", def_value: None }]
constexpr HexTranslator(HexTranslator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HexTranslator", modifiers: "&&", def_value: None }]
constexpr HexTranslator(HexTranslator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HexTranslator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HexTranslator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HexTranslator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HexTranslator& operator=(HexTranslator&& o) noexcept = default;
  constexpr HexTranslator& operator=(HexTranslator const& o) noexcept = default;
                


// Fields

static ::ArrayW<uint8_t> __declspec(property(get=__get_hexTable, put=__set_hexTable))  hexTable;

static void __set_hexTable(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_hexTable() ;


// Methods

/// @brief Method GetEncodedBlockSize addr 0x10d2948 size 0x8 virtual true final true
 int32_t GetEncodedBlockSize() ;

/// @brief Method Encode addr 0x10d2950 size 0x140 virtual true final true
 int32_t Encode(::ArrayW<uint8_t> input, int32_t inOff, int32_t length, ::ArrayW<uint8_t> outBytes, int32_t outOff) ;

/// @brief Method GetDecodedBlockSize addr 0x10d2a90 size 0x8 virtual true final true
 int32_t GetDecodedBlockSize() ;

/// @brief Method Decode addr 0x10d2a98 size 0xc8 virtual true final true
 int32_t Decode(::ArrayW<uint8_t> input, int32_t inOff, int32_t length, ::ArrayW<uint8_t> outBytes, int32_t outOff) ;

static Org::BouncyCastle::Utilities::Encoders::HexTranslator New_ctor() ;

/// @brief Method .ctor addr 0x10d2bf4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Utilities::Encoders
NEED_NO_BOX(Org::BouncyCastle::Utilities::Encoders::HexTranslator);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Utilities::Encoders::HexTranslator, "Org.BouncyCastle.Utilities.Encoders", "HexTranslator");
