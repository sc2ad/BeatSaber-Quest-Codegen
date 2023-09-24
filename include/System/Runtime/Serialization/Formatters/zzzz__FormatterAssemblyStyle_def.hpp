#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Runtime::Serialization::Formatters {
struct FormatterAssemblyStyle;
}
// Type: System.Runtime.Serialization.Formatters::FormatterAssemblyStyle
namespace System::Runtime::Serialization::Formatters {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3237))
// CS Name: System.Runtime.Serialization.Formatters.FormatterAssemblyStyle
struct CORDL_TYPE FormatterAssemblyStyle : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr FormatterAssemblyStyle(int32_t value__) noexcept;


                    constexpr FormatterAssemblyStyle(FormatterAssemblyStyle const&) = default;
                    constexpr FormatterAssemblyStyle(FormatterAssemblyStyle&&) = default;
                    constexpr FormatterAssemblyStyle& operator=(FormatterAssemblyStyle const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr FormatterAssemblyStyle& operator=(FormatterAssemblyStyle&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit FormatterAssemblyStyle(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __FormatterAssemblyStyle_Unwrapped : int32_t {
__Simple = 0,
__Full = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FormatterAssemblyStyle_Unwrapped () const noexcept {
return std::bit_cast<__FormatterAssemblyStyle_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Simple offset 0
static System::Runtime::Serialization::Formatters::FormatterAssemblyStyle const Simple;

/// @brief Field Full offset 0
static System::Runtime::Serialization::Formatters::FormatterAssemblyStyle const Full;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization::Formatters
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::FormatterAssemblyStyle, "System.Runtime.Serialization.Formatters", "FormatterAssemblyStyle");
