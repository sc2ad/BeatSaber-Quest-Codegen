// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ProBuilder.MeshOperations.MeshImporter
#include "UnityEngine/ProBuilder/MeshOperations/MeshImporter.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: Vertex
  class Vertex;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::MeshImporter::$$c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::MeshImporter::$$c*, "UnityEngine.ProBuilder.MeshOperations", "MeshImporter/<>c");
// Type namespace: UnityEngine.ProBuilder.MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.MeshOperations.MeshImporter/UnityEngine.ProBuilder.MeshOperations.<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class MeshImporter::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly UnityEngine.ProBuilder.MeshOperations.MeshImporter/UnityEngine.ProBuilder.MeshOperations.<>c <>9
    static ::UnityEngine::ProBuilder::MeshOperations::MeshImporter::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.ProBuilder.MeshOperations.MeshImporter/UnityEngine.ProBuilder.MeshOperations.<>c <>9
    static void _set_$$9(::UnityEngine::ProBuilder::MeshOperations::MeshImporter::$$c* value);
    // Get static field: static public System.Func`2<UnityEngine.ProBuilder.Vertex,UnityEngine.Vector3> <>9__9_0
    static ::System::Func_2<::UnityEngine::ProBuilder::Vertex*, ::UnityEngine::Vector3>* _get_$$9__9_0();
    // Set static field: static public System.Func`2<UnityEngine.ProBuilder.Vertex,UnityEngine.Vector3> <>9__9_0
    static void _set_$$9__9_0(::System::Func_2<::UnityEngine::ProBuilder::Vertex*, ::UnityEngine::Vector3>* value);
    // static private System.Void .cctor()
    // Offset: 0x1C6B25C
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x1C6B2C0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MeshImporter::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ProBuilder::MeshOperations::MeshImporter::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MeshImporter::$$c*, creationType>()));
    }
    // UnityEngine.Vector3 <Import>b__9_0(UnityEngine.ProBuilder.Vertex x)
    // Offset: 0x1C6B2C8
    ::UnityEngine::Vector3 $Import$b__9_0(::UnityEngine::ProBuilder::Vertex* x);
  }; // UnityEngine.ProBuilder.MeshOperations.MeshImporter/UnityEngine.ProBuilder.MeshOperations.<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::MeshImporter::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::ProBuilder::MeshOperations::MeshImporter::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::MeshImporter::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::MeshImporter::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::MeshImporter::$$c::$Import$b__9_0
// Il2CppName: <Import>b__9_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (UnityEngine::ProBuilder::MeshOperations::MeshImporter::$$c::*)(::UnityEngine::ProBuilder::Vertex*)>(&UnityEngine::ProBuilder::MeshOperations::MeshImporter::$$c::$Import$b__9_0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Vertex")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::MeshImporter::$$c*), "<Import>b__9_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
