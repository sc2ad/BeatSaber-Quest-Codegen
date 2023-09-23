#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
namespace LIV::SDK::Unity {
struct SDKMatrix4x4;
}
namespace LIV::SDK::Unity {
struct SDKQuaternion;
}
namespace LIV::SDK::Unity {
struct SDKVector3;
}
// Forward declare root types
namespace LIV::SDK::Unity {
struct SDKTrackedSpace;
}
// Type: LIV.SDK.Unity::SDKTrackedSpace
namespace LIV::SDK::Unity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15165))
// CS Name: LIV.SDK.Unity.SDKTrackedSpace
struct CORDL_TYPE SDKTrackedSpace : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "trackedSpaceWorldPosition", ty: "LIV::SDK::Unity::SDKVector3", modifiers: "", def_value: None }, CppParam { name: "trackedSpaceWorldRotation", ty: "LIV::SDK::Unity::SDKQuaternion", modifiers: "", def_value: None }, CppParam { name: "trackedSpaceLocalScale", ty: "LIV::SDK::Unity::SDKVector3", modifiers: "", def_value: None }, CppParam { name: "trackedSpaceLocalToWorldMatrix", ty: "LIV::SDK::Unity::SDKMatrix4x4", modifiers: "", def_value: None }, CppParam { name: "trackedSpaceWorldToLocalMatrix", ty: "LIV::SDK::Unity::SDKMatrix4x4", modifiers: "", def_value: None }]
constexpr SDKTrackedSpace(LIV::SDK::Unity::SDKVector3 trackedSpaceWorldPosition, LIV::SDK::Unity::SDKQuaternion trackedSpaceWorldRotation, LIV::SDK::Unity::SDKVector3 trackedSpaceLocalScale, LIV::SDK::Unity::SDKMatrix4x4 trackedSpaceLocalToWorldMatrix, LIV::SDK::Unity::SDKMatrix4x4 trackedSpaceWorldToLocalMatrix) noexcept;


                    constexpr SDKTrackedSpace(SDKTrackedSpace const&) = default;
                    constexpr SDKTrackedSpace(SDKTrackedSpace&&) = default;
                    constexpr SDKTrackedSpace& operator=(SDKTrackedSpace const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr SDKTrackedSpace& operator=(SDKTrackedSpace&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0xa8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit SDKTrackedSpace(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 LIV::SDK::Unity::SDKVector3 __declspec(property(get=__get_trackedSpaceWorldPosition, put=__set_trackedSpaceWorldPosition))  trackedSpaceWorldPosition;

constexpr void __set_trackedSpaceWorldPosition(LIV::SDK::Unity::SDKVector3 value) ;

constexpr LIV::SDK::Unity::SDKVector3 __get_trackedSpaceWorldPosition() const;

 LIV::SDK::Unity::SDKQuaternion __declspec(property(get=__get_trackedSpaceWorldRotation, put=__set_trackedSpaceWorldRotation))  trackedSpaceWorldRotation;

constexpr void __set_trackedSpaceWorldRotation(LIV::SDK::Unity::SDKQuaternion value) ;

constexpr LIV::SDK::Unity::SDKQuaternion __get_trackedSpaceWorldRotation() const;

 LIV::SDK::Unity::SDKVector3 __declspec(property(get=__get_trackedSpaceLocalScale, put=__set_trackedSpaceLocalScale))  trackedSpaceLocalScale;

constexpr void __set_trackedSpaceLocalScale(LIV::SDK::Unity::SDKVector3 value) ;

constexpr LIV::SDK::Unity::SDKVector3 __get_trackedSpaceLocalScale() const;

 LIV::SDK::Unity::SDKMatrix4x4 __declspec(property(get=__get_trackedSpaceLocalToWorldMatrix, put=__set_trackedSpaceLocalToWorldMatrix))  trackedSpaceLocalToWorldMatrix;

constexpr void __set_trackedSpaceLocalToWorldMatrix(LIV::SDK::Unity::SDKMatrix4x4 value) ;

constexpr LIV::SDK::Unity::SDKMatrix4x4 __get_trackedSpaceLocalToWorldMatrix() const;

 LIV::SDK::Unity::SDKMatrix4x4 __declspec(property(get=__get_trackedSpaceWorldToLocalMatrix, put=__set_trackedSpaceWorldToLocalMatrix))  trackedSpaceWorldToLocalMatrix;

constexpr void __set_trackedSpaceWorldToLocalMatrix(LIV::SDK::Unity::SDKMatrix4x4 value) ;

constexpr LIV::SDK::Unity::SDKMatrix4x4 __get_trackedSpaceWorldToLocalMatrix() const;


// Properties

static LIV::SDK::Unity::SDKTrackedSpace __declspec(property(get=get_empty))  empty;


// Methods

/// @brief Method get_empty addr 0x20a2d30 size 0x64 virtual false final false
static LIV::SDK::Unity::SDKTrackedSpace get_empty() ;

/// @brief Method ToString addr 0x20a2e58 size 0x244 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def LIV::SDK::Unity
DEFINE_IL2CPP_ARG_TYPE(LIV::SDK::Unity::SDKTrackedSpace, "LIV.SDK.Unity", "SDKTrackedSpace");
