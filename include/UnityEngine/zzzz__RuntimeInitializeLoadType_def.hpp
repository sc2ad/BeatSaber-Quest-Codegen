#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine {
struct RuntimeInitializeLoadType;
}
// Type: UnityEngine::RuntimeInitializeLoadType
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10136))
// CS Name: UnityEngine.RuntimeInitializeLoadType
struct CORDL_TYPE RuntimeInitializeLoadType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RuntimeInitializeLoadType(int32_t value__) noexcept;


                    constexpr RuntimeInitializeLoadType(RuntimeInitializeLoadType const&) = default;
                    constexpr RuntimeInitializeLoadType(RuntimeInitializeLoadType&&) = default;
                    constexpr RuntimeInitializeLoadType& operator=(RuntimeInitializeLoadType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr RuntimeInitializeLoadType& operator=(RuntimeInitializeLoadType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit RuntimeInitializeLoadType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __RuntimeInitializeLoadType_Unwrapped : int32_t {
__AfterSceneLoad = 0,
__BeforeSceneLoad = 1,
__AfterAssembliesLoaded = 2,
__BeforeSplashScreen = 3,
__SubsystemRegistration = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RuntimeInitializeLoadType_Unwrapped () const noexcept {
return std::bit_cast<__RuntimeInitializeLoadType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field AfterSceneLoad offset 0
static UnityEngine::RuntimeInitializeLoadType const AfterSceneLoad;

/// @brief Field BeforeSceneLoad offset 0
static UnityEngine::RuntimeInitializeLoadType const BeforeSceneLoad;

/// @brief Field AfterAssembliesLoaded offset 0
static UnityEngine::RuntimeInitializeLoadType const AfterAssembliesLoaded;

/// @brief Field BeforeSplashScreen offset 0
static UnityEngine::RuntimeInitializeLoadType const BeforeSplashScreen;

/// @brief Field SubsystemRegistration offset 0
static UnityEngine::RuntimeInitializeLoadType const SubsystemRegistration;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::RuntimeInitializeLoadType, "UnityEngine", "RuntimeInitializeLoadType");
