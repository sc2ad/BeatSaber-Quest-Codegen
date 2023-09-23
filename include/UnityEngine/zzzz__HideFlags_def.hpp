#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine {
struct HideFlags;
}
// Type: UnityEngine::HideFlags
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10141))
// CS Name: UnityEngine.HideFlags
struct CORDL_TYPE HideFlags : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HideFlags(int32_t value__) noexcept;


                    constexpr HideFlags(HideFlags const&) = default;
                    constexpr HideFlags(HideFlags&&) = default;
                    constexpr HideFlags& operator=(HideFlags const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HideFlags& operator=(HideFlags&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HideFlags(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __HideFlags_Unwrapped : int32_t {
__None = 0,
__HideInHierarchy = 1,
__HideInInspector = 2,
__DontSaveInEditor = 4,
__NotEditable = 8,
__DontSaveInBuild = 16,
__DontUnloadUnusedAsset = 32,
__DontSave = 52,
__HideAndDontSave = 61,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HideFlags_Unwrapped () const noexcept {
return std::bit_cast<__HideFlags_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static UnityEngine::HideFlags const None;

/// @brief Field HideInHierarchy offset 0
static UnityEngine::HideFlags const HideInHierarchy;

/// @brief Field HideInInspector offset 0
static UnityEngine::HideFlags const HideInInspector;

/// @brief Field DontSaveInEditor offset 0
static UnityEngine::HideFlags const DontSaveInEditor;

/// @brief Field NotEditable offset 0
static UnityEngine::HideFlags const NotEditable;

/// @brief Field DontSaveInBuild offset 0
static UnityEngine::HideFlags const DontSaveInBuild;

/// @brief Field DontUnloadUnusedAsset offset 0
static UnityEngine::HideFlags const DontUnloadUnusedAsset;

/// @brief Field DontSave offset 0
static UnityEngine::HideFlags const DontSave;

/// @brief Field HideAndDontSave offset 0
static UnityEngine::HideFlags const HideAndDontSave;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::HideFlags, "UnityEngine", "HideFlags");
