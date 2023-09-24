#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System {
struct SByteEnum;
}
// Type: System::SByteEnum
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2592))
// CS Name: System.SByteEnum
struct CORDL_TYPE SByteEnum : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int8_t", modifiers: "", def_value: None }]
constexpr SByteEnum(int8_t value__) noexcept;


                    constexpr SByteEnum(SByteEnum const&) = default;
                    constexpr SByteEnum(SByteEnum&&) = default;
                    constexpr SByteEnum& operator=(SByteEnum const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr SByteEnum& operator=(SByteEnum&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit SByteEnum(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __SByteEnum_Unwrapped : int8_t {
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SByteEnum_Unwrapped () const noexcept {
return std::bit_cast<__SByteEnum_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int8_t;


// Fields

 int8_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int8_t value) ;

constexpr int8_t __get_value__() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(System::SByteEnum, "System", "SByteEnum");
