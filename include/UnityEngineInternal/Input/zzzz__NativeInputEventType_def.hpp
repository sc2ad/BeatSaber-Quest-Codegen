#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngineInternal::Input {
struct NativeInputEventType;
}
// Type: UnityEngineInternal.Input::NativeInputEventType
namespace UnityEngineInternal::Input {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15954))
// CS Name: UnityEngineInternal.Input.NativeInputEventType
struct CORDL_TYPE NativeInputEventType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr NativeInputEventType(int32_t value__) noexcept;


                    constexpr NativeInputEventType(NativeInputEventType const&) = default;
                    constexpr NativeInputEventType(NativeInputEventType&&) = default;
                    constexpr NativeInputEventType& operator=(NativeInputEventType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr NativeInputEventType& operator=(NativeInputEventType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit NativeInputEventType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __NativeInputEventType_Unwrapped : int32_t {
__DeviceRemoved = 1146242381,
__DeviceConfigChanged = 1145259591,
__Text = 1413830740,
__State = 1398030676,
__Delta = 1145852993,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NativeInputEventType_Unwrapped () const noexcept {
return std::bit_cast<__NativeInputEventType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field DeviceRemoved offset 0
static UnityEngineInternal::Input::NativeInputEventType const DeviceRemoved;

/// @brief Field DeviceConfigChanged offset 0
static UnityEngineInternal::Input::NativeInputEventType const DeviceConfigChanged;

/// @brief Field Text offset 0
static UnityEngineInternal::Input::NativeInputEventType const Text;

/// @brief Field State offset 0
static UnityEngineInternal::Input::NativeInputEventType const State;

/// @brief Field Delta offset 0
static UnityEngineInternal::Input::NativeInputEventType const Delta;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngineInternal::Input
DEFINE_IL2CPP_ARG_TYPE(UnityEngineInternal::Input::NativeInputEventType, "UnityEngineInternal.Input", "NativeInputEventType");
