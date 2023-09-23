#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Reflection {
struct AssemblyContentType;
}
// Type: System.Reflection::AssemblyContentType
namespace System::Reflection {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3438))
// CS Name: System.Reflection.AssemblyContentType
struct CORDL_TYPE AssemblyContentType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AssemblyContentType(int32_t value__) noexcept;


                    constexpr AssemblyContentType(AssemblyContentType const&) = default;
                    constexpr AssemblyContentType(AssemblyContentType&&) = default;
                    constexpr AssemblyContentType& operator=(AssemblyContentType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AssemblyContentType& operator=(AssemblyContentType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AssemblyContentType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __AssemblyContentType_Unwrapped : int32_t {
__Default = 0,
__WindowsRuntime = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AssemblyContentType_Unwrapped () const noexcept {
return std::bit_cast<__AssemblyContentType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Default offset 0
static System::Reflection::AssemblyContentType const Default;

/// @brief Field WindowsRuntime offset 0
static System::Reflection::AssemblyContentType const WindowsRuntime;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Reflection
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::AssemblyContentType, "System.Reflection", "AssemblyContentType");
