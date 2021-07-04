// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IList
  class IList;
}
// Completed forward declares
// Type namespace: UnityEngine.ResourceManagement.Util
namespace UnityEngine::ResourceManagement::Util {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ResourceManagement.Util.ResourceManagerConfig
  class ResourceManagerConfig : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: ResourceManagerConfig
    ResourceManagerConfig() noexcept {}
    // static System.Boolean ExtractKeyAndSubKey(System.Object keyObj, out System.String mainKey, out System.String subKey)
    // Offset: 0x19C98C4
    static bool ExtractKeyAndSubKey(::Il2CppObject* keyObj, ::Il2CppString*& mainKey, ::Il2CppString*& subKey);
    // static public System.Boolean IsPathRemote(System.String path)
    // Offset: 0x19C7DC4
    static bool IsPathRemote(::Il2CppString* path);
    // static public System.Boolean ShouldPathUseWebRequest(System.String path)
    // Offset: 0x19C8C30
    static bool ShouldPathUseWebRequest(::Il2CppString* path);
    // static public System.Array CreateArrayResult(System.Type type, UnityEngine.Object[] allAssets)
    // Offset: 0x19CA69C
    static System::Array* CreateArrayResult(System::Type* type, ::Array<UnityEngine::Object*>* allAssets);
    // static public TObject CreateArrayResult(UnityEngine.Object[] allAssets)
    // Offset: 0xFFFFFFFF
    template<class TObject>
    static TObject CreateArrayResult(::Array<UnityEngine::Object*>* allAssets) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::Util::ResourceManagerConfig::CreateArrayResult");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("UnityEngine.ResourceManagement.Util", "ResourceManagerConfig", "CreateArrayResult", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(allAssets)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get()}));
      return ::il2cpp_utils::RunMethodThrow<TObject, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, allAssets);
    }
    // static public System.Collections.IList CreateListResult(System.Type type, UnityEngine.Object[] allAssets)
    // Offset: 0x19CA86C
    static System::Collections::IList* CreateListResult(System::Type* type, ::Array<UnityEngine::Object*>* allAssets);
    // static public TObject CreateListResult(UnityEngine.Object[] allAssets)
    // Offset: 0xFFFFFFFF
    template<class TObject>
    static TObject CreateListResult(::Array<UnityEngine::Object*>* allAssets) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::Util::ResourceManagerConfig::CreateListResult");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("UnityEngine.ResourceManagement.Util", "ResourceManagerConfig", "CreateListResult", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(allAssets)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get()}));
      return ::il2cpp_utils::RunMethodThrow<TObject, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, allAssets);
    }
    // static public System.Boolean IsInstance()
    // Offset: 0xFFFFFFFF
    template<class T1, class T2>
    static bool IsInstance() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::Util::ResourceManagerConfig::IsInstance");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("UnityEngine.ResourceManagement.Util", "ResourceManagerConfig", "IsInstance", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get()})));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method);
    }
  }; // UnityEngine.ResourceManagement.Util.ResourceManagerConfig
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::Util::ResourceManagerConfig*, "UnityEngine.ResourceManagement.Util", "ResourceManagerConfig");
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::ResourceManagerConfig::ExtractKeyAndSubKey
// Il2CppName: ExtractKeyAndSubKey
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::ResourceManagerConfig::IsPathRemote
// Il2CppName: IsPathRemote
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::ResourceManagerConfig::ShouldPathUseWebRequest
// Il2CppName: ShouldPathUseWebRequest
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::ResourceManagerConfig::CreateArrayResult
// Il2CppName: CreateArrayResult
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::ResourceManagerConfig::CreateArrayResult
// Il2CppName: CreateArrayResult
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::ResourceManagerConfig::CreateListResult
// Il2CppName: CreateListResult
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::ResourceManagerConfig::CreateListResult
// Il2CppName: CreateListResult
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::ResourceManagerConfig::IsInstance
// Il2CppName: IsInstance
// Cannot write MetadataGetter for generic methods!