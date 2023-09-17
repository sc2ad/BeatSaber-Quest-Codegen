#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace LiteNetLib::Utils {
struct NtpLeapIndicator;
}
// Type: LiteNetLib.Utils::NtpLeapIndicator
namespace LiteNetLib::Utils {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14519))
// CS Name: LiteNetLib.Utils.NtpLeapIndicator
struct CORDL_TYPE NtpLeapIndicator : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr NtpLeapIndicator(int32_t value__) noexcept;


                    constexpr NtpLeapIndicator(NtpLeapIndicator const&) = default;
                    constexpr NtpLeapIndicator(NtpLeapIndicator&&) = default;
                    constexpr NtpLeapIndicator& operator=(NtpLeapIndicator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr NtpLeapIndicator& operator=(NtpLeapIndicator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit NtpLeapIndicator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __NtpLeapIndicator_Unwrapped : int32_t {
__NoWarning = 0,
__LastMinuteHas61Seconds = 1,
__LastMinuteHas59Seconds = 2,
__AlarmCondition = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NtpLeapIndicator_Unwrapped () const noexcept {
return std::bit_cast<__NtpLeapIndicator_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field NoWarning offset 0
static ::LiteNetLib::Utils::NtpLeapIndicator const NoWarning;

/// @brief Field LastMinuteHas61Seconds offset 0
static ::LiteNetLib::Utils::NtpLeapIndicator const LastMinuteHas61Seconds;

/// @brief Field LastMinuteHas59Seconds offset 0
static ::LiteNetLib::Utils::NtpLeapIndicator const LastMinuteHas59Seconds;

/// @brief Field AlarmCondition offset 0
static ::LiteNetLib::Utils::NtpLeapIndicator const AlarmCondition;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def LiteNetLib::Utils
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::Utils::NtpLeapIndicator, "LiteNetLib.Utils", "NtpLeapIndicator");
