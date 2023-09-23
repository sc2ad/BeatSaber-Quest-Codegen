#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
// Forward declare root types
namespace System::Buffers::Binary {
class BinaryPrimitives;
}
// Type: System.Buffers.Binary::BinaryPrimitives
namespace System::Buffers::Binary {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3876))
// CS Name: System.Buffers.Binary.BinaryPrimitives
class CORDL_TYPE BinaryPrimitives : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~BinaryPrimitives() = default;

// Ctor Parameters [CppParam { name: "", ty: "BinaryPrimitives", modifiers: " const&", def_value: None }]
constexpr BinaryPrimitives(BinaryPrimitives const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BinaryPrimitives", modifiers: "&&", def_value: None }]
constexpr BinaryPrimitives(BinaryPrimitives&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BinaryPrimitives(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BinaryPrimitives& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BinaryPrimitives& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BinaryPrimitives& operator=(BinaryPrimitives&& o) noexcept = default;
  constexpr BinaryPrimitives& operator=(BinaryPrimitives const& o) noexcept = default;
                


// Methods

/// @brief Method ReverseEndianness addr 0x241e8d0 size 0x8 virtual false final false
static int32_t ReverseEndianness(int32_t value) ;

/// @brief Method ReverseEndianness addr 0x241e8d8 size 0x14 virtual false final false
static int64_t ReverseEndianness(int64_t value) ;

/// @brief Method ReverseEndianness addr 0x241e8ec size 0xc virtual false final false
static uint16_t ReverseEndianness(uint16_t value) ;

/// @brief Method ReverseEndianness addr 0x241e8f8 size 0x8 virtual false final false
static uint32_t ReverseEndianness(uint32_t value) ;

/// @brief Method ReverseEndianness addr 0x241e900 size 0x14 virtual false final false
static uint64_t ReverseEndianness(uint64_t value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Buffers::Binary
NEED_NO_BOX(System::Buffers::Binary::BinaryPrimitives);
DEFINE_IL2CPP_ARG_TYPE(System::Buffers::Binary::BinaryPrimitives, "System.Buffers.Binary", "BinaryPrimitives");
