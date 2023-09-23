#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
struct RaycastHit;
}
// Forward declare root types
namespace VRUIControls {
class PhysicsRaycasterWithCache;
}
namespace VRUIControls {
struct VRUIControls__PhysicsRaycasterWithCache__CachedRaycast;
}
// Type: ::CachedRaycast
namespace VRUIControls {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15637))
// CS Name: VRUIControls.PhysicsRaycasterWithCache::CachedRaycast
struct CORDL_TYPE VRUIControls__PhysicsRaycasterWithCache__CachedRaycast : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "wasHit", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "ray", ty: "UnityEngine::Ray", modifiers: "", def_value: None }, CppParam { name: "hitInfo", ty: "UnityEngine::RaycastHit", modifiers: "", def_value: None }, CppParam { name: "maxDistance", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "layerMask", ty: "int32_t", modifiers: "", def_value: None }]
constexpr VRUIControls__PhysicsRaycasterWithCache__CachedRaycast(bool wasHit, UnityEngine::Ray ray, UnityEngine::RaycastHit hitInfo, float_t maxDistance, int32_t layerMask) noexcept;


                    constexpr VRUIControls__PhysicsRaycasterWithCache__CachedRaycast(VRUIControls__PhysicsRaycasterWithCache__CachedRaycast const&) = default;
                    constexpr VRUIControls__PhysicsRaycasterWithCache__CachedRaycast(VRUIControls__PhysicsRaycasterWithCache__CachedRaycast&&) = default;
                    constexpr VRUIControls__PhysicsRaycasterWithCache__CachedRaycast& operator=(VRUIControls__PhysicsRaycasterWithCache__CachedRaycast const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr VRUIControls__PhysicsRaycasterWithCache__CachedRaycast& operator=(VRUIControls__PhysicsRaycasterWithCache__CachedRaycast&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x50};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit VRUIControls__PhysicsRaycasterWithCache__CachedRaycast(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get_wasHit, put=__set_wasHit))  wasHit;

constexpr void __set_wasHit(bool value) ;

constexpr bool __get_wasHit() const;

 UnityEngine::Ray __declspec(property(get=__get_ray, put=__set_ray))  ray;

constexpr void __set_ray(UnityEngine::Ray value) ;

constexpr UnityEngine::Ray __get_ray() const;

 UnityEngine::RaycastHit __declspec(property(get=__get_hitInfo, put=__set_hitInfo))  hitInfo;

constexpr void __set_hitInfo(UnityEngine::RaycastHit value) ;

constexpr UnityEngine::RaycastHit __get_hitInfo() const;

 float_t __declspec(property(get=__get_maxDistance, put=__set_maxDistance))  maxDistance;

constexpr void __set_maxDistance(float_t value) ;

constexpr float_t __get_maxDistance() const;

 int32_t __declspec(property(get=__get_layerMask, put=__set_layerMask))  layerMask;

constexpr void __set_layerMask(int32_t value) ;

constexpr int32_t __get_layerMask() const;


// Methods

/// @brief Method .ctor addr 0x2d3b5e8 size 0x40 virtual false final false
 void _ctor(bool wasHit, UnityEngine::Ray ray, UnityEngine::RaycastHit hitInfo, float_t maxDistance, int32_t layerMask) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def VRUIControls
// Type: VRUIControls::PhysicsRaycasterWithCache
namespace VRUIControls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15638))
// CS Name: VRUIControls.PhysicsRaycasterWithCache
class CORDL_TYPE PhysicsRaycasterWithCache : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using CachedRaycast = VRUIControls::VRUIControls__PhysicsRaycasterWithCache__CachedRaycast;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~PhysicsRaycasterWithCache() = default;

// Ctor Parameters [CppParam { name: "", ty: "PhysicsRaycasterWithCache", modifiers: " const&", def_value: None }]
constexpr PhysicsRaycasterWithCache(PhysicsRaycasterWithCache const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PhysicsRaycasterWithCache", modifiers: "&&", def_value: None }]
constexpr PhysicsRaycasterWithCache(PhysicsRaycasterWithCache&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PhysicsRaycasterWithCache(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PhysicsRaycasterWithCache& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PhysicsRaycasterWithCache& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PhysicsRaycasterWithCache& operator=(PhysicsRaycasterWithCache&& o) noexcept = default;
  constexpr PhysicsRaycasterWithCache& operator=(PhysicsRaycasterWithCache const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<VRUIControls::VRUIControls__PhysicsRaycasterWithCache__CachedRaycast> __declspec(property(get=__get__cachedRaycasts, put=__set__cachedRaycasts))  _cachedRaycasts;

constexpr void __set__cachedRaycasts(System::Collections::Generic::List_1<VRUIControls::VRUIControls__PhysicsRaycasterWithCache__CachedRaycast> value) ;

constexpr System::Collections::Generic::List_1<VRUIControls::VRUIControls__PhysicsRaycasterWithCache__CachedRaycast> __get__cachedRaycasts() const;

 int32_t __declspec(property(get=__get__lastFrameCount, put=__set__lastFrameCount))  _lastFrameCount;

constexpr void __set__lastFrameCount(int32_t value) ;

constexpr int32_t __get__lastFrameCount() const;


// Methods

/// @brief Method Raycast addr 0x2d3b07c size 0x56c virtual false final false
 bool Raycast(UnityEngine::Ray ray, ByRef<UnityEngine::RaycastHit> hitInfo, float_t maxDistance, int32_t layerMask) ;

// Ctor Parameters []
explicit PhysicsRaycasterWithCache() ;

/// @brief Method .ctor addr 0x2d3b628 size 0x84 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def VRUIControls
NEED_NO_BOX(VRUIControls::PhysicsRaycasterWithCache);
DEFINE_IL2CPP_ARG_TYPE(VRUIControls::PhysicsRaycasterWithCache, "VRUIControls", "PhysicsRaycasterWithCache");
DEFINE_IL2CPP_ARG_TYPE(VRUIControls::VRUIControls__PhysicsRaycasterWithCache__CachedRaycast, "VRUIControls", "PhysicsRaycasterWithCache/CachedRaycast");
