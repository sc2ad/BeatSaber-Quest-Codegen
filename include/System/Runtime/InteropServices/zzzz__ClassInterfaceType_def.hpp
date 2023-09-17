#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Runtime::InteropServices {
struct ClassInterfaceType;
}
// Type: System.Runtime.InteropServices::ClassInterfaceType
namespace System::Runtime::InteropServices {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3311))
// CS Name: System.Runtime.InteropServices.ClassInterfaceType
struct CORDL_TYPE ClassInterfaceType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ClassInterfaceType(int32_t value__) noexcept;


                    constexpr ClassInterfaceType(ClassInterfaceType const&) = default;
                    constexpr ClassInterfaceType(ClassInterfaceType&&) = default;
                    constexpr ClassInterfaceType& operator=(ClassInterfaceType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ClassInterfaceType& operator=(ClassInterfaceType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ClassInterfaceType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __ClassInterfaceType_Unwrapped : int32_t {
__None = 0,
__AutoDispatch = 1,
__AutoDual = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ClassInterfaceType_Unwrapped () const noexcept {
return std::bit_cast<__ClassInterfaceType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static ::System::Runtime::InteropServices::ClassInterfaceType const None;

/// @brief Field AutoDispatch offset 0
static ::System::Runtime::InteropServices::ClassInterfaceType const AutoDispatch;

/// @brief Field AutoDual offset 0
static ::System::Runtime::InteropServices::ClassInterfaceType const AutoDual;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::InteropServices
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::ClassInterfaceType, "System.Runtime.InteropServices", "ClassInterfaceType");
