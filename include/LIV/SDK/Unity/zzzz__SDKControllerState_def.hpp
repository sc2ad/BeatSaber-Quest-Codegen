#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
namespace LIV::SDK::Unity {
struct SDKQuaternion;
}
namespace LIV::SDK::Unity {
struct SDKVector3;
}
// Forward declare root types
namespace LIV::SDK::Unity {
struct SDKControllerState;
}
// Type: LIV.SDK.Unity::SDKControllerState
namespace LIV::SDK::Unity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15169))
// CS Name: LIV.SDK.Unity.SDKControllerState
struct CORDL_TYPE SDKControllerState : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "hmdposition", ty: "LIV::SDK::Unity::SDKVector3", modifiers: "", def_value: None }, CppParam { name: "hmdrotation", ty: "LIV::SDK::Unity::SDKQuaternion", modifiers: "", def_value: None }, CppParam { name: "calibrationcameraposition", ty: "LIV::SDK::Unity::SDKVector3", modifiers: "", def_value: None }, CppParam { name: "calibrationcamerarotation", ty: "LIV::SDK::Unity::SDKQuaternion", modifiers: "", def_value: None }, CppParam { name: "cameraposition", ty: "LIV::SDK::Unity::SDKVector3", modifiers: "", def_value: None }, CppParam { name: "camerarotation", ty: "LIV::SDK::Unity::SDKQuaternion", modifiers: "", def_value: None }, CppParam { name: "leftposition", ty: "LIV::SDK::Unity::SDKVector3", modifiers: "", def_value: None }, CppParam { name: "leftrotation", ty: "LIV::SDK::Unity::SDKQuaternion", modifiers: "", def_value: None }, CppParam { name: "rightposition", ty: "LIV::SDK::Unity::SDKVector3", modifiers: "", def_value: None }, CppParam { name: "rightrotation", ty: "LIV::SDK::Unity::SDKQuaternion", modifiers: "", def_value: None }]
constexpr SDKControllerState(LIV::SDK::Unity::SDKVector3 hmdposition, LIV::SDK::Unity::SDKQuaternion hmdrotation, LIV::SDK::Unity::SDKVector3 calibrationcameraposition, LIV::SDK::Unity::SDKQuaternion calibrationcamerarotation, LIV::SDK::Unity::SDKVector3 cameraposition, LIV::SDK::Unity::SDKQuaternion camerarotation, LIV::SDK::Unity::SDKVector3 leftposition, LIV::SDK::Unity::SDKQuaternion leftrotation, LIV::SDK::Unity::SDKVector3 rightposition, LIV::SDK::Unity::SDKQuaternion rightrotation) noexcept;


                    constexpr SDKControllerState(SDKControllerState const&) = default;
                    constexpr SDKControllerState(SDKControllerState&&) = default;
                    constexpr SDKControllerState& operator=(SDKControllerState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr SDKControllerState& operator=(SDKControllerState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8c};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit SDKControllerState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 LIV::SDK::Unity::SDKVector3 __declspec(property(get=__get_hmdposition, put=__set_hmdposition))  hmdposition;

constexpr void __set_hmdposition(LIV::SDK::Unity::SDKVector3 value) ;

constexpr LIV::SDK::Unity::SDKVector3 __get_hmdposition() const;

 LIV::SDK::Unity::SDKQuaternion __declspec(property(get=__get_hmdrotation, put=__set_hmdrotation))  hmdrotation;

constexpr void __set_hmdrotation(LIV::SDK::Unity::SDKQuaternion value) ;

constexpr LIV::SDK::Unity::SDKQuaternion __get_hmdrotation() const;

 LIV::SDK::Unity::SDKVector3 __declspec(property(get=__get_calibrationcameraposition, put=__set_calibrationcameraposition))  calibrationcameraposition;

constexpr void __set_calibrationcameraposition(LIV::SDK::Unity::SDKVector3 value) ;

constexpr LIV::SDK::Unity::SDKVector3 __get_calibrationcameraposition() const;

 LIV::SDK::Unity::SDKQuaternion __declspec(property(get=__get_calibrationcamerarotation, put=__set_calibrationcamerarotation))  calibrationcamerarotation;

constexpr void __set_calibrationcamerarotation(LIV::SDK::Unity::SDKQuaternion value) ;

constexpr LIV::SDK::Unity::SDKQuaternion __get_calibrationcamerarotation() const;

 LIV::SDK::Unity::SDKVector3 __declspec(property(get=__get_cameraposition, put=__set_cameraposition))  cameraposition;

constexpr void __set_cameraposition(LIV::SDK::Unity::SDKVector3 value) ;

constexpr LIV::SDK::Unity::SDKVector3 __get_cameraposition() const;

 LIV::SDK::Unity::SDKQuaternion __declspec(property(get=__get_camerarotation, put=__set_camerarotation))  camerarotation;

constexpr void __set_camerarotation(LIV::SDK::Unity::SDKQuaternion value) ;

constexpr LIV::SDK::Unity::SDKQuaternion __get_camerarotation() const;

 LIV::SDK::Unity::SDKVector3 __declspec(property(get=__get_leftposition, put=__set_leftposition))  leftposition;

constexpr void __set_leftposition(LIV::SDK::Unity::SDKVector3 value) ;

constexpr LIV::SDK::Unity::SDKVector3 __get_leftposition() const;

 LIV::SDK::Unity::SDKQuaternion __declspec(property(get=__get_leftrotation, put=__set_leftrotation))  leftrotation;

constexpr void __set_leftrotation(LIV::SDK::Unity::SDKQuaternion value) ;

constexpr LIV::SDK::Unity::SDKQuaternion __get_leftrotation() const;

 LIV::SDK::Unity::SDKVector3 __declspec(property(get=__get_rightposition, put=__set_rightposition))  rightposition;

constexpr void __set_rightposition(LIV::SDK::Unity::SDKVector3 value) ;

constexpr LIV::SDK::Unity::SDKVector3 __get_rightposition() const;

 LIV::SDK::Unity::SDKQuaternion __declspec(property(get=__get_rightrotation, put=__set_rightrotation))  rightrotation;

constexpr void __set_rightrotation(LIV::SDK::Unity::SDKQuaternion value) ;

constexpr LIV::SDK::Unity::SDKQuaternion __get_rightrotation() const;


// Properties

static LIV::SDK::Unity::SDKControllerState __declspec(property(get=get_empty))  empty;


// Methods

/// @brief Method get_empty addr 0x20a3704 size 0x4c virtual false final false
static LIV::SDK::Unity::SDKControllerState get_empty() ;

/// @brief Method ToString addr 0x20a3750 size 0x368 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def LIV::SDK::Unity
DEFINE_IL2CPP_ARG_TYPE(LIV::SDK::Unity::SDKControllerState, "LIV.SDK.Unity", "SDKControllerState");
