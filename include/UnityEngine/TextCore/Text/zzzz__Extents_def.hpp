#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
struct Extents;
}
// Type: UnityEngine.TextCore.Text::Extents
namespace UnityEngine::TextCore::Text {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13507))
// CS Name: UnityEngine.TextCore.Text.Extents
struct CORDL_TYPE Extents : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "min", ty: "UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "max", ty: "UnityEngine::Vector2", modifiers: "", def_value: None }]
constexpr Extents(UnityEngine::Vector2 min, UnityEngine::Vector2 max) noexcept;


                    constexpr Extents(Extents const&) = default;
                    constexpr Extents(Extents&&) = default;
                    constexpr Extents& operator=(Extents const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Extents& operator=(Extents&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Extents(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::Vector2 __declspec(property(get=__get_min, put=__set_min))  min;

constexpr void __set_min(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get_min() const;

 UnityEngine::Vector2 __declspec(property(get=__get_max, put=__set_max))  max;

constexpr void __set_max(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get_max() const;


// Methods

/// @brief Method ToString addr 0x2bcb650 size 0x2ac virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::TextCore::Text
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TextCore::Text::Extents, "UnityEngine.TextCore.Text", "Extents");
