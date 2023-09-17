#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
namespace {
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace TMPro {
struct Mesh_Extents;
}
// Type: TMPro::Mesh_Extents
namespace TMPro {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12265))
// CS Name: TMPro.Mesh_Extents
struct CORDL_TYPE Mesh_Extents : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "min", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "max", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }]
constexpr Mesh_Extents(::UnityEngine::Vector2 min, ::UnityEngine::Vector2 max) noexcept;


                    constexpr Mesh_Extents(Mesh_Extents const&) = default;
                    constexpr Mesh_Extents(Mesh_Extents&&) = default;
                    constexpr Mesh_Extents& operator=(Mesh_Extents const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Mesh_Extents& operator=(Mesh_Extents&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Mesh_Extents(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::Vector2 __declspec(property(get=__get_min, put=__set_min))  min;

constexpr void __set_min(::UnityEngine::Vector2 value) ;

constexpr ::UnityEngine::Vector2 __get_min() const;

 ::UnityEngine::Vector2 __declspec(property(get=__get_max, put=__set_max))  max;

constexpr void __set_max(::UnityEngine::Vector2 value) ;

constexpr ::UnityEngine::Vector2 __get_max() const;


// Methods

/// @brief Method .ctor addr 0x2a69a80 size 0xc virtual false final false
 void _ctor(::UnityEngine::Vector2 min, ::UnityEngine::Vector2 max) ;

/// @brief Method ToString addr 0x2a69a8c size 0x2ac virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def TMPro
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::TMPro::Mesh_Extents, "TMPro", "Mesh_Extents");
