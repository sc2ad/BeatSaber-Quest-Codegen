#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
struct InlinedArray_1;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
struct DynamicBitfield;
}
// Type: UnityEngine.InputSystem::DynamicBitfield
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6404))
// CS Name: UnityEngine.InputSystem.DynamicBitfield
struct CORDL_TYPE DynamicBitfield : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "array", ty: "UnityEngine::InputSystem::Utilities::InlinedArray_1<uint64_t>", modifiers: "", def_value: None }, CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DynamicBitfield(UnityEngine::InputSystem::Utilities::InlinedArray_1<uint64_t> array, int32_t length) noexcept;


                    constexpr DynamicBitfield(DynamicBitfield const&) = default;
                    constexpr DynamicBitfield(DynamicBitfield&&) = default;
                    constexpr DynamicBitfield& operator=(DynamicBitfield const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr DynamicBitfield& operator=(DynamicBitfield&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit DynamicBitfield(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::InputSystem::Utilities::InlinedArray_1<uint64_t> __declspec(property(get=__get_array, put=__set_array))  array;

constexpr void __set_array(UnityEngine::InputSystem::Utilities::InlinedArray_1<uint64_t> value) ;

constexpr UnityEngine::InputSystem::Utilities::InlinedArray_1<uint64_t> __get_array() const;

 int32_t __declspec(property(get=__get_length, put=__set_length))  length;

constexpr void __set_length(int32_t value) ;

constexpr int32_t __get_length() const;


// Methods

/// @brief Method SetLength addr 0x29244a8 size 0x74 virtual false final false
 void SetLength(int32_t newLength) ;

/// @brief Method SetBit addr 0x29327e4 size 0x98 virtual false final false
 void SetBit(int32_t bitIndex) ;

/// @brief Method TestBit addr 0x293287c size 0x78 virtual false final false
 bool TestBit(int32_t bitIndex) ;

/// @brief Method ClearBit addr 0x29245d0 size 0x98 virtual false final false
 void ClearBit(int32_t bitIndex) ;

/// @brief Method BitCountToULongCount addr 0x29327cc size 0x18 virtual false final false
static int32_t BitCountToULongCount(int32_t bitCount) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::DynamicBitfield, "UnityEngine.InputSystem", "DynamicBitfield");
