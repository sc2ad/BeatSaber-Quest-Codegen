// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: Comparison`1<T>
  template<typename T>
  class Comparison_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Camera
  class Camera;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: <>c
  class OVRManager_$$c;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRManager_$$c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRManager_$$c*, "", "OVRManager/<>c");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OVRManager/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class OVRManager_$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly OVRManager/<>c <>9
    static ::GlobalNamespace::OVRManager_$$c* _get_$$9();
    // Set static field: static public readonly OVRManager/<>c <>9
    static void _set_$$9(::GlobalNamespace::OVRManager_$$c* value);
    // Get static field: static public System.Func`2<System.Single,System.String> <>9__337_0
    static ::System::Func_2<float, ::StringW>* _get_$$9__337_0();
    // Set static field: static public System.Func`2<System.Single,System.String> <>9__337_0
    static void _set_$$9__337_0(::System::Func_2<float, ::StringW>* value);
    // Get static field: static public System.Comparison`1<UnityEngine.Camera> <>9__346_0
    static ::System::Comparison_1<::UnityEngine::Camera*>* _get_$$9__346_0();
    // Set static field: static public System.Comparison`1<UnityEngine.Camera> <>9__346_0
    static void _set_$$9__346_0(::System::Comparison_1<::UnityEngine::Camera*>* value);
    // static private System.Void .cctor()
    // Offset: 0x175A7FC
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x175A860
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRManager_$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRManager_$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRManager_$$c*, creationType>()));
    }
    // System.String <InitOVRManager>b__337_0(System.Single f)
    // Offset: 0x175A868
    ::StringW $InitOVRManager$b__337_0(float f);
    // System.Int32 <FindMainCamera>b__346_0(UnityEngine.Camera c0, UnityEngine.Camera c1)
    // Offset: 0x175A890
    int $FindMainCamera$b__346_0(::UnityEngine::Camera* c0, ::UnityEngine::Camera* c1);
  }; // OVRManager/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRManager_$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OVRManager_$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRManager_$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRManager_$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OVRManager_$$c::$InitOVRManager$b__337_0
// Il2CppName: <InitOVRManager>b__337_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::OVRManager_$$c::*)(float)>(&GlobalNamespace::OVRManager_$$c::$InitOVRManager$b__337_0)> {
  static const MethodInfo* get() {
    static auto* f = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRManager_$$c*), "<InitOVRManager>b__337_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{f});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRManager_$$c::$FindMainCamera$b__346_0
// Il2CppName: <FindMainCamera>b__346_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::OVRManager_$$c::*)(::UnityEngine::Camera*, ::UnityEngine::Camera*)>(&GlobalNamespace::OVRManager_$$c::$FindMainCamera$b__346_0)> {
  static const MethodInfo* get() {
    static auto* c0 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")->byval_arg;
    static auto* c1 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRManager_$$c*), "<FindMainCamera>b__346_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c0, c1});
  }
};
