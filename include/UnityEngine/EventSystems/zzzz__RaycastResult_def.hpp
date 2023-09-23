#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine::EventSystems {
class BaseRaycaster;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::EventSystems {
struct RaycastResult;
}
// Type: UnityEngine.EventSystems::RaycastResult
namespace UnityEngine::EventSystems {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13152))
// CS Name: UnityEngine.EventSystems.RaycastResult
struct CORDL_TYPE RaycastResult : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_GameObject", ty: "UnityEngine::GameObject", modifiers: "", def_value: None }, CppParam { name: "module", ty: "UnityEngine::EventSystems::BaseRaycaster", modifiers: "", def_value: None }, CppParam { name: "distance", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "index", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "depth", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "sortingLayer", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "sortingOrder", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "worldPosition", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "worldNormal", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "screenPosition", ty: "UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "displayIndex", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RaycastResult(UnityEngine::GameObject m_GameObject, UnityEngine::EventSystems::BaseRaycaster module, float_t distance, float_t index, int32_t depth, int32_t sortingLayer, int32_t sortingOrder, UnityEngine::Vector3 worldPosition, UnityEngine::Vector3 worldNormal, UnityEngine::Vector2 screenPosition, int32_t displayIndex) noexcept;


                    constexpr RaycastResult(RaycastResult const&) = default;
                    constexpr RaycastResult(RaycastResult&&) = default;
                    constexpr RaycastResult& operator=(RaycastResult const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr RaycastResult& operator=(RaycastResult&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x48};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit RaycastResult(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::GameObject __declspec(property(get=__get_m_GameObject, put=__set_m_GameObject))  m_GameObject;

constexpr void __set_m_GameObject(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get_m_GameObject() const;

 UnityEngine::EventSystems::BaseRaycaster __declspec(property(get=__get_module, put=__set_module))  module;

constexpr void __set_module(UnityEngine::EventSystems::BaseRaycaster value) ;

constexpr UnityEngine::EventSystems::BaseRaycaster __get_module() const;

 float_t __declspec(property(get=__get_distance, put=__set_distance))  distance;

constexpr void __set_distance(float_t value) ;

constexpr float_t __get_distance() const;

 float_t __declspec(property(get=__get_index, put=__set_index))  index;

constexpr void __set_index(float_t value) ;

constexpr float_t __get_index() const;

 int32_t __declspec(property(get=__get_depth, put=__set_depth))  depth;

constexpr void __set_depth(int32_t value) ;

constexpr int32_t __get_depth() const;

 int32_t __declspec(property(get=__get_sortingLayer, put=__set_sortingLayer))  sortingLayer;

constexpr void __set_sortingLayer(int32_t value) ;

constexpr int32_t __get_sortingLayer() const;

 int32_t __declspec(property(get=__get_sortingOrder, put=__set_sortingOrder))  sortingOrder;

constexpr void __set_sortingOrder(int32_t value) ;

constexpr int32_t __get_sortingOrder() const;

 UnityEngine::Vector3 __declspec(property(get=__get_worldPosition, put=__set_worldPosition))  worldPosition;

constexpr void __set_worldPosition(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_worldPosition() const;

 UnityEngine::Vector3 __declspec(property(get=__get_worldNormal, put=__set_worldNormal))  worldNormal;

constexpr void __set_worldNormal(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_worldNormal() const;

 UnityEngine::Vector2 __declspec(property(get=__get_screenPosition, put=__set_screenPosition))  screenPosition;

constexpr void __set_screenPosition(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get_screenPosition() const;

 int32_t __declspec(property(get=__get_displayIndex, put=__set_displayIndex))  displayIndex;

constexpr void __set_displayIndex(int32_t value) ;

constexpr int32_t __get_displayIndex() const;


// Properties

 UnityEngine::GameObject __declspec(property(get=get_gameObject, put=set_gameObject))  gameObject;

 bool __declspec(property(get=get_isValid))  isValid;


// Methods

/// @brief Method get_gameObject addr 0x2c2823c size 0x8 virtual false final false
 UnityEngine::GameObject get_gameObject() ;

/// @brief Method set_gameObject addr 0x2c28244 size 0x8 virtual false final false
 void set_gameObject(UnityEngine::GameObject value) ;

/// @brief Method get_isValid addr 0x2c2824c size 0x98 virtual false final false
 bool get_isValid() ;

/// @brief Method Clear addr 0x2c282e4 size 0xa4 virtual false final false
 void Clear() ;

/// @brief Method ToString addr 0x2c1d044 size 0x6d8 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::EventSystems
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::EventSystems::RaycastResult, "UnityEngine.EventSystems", "RaycastResult");
