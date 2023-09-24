#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace LIV::SDK::Unity {
struct SDKQuaternion;
}
namespace LIV::SDK::Unity {
struct SDKMatrix4x4;
}
namespace LIV::SDK::Unity {
struct SDKVector3;
}
// Forward declare root types
namespace LIV::SDK::Unity {
struct SDKPose;
}
// Type: LIV.SDK.Unity::SDKPose
namespace LIV::SDK::Unity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15170))
// CS Name: LIV.SDK.Unity.SDKPose
struct CORDL_TYPE SDKPose : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "projectionMatrix", ty: "LIV::SDK::Unity::SDKMatrix4x4", modifiers: "", def_value: None }, CppParam { name: "localPosition", ty: "LIV::SDK::Unity::SDKVector3", modifiers: "", def_value: None }, CppParam { name: "localRotation", ty: "LIV::SDK::Unity::SDKQuaternion", modifiers: "", def_value: None }, CppParam { name: "verticalFieldOfView", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "nearClipPlane", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "farClipPlane", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "unused0", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "unused1", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SDKPose(LIV::SDK::Unity::SDKMatrix4x4 projectionMatrix, LIV::SDK::Unity::SDKVector3 localPosition, LIV::SDK::Unity::SDKQuaternion localRotation, float_t verticalFieldOfView, float_t nearClipPlane, float_t farClipPlane, int32_t unused0, int32_t unused1) noexcept;


                    constexpr SDKPose(SDKPose const&) = default;
                    constexpr SDKPose(SDKPose&&) = default;
                    constexpr SDKPose& operator=(SDKPose const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr SDKPose& operator=(SDKPose&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x70};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit SDKPose(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 LIV::SDK::Unity::SDKMatrix4x4 __declspec(property(get=__get_projectionMatrix, put=__set_projectionMatrix))  projectionMatrix;

constexpr void __set_projectionMatrix(LIV::SDK::Unity::SDKMatrix4x4 value) ;

constexpr LIV::SDK::Unity::SDKMatrix4x4 __get_projectionMatrix() const;

 LIV::SDK::Unity::SDKVector3 __declspec(property(get=__get_localPosition, put=__set_localPosition))  localPosition;

constexpr void __set_localPosition(LIV::SDK::Unity::SDKVector3 value) ;

constexpr LIV::SDK::Unity::SDKVector3 __get_localPosition() const;

 LIV::SDK::Unity::SDKQuaternion __declspec(property(get=__get_localRotation, put=__set_localRotation))  localRotation;

constexpr void __set_localRotation(LIV::SDK::Unity::SDKQuaternion value) ;

constexpr LIV::SDK::Unity::SDKQuaternion __get_localRotation() const;

 float_t __declspec(property(get=__get_verticalFieldOfView, put=__set_verticalFieldOfView))  verticalFieldOfView;

constexpr void __set_verticalFieldOfView(float_t value) ;

constexpr float_t __get_verticalFieldOfView() const;

 float_t __declspec(property(get=__get_nearClipPlane, put=__set_nearClipPlane))  nearClipPlane;

constexpr void __set_nearClipPlane(float_t value) ;

constexpr float_t __get_nearClipPlane() const;

 float_t __declspec(property(get=__get_farClipPlane, put=__set_farClipPlane))  farClipPlane;

constexpr void __set_farClipPlane(float_t value) ;

constexpr float_t __get_farClipPlane() const;

 int32_t __declspec(property(get=__get_unused0, put=__set_unused0))  unused0;

constexpr void __set_unused0(int32_t value) ;

constexpr int32_t __get_unused0() const;

 int32_t __declspec(property(get=__get_unused1, put=__set_unused1))  unused1;

constexpr void __set_unused1(int32_t value) ;

constexpr int32_t __get_unused1() const;


// Properties

static LIV::SDK::Unity::SDKPose __declspec(property(get=get_empty))  empty;


// Methods

/// @brief Method get_empty addr 0x209d734 size 0x70 virtual false final false
static LIV::SDK::Unity::SDKPose get_empty() ;

/// @brief Method ToString addr 0x20a3ab8 size 0x278 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def LIV::SDK::Unity
DEFINE_IL2CPP_ARG_TYPE(LIV::SDK::Unity::SDKPose, "LIV.SDK.Unity", "SDKPose");
