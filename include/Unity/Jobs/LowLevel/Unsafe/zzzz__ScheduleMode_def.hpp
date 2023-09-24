#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace Unity::Jobs::LowLevel::Unsafe {
struct ScheduleMode;
}
// Type: Unity.Jobs.LowLevel.Unsafe::ScheduleMode
namespace Unity::Jobs::LowLevel::Unsafe {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9922))
// CS Name: Unity.Jobs.LowLevel.Unsafe.ScheduleMode
struct CORDL_TYPE ScheduleMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ScheduleMode(int32_t value__) noexcept;


                    constexpr ScheduleMode(ScheduleMode const&) = default;
                    constexpr ScheduleMode(ScheduleMode&&) = default;
                    constexpr ScheduleMode& operator=(ScheduleMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ScheduleMode& operator=(ScheduleMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ScheduleMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __ScheduleMode_Unwrapped : int32_t {
__Run = 0,
__Batched = 1,
__Parallel = 1,
__Single = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ScheduleMode_Unwrapped () const noexcept {
return std::bit_cast<__ScheduleMode_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Run offset 0
static Unity::Jobs::LowLevel::Unsafe::ScheduleMode const Run;

/// @brief Field Batched offset 0
static Unity::Jobs::LowLevel::Unsafe::ScheduleMode const Batched;

/// @brief Field Parallel offset 0
static Unity::Jobs::LowLevel::Unsafe::ScheduleMode const Parallel;

/// @brief Field Single offset 0
static Unity::Jobs::LowLevel::Unsafe::ScheduleMode const Single;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Jobs::LowLevel::Unsafe
DEFINE_IL2CPP_ARG_TYPE(Unity::Jobs::LowLevel::Unsafe::ScheduleMode, "Unity.Jobs.LowLevel.Unsafe", "ScheduleMode");
