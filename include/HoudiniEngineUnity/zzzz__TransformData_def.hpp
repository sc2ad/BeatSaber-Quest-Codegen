#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
namespace {
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace HoudiniEngineUnity {
struct TransformData;
}
// Type: HoudiniEngineUnity::TransformData
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9764))
// CS Name: HoudiniEngineUnity.TransformData
struct CORDL_TYPE TransformData : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None }, CppParam { name: "localPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "localScale", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "localRotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None }, CppParam { name: "parent", ty: "::UnityEngine::Transform", modifiers: "", def_value: None }]
constexpr TransformData(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 localPosition, ::UnityEngine::Vector3 localScale, ::UnityEngine::Quaternion localRotation, ::UnityEngine::Transform parent) noexcept;


                    constexpr TransformData(TransformData const&) = default;
                    constexpr TransformData(TransformData&&) = default;
                    constexpr TransformData& operator=(TransformData const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TransformData& operator=(TransformData&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x50};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TransformData(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::Vector3 __declspec(property(get=__get_position, put=__set_position))  position;

constexpr void __set_position(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get_position() const;

 ::UnityEngine::Quaternion __declspec(property(get=__get_rotation, put=__set_rotation))  rotation;

constexpr void __set_rotation(::UnityEngine::Quaternion value) ;

constexpr ::UnityEngine::Quaternion __get_rotation() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get_localPosition, put=__set_localPosition))  localPosition;

constexpr void __set_localPosition(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get_localPosition() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get_localScale, put=__set_localScale))  localScale;

constexpr void __set_localScale(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get_localScale() const;

 ::UnityEngine::Quaternion __declspec(property(get=__get_localRotation, put=__set_localRotation))  localRotation;

constexpr void __set_localRotation(::UnityEngine::Quaternion value) ;

constexpr ::UnityEngine::Quaternion __get_localRotation() const;

 ::UnityEngine::Transform __declspec(property(get=__get_parent, put=__set_parent))  parent;

constexpr void __set_parent(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get_parent() const;


// Methods

/// @brief Method .ctor addr 0x2042aec size 0x98 virtual false final false
 void _ctor(::UnityEngine::Transform other) ;

/// @brief Method CopyTo addr 0x2042b84 size 0x80 virtual false final false
 void CopyTo(::UnityEngine::Transform other, bool copyParent) ;

/// @brief Method CopyToLocal addr 0x2042c04 size 0x80 virtual false final false
 void CopyToLocal(::UnityEngine::Transform other, bool copyParent) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::TransformData, "HoudiniEngineUnity", "TransformData");
