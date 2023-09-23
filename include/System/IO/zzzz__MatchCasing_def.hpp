#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::IO {
struct MatchCasing;
}
// Type: System.IO::MatchCasing
namespace System::IO {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3583))
// CS Name: System.IO.MatchCasing
struct CORDL_TYPE MatchCasing : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr MatchCasing(int32_t value__) noexcept;


                    constexpr MatchCasing(MatchCasing const&) = default;
                    constexpr MatchCasing(MatchCasing&&) = default;
                    constexpr MatchCasing& operator=(MatchCasing const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr MatchCasing& operator=(MatchCasing&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit MatchCasing(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __MatchCasing_Unwrapped : int32_t {
__PlatformDefault = 0,
__CaseSensitive = 1,
__CaseInsensitive = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MatchCasing_Unwrapped () const noexcept {
return std::bit_cast<__MatchCasing_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field PlatformDefault offset 0
static System::IO::MatchCasing const PlatformDefault;

/// @brief Field CaseSensitive offset 0
static System::IO::MatchCasing const CaseSensitive;

/// @brief Field CaseInsensitive offset 0
static System::IO::MatchCasing const CaseInsensitive;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::IO
DEFINE_IL2CPP_ARG_TYPE(System::IO::MatchCasing, "System.IO", "MatchCasing");
