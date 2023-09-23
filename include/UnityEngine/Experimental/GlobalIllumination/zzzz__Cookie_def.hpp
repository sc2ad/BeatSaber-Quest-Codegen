#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::Experimental::GlobalIllumination {
struct Cookie;
}
// Type: UnityEngine.Experimental.GlobalIllumination::Cookie
namespace UnityEngine::Experimental::GlobalIllumination {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10332))
// CS Name: UnityEngine.Experimental.GlobalIllumination.Cookie
struct CORDL_TYPE Cookie : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "instanceID", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "scale", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "sizes", ty: "UnityEngine::Vector2", modifiers: "", def_value: None }]
constexpr Cookie(int32_t instanceID, float_t scale, UnityEngine::Vector2 sizes) noexcept;


                    constexpr Cookie(Cookie const&) = default;
                    constexpr Cookie(Cookie&&) = default;
                    constexpr Cookie& operator=(Cookie const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Cookie& operator=(Cookie&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Cookie(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_instanceID, put=__set_instanceID))  instanceID;

constexpr void __set_instanceID(int32_t value) ;

constexpr int32_t __get_instanceID() const;

 float_t __declspec(property(get=__get_scale, put=__set_scale))  scale;

constexpr void __set_scale(float_t value) ;

constexpr float_t __get_scale() const;

 UnityEngine::Vector2 __declspec(property(get=__get_sizes, put=__set_sizes))  sizes;

constexpr void __set_sizes(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get_sizes() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Experimental::GlobalIllumination
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Experimental::GlobalIllumination::Cookie, "UnityEngine.Experimental.GlobalIllumination", "Cookie");
