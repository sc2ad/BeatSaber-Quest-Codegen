#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
namespace TMPro {
struct TMPro__TMP_Compatibility__AnchorPositions;
}
namespace TMPro {
struct TextAlignmentOptions;
}
// Forward declare root types
namespace TMPro {
struct TMPro__TMP_Compatibility__AnchorPositions;
}
namespace TMPro {
class TMP_Compatibility;
}
// Type: ::AnchorPositions
namespace TMPro {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12277))
// CS Name: TMPro.TMP_Compatibility::AnchorPositions
struct CORDL_TYPE TMPro__TMP_Compatibility__AnchorPositions : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TMPro__TMP_Compatibility__AnchorPositions(int32_t value__) noexcept;


                    constexpr TMPro__TMP_Compatibility__AnchorPositions(TMPro__TMP_Compatibility__AnchorPositions const&) = default;
                    constexpr TMPro__TMP_Compatibility__AnchorPositions(TMPro__TMP_Compatibility__AnchorPositions&&) = default;
                    constexpr TMPro__TMP_Compatibility__AnchorPositions& operator=(TMPro__TMP_Compatibility__AnchorPositions const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TMPro__TMP_Compatibility__AnchorPositions& operator=(TMPro__TMP_Compatibility__AnchorPositions&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TMPro__TMP_Compatibility__AnchorPositions(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __TMPro__TMP_Compatibility__AnchorPositions_Unwrapped : int32_t {
__TopLeft = 0,
__Top = 1,
__TopRight = 2,
__Left = 3,
__Center = 4,
__Right = 5,
__BottomLeft = 6,
__Bottom = 7,
__BottomRight = 8,
__BaseLine = 9,
__None = 10,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TMPro__TMP_Compatibility__AnchorPositions_Unwrapped () const noexcept {
return std::bit_cast<__TMPro__TMP_Compatibility__AnchorPositions_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field TopLeft offset 0
static TMPro::TMPro__TMP_Compatibility__AnchorPositions const TopLeft;

/// @brief Field Top offset 0
static TMPro::TMPro__TMP_Compatibility__AnchorPositions const Top;

/// @brief Field TopRight offset 0
static TMPro::TMPro__TMP_Compatibility__AnchorPositions const TopRight;

/// @brief Field Left offset 0
static TMPro::TMPro__TMP_Compatibility__AnchorPositions const Left;

/// @brief Field Center offset 0
static TMPro::TMPro__TMP_Compatibility__AnchorPositions const Center;

/// @brief Field Right offset 0
static TMPro::TMPro__TMP_Compatibility__AnchorPositions const Right;

/// @brief Field BottomLeft offset 0
static TMPro::TMPro__TMP_Compatibility__AnchorPositions const BottomLeft;

/// @brief Field Bottom offset 0
static TMPro::TMPro__TMP_Compatibility__AnchorPositions const Bottom;

/// @brief Field BottomRight offset 0
static TMPro::TMPro__TMP_Compatibility__AnchorPositions const BottomRight;

/// @brief Field BaseLine offset 0
static TMPro::TMPro__TMP_Compatibility__AnchorPositions const BaseLine;

/// @brief Field None offset 0
static TMPro::TMPro__TMP_Compatibility__AnchorPositions const None;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def TMPro
// Type: TMPro::TMP_Compatibility
namespace TMPro {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12278))
// CS Name: TMPro.TMP_Compatibility
class CORDL_TYPE TMP_Compatibility : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using AnchorPositions = TMPro::TMPro__TMP_Compatibility__AnchorPositions;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~TMP_Compatibility() = default;

// Ctor Parameters [CppParam { name: "", ty: "TMP_Compatibility", modifiers: " const&", def_value: None }]
constexpr TMP_Compatibility(TMP_Compatibility const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TMP_Compatibility", modifiers: "&&", def_value: None }]
constexpr TMP_Compatibility(TMP_Compatibility&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TMP_Compatibility(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TMP_Compatibility& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TMP_Compatibility& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TMP_Compatibility& operator=(TMP_Compatibility&& o) noexcept = default;
  constexpr TMP_Compatibility& operator=(TMP_Compatibility const& o) noexcept = default;
                


// Methods

/// @brief Method ConvertTextAlignmentEnumValues addr 0x2a6a734 size 0x24 virtual false final false
static TMPro::TextAlignmentOptions ConvertTextAlignmentEnumValues(TMPro::TextAlignmentOptions oldValue) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMPro__TMP_Compatibility__AnchorPositions, "TMPro", "TMP_Compatibility/AnchorPositions");
NEED_NO_BOX(TMPro::TMP_Compatibility);
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_Compatibility, "TMPro", "TMP_Compatibility");
