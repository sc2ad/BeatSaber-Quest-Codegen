#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Reflection {
struct EventAttributes;
}
// Type: System.Reflection::EventAttributes
namespace System::Reflection {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3456))
// CS Name: System.Reflection.EventAttributes
struct CORDL_TYPE EventAttributes : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EventAttributes(int32_t value__) noexcept;


                    constexpr EventAttributes(EventAttributes const&) = default;
                    constexpr EventAttributes(EventAttributes&&) = default;
                    constexpr EventAttributes& operator=(EventAttributes const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr EventAttributes& operator=(EventAttributes&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit EventAttributes(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __EventAttributes_Unwrapped : int32_t {
__None = 0,
__SpecialName = 512,
__RTSpecialName = 1024,
__ReservedMask = 1024,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EventAttributes_Unwrapped () const noexcept {
return std::bit_cast<__EventAttributes_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static ::System::Reflection::EventAttributes const None;

/// @brief Field SpecialName offset 0
static ::System::Reflection::EventAttributes const SpecialName;

/// @brief Field RTSpecialName offset 0
static ::System::Reflection::EventAttributes const RTSpecialName;

/// @brief Field ReservedMask offset 0
static ::System::Reflection::EventAttributes const ReservedMask;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Reflection
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::EventAttributes, "System.Reflection", "EventAttributes");
