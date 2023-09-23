#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Runtime::InteropServices {
struct GCHandleType;
}
// Type: System.Runtime.InteropServices::GCHandleType
namespace System::Runtime::InteropServices {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3302))
// CS Name: System.Runtime.InteropServices.GCHandleType
struct CORDL_TYPE GCHandleType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GCHandleType(int32_t value__) noexcept;


                    constexpr GCHandleType(GCHandleType const&) = default;
                    constexpr GCHandleType(GCHandleType&&) = default;
                    constexpr GCHandleType& operator=(GCHandleType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GCHandleType& operator=(GCHandleType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GCHandleType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GCHandleType_Unwrapped : int32_t {
__Weak = 0,
__WeakTrackResurrection = 1,
__Normal = 2,
__Pinned = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GCHandleType_Unwrapped () const noexcept {
return std::bit_cast<__GCHandleType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Weak offset 0
static System::Runtime::InteropServices::GCHandleType const Weak;

/// @brief Field WeakTrackResurrection offset 0
static System::Runtime::InteropServices::GCHandleType const WeakTrackResurrection;

/// @brief Field Normal offset 0
static System::Runtime::InteropServices::GCHandleType const Normal;

/// @brief Field Pinned offset 0
static System::Runtime::InteropServices::GCHandleType const Pinned;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::InteropServices
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::InteropServices::GCHandleType, "System.Runtime.InteropServices", "GCHandleType");
