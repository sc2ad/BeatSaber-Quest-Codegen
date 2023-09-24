#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine::XR {
struct MeshId;
}
namespace UnityEngine::XR {
struct MeshGenerationStatus;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Mesh;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine {
class MeshCollider;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine::XR {
struct MeshVertexAttributes;
}
// Forward declare root types
namespace UnityEngine::XR {
struct MeshGenerationResult;
}
// Type: UnityEngine.XR::MeshGenerationResult
namespace UnityEngine::XR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15586))
// CS Name: UnityEngine.XR.MeshGenerationResult
struct CORDL_TYPE MeshGenerationResult : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IEquatable_1<UnityEngine::XR::MeshGenerationResult>
constexpr operator  System::IEquatable_1<UnityEngine::XR::MeshGenerationResult>() const;

// Ctor Parameters [CppParam { name: "_MeshId_k__BackingField", ty: "UnityEngine::XR::MeshId", modifiers: "", def_value: None }, CppParam { name: "_Mesh_k__BackingField", ty: "UnityEngine::Mesh", modifiers: "", def_value: None }, CppParam { name: "_MeshCollider_k__BackingField", ty: "UnityEngine::MeshCollider", modifiers: "", def_value: None }, CppParam { name: "_Status_k__BackingField", ty: "UnityEngine::XR::MeshGenerationStatus", modifiers: "", def_value: None }, CppParam { name: "_Attributes_k__BackingField", ty: "UnityEngine::XR::MeshVertexAttributes", modifiers: "", def_value: None }, CppParam { name: "_Timestamp_k__BackingField", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "_Position_k__BackingField", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "_Rotation_k__BackingField", ty: "UnityEngine::Quaternion", modifiers: "", def_value: None }, CppParam { name: "_Scale_k__BackingField", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }]
constexpr MeshGenerationResult(UnityEngine::XR::MeshId _MeshId_k__BackingField, UnityEngine::Mesh _Mesh_k__BackingField, UnityEngine::MeshCollider _MeshCollider_k__BackingField, UnityEngine::XR::MeshGenerationStatus _Status_k__BackingField, UnityEngine::XR::MeshVertexAttributes _Attributes_k__BackingField, uint64_t _Timestamp_k__BackingField, UnityEngine::Vector3 _Position_k__BackingField, UnityEngine::Quaternion _Rotation_k__BackingField, UnityEngine::Vector3 _Scale_k__BackingField) noexcept;


                    constexpr MeshGenerationResult(MeshGenerationResult const&) = default;
                    constexpr MeshGenerationResult(MeshGenerationResult&&) = default;
                    constexpr MeshGenerationResult& operator=(MeshGenerationResult const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr MeshGenerationResult& operator=(MeshGenerationResult&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x58};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit MeshGenerationResult(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::XR::MeshId __declspec(property(get=__get__MeshId_k__BackingField, put=__set__MeshId_k__BackingField))  _MeshId_k__BackingField;

constexpr void __set__MeshId_k__BackingField(UnityEngine::XR::MeshId value) ;

constexpr UnityEngine::XR::MeshId __get__MeshId_k__BackingField() const;

 UnityEngine::Mesh __declspec(property(get=__get__Mesh_k__BackingField, put=__set__Mesh_k__BackingField))  _Mesh_k__BackingField;

constexpr void __set__Mesh_k__BackingField(UnityEngine::Mesh value) ;

constexpr UnityEngine::Mesh __get__Mesh_k__BackingField() const;

 UnityEngine::MeshCollider __declspec(property(get=__get__MeshCollider_k__BackingField, put=__set__MeshCollider_k__BackingField))  _MeshCollider_k__BackingField;

constexpr void __set__MeshCollider_k__BackingField(UnityEngine::MeshCollider value) ;

constexpr UnityEngine::MeshCollider __get__MeshCollider_k__BackingField() const;

 UnityEngine::XR::MeshGenerationStatus __declspec(property(get=__get__Status_k__BackingField, put=__set__Status_k__BackingField))  _Status_k__BackingField;

constexpr void __set__Status_k__BackingField(UnityEngine::XR::MeshGenerationStatus value) ;

constexpr UnityEngine::XR::MeshGenerationStatus __get__Status_k__BackingField() const;

 UnityEngine::XR::MeshVertexAttributes __declspec(property(get=__get__Attributes_k__BackingField, put=__set__Attributes_k__BackingField))  _Attributes_k__BackingField;

constexpr void __set__Attributes_k__BackingField(UnityEngine::XR::MeshVertexAttributes value) ;

constexpr UnityEngine::XR::MeshVertexAttributes __get__Attributes_k__BackingField() const;

 uint64_t __declspec(property(get=__get__Timestamp_k__BackingField, put=__set__Timestamp_k__BackingField))  _Timestamp_k__BackingField;

constexpr void __set__Timestamp_k__BackingField(uint64_t value) ;

constexpr uint64_t __get__Timestamp_k__BackingField() const;

 UnityEngine::Vector3 __declspec(property(get=__get__Position_k__BackingField, put=__set__Position_k__BackingField))  _Position_k__BackingField;

constexpr void __set__Position_k__BackingField(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__Position_k__BackingField() const;

 UnityEngine::Quaternion __declspec(property(get=__get__Rotation_k__BackingField, put=__set__Rotation_k__BackingField))  _Rotation_k__BackingField;

constexpr void __set__Rotation_k__BackingField(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get__Rotation_k__BackingField() const;

 UnityEngine::Vector3 __declspec(property(get=__get__Scale_k__BackingField, put=__set__Scale_k__BackingField))  _Scale_k__BackingField;

constexpr void __set__Scale_k__BackingField(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__Scale_k__BackingField() const;


// Properties

 UnityEngine::XR::MeshId __declspec(property(get=get_MeshId))  MeshId;

 UnityEngine::Mesh __declspec(property(get=get_Mesh))  Mesh;

 UnityEngine::MeshCollider __declspec(property(get=get_MeshCollider))  MeshCollider;

 UnityEngine::XR::MeshGenerationStatus __declspec(property(get=get_Status))  Status;

 UnityEngine::XR::MeshVertexAttributes __declspec(property(get=get_Attributes))  Attributes;

 UnityEngine::Vector3 __declspec(property(get=get_Position))  Position;

 UnityEngine::Quaternion __declspec(property(get=get_Rotation))  Rotation;

 UnityEngine::Vector3 __declspec(property(get=get_Scale))  Scale;


// Methods

/// @brief Method get_MeshId addr 0x2d3a434 size 0xc virtual false final false
 UnityEngine::XR::MeshId get_MeshId() ;

/// @brief Method get_Mesh addr 0x2d3a440 size 0x8 virtual false final false
 UnityEngine::Mesh get_Mesh() ;

/// @brief Method get_MeshCollider addr 0x2d3a448 size 0x8 virtual false final false
 UnityEngine::MeshCollider get_MeshCollider() ;

/// @brief Method get_Status addr 0x2d3a450 size 0x8 virtual false final false
 UnityEngine::XR::MeshGenerationStatus get_Status() ;

/// @brief Method get_Attributes addr 0x2d3a458 size 0x8 virtual false final false
 UnityEngine::XR::MeshVertexAttributes get_Attributes() ;

/// @brief Method get_Position addr 0x2d3a460 size 0xc virtual false final false
 UnityEngine::Vector3 get_Position() ;

/// @brief Method get_Rotation addr 0x2d3a46c size 0xc virtual false final false
 UnityEngine::Quaternion get_Rotation() ;

/// @brief Method get_Scale addr 0x2d3a478 size 0xc virtual false final false
 UnityEngine::Vector3 get_Scale() ;

/// @brief Method Equals addr 0x2d3a484 size 0x90 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0x2d3a514 size 0x184 virtual true final true
 bool Equals(UnityEngine::XR::MeshGenerationResult other) ;

/// @brief Method GetHashCode addr 0x2d3a698 size 0x208 virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::XR
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::MeshGenerationResult, "UnityEngine.XR", "MeshGenerationResult");
