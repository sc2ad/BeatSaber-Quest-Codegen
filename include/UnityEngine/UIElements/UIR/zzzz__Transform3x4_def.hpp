#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
namespace {
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
struct Transform3x4;
}
// Type: UnityEngine.UIElements.UIR::Transform3x4
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7524))
// CS Name: UnityEngine.UIElements.UIR.Transform3x4
struct CORDL_TYPE Transform3x4 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "v0", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }, CppParam { name: "v1", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }, CppParam { name: "v2", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }]
constexpr Transform3x4(::UnityEngine::Vector4 v0, ::UnityEngine::Vector4 v1, ::UnityEngine::Vector4 v2) noexcept;


                    constexpr Transform3x4(Transform3x4 const&) = default;
                    constexpr Transform3x4(Transform3x4&&) = default;
                    constexpr Transform3x4& operator=(Transform3x4 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Transform3x4& operator=(Transform3x4&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Transform3x4(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::Vector4 __declspec(property(get=__get_v0, put=__set_v0))  v0;

constexpr void __set_v0(::UnityEngine::Vector4 value) ;

constexpr ::UnityEngine::Vector4 __get_v0() const;

 ::UnityEngine::Vector4 __declspec(property(get=__get_v1, put=__set_v1))  v1;

constexpr void __set_v1(::UnityEngine::Vector4 value) ;

constexpr ::UnityEngine::Vector4 __get_v1() const;

 ::UnityEngine::Vector4 __declspec(property(get=__get_v2, put=__set_v2))  v2;

constexpr void __set_v2(::UnityEngine::Vector4 value) ;

constexpr ::UnityEngine::Vector4 __get_v2() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::Transform3x4, "UnityEngine.UIElements.UIR", "Transform3x4");
