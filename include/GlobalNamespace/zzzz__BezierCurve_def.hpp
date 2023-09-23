#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct BezierCurve;
}
// Type: ::BezierCurve
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3977))
// CS Name: BezierCurve
struct CORDL_TYPE BezierCurve : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "p0", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "p1", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "p2", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "p3", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }]
constexpr BezierCurve(UnityEngine::Vector3 p0, UnityEngine::Vector3 p1, UnityEngine::Vector3 p2, UnityEngine::Vector3 p3) noexcept;


                    constexpr BezierCurve(BezierCurve const&) = default;
                    constexpr BezierCurve(BezierCurve&&) = default;
                    constexpr BezierCurve& operator=(BezierCurve const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr BezierCurve& operator=(BezierCurve&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit BezierCurve(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::Vector3 __declspec(property(get=__get_p0, put=__set_p0))  p0;

constexpr void __set_p0(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_p0() const;

 UnityEngine::Vector3 __declspec(property(get=__get_p1, put=__set_p1))  p1;

constexpr void __set_p1(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_p1() const;

 UnityEngine::Vector3 __declspec(property(get=__get_p2, put=__set_p2))  p2;

constexpr void __set_p2(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_p2() const;

 UnityEngine::Vector3 __declspec(property(get=__get_p3, put=__set_p3))  p3;

constexpr void __set_p3(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_p3() const;


// Methods

/// @brief Method .ctor addr 0x20ab564 size 0x30 virtual false final false
 void _ctor(UnityEngine::Vector3 p0, UnityEngine::Vector3 p1, UnityEngine::Vector3 p2, UnityEngine::Vector3 p3) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BezierCurve, "", "BezierCurve");
