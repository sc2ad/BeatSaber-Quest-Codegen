#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct VectorImageVertex;
}
// Type: UnityEngine.UIElements::VectorImageVertex
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6889))
// CS Name: UnityEngine.UIElements.VectorImageVertex
struct CORDL_TYPE VectorImageVertex : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "position", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "tint", ty: "UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "uv", ty: "UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "settingIndex", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr VectorImageVertex(UnityEngine::Vector3 position, UnityEngine::Color32 tint, UnityEngine::Vector2 uv, uint32_t settingIndex) noexcept;


                    constexpr VectorImageVertex(VectorImageVertex const&) = default;
                    constexpr VectorImageVertex(VectorImageVertex&&) = default;
                    constexpr VectorImageVertex& operator=(VectorImageVertex const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr VectorImageVertex& operator=(VectorImageVertex&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1c};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit VectorImageVertex(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::Vector3 __declspec(property(get=__get_position, put=__set_position))  position;

constexpr void __set_position(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_position() const;

 UnityEngine::Color32 __declspec(property(get=__get_tint, put=__set_tint))  tint;

constexpr void __set_tint(UnityEngine::Color32 value) ;

constexpr UnityEngine::Color32 __get_tint() const;

 UnityEngine::Vector2 __declspec(property(get=__get_uv, put=__set_uv))  uv;

constexpr void __set_uv(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get_uv() const;

 uint32_t __declspec(property(get=__get_settingIndex, put=__set_settingIndex))  settingIndex;

constexpr void __set_settingIndex(uint32_t value) ;

constexpr uint32_t __get_settingIndex() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::VectorImageVertex, "UnityEngine.UIElements", "VectorImageVertex");
