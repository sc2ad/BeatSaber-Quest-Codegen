#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
struct ArgInfoType;
}
// Type: System.Runtime.Remoting.Messaging::ArgInfoType
namespace System::Runtime::Remoting::Messaging {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3145))
// CS Name: System.Runtime.Remoting.Messaging.ArgInfoType
struct CORDL_TYPE ArgInfoType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr ArgInfoType(uint8_t value__) noexcept;


                    constexpr ArgInfoType(ArgInfoType const&) = default;
                    constexpr ArgInfoType(ArgInfoType&&) = default;
                    constexpr ArgInfoType& operator=(ArgInfoType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ArgInfoType& operator=(ArgInfoType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ArgInfoType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __ArgInfoType_Unwrapped : uint8_t {
__In = 0u,
__Out = 1u,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ArgInfoType_Unwrapped () const noexcept {
return std::bit_cast<__ArgInfoType_Unwrapped>(__instance);
}


// Fields

 uint8_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(uint8_t value) ;

constexpr uint8_t __get_value__() const;

/// @brief Field In offset 0
static ::System::Runtime::Remoting::Messaging::ArgInfoType const In;

/// @brief Field Out offset 0
static ::System::Runtime::Remoting::Messaging::ArgInfoType const Out;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Messaging
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::ArgInfoType, "System.Runtime.Remoting.Messaging", "ArgInfoType");
