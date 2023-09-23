#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
// Forward declare root types
namespace LiteNetLib::Utils {
class CRC32C;
}
// Type: LiteNetLib.Utils::CRC32C
namespace LiteNetLib::Utils {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14469))
// CS Name: LiteNetLib.Utils.CRC32C
class CORDL_TYPE CRC32C : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~CRC32C() = default;

// Ctor Parameters [CppParam { name: "", ty: "CRC32C", modifiers: " const&", def_value: None }]
constexpr CRC32C(CRC32C const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CRC32C", modifiers: "&&", def_value: None }]
constexpr CRC32C(CRC32C&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CRC32C(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CRC32C& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CRC32C& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CRC32C& operator=(CRC32C&& o) noexcept = default;
  constexpr CRC32C& operator=(CRC32C const& o) noexcept = default;
                


// Fields

/// @brief Field ChecksumSize offset 0
static constexpr int32_t  ChecksumSize{4};

/// @brief Field Poly offset 0
static constexpr uint32_t  Poly{2197175160u};

static ::ArrayW<uint32_t> __declspec(property(get=__get_Table, put=__set_Table))  Table;

static void __set_Table(::ArrayW<uint32_t> value) ;

static ::ArrayW<uint32_t> __get_Table() ;


// Methods

/// @brief Method Compute addr 0x2094b90 size 0x410 virtual false final false
static uint32_t Compute(::ArrayW<uint8_t> input, int32_t offset, int32_t length) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LiteNetLib::Utils
NEED_NO_BOX(LiteNetLib::Utils::CRC32C);
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::Utils::CRC32C, "LiteNetLib.Utils", "CRC32C");
