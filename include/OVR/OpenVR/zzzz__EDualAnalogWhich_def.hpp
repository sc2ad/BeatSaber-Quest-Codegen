#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace OVR::OpenVR {
struct EDualAnalogWhich;
}
// Type: OVR.OpenVR::EDualAnalogWhich
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9378))
// CS Name: OVR.OpenVR.EDualAnalogWhich
struct CORDL_TYPE EDualAnalogWhich : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EDualAnalogWhich(int32_t value__) noexcept;


                    constexpr EDualAnalogWhich(EDualAnalogWhich const&) = default;
                    constexpr EDualAnalogWhich(EDualAnalogWhich&&) = default;
                    constexpr EDualAnalogWhich& operator=(EDualAnalogWhich const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr EDualAnalogWhich& operator=(EDualAnalogWhich&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit EDualAnalogWhich(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __EDualAnalogWhich_Unwrapped : int32_t {
__k_EDualAnalog_Left = 0,
__k_EDualAnalog_Right = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EDualAnalogWhich_Unwrapped () const noexcept {
return std::bit_cast<__EDualAnalogWhich_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field k_EDualAnalog_Left offset 0
static OVR::OpenVR::EDualAnalogWhich const k_EDualAnalog_Left;

/// @brief Field k_EDualAnalog_Right offset 0
static OVR::OpenVR::EDualAnalogWhich const k_EDualAnalog_Right;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::EDualAnalogWhich, "OVR.OpenVR", "EDualAnalogWhich");
