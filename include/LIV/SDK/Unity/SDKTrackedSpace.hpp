// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: LIV.SDK.Unity.SDKVector3
#include "LIV/SDK/Unity/SDKVector3.hpp"
// Including type: LIV.SDK.Unity.SDKQuaternion
#include "LIV/SDK/Unity/SDKQuaternion.hpp"
// Including type: LIV.SDK.Unity.SDKMatrix4x4
#include "LIV/SDK/Unity/SDKMatrix4x4.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: LIV.SDK.Unity
namespace LIV::SDK::Unity {
  // Forward declaring type: SDKTrackedSpace
  struct SDKTrackedSpace;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::LIV::SDK::Unity::SDKTrackedSpace, "LIV.SDK.Unity", "SDKTrackedSpace");
// Type namespace: LIV.SDK.Unity
namespace LIV::SDK::Unity {
  // Size: 0xA8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: LIV.SDK.Unity.SDKTrackedSpace
  // [TokenAttribute] Offset: FFFFFFFF
  struct SDKTrackedSpace/*, public ::System::ValueType*/ {
    public:
    public:
    // public LIV.SDK.Unity.SDKVector3 trackedSpaceWorldPosition
    // Size: 0xC
    // Offset: 0x0
    ::LIV::SDK::Unity::SDKVector3 trackedSpaceWorldPosition;
    // Field size check
    static_assert(sizeof(::LIV::SDK::Unity::SDKVector3) == 0xC);
    // public LIV.SDK.Unity.SDKQuaternion trackedSpaceWorldRotation
    // Size: 0x10
    // Offset: 0xC
    ::LIV::SDK::Unity::SDKQuaternion trackedSpaceWorldRotation;
    // Field size check
    static_assert(sizeof(::LIV::SDK::Unity::SDKQuaternion) == 0x10);
    // public LIV.SDK.Unity.SDKVector3 trackedSpaceLocalScale
    // Size: 0xC
    // Offset: 0x1C
    ::LIV::SDK::Unity::SDKVector3 trackedSpaceLocalScale;
    // Field size check
    static_assert(sizeof(::LIV::SDK::Unity::SDKVector3) == 0xC);
    // public LIV.SDK.Unity.SDKMatrix4x4 trackedSpaceLocalToWorldMatrix
    // Size: 0x40
    // Offset: 0x28
    ::LIV::SDK::Unity::SDKMatrix4x4 trackedSpaceLocalToWorldMatrix;
    // Field size check
    static_assert(sizeof(::LIV::SDK::Unity::SDKMatrix4x4) == 0x40);
    // public LIV.SDK.Unity.SDKMatrix4x4 trackedSpaceWorldToLocalMatrix
    // Size: 0x40
    // Offset: 0x68
    ::LIV::SDK::Unity::SDKMatrix4x4 trackedSpaceWorldToLocalMatrix;
    // Field size check
    static_assert(sizeof(::LIV::SDK::Unity::SDKMatrix4x4) == 0x40);
    public:
    // Creating value type constructor for type: SDKTrackedSpace
    constexpr SDKTrackedSpace(::LIV::SDK::Unity::SDKVector3 trackedSpaceWorldPosition_ = {}, ::LIV::SDK::Unity::SDKQuaternion trackedSpaceWorldRotation_ = {}, ::LIV::SDK::Unity::SDKVector3 trackedSpaceLocalScale_ = {}, ::LIV::SDK::Unity::SDKMatrix4x4 trackedSpaceLocalToWorldMatrix_ = {}, ::LIV::SDK::Unity::SDKMatrix4x4 trackedSpaceWorldToLocalMatrix_ = {}) noexcept : trackedSpaceWorldPosition{trackedSpaceWorldPosition_}, trackedSpaceWorldRotation{trackedSpaceWorldRotation_}, trackedSpaceLocalScale{trackedSpaceLocalScale_}, trackedSpaceLocalToWorldMatrix{trackedSpaceLocalToWorldMatrix_}, trackedSpaceWorldToLocalMatrix{trackedSpaceWorldToLocalMatrix_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public LIV.SDK.Unity.SDKVector3 trackedSpaceWorldPosition
    [[deprecated("Use field access instead!")]] ::LIV::SDK::Unity::SDKVector3& dyn_trackedSpaceWorldPosition();
    // Get instance field reference: public LIV.SDK.Unity.SDKQuaternion trackedSpaceWorldRotation
    [[deprecated("Use field access instead!")]] ::LIV::SDK::Unity::SDKQuaternion& dyn_trackedSpaceWorldRotation();
    // Get instance field reference: public LIV.SDK.Unity.SDKVector3 trackedSpaceLocalScale
    [[deprecated("Use field access instead!")]] ::LIV::SDK::Unity::SDKVector3& dyn_trackedSpaceLocalScale();
    // Get instance field reference: public LIV.SDK.Unity.SDKMatrix4x4 trackedSpaceLocalToWorldMatrix
    [[deprecated("Use field access instead!")]] ::LIV::SDK::Unity::SDKMatrix4x4& dyn_trackedSpaceLocalToWorldMatrix();
    // Get instance field reference: public LIV.SDK.Unity.SDKMatrix4x4 trackedSpaceWorldToLocalMatrix
    [[deprecated("Use field access instead!")]] ::LIV::SDK::Unity::SDKMatrix4x4& dyn_trackedSpaceWorldToLocalMatrix();
    // static public LIV.SDK.Unity.SDKTrackedSpace get_empty()
    // Offset: 0x2AE8C2C
    static ::LIV::SDK::Unity::SDKTrackedSpace get_empty();
    // public override System.String ToString()
    // Offset: 0x2AEDFA0
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // LIV.SDK.Unity.SDKTrackedSpace
  #pragma pack(pop)
  static check_size<sizeof(SDKTrackedSpace), 104 + sizeof(::LIV::SDK::Unity::SDKMatrix4x4)> __LIV_SDK_Unity_SDKTrackedSpaceSizeCheck;
  static_assert(sizeof(SDKTrackedSpace) == 0xA8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: LIV::SDK::Unity::SDKTrackedSpace::get_empty
// Il2CppName: get_empty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LIV::SDK::Unity::SDKTrackedSpace (*)()>(&LIV::SDK::Unity::SDKTrackedSpace::get_empty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::SDKTrackedSpace), "get_empty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LIV::SDK::Unity::SDKTrackedSpace::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (LIV::SDK::Unity::SDKTrackedSpace::*)()>(&LIV::SDK::Unity::SDKTrackedSpace::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::SDKTrackedSpace), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
