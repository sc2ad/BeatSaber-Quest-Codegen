// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Experimental.TerrainAPI.TerrainUtility/UnityEngine.Experimental.TerrainAPI.TerrainMap
#include "UnityEngine/Experimental/TerrainAPI/TerrainUtility_TerrainMap.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Terrain
  class Terrain;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Experimental::TerrainAPI::TerrainUtility::TerrainMap::TerrainFilter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::TerrainAPI::TerrainUtility::TerrainMap::TerrainFilter*, "UnityEngine.Experimental.TerrainAPI", "TerrainUtility/TerrainMap/TerrainFilter");
// Type namespace: UnityEngine.Experimental.TerrainAPI
namespace UnityEngine::Experimental::TerrainAPI {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Experimental.TerrainAPI.TerrainUtility/UnityEngine.Experimental.TerrainAPI.TerrainMap/UnityEngine.Experimental.TerrainAPI.TerrainFilter
  // [TokenAttribute] Offset: FFFFFFFF
  class TerrainUtility::TerrainMap::TerrainFilter : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x2A5FB60
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TerrainUtility::TerrainMap::TerrainFilter* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Experimental::TerrainAPI::TerrainUtility::TerrainMap::TerrainFilter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TerrainUtility::TerrainMap::TerrainFilter*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(UnityEngine.Terrain terrain)
    // Offset: 0x2A6069C
    bool Invoke(::UnityEngine::Terrain* terrain);
    // public System.IAsyncResult BeginInvoke(UnityEngine.Terrain terrain, System.AsyncCallback callback, System.Object object)
    // Offset: 0x2A61448
    ::System::IAsyncResult* BeginInvoke(::UnityEngine::Terrain* terrain, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(System.IAsyncResult result)
    // Offset: 0x2A6146C
    bool EndInvoke(::System::IAsyncResult* result);
  }; // UnityEngine.Experimental.TerrainAPI.TerrainUtility/UnityEngine.Experimental.TerrainAPI.TerrainMap/UnityEngine.Experimental.TerrainAPI.TerrainFilter
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Experimental::TerrainAPI::TerrainUtility::TerrainMap::TerrainFilter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Experimental::TerrainAPI::TerrainUtility::TerrainMap::TerrainFilter::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Experimental::TerrainAPI::TerrainUtility::TerrainMap::TerrainFilter::*)(::UnityEngine::Terrain*)>(&UnityEngine::Experimental::TerrainAPI::TerrainUtility::TerrainMap::TerrainFilter::Invoke)> {
  static const MethodInfo* get() {
    static auto* terrain = &::il2cpp_utils::GetClassFromName("UnityEngine", "Terrain")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::TerrainAPI::TerrainUtility::TerrainMap::TerrainFilter*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{terrain});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::TerrainAPI::TerrainUtility::TerrainMap::TerrainFilter::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (UnityEngine::Experimental::TerrainAPI::TerrainUtility::TerrainMap::TerrainFilter::*)(::UnityEngine::Terrain*, ::System::AsyncCallback*, ::Il2CppObject*)>(&UnityEngine::Experimental::TerrainAPI::TerrainUtility::TerrainMap::TerrainFilter::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* terrain = &::il2cpp_utils::GetClassFromName("UnityEngine", "Terrain")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::TerrainAPI::TerrainUtility::TerrainMap::TerrainFilter*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{terrain, callback, object});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::TerrainAPI::TerrainUtility::TerrainMap::TerrainFilter::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Experimental::TerrainAPI::TerrainUtility::TerrainMap::TerrainFilter::*)(::System::IAsyncResult*)>(&UnityEngine::Experimental::TerrainAPI::TerrainUtility::TerrainMap::TerrainFilter::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::TerrainAPI::TerrainUtility::TerrainMap::TerrainFilter*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
