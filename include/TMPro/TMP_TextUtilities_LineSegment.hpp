// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: TMPro.TMP_TextUtilities
#include "TMPro/TMP_TextUtilities.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_TextUtilities::LineSegment, "TMPro", "TMP_TextUtilities/LineSegment");
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: TMPro.TMP_TextUtilities/TMPro.LineSegment
  // [TokenAttribute] Offset: FFFFFFFF
  struct TMP_TextUtilities::LineSegment/*, public ::System::ValueType*/ {
    public:
    public:
    // public UnityEngine.Vector3 Point1
    // Size: 0xC
    // Offset: 0x0
    ::UnityEngine::Vector3 Point1;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 Point2
    // Size: 0xC
    // Offset: 0xC
    ::UnityEngine::Vector3 Point2;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    public:
    // Creating value type constructor for type: LineSegment
    constexpr LineSegment(::UnityEngine::Vector3 Point1_ = {}, ::UnityEngine::Vector3 Point2_ = {}) noexcept : Point1{Point1_}, Point2{Point2_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public UnityEngine.Vector3 Point1
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_Point1();
    // Get instance field reference: public UnityEngine.Vector3 Point2
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_Point2();
    // public System.Void .ctor(UnityEngine.Vector3 p1, UnityEngine.Vector3 p2)
    // Offset: 0x1905418
    // ABORTED: conflicts with another method.  LineSegment(::UnityEngine::Vector3 p1, ::UnityEngine::Vector3 p2);
  }; // TMPro.TMP_TextUtilities/TMPro.LineSegment
  #pragma pack(pop)
  static check_size<sizeof(TMP_TextUtilities::LineSegment), 12 + sizeof(::UnityEngine::Vector3)> __TMPro_TMP_TextUtilities_LineSegmentSizeCheck;
  static_assert(sizeof(TMP_TextUtilities::LineSegment) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: TMPro::TMP_TextUtilities::LineSegment::LineSegment
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
