#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct AsyncOperationStatus;
}
// Type: UnityEngine.ResourceManagement.AsyncOperations::AsyncOperationStatus
namespace UnityEngine::ResourceManagement::AsyncOperations {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14316))
// CS Name: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationStatus
struct CORDL_TYPE AsyncOperationStatus : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AsyncOperationStatus(int32_t value__) noexcept;


                    constexpr AsyncOperationStatus(AsyncOperationStatus const&) = default;
                    constexpr AsyncOperationStatus(AsyncOperationStatus&&) = default;
                    constexpr AsyncOperationStatus& operator=(AsyncOperationStatus const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AsyncOperationStatus& operator=(AsyncOperationStatus&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AsyncOperationStatus(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __AsyncOperationStatus_Unwrapped : int32_t {
__None = 0,
__Succeeded = 1,
__Failed = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AsyncOperationStatus_Unwrapped () const noexcept {
return std::bit_cast<__AsyncOperationStatus_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus const None;

/// @brief Field Succeeded offset 0
static UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus const Succeeded;

/// @brief Field Failed offset 0
static UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus const Failed;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::AsyncOperations
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus, "UnityEngine.ResourceManagement.AsyncOperations", "AsyncOperationStatus");
