#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct InstantiationParameters;
}
// Type: UnityEngine.ResourceManagement.ResourceProviders::InstantiationParameters
namespace UnityEngine::ResourceManagement::ResourceProviders {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14279))
// CS Name: UnityEngine.ResourceManagement.ResourceProviders.InstantiationParameters
struct CORDL_TYPE InstantiationParameters : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_Position", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_Rotation", ty: "UnityEngine::Quaternion", modifiers: "", def_value: None }, CppParam { name: "m_Parent", ty: "UnityEngine::Transform", modifiers: "", def_value: None }, CppParam { name: "m_InstantiateInWorldPosition", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_SetPositionRotation", ty: "bool", modifiers: "", def_value: None }]
constexpr InstantiationParameters(UnityEngine::Vector3 m_Position, UnityEngine::Quaternion m_Rotation, UnityEngine::Transform m_Parent, bool m_InstantiateInWorldPosition, bool m_SetPositionRotation) noexcept;


                    constexpr InstantiationParameters(InstantiationParameters const&) = default;
                    constexpr InstantiationParameters(InstantiationParameters&&) = default;
                    constexpr InstantiationParameters& operator=(InstantiationParameters const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr InstantiationParameters& operator=(InstantiationParameters&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit InstantiationParameters(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::Vector3 __declspec(property(get=__get_m_Position, put=__set_m_Position))  m_Position;

constexpr void __set_m_Position(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_m_Position() const;

 UnityEngine::Quaternion __declspec(property(get=__get_m_Rotation, put=__set_m_Rotation))  m_Rotation;

constexpr void __set_m_Rotation(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get_m_Rotation() const;

 UnityEngine::Transform __declspec(property(get=__get_m_Parent, put=__set_m_Parent))  m_Parent;

constexpr void __set_m_Parent(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get_m_Parent() const;

 bool __declspec(property(get=__get_m_InstantiateInWorldPosition, put=__set_m_InstantiateInWorldPosition))  m_InstantiateInWorldPosition;

constexpr void __set_m_InstantiateInWorldPosition(bool value) ;

constexpr bool __get_m_InstantiateInWorldPosition() const;

 bool __declspec(property(get=__get_m_SetPositionRotation, put=__set_m_SetPositionRotation))  m_SetPositionRotation;

constexpr void __set_m_SetPositionRotation(bool value) ;

constexpr bool __get_m_SetPositionRotation() const;


// Properties

 UnityEngine::Vector3 __declspec(property(get=get_Position))  Position;

 UnityEngine::Quaternion __declspec(property(get=get_Rotation))  Rotation;

 UnityEngine::Transform __declspec(property(get=get_Parent))  Parent;

 bool __declspec(property(get=get_InstantiateInWorldPosition))  InstantiateInWorldPosition;

 bool __declspec(property(get=get_SetPositionRotation))  SetPositionRotation;


// Methods

/// @brief Method get_Position addr 0x2a3f3b0 size 0xc virtual false final false
 UnityEngine::Vector3 get_Position() ;

/// @brief Method get_Rotation addr 0x2a3f3bc size 0xc virtual false final false
 UnityEngine::Quaternion get_Rotation() ;

/// @brief Method get_Parent addr 0x2a3f3c8 size 0x8 virtual false final false
 UnityEngine::Transform get_Parent() ;

/// @brief Method get_InstantiateInWorldPosition addr 0x2a3f3d0 size 0x8 virtual false final false
 bool get_InstantiateInWorldPosition() ;

/// @brief Method get_SetPositionRotation addr 0x2a3f3d8 size 0x8 virtual false final false
 bool get_SetPositionRotation() ;

/// @brief Method .ctor addr 0x2a3f3e0 size 0xac virtual false final false
 void _ctor(UnityEngine::Transform parent, bool instantiateInWorldSpace) ;

/// @brief Method .ctor addr 0x2a3f48c size 0x20 virtual false final false
 void _ctor(UnityEngine::Vector3 position, UnityEngine::Quaternion rotation, UnityEngine::Transform parent) ;

/// @brief Method Instantiate addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObject>
 TObject Instantiate(TObject source) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::ResourceProviders
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters, "UnityEngine.ResourceManagement.ResourceProviders", "InstantiationParameters");
