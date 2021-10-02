// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: BezierTangentDirection
  struct BezierTangentDirection;
  // Forward declaring type: BezierTangentMode
  struct BezierTangentMode;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x34
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.ProBuilder.BezierPoint
  // [TokenAttribute] Offset: FFFFFFFF
  struct BezierPoint/*, public System::ValueType*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // public UnityEngine.Vector3 position
    // Size: 0xC
    // Offset: 0x0
    UnityEngine::Vector3 position;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 tangentIn
    // Size: 0xC
    // Offset: 0xC
    UnityEngine::Vector3 tangentIn;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 tangentOut
    // Size: 0xC
    // Offset: 0x18
    UnityEngine::Vector3 tangentOut;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Quaternion rotation
    // Size: 0x10
    // Offset: 0x24
    UnityEngine::Quaternion rotation;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    public:
    // Creating value type constructor for type: BezierPoint
    constexpr BezierPoint(UnityEngine::Vector3 position_ = {}, UnityEngine::Vector3 tangentIn_ = {}, UnityEngine::Vector3 tangentOut_ = {}, UnityEngine::Quaternion rotation_ = {}) noexcept : position{position_}, tangentIn{tangentIn_}, tangentOut{tangentOut_}, rotation{rotation_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public UnityEngine.Vector3 position
    UnityEngine::Vector3& dyn_position();
    // Get instance field reference: public UnityEngine.Vector3 tangentIn
    UnityEngine::Vector3& dyn_tangentIn();
    // Get instance field reference: public UnityEngine.Vector3 tangentOut
    UnityEngine::Vector3& dyn_tangentOut();
    // Get instance field reference: public UnityEngine.Quaternion rotation
    UnityEngine::Quaternion& dyn_rotation();
    // public System.Void .ctor(UnityEngine.Vector3 position, UnityEngine.Vector3 tangentIn, UnityEngine.Vector3 tangentOut, UnityEngine.Quaternion rotation)
    // Offset: 0x21513E0
    // ABORTED: conflicts with another method.  BezierPoint(UnityEngine::Vector3 position, UnityEngine::Vector3 tangentIn, UnityEngine::Vector3 tangentOut, UnityEngine::Quaternion rotation);
    // public System.Void EnforceTangentMode(UnityEngine.ProBuilder.BezierTangentDirection master, UnityEngine.ProBuilder.BezierTangentMode mode)
    // Offset: 0x2151408
    void EnforceTangentMode(UnityEngine::ProBuilder::BezierTangentDirection master, UnityEngine::ProBuilder::BezierTangentMode mode);
    // public System.Void SetPosition(UnityEngine.Vector3 position)
    // Offset: 0x2151720
    void SetPosition(UnityEngine::Vector3 position);
    // public System.Void SetTangentIn(UnityEngine.Vector3 tangent, UnityEngine.ProBuilder.BezierTangentMode mode)
    // Offset: 0x2151834
    void SetTangentIn(UnityEngine::Vector3 tangent, UnityEngine::ProBuilder::BezierTangentMode mode);
    // public System.Void SetTangentOut(UnityEngine.Vector3 tangent, UnityEngine.ProBuilder.BezierTangentMode mode)
    // Offset: 0x2151848
    void SetTangentOut(UnityEngine::Vector3 tangent, UnityEngine::ProBuilder::BezierTangentMode mode);
    // static public UnityEngine.Vector3 QuadraticPosition(UnityEngine.ProBuilder.BezierPoint a, UnityEngine.ProBuilder.BezierPoint b, System.Single t)
    // Offset: 0x215185C
    static UnityEngine::Vector3 QuadraticPosition(UnityEngine::ProBuilder::BezierPoint a, UnityEngine::ProBuilder::BezierPoint b, float t);
    // static public UnityEngine.Vector3 CubicPosition(UnityEngine.ProBuilder.BezierPoint a, UnityEngine.ProBuilder.BezierPoint b, System.Single t)
    // Offset: 0x21518FC
    static UnityEngine::Vector3 CubicPosition(UnityEngine::ProBuilder::BezierPoint a, UnityEngine::ProBuilder::BezierPoint b, float t);
    // static public UnityEngine.Vector3 GetLookDirection(System.Collections.Generic.IList`1<UnityEngine.ProBuilder.BezierPoint> points, System.Int32 index, System.Int32 previous, System.Int32 next)
    // Offset: 0x2151AB0
    static UnityEngine::Vector3 GetLookDirection(System::Collections::Generic::IList_1<UnityEngine::ProBuilder::BezierPoint>* points, int index, int previous, int next);
  }; // UnityEngine.ProBuilder.BezierPoint
  #pragma pack(pop)
  static check_size<sizeof(BezierPoint), 36 + sizeof(UnityEngine::Quaternion)> __UnityEngine_ProBuilder_BezierPointSizeCheck;
  static_assert(sizeof(BezierPoint) == 0x34);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::BezierPoint, "UnityEngine.ProBuilder", "BezierPoint");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::BezierPoint::BezierPoint
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::BezierPoint::EnforceTangentMode
// Il2CppName: EnforceTangentMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::BezierPoint::*)(UnityEngine::ProBuilder::BezierTangentDirection, UnityEngine::ProBuilder::BezierTangentMode)>(&UnityEngine::ProBuilder::BezierPoint::EnforceTangentMode)> {
  static const MethodInfo* get() {
    static auto* master = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "BezierTangentDirection")->byval_arg;
    static auto* mode = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "BezierTangentMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::BezierPoint), "EnforceTangentMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{master, mode});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::BezierPoint::SetPosition
// Il2CppName: SetPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::BezierPoint::*)(UnityEngine::Vector3)>(&UnityEngine::ProBuilder::BezierPoint::SetPosition)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::BezierPoint), "SetPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::BezierPoint::SetTangentIn
// Il2CppName: SetTangentIn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::BezierPoint::*)(UnityEngine::Vector3, UnityEngine::ProBuilder::BezierTangentMode)>(&UnityEngine::ProBuilder::BezierPoint::SetTangentIn)> {
  static const MethodInfo* get() {
    static auto* tangent = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* mode = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "BezierTangentMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::BezierPoint), "SetTangentIn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tangent, mode});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::BezierPoint::SetTangentOut
// Il2CppName: SetTangentOut
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::BezierPoint::*)(UnityEngine::Vector3, UnityEngine::ProBuilder::BezierTangentMode)>(&UnityEngine::ProBuilder::BezierPoint::SetTangentOut)> {
  static const MethodInfo* get() {
    static auto* tangent = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* mode = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "BezierTangentMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::BezierPoint), "SetTangentOut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tangent, mode});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::BezierPoint::QuadraticPosition
// Il2CppName: QuadraticPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (*)(UnityEngine::ProBuilder::BezierPoint, UnityEngine::ProBuilder::BezierPoint, float)>(&UnityEngine::ProBuilder::BezierPoint::QuadraticPosition)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "BezierPoint")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "BezierPoint")->byval_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::BezierPoint), "QuadraticPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b, t});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::BezierPoint::CubicPosition
// Il2CppName: CubicPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (*)(UnityEngine::ProBuilder::BezierPoint, UnityEngine::ProBuilder::BezierPoint, float)>(&UnityEngine::ProBuilder::BezierPoint::CubicPosition)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "BezierPoint")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "BezierPoint")->byval_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::BezierPoint), "CubicPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b, t});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::BezierPoint::GetLookDirection
// Il2CppName: GetLookDirection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (*)(System::Collections::Generic::IList_1<UnityEngine::ProBuilder::BezierPoint>*, int, int, int)>(&UnityEngine::ProBuilder::BezierPoint::GetLookDirection)> {
  static const MethodInfo* get() {
    static auto* points = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "BezierPoint")})->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* previous = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* next = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::BezierPoint), "GetLookDirection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{points, index, previous, next});
  }
};
