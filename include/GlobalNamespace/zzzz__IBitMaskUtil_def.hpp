#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
// Forward declare root types
namespace GlobalNamespace {
class IBitMaskUtil;
}
// Type: ::IBitMaskUtil
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15099))
// CS Name: IBitMaskUtil
class CORDL_TYPE IBitMaskUtil : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~IBitMaskUtil() = default;

// Ctor Parameters [CppParam { name: "", ty: "IBitMaskUtil", modifiers: " const&", def_value: None }]
constexpr IBitMaskUtil(IBitMaskUtil const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IBitMaskUtil", modifiers: "&&", def_value: None }]
constexpr IBitMaskUtil(IBitMaskUtil&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IBitMaskUtil(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr IBitMaskUtil& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IBitMaskUtil& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IBitMaskUtil& operator=(IBitMaskUtil&& o) noexcept = default;
  constexpr IBitMaskUtil& operator=(IBitMaskUtil const& o) noexcept = default;
                


// Methods

/// @brief Method NumberOfSetBits addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static int32_t NumberOfSetBits(T bitMask) ;

/// @brief Method ToShortString addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static ::StringW ToShortString(T bitMask) ;

/// @brief Method ToBytes addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static ::ArrayW<uint8_t> ToBytes(T bitMask) ;

/// @brief Method TryParse addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static bool TryParse(::StringW stringSerializedMask, ByRef<T> bitMask) ;

/// @brief Method TryParse addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static bool TryParse(::StringW stringSerializedMask, int32_t offset, int32_t length, ByRef<T> bitMask) ;

/// @brief Method FromBytes addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static T FromBytes(::ArrayW<uint8_t> bytes, int32_t offset) ;

/// @brief Method GetHexDigit addr 0x1215a60 size 0x50 virtual false final false
static uint32_t GetHexDigit(char16_t c) ;

/// @brief Method GetBase64Digit addr 0x1215ab0 size 0x70 virtual false final false
static uint32_t GetBase64Digit(char16_t c) ;

/// @brief Method GetBase64Char addr 0x1215b20 size 0x44 virtual false final false
static char16_t GetBase64Char(uint64_t digit) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::IBitMaskUtil);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IBitMaskUtil, "", "IBitMaskUtil");
