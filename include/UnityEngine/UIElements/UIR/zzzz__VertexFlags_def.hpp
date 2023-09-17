#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
struct VertexFlags;
}
// Type: UnityEngine.UIElements.UIR::VertexFlags
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7540))
// CS Name: UnityEngine.UIElements.UIR.VertexFlags
struct CORDL_TYPE VertexFlags : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr VertexFlags(int32_t value__) noexcept;


                    constexpr VertexFlags(VertexFlags const&) = default;
                    constexpr VertexFlags(VertexFlags&&) = default;
                    constexpr VertexFlags& operator=(VertexFlags const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr VertexFlags& operator=(VertexFlags&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit VertexFlags(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __VertexFlags_Unwrapped : int32_t {
__IsSolid = 0,
__IsText = 1,
__IsTextured = 2,
__IsDynamic = 3,
__IsSvgGradients = 4,
__LastType = 10,
__IsGraphViewEdge = 10,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __VertexFlags_Unwrapped () const noexcept {
return std::bit_cast<__VertexFlags_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field IsSolid offset 0
static ::UnityEngine::UIElements::UIR::VertexFlags const IsSolid;

/// @brief Field IsText offset 0
static ::UnityEngine::UIElements::UIR::VertexFlags const IsText;

/// @brief Field IsTextured offset 0
static ::UnityEngine::UIElements::UIR::VertexFlags const IsTextured;

/// @brief Field IsDynamic offset 0
static ::UnityEngine::UIElements::UIR::VertexFlags const IsDynamic;

/// @brief Field IsSvgGradients offset 0
static ::UnityEngine::UIElements::UIR::VertexFlags const IsSvgGradients;

/// @brief Field LastType offset 0
static ::UnityEngine::UIElements::UIR::VertexFlags const LastType;

/// @brief Field IsGraphViewEdge offset 0
static ::UnityEngine::UIElements::UIR::VertexFlags const IsGraphViewEdge;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::VertexFlags, "UnityEngine.UIElements.UIR", "VertexFlags");
