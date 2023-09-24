#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace Oculus::Platform {
struct AbuseReportVideoMode;
}
// Type: Oculus.Platform::AbuseReportVideoMode
namespace Oculus::Platform {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13160))
// CS Name: Oculus.Platform.AbuseReportVideoMode
struct CORDL_TYPE AbuseReportVideoMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AbuseReportVideoMode(int32_t value__) noexcept;


                    constexpr AbuseReportVideoMode(AbuseReportVideoMode const&) = default;
                    constexpr AbuseReportVideoMode(AbuseReportVideoMode&&) = default;
                    constexpr AbuseReportVideoMode& operator=(AbuseReportVideoMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AbuseReportVideoMode& operator=(AbuseReportVideoMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AbuseReportVideoMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __AbuseReportVideoMode_Unwrapped : int32_t {
__Unknown = 0,
__Collect = 1,
__Optional = 2,
__Skip = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AbuseReportVideoMode_Unwrapped () const noexcept {
return std::bit_cast<__AbuseReportVideoMode_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Unknown offset 0
static Oculus::Platform::AbuseReportVideoMode const Unknown;

/// @brief Field Collect offset 0
static Oculus::Platform::AbuseReportVideoMode const Collect;

/// @brief Field Optional offset 0
static Oculus::Platform::AbuseReportVideoMode const Optional;

/// @brief Field Skip offset 0
static Oculus::Platform::AbuseReportVideoMode const Skip;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Oculus::Platform
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::AbuseReportVideoMode, "Oculus.Platform", "AbuseReportVideoMode");
