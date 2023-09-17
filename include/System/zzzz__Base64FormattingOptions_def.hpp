#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System {
struct Base64FormattingOptions;
}
// Type: System::Base64FormattingOptions
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2365))
// CS Name: System.Base64FormattingOptions
struct CORDL_TYPE Base64FormattingOptions : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Base64FormattingOptions(int32_t value__) noexcept;


                    constexpr Base64FormattingOptions(Base64FormattingOptions const&) = default;
                    constexpr Base64FormattingOptions(Base64FormattingOptions&&) = default;
                    constexpr Base64FormattingOptions& operator=(Base64FormattingOptions const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Base64FormattingOptions& operator=(Base64FormattingOptions&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Base64FormattingOptions(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __Base64FormattingOptions_Unwrapped : int32_t {
__None = 0,
__InsertLineBreaks = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Base64FormattingOptions_Unwrapped () const noexcept {
return std::bit_cast<__Base64FormattingOptions_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static ::System::Base64FormattingOptions const None;

/// @brief Field InsertLineBreaks offset 0
static ::System::Base64FormattingOptions const InsertLineBreaks;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Base64FormattingOptions, "System", "Base64FormattingOptions");
