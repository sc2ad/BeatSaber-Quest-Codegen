#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace GlobalNamespace {
struct OffsetDirection;
}
// Type: ::OffsetDirection
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14943))
// CS Name: OffsetDirection
struct CORDL_TYPE OffsetDirection : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr OffsetDirection(int32_t value__) noexcept;


                    constexpr OffsetDirection(OffsetDirection const&) = default;
                    constexpr OffsetDirection(OffsetDirection&&) = default;
                    constexpr OffsetDirection& operator=(OffsetDirection const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr OffsetDirection& operator=(OffsetDirection&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit OffsetDirection(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __OffsetDirection_Unwrapped : int32_t {
__Up = 0,
__Down = 1,
__Left = 2,
__Right = 3,
__UpLeft = 4,
__UpRight = 5,
__DownLeft = 6,
__DownRight = 7,
__None = 9,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OffsetDirection_Unwrapped () const noexcept {
return std::bit_cast<__OffsetDirection_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Up offset 0
static ::GlobalNamespace::OffsetDirection const Up;

/// @brief Field Down offset 0
static ::GlobalNamespace::OffsetDirection const Down;

/// @brief Field Left offset 0
static ::GlobalNamespace::OffsetDirection const Left;

/// @brief Field Right offset 0
static ::GlobalNamespace::OffsetDirection const Right;

/// @brief Field UpLeft offset 0
static ::GlobalNamespace::OffsetDirection const UpLeft;

/// @brief Field UpRight offset 0
static ::GlobalNamespace::OffsetDirection const UpRight;

/// @brief Field DownLeft offset 0
static ::GlobalNamespace::OffsetDirection const DownLeft;

/// @brief Field DownRight offset 0
static ::GlobalNamespace::OffsetDirection const DownRight;

/// @brief Field None offset 0
static ::GlobalNamespace::OffsetDirection const None;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OffsetDirection, "", "OffsetDirection");
