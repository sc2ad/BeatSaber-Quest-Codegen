// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HoudiniEngineUnity.Test_MeshFilter_Extensions
#include "HoudiniEngineUnity/Test_MeshFilter_Extensions.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Converter`2<TInput, TOutput>
  template<typename TInput, typename TOutput>
  class Converter_2;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: MeshFilter
  class MeshFilter;
}
// Forward declaring namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: Test_MeshFilter
  class Test_MeshFilter;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HoudiniEngineUnity::Test_MeshFilter_Extensions::$$c);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::Test_MeshFilter_Extensions::$$c*, "HoudiniEngineUnity", "Test_MeshFilter_Extensions/<>c");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.Test_MeshFilter_Extensions/HoudiniEngineUnity.<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class Test_MeshFilter_Extensions::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly HoudiniEngineUnity.Test_MeshFilter_Extensions/HoudiniEngineUnity.<>c <>9
    static ::HoudiniEngineUnity::Test_MeshFilter_Extensions::$$c* _get_$$9();
    // Set static field: static public readonly HoudiniEngineUnity.Test_MeshFilter_Extensions/HoudiniEngineUnity.<>c <>9
    static void _set_$$9(::HoudiniEngineUnity::Test_MeshFilter_Extensions::$$c* value);
    // Get static field: static public System.Converter`2<UnityEngine.MeshFilter,HoudiniEngineUnity.Test_MeshFilter> <>9__1_0
    static ::System::Converter_2<::UnityEngine::MeshFilter*, ::HoudiniEngineUnity::Test_MeshFilter*>* _get_$$9__1_0();
    // Set static field: static public System.Converter`2<UnityEngine.MeshFilter,HoudiniEngineUnity.Test_MeshFilter> <>9__1_0
    static void _set_$$9__1_0(::System::Converter_2<::UnityEngine::MeshFilter*, ::HoudiniEngineUnity::Test_MeshFilter*>* value);
    // Get static field: static public System.Converter`2<UnityEngine.MeshFilter,HoudiniEngineUnity.Test_MeshFilter> <>9__2_0
    static ::System::Converter_2<::UnityEngine::MeshFilter*, ::HoudiniEngineUnity::Test_MeshFilter*>* _get_$$9__2_0();
    // Set static field: static public System.Converter`2<UnityEngine.MeshFilter,HoudiniEngineUnity.Test_MeshFilter> <>9__2_0
    static void _set_$$9__2_0(::System::Converter_2<::UnityEngine::MeshFilter*, ::HoudiniEngineUnity::Test_MeshFilter*>* value);
    // static private System.Void .cctor()
    // Offset: 0x2B1E940
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x2B1E9A4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Test_MeshFilter_Extensions::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HoudiniEngineUnity::Test_MeshFilter_Extensions::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Test_MeshFilter_Extensions::$$c*, creationType>()));
    }
    // HoudiniEngineUnity.Test_MeshFilter <ToTestObject>b__1_0(UnityEngine.MeshFilter lod)
    // Offset: 0x2B1E9AC
    ::HoudiniEngineUnity::Test_MeshFilter* $ToTestObject$b__1_0(::UnityEngine::MeshFilter* lod);
    // HoudiniEngineUnity.Test_MeshFilter <ToTestObject>b__2_0(UnityEngine.MeshFilter lod)
    // Offset: 0x2B1EA10
    ::HoudiniEngineUnity::Test_MeshFilter* $ToTestObject$b__2_0(::UnityEngine::MeshFilter* lod);
  }; // HoudiniEngineUnity.Test_MeshFilter_Extensions/HoudiniEngineUnity.<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::Test_MeshFilter_Extensions::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&HoudiniEngineUnity::Test_MeshFilter_Extensions::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::Test_MeshFilter_Extensions::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::Test_MeshFilter_Extensions::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HoudiniEngineUnity::Test_MeshFilter_Extensions::$$c::$ToTestObject$b__1_0
// Il2CppName: <ToTestObject>b__1_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::Test_MeshFilter* (HoudiniEngineUnity::Test_MeshFilter_Extensions::$$c::*)(::UnityEngine::MeshFilter*)>(&HoudiniEngineUnity::Test_MeshFilter_Extensions::$$c::$ToTestObject$b__1_0)> {
  static const MethodInfo* get() {
    static auto* lod = &::il2cpp_utils::GetClassFromName("UnityEngine", "MeshFilter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::Test_MeshFilter_Extensions::$$c*), "<ToTestObject>b__1_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lod});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::Test_MeshFilter_Extensions::$$c::$ToTestObject$b__2_0
// Il2CppName: <ToTestObject>b__2_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::Test_MeshFilter* (HoudiniEngineUnity::Test_MeshFilter_Extensions::$$c::*)(::UnityEngine::MeshFilter*)>(&HoudiniEngineUnity::Test_MeshFilter_Extensions::$$c::$ToTestObject$b__2_0)> {
  static const MethodInfo* get() {
    static auto* lod = &::il2cpp_utils::GetClassFromName("UnityEngine", "MeshFilter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::Test_MeshFilter_Extensions::$$c*), "<ToTestObject>b__2_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lod});
  }
};
