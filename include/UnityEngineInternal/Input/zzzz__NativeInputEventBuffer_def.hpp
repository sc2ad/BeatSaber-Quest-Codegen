#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngineInternal::Input {
struct NativeInputEventBuffer;
}
// Type: UnityEngineInternal.Input::NativeInputEventBuffer
namespace UnityEngineInternal::Input {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15955))
// CS Name: UnityEngineInternal.Input.NativeInputEventBuffer
struct CORDL_TYPE NativeInputEventBuffer : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "eventBuffer", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "eventCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "sizeInBytes", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "capacityInBytes", ty: "int32_t", modifiers: "", def_value: None }]
constexpr NativeInputEventBuffer(void* eventBuffer, int32_t eventCount, int32_t sizeInBytes, int32_t capacityInBytes) noexcept;


                    constexpr NativeInputEventBuffer(NativeInputEventBuffer const&) = default;
                    constexpr NativeInputEventBuffer(NativeInputEventBuffer&&) = default;
                    constexpr NativeInputEventBuffer& operator=(NativeInputEventBuffer const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr NativeInputEventBuffer& operator=(NativeInputEventBuffer&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x14};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit NativeInputEventBuffer(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 void* __declspec(property(get=__get_eventBuffer, put=__set_eventBuffer))  eventBuffer;

constexpr void __set_eventBuffer(void* value) ;

constexpr void* __get_eventBuffer() const;

 int32_t __declspec(property(get=__get_eventCount, put=__set_eventCount))  eventCount;

constexpr void __set_eventCount(int32_t value) ;

constexpr int32_t __get_eventCount() const;

 int32_t __declspec(property(get=__get_sizeInBytes, put=__set_sizeInBytes))  sizeInBytes;

constexpr void __set_sizeInBytes(int32_t value) ;

constexpr int32_t __get_sizeInBytes() const;

 int32_t __declspec(property(get=__get_capacityInBytes, put=__set_capacityInBytes))  capacityInBytes;

constexpr void __set_capacityInBytes(int32_t value) ;

constexpr int32_t __get_capacityInBytes() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngineInternal::Input
DEFINE_IL2CPP_ARG_TYPE(UnityEngineInternal::Input::NativeInputEventBuffer, "UnityEngineInternal.Input", "NativeInputEventBuffer");
