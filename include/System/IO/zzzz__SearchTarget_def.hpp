#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::IO {
struct SearchTarget;
}
// Type: System.IO::SearchTarget
namespace System::IO {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3586))
// CS Name: System.IO.SearchTarget
struct CORDL_TYPE SearchTarget : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SearchTarget(int32_t value__) noexcept;


                    constexpr SearchTarget(SearchTarget const&) = default;
                    constexpr SearchTarget(SearchTarget&&) = default;
                    constexpr SearchTarget& operator=(SearchTarget const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr SearchTarget& operator=(SearchTarget&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit SearchTarget(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __SearchTarget_Unwrapped : int32_t {
__Files = 1,
__Directories = 2,
__Both = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SearchTarget_Unwrapped () const noexcept {
return std::bit_cast<__SearchTarget_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Files offset 0
static System::IO::SearchTarget const Files;

/// @brief Field Directories offset 0
static System::IO::SearchTarget const Directories;

/// @brief Field Both offset 0
static System::IO::SearchTarget const Both;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::IO
DEFINE_IL2CPP_ARG_TYPE(System::IO::SearchTarget, "System.IO", "SearchTarget");
