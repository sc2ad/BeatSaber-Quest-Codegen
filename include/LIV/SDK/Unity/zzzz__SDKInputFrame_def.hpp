#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace LIV::SDK::Unity {
struct FEATURES;
}
namespace LIV::SDK::Unity {
struct SDKPose;
}
namespace LIV::SDK::Unity {
struct SDKPriority;
}
namespace LIV::SDK::Unity {
struct SDKClipPlane;
}
namespace LIV::SDK::Unity {
struct SDKTransform;
}
// Forward declare root types
namespace LIV::SDK::Unity {
struct SDKInputFrame;
}
// Type: LIV.SDK.Unity::SDKInputFrame
namespace LIV::SDK::Unity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15163))
// CS Name: LIV.SDK.Unity.SDKInputFrame
struct CORDL_TYPE SDKInputFrame : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "pose", ty: "LIV::SDK::Unity::SDKPose", modifiers: "", def_value: None }, CppParam { name: "clipPlane", ty: "LIV::SDK::Unity::SDKClipPlane", modifiers: "", def_value: None }, CppParam { name: "stageTransform", ty: "LIV::SDK::Unity::SDKTransform", modifiers: "", def_value: None }, CppParam { name: "features", ty: "LIV::SDK::Unity::FEATURES", modifiers: "", def_value: None }, CppParam { name: "groundClipPlane", ty: "LIV::SDK::Unity::SDKClipPlane", modifiers: "", def_value: None }, CppParam { name: "frameid", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "referenceframe", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "priority", ty: "LIV::SDK::Unity::SDKPriority", modifiers: "", def_value: None }]
constexpr SDKInputFrame(LIV::SDK::Unity::SDKPose pose, LIV::SDK::Unity::SDKClipPlane clipPlane, LIV::SDK::Unity::SDKTransform stageTransform, LIV::SDK::Unity::FEATURES features, LIV::SDK::Unity::SDKClipPlane groundClipPlane, uint64_t frameid, uint64_t referenceframe, LIV::SDK::Unity::SDKPriority priority) noexcept;


                    constexpr SDKInputFrame(SDKInputFrame const&) = default;
                    constexpr SDKInputFrame(SDKInputFrame&&) = default;
                    constexpr SDKInputFrame& operator=(SDKInputFrame const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr SDKInputFrame& operator=(SDKInputFrame&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x158};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit SDKInputFrame(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 LIV::SDK::Unity::SDKPose __declspec(property(get=__get_pose, put=__set_pose))  pose;

constexpr void __set_pose(LIV::SDK::Unity::SDKPose value) ;

constexpr LIV::SDK::Unity::SDKPose __get_pose() const;

 LIV::SDK::Unity::SDKClipPlane __declspec(property(get=__get_clipPlane, put=__set_clipPlane))  clipPlane;

constexpr void __set_clipPlane(LIV::SDK::Unity::SDKClipPlane value) ;

constexpr LIV::SDK::Unity::SDKClipPlane __get_clipPlane() const;

 LIV::SDK::Unity::SDKTransform __declspec(property(get=__get_stageTransform, put=__set_stageTransform))  stageTransform;

constexpr void __set_stageTransform(LIV::SDK::Unity::SDKTransform value) ;

constexpr LIV::SDK::Unity::SDKTransform __get_stageTransform() const;

 LIV::SDK::Unity::FEATURES __declspec(property(get=__get_features, put=__set_features))  features;

constexpr void __set_features(LIV::SDK::Unity::FEATURES value) ;

constexpr LIV::SDK::Unity::FEATURES __get_features() const;

 LIV::SDK::Unity::SDKClipPlane __declspec(property(get=__get_groundClipPlane, put=__set_groundClipPlane))  groundClipPlane;

constexpr void __set_groundClipPlane(LIV::SDK::Unity::SDKClipPlane value) ;

constexpr LIV::SDK::Unity::SDKClipPlane __get_groundClipPlane() const;

 uint64_t __declspec(property(get=__get_frameid, put=__set_frameid))  frameid;

constexpr void __set_frameid(uint64_t value) ;

constexpr uint64_t __get_frameid() const;

 uint64_t __declspec(property(get=__get_referenceframe, put=__set_referenceframe))  referenceframe;

constexpr void __set_referenceframe(uint64_t value) ;

constexpr uint64_t __get_referenceframe() const;

 LIV::SDK::Unity::SDKPriority __declspec(property(get=__get_priority, put=__set_priority))  priority;

constexpr void __set_priority(LIV::SDK::Unity::SDKPriority value) ;

constexpr LIV::SDK::Unity::SDKPriority __get_priority() const;


// Properties

static LIV::SDK::Unity::SDKInputFrame __declspec(property(get=get_empty))  empty;


// Methods

/// @brief Method get_empty addr 0x209caac size 0x144 virtual false final false
static LIV::SDK::Unity::SDKInputFrame get_empty() ;

/// @brief Method ReleaseControl addr 0x20a0fd8 size 0x10 virtual false final false
 void ReleaseControl() ;

/// @brief Method ObtainControl addr 0x20a0fe8 size 0x14 virtual false final false
 void ObtainControl() ;

/// @brief Method ToString addr 0x20a29fc size 0x334 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def LIV::SDK::Unity
DEFINE_IL2CPP_ARG_TYPE(LIV::SDK::Unity::SDKInputFrame, "LIV.SDK.Unity", "SDKInputFrame");
