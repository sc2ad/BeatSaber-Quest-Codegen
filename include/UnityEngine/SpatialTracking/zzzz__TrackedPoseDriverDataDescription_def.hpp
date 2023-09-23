#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::SpatialTracking {
struct UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose;
}
// Forward declare root types
namespace UnityEngine::SpatialTracking {
class TrackedPoseDriverDataDescription;
}
namespace UnityEngine::SpatialTracking {
struct UnityEngine__SpatialTracking__TrackedPoseDriverDataDescription__PoseData;
}
// Type: ::PoseData
namespace UnityEngine::SpatialTracking {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16014))
// CS Name: UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription::PoseData
struct CORDL_TYPE UnityEngine__SpatialTracking__TrackedPoseDriverDataDescription__PoseData : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "PoseNames", ty: "System::Collections::Generic::List_1<::StringW>", modifiers: "", def_value: None }, CppParam { name: "Poses", ty: "System::Collections::Generic::List_1<UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose>", modifiers: "", def_value: None }]
constexpr UnityEngine__SpatialTracking__TrackedPoseDriverDataDescription__PoseData(System::Collections::Generic::List_1<::StringW> PoseNames, System::Collections::Generic::List_1<UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose> Poses) noexcept;


                    constexpr UnityEngine__SpatialTracking__TrackedPoseDriverDataDescription__PoseData(UnityEngine__SpatialTracking__TrackedPoseDriverDataDescription__PoseData const&) = default;
                    constexpr UnityEngine__SpatialTracking__TrackedPoseDriverDataDescription__PoseData(UnityEngine__SpatialTracking__TrackedPoseDriverDataDescription__PoseData&&) = default;
                    constexpr UnityEngine__SpatialTracking__TrackedPoseDriverDataDescription__PoseData& operator=(UnityEngine__SpatialTracking__TrackedPoseDriverDataDescription__PoseData const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__SpatialTracking__TrackedPoseDriverDataDescription__PoseData& operator=(UnityEngine__SpatialTracking__TrackedPoseDriverDataDescription__PoseData&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__SpatialTracking__TrackedPoseDriverDataDescription__PoseData(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 System::Collections::Generic::List_1<::StringW> __declspec(property(get=__get_PoseNames, put=__set_PoseNames))  PoseNames;

constexpr void __set_PoseNames(System::Collections::Generic::List_1<::StringW> value) ;

constexpr System::Collections::Generic::List_1<::StringW> __get_PoseNames() const;

 System::Collections::Generic::List_1<UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose> __declspec(property(get=__get_Poses, put=__set_Poses))  Poses;

constexpr void __set_Poses(System::Collections::Generic::List_1<UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose> __get_Poses() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::SpatialTracking
// Type: UnityEngine.SpatialTracking::TrackedPoseDriverDataDescription
namespace UnityEngine::SpatialTracking {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16015))
// CS Name: UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription
class CORDL_TYPE TrackedPoseDriverDataDescription : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using PoseData = UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriverDataDescription__PoseData;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~TrackedPoseDriverDataDescription() = default;

// Ctor Parameters [CppParam { name: "", ty: "TrackedPoseDriverDataDescription", modifiers: " const&", def_value: None }]
constexpr TrackedPoseDriverDataDescription(TrackedPoseDriverDataDescription const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TrackedPoseDriverDataDescription", modifiers: "&&", def_value: None }]
constexpr TrackedPoseDriverDataDescription(TrackedPoseDriverDataDescription&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TrackedPoseDriverDataDescription(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TrackedPoseDriverDataDescription& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TrackedPoseDriverDataDescription& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TrackedPoseDriverDataDescription& operator=(TrackedPoseDriverDataDescription&& o) noexcept = default;
  constexpr TrackedPoseDriverDataDescription& operator=(TrackedPoseDriverDataDescription const& o) noexcept = default;
                


// Fields

static System::Collections::Generic::List_1<UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriverDataDescription__PoseData> __declspec(property(get=__get_DeviceData, put=__set_DeviceData))  DeviceData;

static void __set_DeviceData(System::Collections::Generic::List_1<UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriverDataDescription__PoseData> value) ;

static System::Collections::Generic::List_1<UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriverDataDescription__PoseData> __get_DeviceData() ;


// Methods

// Ctor Parameters []
explicit TrackedPoseDriverDataDescription() ;

/// @brief Method .ctor addr 0x2ba182c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::SpatialTracking
NEED_NO_BOX(UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription, "UnityEngine.SpatialTracking", "TrackedPoseDriverDataDescription");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriverDataDescription__PoseData, "UnityEngine.SpatialTracking", "TrackedPoseDriverDataDescription/PoseData");
