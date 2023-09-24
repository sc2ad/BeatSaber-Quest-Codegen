#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
struct CallType;
}
// Type: System.Runtime.Remoting.Messaging::CallType
namespace System::Runtime::Remoting::Messaging {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3177))
// CS Name: System.Runtime.Remoting.Messaging.CallType
struct CORDL_TYPE CallType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CallType(int32_t value__) noexcept;


                    constexpr CallType(CallType const&) = default;
                    constexpr CallType(CallType&&) = default;
                    constexpr CallType& operator=(CallType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr CallType& operator=(CallType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit CallType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __CallType_Unwrapped : int32_t {
__Sync = 0,
__BeginInvoke = 1,
__EndInvoke = 2,
__OneWay = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CallType_Unwrapped () const noexcept {
return std::bit_cast<__CallType_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Sync offset 0
static System::Runtime::Remoting::Messaging::CallType const Sync;

/// @brief Field BeginInvoke offset 0
static System::Runtime::Remoting::Messaging::CallType const BeginInvoke;

/// @brief Field EndInvoke offset 0
static System::Runtime::Remoting::Messaging::CallType const EndInvoke;

/// @brief Field OneWay offset 0
static System::Runtime::Remoting::Messaging::CallType const OneWay;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Messaging
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Messaging::CallType, "System.Runtime.Remoting.Messaging", "CallType");
