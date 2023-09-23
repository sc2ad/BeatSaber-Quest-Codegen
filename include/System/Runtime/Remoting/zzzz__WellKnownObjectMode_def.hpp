#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Runtime::Remoting {
struct WellKnownObjectMode;
}
// Type: System.Runtime.Remoting::WellKnownObjectMode
namespace System::Runtime::Remoting {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3078))
// CS Name: System.Runtime.Remoting.WellKnownObjectMode
struct CORDL_TYPE WellKnownObjectMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr WellKnownObjectMode(int32_t value__) noexcept;


                    constexpr WellKnownObjectMode(WellKnownObjectMode const&) = default;
                    constexpr WellKnownObjectMode(WellKnownObjectMode&&) = default;
                    constexpr WellKnownObjectMode& operator=(WellKnownObjectMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr WellKnownObjectMode& operator=(WellKnownObjectMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit WellKnownObjectMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __WellKnownObjectMode_Unwrapped : int32_t {
__Singleton = 1,
__SingleCall = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __WellKnownObjectMode_Unwrapped () const noexcept {
return std::bit_cast<__WellKnownObjectMode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Singleton offset 0
static System::Runtime::Remoting::WellKnownObjectMode const Singleton;

/// @brief Field SingleCall offset 0
static System::Runtime::Remoting::WellKnownObjectMode const SingleCall;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::WellKnownObjectMode, "System.Runtime.Remoting", "WellKnownObjectMode");
