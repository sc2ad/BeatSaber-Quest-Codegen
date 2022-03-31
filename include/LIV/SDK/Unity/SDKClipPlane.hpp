// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: LIV.SDK.Unity.SDKMatrix4x4
#include "LIV/SDK/Unity/SDKMatrix4x4.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: LIV.SDK.Unity
namespace LIV::SDK::Unity {
  // Forward declaring type: SDKClipPlane
  struct SDKClipPlane;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::LIV::SDK::Unity::SDKClipPlane, "LIV.SDK.Unity", "SDKClipPlane");
// Type namespace: LIV.SDK.Unity
namespace LIV::SDK::Unity {
  // Size: 0x4C
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: LIV.SDK.Unity.SDKClipPlane
  // [TokenAttribute] Offset: FFFFFFFF
  struct SDKClipPlane/*, public ::System::ValueType*/ {
    public:
    public:
    // public LIV.SDK.Unity.SDKMatrix4x4 transform
    // Size: 0x40
    // Offset: 0x0
    ::LIV::SDK::Unity::SDKMatrix4x4 transform;
    // Field size check
    static_assert(sizeof(::LIV::SDK::Unity::SDKMatrix4x4) == 0x40);
    // public System.Int32 width
    // Size: 0x4
    // Offset: 0x40
    int width;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 height
    // Size: 0x4
    // Offset: 0x44
    int height;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Single tesselation
    // Size: 0x4
    // Offset: 0x48
    float tesselation;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating value type constructor for type: SDKClipPlane
    constexpr SDKClipPlane(::LIV::SDK::Unity::SDKMatrix4x4 transform_ = {}, int width_ = {}, int height_ = {}, float tesselation_ = {}) noexcept : transform{transform_}, width{width_}, height{height_}, tesselation{tesselation_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public LIV.SDK.Unity.SDKMatrix4x4 transform
    ::LIV::SDK::Unity::SDKMatrix4x4& dyn_transform();
    // Get instance field reference: public System.Int32 width
    int& dyn_width();
    // Get instance field reference: public System.Int32 height
    int& dyn_height();
    // Get instance field reference: public System.Single tesselation
    float& dyn_tesselation();
    // static public LIV.SDK.Unity.SDKClipPlane get_empty()
    // Offset: 0x29FB8F4
    static ::LIV::SDK::Unity::SDKClipPlane get_empty();
    // public override System.String ToString()
    // Offset: 0x29FB954
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // LIV.SDK.Unity.SDKClipPlane
  #pragma pack(pop)
  static check_size<sizeof(SDKClipPlane), 72 + sizeof(float)> __LIV_SDK_Unity_SDKClipPlaneSizeCheck;
  static_assert(sizeof(SDKClipPlane) == 0x4C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: LIV::SDK::Unity::SDKClipPlane::get_empty
// Il2CppName: get_empty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LIV::SDK::Unity::SDKClipPlane (*)()>(&LIV::SDK::Unity::SDKClipPlane::get_empty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::SDKClipPlane), "get_empty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LIV::SDK::Unity::SDKClipPlane::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (LIV::SDK::Unity::SDKClipPlane::*)()>(&LIV::SDK::Unity::SDKClipPlane::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::SDKClipPlane), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};