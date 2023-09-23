#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine {
struct RenderingPath;
}
// Type: UnityEngine::RenderingPath
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10043))
// CS Name: UnityEngine.RenderingPath
struct CORDL_TYPE RenderingPath : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RenderingPath(int32_t value__) noexcept;


                    constexpr RenderingPath(RenderingPath const&) = default;
                    constexpr RenderingPath(RenderingPath&&) = default;
                    constexpr RenderingPath& operator=(RenderingPath const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr RenderingPath& operator=(RenderingPath&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit RenderingPath(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __RenderingPath_Unwrapped : int32_t {
__UsePlayerSettings = -1,
__VertexLit = 0,
__Forward = 1,
__DeferredLighting = 2,
__DeferredShading = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RenderingPath_Unwrapped () const noexcept {
return std::bit_cast<__RenderingPath_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field UsePlayerSettings offset 0
static UnityEngine::RenderingPath const UsePlayerSettings;

/// @brief Field VertexLit offset 0
static UnityEngine::RenderingPath const VertexLit;

/// @brief Field Forward offset 0
static UnityEngine::RenderingPath const Forward;

/// @brief Field DeferredLighting offset 0
static UnityEngine::RenderingPath const DeferredLighting;

/// @brief Field DeferredShading offset 0
static UnityEngine::RenderingPath const DeferredShading;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::RenderingPath, "UnityEngine", "RenderingPath");
