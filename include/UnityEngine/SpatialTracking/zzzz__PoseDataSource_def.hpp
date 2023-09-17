#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
namespace {
namespace UnityEngine::XR {
struct XRNodeState;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::SpatialTracking {
struct PoseDataFlags;
}
namespace UnityEngine::XR {
struct XRNode;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine::SpatialTracking {
struct ____UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose;
}
// Forward declare root types
namespace UnityEngine::SpatialTracking {
class PoseDataSource;
}
// Type: UnityEngine.SpatialTracking::PoseDataSource
namespace UnityEngine::SpatialTracking {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16017))
// CS Name: UnityEngine.SpatialTracking.PoseDataSource
class CORDL_TYPE PoseDataSource : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~PoseDataSource() = default;

// Ctor Parameters [CppParam { name: "", ty: "PoseDataSource", modifiers: " const&", def_value: None }]
constexpr PoseDataSource(PoseDataSource const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PoseDataSource", modifiers: "&&", def_value: None }]
constexpr PoseDataSource(PoseDataSource&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PoseDataSource(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PoseDataSource& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PoseDataSource& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PoseDataSource& operator=(PoseDataSource&& o) noexcept = default;
  constexpr PoseDataSource& operator=(PoseDataSource const& o) noexcept = default;
                


// Fields

static ::System::Collections::Generic::List_1<::UnityEngine::XR::XRNodeState> __declspec(property(get=__get_nodeStates, put=__set_nodeStates))  nodeStates;

static void __set_nodeStates(::System::Collections::Generic::List_1<::UnityEngine::XR::XRNodeState> value) ;

static ::System::Collections::Generic::List_1<::UnityEngine::XR::XRNodeState> __get_nodeStates() ;


// Methods

/// @brief Method GetNodePoseData addr 0x2ba2174 size 0x280 virtual false final false
static ::UnityEngine::SpatialTracking::PoseDataFlags GetNodePoseData(::UnityEngine::XR::XRNode node, ByRef<::UnityEngine::Pose> resultPose) ;

/// @brief Method TryGetDataFromSource addr 0x2ba23f4 size 0x70 virtual false final false
static bool TryGetDataFromSource(::UnityEngine::SpatialTracking::____UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose poseSource, ByRef<::UnityEngine::Pose> resultPose) ;

/// @brief Method GetDataFromSource addr 0x2ba2464 size 0x270 virtual false final false
static ::UnityEngine::SpatialTracking::PoseDataFlags GetDataFromSource(::UnityEngine::SpatialTracking::____UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose poseSource, ByRef<::UnityEngine::Pose> resultPose) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::SpatialTracking
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::SpatialTracking::PoseDataSource);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SpatialTracking::PoseDataSource, "UnityEngine.SpatialTracking", "PoseDataSource");
