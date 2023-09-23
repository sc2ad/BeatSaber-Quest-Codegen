#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
// Forward declare root types
namespace GlobalNamespace {
class BitMaskUtil;
}
// Type: ::BitMaskUtil
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14957))
// CS Name: BitMaskUtil
class CORDL_TYPE BitMaskUtil : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~BitMaskUtil() = default;

// Ctor Parameters [CppParam { name: "", ty: "BitMaskUtil", modifiers: " const&", def_value: None }]
constexpr BitMaskUtil(BitMaskUtil const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BitMaskUtil", modifiers: "&&", def_value: None }]
constexpr BitMaskUtil(BitMaskUtil&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BitMaskUtil(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BitMaskUtil& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BitMaskUtil& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BitMaskUtil& operator=(BitMaskUtil&& o) noexcept = default;
  constexpr BitMaskUtil& operator=(BitMaskUtil const& o) noexcept = default;
                


// Methods

/// @brief Method NumberOfSetBits addr 0xd9865c size 0x64 virtual false final false
static uint32_t NumberOfSetBits(uint64_t i) ;

/// @brief Method NumberOfSetBits addr 0xd913d4 size 0x34 virtual false final false
static uint32_t NumberOfSetBits(uint32_t i) ;

/// @brief Method ShiftLeft addr 0xd986c0 size 0x48 virtual false final false
static uint64_t ShiftLeft(ByRef<uint64_t> value, ByRef<int32_t> shift) ;

/// @brief Method ShiftRight addr 0xd98708 size 0x60 virtual false final false
static uint64_t ShiftRight(ByRef<uint64_t> value, ByRef<int32_t> shift) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BitMaskUtil);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BitMaskUtil, "", "BitMaskUtil");
