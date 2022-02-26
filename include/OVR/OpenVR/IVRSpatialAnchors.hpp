// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: IVRSpatialAnchors
  struct IVRSpatialAnchors;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRSpatialAnchors, "OVR.OpenVR", "IVRSpatialAnchors");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x20
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVR.OpenVR.IVRSpatialAnchors
  // [TokenAttribute] Offset: FFFFFFFF
  struct IVRSpatialAnchors/*, public ::System::ValueType*/ {
    public:
    // Nested type: ::OVR::OpenVR::IVRSpatialAnchors::_CreateSpatialAnchorFromDescriptor
    class _CreateSpatialAnchorFromDescriptor;
    // Nested type: ::OVR::OpenVR::IVRSpatialAnchors::_CreateSpatialAnchorFromPose
    class _CreateSpatialAnchorFromPose;
    // Nested type: ::OVR::OpenVR::IVRSpatialAnchors::_GetSpatialAnchorPose
    class _GetSpatialAnchorPose;
    // Nested type: ::OVR::OpenVR::IVRSpatialAnchors::_GetSpatialAnchorDescriptor
    class _GetSpatialAnchorDescriptor;
    public:
    // OVR.OpenVR.IVRSpatialAnchors/OVR.OpenVR._CreateSpatialAnchorFromDescriptor CreateSpatialAnchorFromDescriptor
    // Size: 0x8
    // Offset: 0x0
    ::OVR::OpenVR::IVRSpatialAnchors::_CreateSpatialAnchorFromDescriptor* CreateSpatialAnchorFromDescriptor;
    // Field size check
    static_assert(sizeof(::OVR::OpenVR::IVRSpatialAnchors::_CreateSpatialAnchorFromDescriptor*) == 0x8);
    // OVR.OpenVR.IVRSpatialAnchors/OVR.OpenVR._CreateSpatialAnchorFromPose CreateSpatialAnchorFromPose
    // Size: 0x8
    // Offset: 0x8
    ::OVR::OpenVR::IVRSpatialAnchors::_CreateSpatialAnchorFromPose* CreateSpatialAnchorFromPose;
    // Field size check
    static_assert(sizeof(::OVR::OpenVR::IVRSpatialAnchors::_CreateSpatialAnchorFromPose*) == 0x8);
    // OVR.OpenVR.IVRSpatialAnchors/OVR.OpenVR._GetSpatialAnchorPose GetSpatialAnchorPose
    // Size: 0x8
    // Offset: 0x10
    ::OVR::OpenVR::IVRSpatialAnchors::_GetSpatialAnchorPose* GetSpatialAnchorPose;
    // Field size check
    static_assert(sizeof(::OVR::OpenVR::IVRSpatialAnchors::_GetSpatialAnchorPose*) == 0x8);
    // OVR.OpenVR.IVRSpatialAnchors/OVR.OpenVR._GetSpatialAnchorDescriptor GetSpatialAnchorDescriptor
    // Size: 0x8
    // Offset: 0x18
    ::OVR::OpenVR::IVRSpatialAnchors::_GetSpatialAnchorDescriptor* GetSpatialAnchorDescriptor;
    // Field size check
    static_assert(sizeof(::OVR::OpenVR::IVRSpatialAnchors::_GetSpatialAnchorDescriptor*) == 0x8);
    public:
    // Creating value type constructor for type: IVRSpatialAnchors
    constexpr IVRSpatialAnchors(::OVR::OpenVR::IVRSpatialAnchors::_CreateSpatialAnchorFromDescriptor* CreateSpatialAnchorFromDescriptor_ = {}, ::OVR::OpenVR::IVRSpatialAnchors::_CreateSpatialAnchorFromPose* CreateSpatialAnchorFromPose_ = {}, ::OVR::OpenVR::IVRSpatialAnchors::_GetSpatialAnchorPose* GetSpatialAnchorPose_ = {}, ::OVR::OpenVR::IVRSpatialAnchors::_GetSpatialAnchorDescriptor* GetSpatialAnchorDescriptor_ = {}) noexcept : CreateSpatialAnchorFromDescriptor{CreateSpatialAnchorFromDescriptor_}, CreateSpatialAnchorFromPose{CreateSpatialAnchorFromPose_}, GetSpatialAnchorPose{GetSpatialAnchorPose_}, GetSpatialAnchorDescriptor{GetSpatialAnchorDescriptor_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: OVR.OpenVR.IVRSpatialAnchors/OVR.OpenVR._CreateSpatialAnchorFromDescriptor CreateSpatialAnchorFromDescriptor
    ::OVR::OpenVR::IVRSpatialAnchors::_CreateSpatialAnchorFromDescriptor*& dyn_CreateSpatialAnchorFromDescriptor();
    // Get instance field reference: OVR.OpenVR.IVRSpatialAnchors/OVR.OpenVR._CreateSpatialAnchorFromPose CreateSpatialAnchorFromPose
    ::OVR::OpenVR::IVRSpatialAnchors::_CreateSpatialAnchorFromPose*& dyn_CreateSpatialAnchorFromPose();
    // Get instance field reference: OVR.OpenVR.IVRSpatialAnchors/OVR.OpenVR._GetSpatialAnchorPose GetSpatialAnchorPose
    ::OVR::OpenVR::IVRSpatialAnchors::_GetSpatialAnchorPose*& dyn_GetSpatialAnchorPose();
    // Get instance field reference: OVR.OpenVR.IVRSpatialAnchors/OVR.OpenVR._GetSpatialAnchorDescriptor GetSpatialAnchorDescriptor
    ::OVR::OpenVR::IVRSpatialAnchors::_GetSpatialAnchorDescriptor*& dyn_GetSpatialAnchorDescriptor();
  }; // OVR.OpenVR.IVRSpatialAnchors
  #pragma pack(pop)
  static check_size<sizeof(IVRSpatialAnchors), 24 + sizeof(::OVR::OpenVR::IVRSpatialAnchors::_GetSpatialAnchorDescriptor*)> __OVR_OpenVR_IVRSpatialAnchorsSizeCheck;
  static_assert(sizeof(IVRSpatialAnchors) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
