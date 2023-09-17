#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Runtime::Remoting {
struct CustomErrorsModes;
}
// Type: System.Runtime.Remoting::CustomErrorsModes
namespace System::Runtime::Remoting {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3051))
// CS Name: System.Runtime.Remoting.CustomErrorsModes
struct CORDL_TYPE CustomErrorsModes : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CustomErrorsModes(int32_t value__) noexcept;


                    constexpr CustomErrorsModes(CustomErrorsModes const&) = default;
                    constexpr CustomErrorsModes(CustomErrorsModes&&) = default;
                    constexpr CustomErrorsModes& operator=(CustomErrorsModes const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr CustomErrorsModes& operator=(CustomErrorsModes&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit CustomErrorsModes(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __CustomErrorsModes_Unwrapped : int32_t {
__On = 0,
__Off = 1,
__RemoteOnly = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CustomErrorsModes_Unwrapped () const noexcept {
return std::bit_cast<__CustomErrorsModes_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field On offset 0
static ::System::Runtime::Remoting::CustomErrorsModes const On;

/// @brief Field Off offset 0
static ::System::Runtime::Remoting::CustomErrorsModes const Off;

/// @brief Field RemoteOnly offset 0
static ::System::Runtime::Remoting::CustomErrorsModes const RemoteOnly;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::CustomErrorsModes, "System.Runtime.Remoting", "CustomErrorsModes");
