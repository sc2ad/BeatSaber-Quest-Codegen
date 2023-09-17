#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Text {
struct NormalizationCheck;
}
// Type: System.Text::NormalizationCheck
namespace System::Text {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2871))
// CS Name: System.Text.NormalizationCheck
struct CORDL_TYPE NormalizationCheck : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr NormalizationCheck(int32_t value__) noexcept;


                    constexpr NormalizationCheck(NormalizationCheck const&) = default;
                    constexpr NormalizationCheck(NormalizationCheck&&) = default;
                    constexpr NormalizationCheck& operator=(NormalizationCheck const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr NormalizationCheck& operator=(NormalizationCheck&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit NormalizationCheck(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __NormalizationCheck_Unwrapped : int32_t {
__Yes = 0,
__No = 1,
__Maybe = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NormalizationCheck_Unwrapped () const noexcept {
return std::bit_cast<__NormalizationCheck_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Yes offset 0
static ::System::Text::NormalizationCheck const Yes;

/// @brief Field No offset 0
static ::System::Text::NormalizationCheck const No;

/// @brief Field Maybe offset 0
static ::System::Text::NormalizationCheck const Maybe;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Text
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Text::NormalizationCheck, "System.Text", "NormalizationCheck");
