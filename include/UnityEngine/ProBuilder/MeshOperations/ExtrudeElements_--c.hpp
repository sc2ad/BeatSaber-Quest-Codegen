// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ProBuilder.MeshOperations.ExtrudeElements
#include "UnityEngine/ProBuilder/MeshOperations/ExtrudeElements.hpp"
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
  // Forward declaring type: FaceRebuildData
  class FaceRebuildData;
  // Forward declaring type: Face
  class Face;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements::$$c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements::$$c*, "UnityEngine.ProBuilder.MeshOperations", "ExtrudeElements/<>c");
// Type namespace: UnityEngine.ProBuilder.MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.MeshOperations.ExtrudeElements/UnityEngine.ProBuilder.MeshOperations.<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class ExtrudeElements::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly UnityEngine.ProBuilder.MeshOperations.ExtrudeElements/UnityEngine.ProBuilder.MeshOperations.<>c <>9
    static ::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.ProBuilder.MeshOperations.ExtrudeElements/UnityEngine.ProBuilder.MeshOperations.<>c <>9
    static void _set_$$9(::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements::$$c* value);
    // Get static field: static public System.Func`2<UnityEngine.ProBuilder.FaceRebuildData,UnityEngine.ProBuilder.Face> <>9__3_0
    static ::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>* _get_$$9__3_0();
    // Set static field: static public System.Func`2<UnityEngine.ProBuilder.FaceRebuildData,UnityEngine.ProBuilder.Face> <>9__3_0
    static void _set_$$9__3_0(::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>* value);
    // Get static field: static public System.Func`2<UnityEngine.ProBuilder.Face,System.Int32> <>9__4_0
    static ::System::Func_2<::UnityEngine::ProBuilder::Face*, int>* _get_$$9__4_0();
    // Set static field: static public System.Func`2<UnityEngine.ProBuilder.Face,System.Int32> <>9__4_0
    static void _set_$$9__4_0(::System::Func_2<::UnityEngine::ProBuilder::Face*, int>* value);
    // static private System.Void .cctor()
    // Offset: 0x1A807F8
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x1A8085C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ExtrudeElements::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ExtrudeElements::$$c*, creationType>()));
    }
    // UnityEngine.ProBuilder.Face <DetachFaces>b__3_0(UnityEngine.ProBuilder.FaceRebuildData x)
    // Offset: 0x1A80864
    ::UnityEngine::ProBuilder::Face* $DetachFaces$b__3_0(::UnityEngine::ProBuilder::FaceRebuildData* x);
    // System.Int32 <ExtrudePerFace>b__4_0(UnityEngine.ProBuilder.Face x)
    // Offset: 0x1A8087C
    int $ExtrudePerFace$b__4_0(::UnityEngine::ProBuilder::Face* x);
  }; // UnityEngine.ProBuilder.MeshOperations.ExtrudeElements/UnityEngine.ProBuilder.MeshOperations.<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::ExtrudeElements::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::ProBuilder::MeshOperations::ExtrudeElements::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::ExtrudeElements::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::ExtrudeElements::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::ExtrudeElements::$$c::$DetachFaces$b__3_0
// Il2CppName: <DetachFaces>b__3_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::Face* (UnityEngine::ProBuilder::MeshOperations::ExtrudeElements::$$c::*)(::UnityEngine::ProBuilder::FaceRebuildData*)>(&UnityEngine::ProBuilder::MeshOperations::ExtrudeElements::$$c::$DetachFaces$b__3_0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "FaceRebuildData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::ExtrudeElements::$$c*), "<DetachFaces>b__3_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::ExtrudeElements::$$c::$ExtrudePerFace$b__4_0
// Il2CppName: <ExtrudePerFace>b__4_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::ProBuilder::MeshOperations::ExtrudeElements::$$c::*)(::UnityEngine::ProBuilder::Face*)>(&UnityEngine::ProBuilder::MeshOperations::ExtrudeElements::$$c::$ExtrudePerFace$b__4_0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Face")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::ExtrudeElements::$$c*), "<ExtrudePerFace>b__4_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
