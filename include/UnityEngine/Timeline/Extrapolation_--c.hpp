// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Timeline.Extrapolation
#include "UnityEngine/Timeline/Extrapolation.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Comparison`1<T>
  template<typename T>
  class Comparison_1;
}
// Forward declaring namespace: UnityEngine::Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: TimelineClip
  class TimelineClip;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Timeline::Extrapolation::$$c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::Extrapolation::$$c*, "UnityEngine.Timeline", "Extrapolation/<>c");
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.Extrapolation/UnityEngine.Timeline.<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class Extrapolation::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly UnityEngine.Timeline.Extrapolation/UnityEngine.Timeline.<>c <>9
    static ::UnityEngine::Timeline::Extrapolation::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.Timeline.Extrapolation/UnityEngine.Timeline.<>c <>9
    static void _set_$$9(::UnityEngine::Timeline::Extrapolation::$$c* value);
    // Get static field: static public System.Comparison`1<UnityEngine.Timeline.TimelineClip> <>9__2_0
    static ::System::Comparison_1<::UnityEngine::Timeline::TimelineClip*>* _get_$$9__2_0();
    // Set static field: static public System.Comparison`1<UnityEngine.Timeline.TimelineClip> <>9__2_0
    static void _set_$$9__2_0(::System::Comparison_1<::UnityEngine::Timeline::TimelineClip*>* value);
    // static private System.Void .cctor()
    // Offset: 0x1D7DFFC
    static void _cctor();
    // System.Int32 <SortClipsByStartTime>b__2_0(UnityEngine.Timeline.TimelineClip clip1, UnityEngine.Timeline.TimelineClip clip2)
    // Offset: 0x1D7E068
    int $SortClipsByStartTime$b__2_0(::UnityEngine::Timeline::TimelineClip* clip1, ::UnityEngine::Timeline::TimelineClip* clip2);
    // public System.Void .ctor()
    // Offset: 0x1D7E060
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Extrapolation::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Timeline::Extrapolation::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Extrapolation::$$c*, creationType>()));
    }
  }; // UnityEngine.Timeline.Extrapolation/UnityEngine.Timeline.<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Timeline::Extrapolation::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Timeline::Extrapolation::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::Extrapolation::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::Extrapolation::$$c::$SortClipsByStartTime$b__2_0
// Il2CppName: <SortClipsByStartTime>b__2_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Timeline::Extrapolation::$$c::*)(::UnityEngine::Timeline::TimelineClip*, ::UnityEngine::Timeline::TimelineClip*)>(&UnityEngine::Timeline::Extrapolation::$$c::$SortClipsByStartTime$b__2_0)> {
  static const MethodInfo* get() {
    static auto* clip1 = &::il2cpp_utils::GetClassFromName("UnityEngine.Timeline", "TimelineClip")->byval_arg;
    static auto* clip2 = &::il2cpp_utils::GetClassFromName("UnityEngine.Timeline", "TimelineClip")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::Extrapolation::$$c*), "<SortClipsByStartTime>b__2_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clip1, clip2});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::Extrapolation::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
