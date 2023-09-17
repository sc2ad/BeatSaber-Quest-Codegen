#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Runtime::Serialization::Formatters {
struct FormatterTypeStyle;
}
// Type: System.Runtime.Serialization.Formatters::FormatterTypeStyle
namespace System::Runtime::Serialization::Formatters {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3236))
// CS Name: System.Runtime.Serialization.Formatters.FormatterTypeStyle
struct CORDL_TYPE FormatterTypeStyle : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr FormatterTypeStyle(int32_t value__) noexcept;


                    constexpr FormatterTypeStyle(FormatterTypeStyle const&) = default;
                    constexpr FormatterTypeStyle(FormatterTypeStyle&&) = default;
                    constexpr FormatterTypeStyle& operator=(FormatterTypeStyle const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr FormatterTypeStyle& operator=(FormatterTypeStyle&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit FormatterTypeStyle(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __FormatterTypeStyle_Unwrapped : int32_t {
__TypesWhenNeeded = 0,
__TypesAlways = 1,
__XsdString = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FormatterTypeStyle_Unwrapped () const noexcept {
return std::bit_cast<__FormatterTypeStyle_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field TypesWhenNeeded offset 0
static ::System::Runtime::Serialization::Formatters::FormatterTypeStyle const TypesWhenNeeded;

/// @brief Field TypesAlways offset 0
static ::System::Runtime::Serialization::Formatters::FormatterTypeStyle const TypesAlways;

/// @brief Field XsdString offset 0
static ::System::Runtime::Serialization::Formatters::FormatterTypeStyle const XsdString;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization::Formatters
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::FormatterTypeStyle, "System.Runtime.Serialization.Formatters", "FormatterTypeStyle");
