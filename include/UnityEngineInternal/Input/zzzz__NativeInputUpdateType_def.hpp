#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngineInternal::Input {
struct NativeInputUpdateType;
}
// Type: UnityEngineInternal.Input::NativeInputUpdateType
namespace UnityEngineInternal::Input {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15957))
// CS Name: UnityEngineInternal.Input.NativeInputUpdateType
struct CORDL_TYPE NativeInputUpdateType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr NativeInputUpdateType(int32_t value__) noexcept;


                    constexpr NativeInputUpdateType(NativeInputUpdateType const&) = default;
                    constexpr NativeInputUpdateType(NativeInputUpdateType&&) = default;
                    constexpr NativeInputUpdateType& operator=(NativeInputUpdateType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr NativeInputUpdateType& operator=(NativeInputUpdateType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit NativeInputUpdateType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __NativeInputUpdateType_Unwrapped : int32_t {
__Dynamic = 1,
__Fixed = 2,
__BeforeRender = 4,
__Editor = 8,
__IgnoreFocus = -2147483648,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NativeInputUpdateType_Unwrapped () const noexcept {
return std::bit_cast<__NativeInputUpdateType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Dynamic offset 0
static UnityEngineInternal::Input::NativeInputUpdateType const Dynamic;

/// @brief Field Fixed offset 0
static UnityEngineInternal::Input::NativeInputUpdateType const Fixed;

/// @brief Field BeforeRender offset 0
static UnityEngineInternal::Input::NativeInputUpdateType const BeforeRender;

/// @brief Field Editor offset 0
static UnityEngineInternal::Input::NativeInputUpdateType const Editor;

/// @brief Field IgnoreFocus offset 0
static UnityEngineInternal::Input::NativeInputUpdateType const IgnoreFocus;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngineInternal::Input
DEFINE_IL2CPP_ARG_TYPE(UnityEngineInternal::Input::NativeInputUpdateType, "UnityEngineInternal.Input", "NativeInputUpdateType");
