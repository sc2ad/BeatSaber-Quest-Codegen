#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine {
struct LayerMask;
}
// Forward declare root types
namespace UnityEngine {
struct ContactFilter2D;
}
// Type: UnityEngine::ContactFilter2D
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15815))
// CS Name: UnityEngine.ContactFilter2D
struct CORDL_TYPE ContactFilter2D : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "useTriggers", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "useLayerMask", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "useDepth", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "useOutsideDepth", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "useNormalAngle", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "useOutsideNormalAngle", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "layerMask", ty: "::UnityEngine::LayerMask", modifiers: "", def_value: None }, CppParam { name: "minDepth", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "maxDepth", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "minNormalAngle", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "maxNormalAngle", ty: "float_t", modifiers: "", def_value: None }]
constexpr ContactFilter2D(bool useTriggers, bool useLayerMask, bool useDepth, bool useOutsideDepth, bool useNormalAngle, bool useOutsideNormalAngle, ::UnityEngine::LayerMask layerMask, float_t minDepth, float_t maxDepth, float_t minNormalAngle, float_t maxNormalAngle) noexcept;


                    constexpr ContactFilter2D(ContactFilter2D const&) = default;
                    constexpr ContactFilter2D(ContactFilter2D&&) = default;
                    constexpr ContactFilter2D& operator=(ContactFilter2D const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ContactFilter2D& operator=(ContactFilter2D&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1c};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ContactFilter2D(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get_useTriggers, put=__set_useTriggers))  useTriggers;

constexpr void __set_useTriggers(bool value) ;

constexpr bool __get_useTriggers() const;

 bool __declspec(property(get=__get_useLayerMask, put=__set_useLayerMask))  useLayerMask;

constexpr void __set_useLayerMask(bool value) ;

constexpr bool __get_useLayerMask() const;

 bool __declspec(property(get=__get_useDepth, put=__set_useDepth))  useDepth;

constexpr void __set_useDepth(bool value) ;

constexpr bool __get_useDepth() const;

 bool __declspec(property(get=__get_useOutsideDepth, put=__set_useOutsideDepth))  useOutsideDepth;

constexpr void __set_useOutsideDepth(bool value) ;

constexpr bool __get_useOutsideDepth() const;

 bool __declspec(property(get=__get_useNormalAngle, put=__set_useNormalAngle))  useNormalAngle;

constexpr void __set_useNormalAngle(bool value) ;

constexpr bool __get_useNormalAngle() const;

 bool __declspec(property(get=__get_useOutsideNormalAngle, put=__set_useOutsideNormalAngle))  useOutsideNormalAngle;

constexpr void __set_useOutsideNormalAngle(bool value) ;

constexpr bool __get_useOutsideNormalAngle() const;

 ::UnityEngine::LayerMask __declspec(property(get=__get_layerMask, put=__set_layerMask))  layerMask;

constexpr void __set_layerMask(::UnityEngine::LayerMask value) ;

constexpr ::UnityEngine::LayerMask __get_layerMask() const;

 float_t __declspec(property(get=__get_minDepth, put=__set_minDepth))  minDepth;

constexpr void __set_minDepth(float_t value) ;

constexpr float_t __get_minDepth() const;

 float_t __declspec(property(get=__get_maxDepth, put=__set_maxDepth))  maxDepth;

constexpr void __set_maxDepth(float_t value) ;

constexpr float_t __get_maxDepth() const;

 float_t __declspec(property(get=__get_minNormalAngle, put=__set_minNormalAngle))  minNormalAngle;

constexpr void __set_minNormalAngle(float_t value) ;

constexpr float_t __get_minNormalAngle() const;

 float_t __declspec(property(get=__get_maxNormalAngle, put=__set_maxNormalAngle))  maxNormalAngle;

constexpr void __set_maxNormalAngle(float_t value) ;

constexpr float_t __get_maxNormalAngle() const;


// Methods

/// @brief Method CheckConsistency addr 0x2b9b078 size 0x3c virtual false final false
 void CheckConsistency() ;

/// @brief Method SetLayerMask addr 0x2b9b0f0 size 0x10 virtual false final false
 void SetLayerMask(::UnityEngine::LayerMask layerMask) ;

/// @brief Method SetDepth addr 0x2b9b100 size 0x48 virtual false final false
 void SetDepth(float_t minDepth, float_t maxDepth) ;

/// @brief Method CreateLegacyFilter addr 0x2b99ac4 size 0x100 virtual false final false
static ::UnityEngine::ContactFilter2D CreateLegacyFilter(int32_t layerMask, float_t minDepth, float_t maxDepth) ;

/// @brief Method CheckConsistency_Injected addr 0x2b9b0b4 size 0x3c virtual false final false
static void CheckConsistency_Injected(ByRef<::UnityEngine::ContactFilter2D> _unity_self) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ContactFilter2D, "UnityEngine", "ContactFilter2D");
