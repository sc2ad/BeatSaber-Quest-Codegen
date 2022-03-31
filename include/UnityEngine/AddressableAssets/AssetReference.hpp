// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.AddressableAssets.IKeyEvaluator
#include "UnityEngine/AddressableAssets/IKeyEvaluator.hpp"
// Including type: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle
#include "UnityEngine/ResourceManagement/AsyncOperations/AsyncOperationHandle.hpp"
// Including type: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1
#include "UnityEngine/ResourceManagement/AsyncOperations/AsyncOperationHandle_1.hpp"
// Including type: UnityEngine.ResourceManagement.ResourceProviders.SceneInstance
#include "UnityEngine/ResourceManagement/ResourceProviders/SceneInstance.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Vector3
  struct Vector3;
  // Forward declaring type: Quaternion
  struct Quaternion;
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: UnityEngine::SceneManagement
namespace UnityEngine::SceneManagement {
  // Forward declaring type: LoadSceneMode
  struct LoadSceneMode;
}
// Completed forward declares
// Type namespace: UnityEngine.AddressableAssets
namespace UnityEngine::AddressableAssets {
  // Forward declaring type: AssetReference
  class AssetReference;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::AddressableAssets::AssetReference);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::AssetReference*, "UnityEngine.AddressableAssets", "AssetReference");
// Type namespace: UnityEngine.AddressableAssets
namespace UnityEngine::AddressableAssets {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AddressableAssets.AssetReference
  // [TokenAttribute] Offset: FFFFFFFF
  class AssetReference : public ::Il2CppObject/*, public ::UnityEngine::AddressableAssets::IKeyEvaluator*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // [FormerlySerializedAsAttribute] Offset: 0x1243170
    // private System.String m_AssetGUID
    // Size: 0x8
    // Offset: 0x10
    ::StringW m_AssetGUID;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String m_SubObjectName
    // Size: 0x8
    // Offset: 0x18
    ::StringW m_SubObjectName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String m_SubObjectType
    // Size: 0x8
    // Offset: 0x20
    ::StringW m_SubObjectType;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle m_Operation
    // Size: 0x18
    // Offset: 0x28
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle m_Operation;
    // Field size check
    static_assert(sizeof(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle) == 0x18);
    public:
    // Creating interface conversion operator: operator ::UnityEngine::AddressableAssets::IKeyEvaluator
    operator ::UnityEngine::AddressableAssets::IKeyEvaluator() noexcept {
      return *reinterpret_cast<::UnityEngine::AddressableAssets::IKeyEvaluator*>(this);
    }
    // Get instance field reference: private System.String m_AssetGUID
    ::StringW& dyn_m_AssetGUID();
    // Get instance field reference: private System.String m_SubObjectName
    ::StringW& dyn_m_SubObjectName();
    // Get instance field reference: private System.String m_SubObjectType
    ::StringW& dyn_m_SubObjectType();
    // Get instance field reference: private UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle m_Operation
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle& dyn_m_Operation();
    // public UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle get_OperationHandle()
    // Offset: 0x188C338
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle get_OperationHandle();
    // public System.Object get_RuntimeKey()
    // Offset: 0x188C34C
    ::Il2CppObject* get_RuntimeKey();
    // public System.String get_AssetGUID()
    // Offset: 0x188C3E4
    ::StringW get_AssetGUID();
    // public System.String get_SubObjectName()
    // Offset: 0x188C3EC
    ::StringW get_SubObjectName();
    // public System.Void set_SubObjectName(System.String value)
    // Offset: 0x188C3F4
    void set_SubObjectName(::StringW value);
    // System.Type get_SubOjbectType()
    // Offset: 0x188C3FC
    ::System::Type* get_SubOjbectType();
    // public System.Boolean get_IsDone()
    // Offset: 0x188C4BC
    bool get_IsDone();
    // public UnityEngine.Object get_Asset()
    // Offset: 0x188C58C
    ::UnityEngine::Object* get_Asset();
    // public System.Void .ctor(System.String guid)
    // Offset: 0x188C520
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AssetReference* New_ctor(::StringW guid) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::AddressableAssets::AssetReference::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AssetReference*, creationType>(guid)));
    }
    // public System.Boolean IsValid()
    // Offset: 0x188C4B0
    bool IsValid();
    // static private UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<T> CreateFailedOperation()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<T> CreateFailedOperation() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::AddressableAssets::AssetReference::CreateFailedOperation");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("UnityEngine.AddressableAssets", "AssetReference", "CreateFailedOperation", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<T>, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method);
    }
    // public UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObject> LoadAsset()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class TObject>
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> LoadAsset() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::AddressableAssets::AssetReference::LoadAsset");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "LoadAsset", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>, false>(this, ___generic__method);
    }
    // public UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.ResourceManagement.ResourceProviders.SceneInstance> LoadScene()
    // Offset: 0x188C694
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> LoadScene();
    // public UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.GameObject> Instantiate(UnityEngine.Vector3 position, UnityEngine.Quaternion rotation, UnityEngine.Transform parent)
    // Offset: 0x188C6B0
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::GameObject*> Instantiate(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Transform* parent);
    // public UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.GameObject> Instantiate(UnityEngine.Transform parent, System.Boolean instantiateInWorldSpace)
    // Offset: 0x188C6C0
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::GameObject*> Instantiate(::UnityEngine::Transform* parent, bool instantiateInWorldSpace);
    // public UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObject> LoadAssetAsync()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class TObject>
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> LoadAssetAsync() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::AddressableAssets::AssetReference::LoadAssetAsync");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "LoadAssetAsync", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get()}, ::std::vector<const Il2CppType*>{})));
      auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>, false>(this, ___generic__method);
    }
    // public UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.ResourceManagement.ResourceProviders.SceneInstance> LoadSceneAsync(UnityEngine.SceneManagement.LoadSceneMode loadMode, System.Boolean activateOnLoad, System.Int32 priority)
    // Offset: 0x188C6D4
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> LoadSceneAsync(::UnityEngine::SceneManagement::LoadSceneMode loadMode, bool activateOnLoad, int priority);
    // public UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.ResourceManagement.ResourceProviders.SceneInstance> UnLoadScene()
    // Offset: 0x188C838
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> UnLoadScene();
    // public UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.GameObject> InstantiateAsync(UnityEngine.Vector3 position, UnityEngine.Quaternion rotation, UnityEngine.Transform parent)
    // Offset: 0x188C8DC
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::GameObject*> InstantiateAsync(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Transform* parent);
    // public UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.GameObject> InstantiateAsync(UnityEngine.Transform parent, System.Boolean instantiateInWorldSpace)
    // Offset: 0x188C9CC
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::GameObject*> InstantiateAsync(::UnityEngine::Transform* parent, bool instantiateInWorldSpace);
    // public System.Boolean RuntimeKeyIsValid()
    // Offset: 0x188CA74
    bool RuntimeKeyIsValid();
    // public System.Void ReleaseAsset()
    // Offset: 0x188CB54
    void ReleaseAsset();
    // public System.Void ReleaseInstance(UnityEngine.GameObject obj)
    // Offset: 0x188CC40
    void ReleaseInstance(::UnityEngine::GameObject* obj);
    // public System.Boolean ValidateAsset(UnityEngine.Object obj)
    // Offset: 0x188CCA4
    bool ValidateAsset(::UnityEngine::Object* obj);
    // public System.Boolean ValidateAsset(System.String path)
    // Offset: 0x188CCAC
    bool ValidateAsset(::StringW path);
    // public System.Void .ctor()
    // Offset: 0x188C4C8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AssetReference* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::AddressableAssets::AssetReference::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AssetReference*, creationType>()));
    }
    // public override System.String ToString()
    // Offset: 0x188C634
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // UnityEngine.AddressableAssets.AssetReference
  #pragma pack(pop)
  static check_size<sizeof(AssetReference), 40 + sizeof(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle)> __UnityEngine_AddressableAssets_AssetReferenceSizeCheck;
  static_assert(sizeof(AssetReference) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::AssetReference::get_OperationHandle
// Il2CppName: get_OperationHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle (UnityEngine::AddressableAssets::AssetReference::*)()>(&UnityEngine::AddressableAssets::AssetReference::get_OperationHandle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::AssetReference*), "get_OperationHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::AssetReference::get_RuntimeKey
// Il2CppName: get_RuntimeKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (UnityEngine::AddressableAssets::AssetReference::*)()>(&UnityEngine::AddressableAssets::AssetReference::get_RuntimeKey)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::AssetReference*), "get_RuntimeKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::AssetReference::get_AssetGUID
// Il2CppName: get_AssetGUID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::AddressableAssets::AssetReference::*)()>(&UnityEngine::AddressableAssets::AssetReference::get_AssetGUID)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::AssetReference*), "get_AssetGUID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::AssetReference::get_SubObjectName
// Il2CppName: get_SubObjectName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::AddressableAssets::AssetReference::*)()>(&UnityEngine::AddressableAssets::AssetReference::get_SubObjectName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::AssetReference*), "get_SubObjectName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::AssetReference::set_SubObjectName
// Il2CppName: set_SubObjectName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::AssetReference::*)(::StringW)>(&UnityEngine::AddressableAssets::AssetReference::set_SubObjectName)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::AssetReference*), "set_SubObjectName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::AssetReference::get_SubOjbectType
// Il2CppName: get_SubOjbectType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (UnityEngine::AddressableAssets::AssetReference::*)()>(&UnityEngine::AddressableAssets::AssetReference::get_SubOjbectType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::AssetReference*), "get_SubOjbectType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::AssetReference::get_IsDone
// Il2CppName: get_IsDone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::AddressableAssets::AssetReference::*)()>(&UnityEngine::AddressableAssets::AssetReference::get_IsDone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::AssetReference*), "get_IsDone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::AssetReference::get_Asset
// Il2CppName: get_Asset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Object* (UnityEngine::AddressableAssets::AssetReference::*)()>(&UnityEngine::AddressableAssets::AssetReference::get_Asset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::AssetReference*), "get_Asset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::AssetReference::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::AssetReference::IsValid
// Il2CppName: IsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::AddressableAssets::AssetReference::*)()>(&UnityEngine::AddressableAssets::AssetReference::IsValid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::AssetReference*), "IsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::AssetReference::CreateFailedOperation
// Il2CppName: CreateFailedOperation
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::AssetReference::LoadAsset
// Il2CppName: LoadAsset
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::AssetReference::LoadScene
// Il2CppName: LoadScene
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> (UnityEngine::AddressableAssets::AssetReference::*)()>(&UnityEngine::AddressableAssets::AssetReference::LoadScene)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::AssetReference*), "LoadScene", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::AssetReference::Instantiate
// Il2CppName: Instantiate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::GameObject*> (UnityEngine::AddressableAssets::AssetReference::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Transform*)>(&UnityEngine::AddressableAssets::AssetReference::Instantiate)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* rotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* parent = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::AssetReference*), "Instantiate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position, rotation, parent});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::AssetReference::Instantiate
// Il2CppName: Instantiate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::GameObject*> (UnityEngine::AddressableAssets::AssetReference::*)(::UnityEngine::Transform*, bool)>(&UnityEngine::AddressableAssets::AssetReference::Instantiate)> {
  static const MethodInfo* get() {
    static auto* parent = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* instantiateInWorldSpace = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::AssetReference*), "Instantiate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parent, instantiateInWorldSpace});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::AssetReference::LoadAssetAsync
// Il2CppName: LoadAssetAsync
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::AssetReference::LoadSceneAsync
// Il2CppName: LoadSceneAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> (UnityEngine::AddressableAssets::AssetReference::*)(::UnityEngine::SceneManagement::LoadSceneMode, bool, int)>(&UnityEngine::AddressableAssets::AssetReference::LoadSceneAsync)> {
  static const MethodInfo* get() {
    static auto* loadMode = &::il2cpp_utils::GetClassFromName("UnityEngine.SceneManagement", "LoadSceneMode")->byval_arg;
    static auto* activateOnLoad = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* priority = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::AssetReference*), "LoadSceneAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{loadMode, activateOnLoad, priority});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::AssetReference::UnLoadScene
// Il2CppName: UnLoadScene
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> (UnityEngine::AddressableAssets::AssetReference::*)()>(&UnityEngine::AddressableAssets::AssetReference::UnLoadScene)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::AssetReference*), "UnLoadScene", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::AssetReference::InstantiateAsync
// Il2CppName: InstantiateAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::GameObject*> (UnityEngine::AddressableAssets::AssetReference::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Transform*)>(&UnityEngine::AddressableAssets::AssetReference::InstantiateAsync)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* rotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* parent = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::AssetReference*), "InstantiateAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position, rotation, parent});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::AssetReference::InstantiateAsync
// Il2CppName: InstantiateAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::GameObject*> (UnityEngine::AddressableAssets::AssetReference::*)(::UnityEngine::Transform*, bool)>(&UnityEngine::AddressableAssets::AssetReference::InstantiateAsync)> {
  static const MethodInfo* get() {
    static auto* parent = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* instantiateInWorldSpace = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::AssetReference*), "InstantiateAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parent, instantiateInWorldSpace});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::AssetReference::RuntimeKeyIsValid
// Il2CppName: RuntimeKeyIsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::AddressableAssets::AssetReference::*)()>(&UnityEngine::AddressableAssets::AssetReference::RuntimeKeyIsValid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::AssetReference*), "RuntimeKeyIsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::AssetReference::ReleaseAsset
// Il2CppName: ReleaseAsset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::AssetReference::*)()>(&UnityEngine::AddressableAssets::AssetReference::ReleaseAsset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::AssetReference*), "ReleaseAsset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::AssetReference::ReleaseInstance
// Il2CppName: ReleaseInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::AssetReference::*)(::UnityEngine::GameObject*)>(&UnityEngine::AddressableAssets::AssetReference::ReleaseInstance)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::AssetReference*), "ReleaseInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::AssetReference::ValidateAsset
// Il2CppName: ValidateAsset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::AddressableAssets::AssetReference::*)(::UnityEngine::Object*)>(&UnityEngine::AddressableAssets::AssetReference::ValidateAsset)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::AssetReference*), "ValidateAsset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::AssetReference::ValidateAsset
// Il2CppName: ValidateAsset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::AddressableAssets::AssetReference::*)(::StringW)>(&UnityEngine::AddressableAssets::AssetReference::ValidateAsset)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::AssetReference*), "ValidateAsset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::AssetReference::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::AssetReference::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::AddressableAssets::AssetReference::*)()>(&UnityEngine::AddressableAssets::AssetReference::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::AssetReference*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
