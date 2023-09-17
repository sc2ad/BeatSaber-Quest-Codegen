#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System::IO {
struct SearchOption;
}
// Type: System.IO::SearchOption
namespace System::IO {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3585))
// CS Name: System.IO.SearchOption
struct CORDL_TYPE SearchOption : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SearchOption(int32_t value__) noexcept;


                    constexpr SearchOption(SearchOption const&) = default;
                    constexpr SearchOption(SearchOption&&) = default;
                    constexpr SearchOption& operator=(SearchOption const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr SearchOption& operator=(SearchOption&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit SearchOption(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __SearchOption_Unwrapped : int32_t {
__TopDirectoryOnly = 0,
__AllDirectories = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SearchOption_Unwrapped () const noexcept {
return std::bit_cast<__SearchOption_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field TopDirectoryOnly offset 0
static ::System::IO::SearchOption const TopDirectoryOnly;

/// @brief Field AllDirectories offset 0
static ::System::IO::SearchOption const AllDirectories;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::IO
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::IO::SearchOption, "System.IO", "SearchOption");
