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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: LayerMask
  struct LayerMask;
  // Forward declaring type: Coroutine
  class Coroutine;
  // Forward declaring type: MonoBehaviour
  class MonoBehaviour;
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Vector3
  struct Vector3;
  // Forward declaring type: Quaternion
  struct Quaternion;
  // Forward declaring type: Texture2D
  class Texture2D;
  // Forward declaring type: RenderTexture
  class RenderTexture;
  // Forward declaring type: TextureFormat
  struct TextureFormat;
  // Forward declaring type: Vector2
  struct Vector2;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ExtensionMethods
  class ExtensionMethods;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ExtensionMethods);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ExtensionMethods*, "", "ExtensionMethods");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: ExtensionMethods
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class ExtensionMethods : public ::Il2CppObject {
    public:
    // static public System.Boolean ContainsLayer(UnityEngine.LayerMask layerMask, System.Int32 layer)
    // Offset: 0x15CA128
    static bool ContainsLayer(::UnityEngine::LayerMask layerMask, int layer);
    // static public UnityEngine.Coroutine StartUniqueCoroutine(UnityEngine.MonoBehaviour m, System.Func`1<System.Collections.IEnumerator> func)
    // Offset: 0x15CA164
    static ::UnityEngine::Coroutine* StartUniqueCoroutine(::UnityEngine::MonoBehaviour* m, ::System::Func_1<::System::Collections::IEnumerator*>* func);
    // static public UnityEngine.Coroutine StartUniqueCoroutine(UnityEngine.MonoBehaviour m, System.Func`2<T,System.Collections.IEnumerator> func, T value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static ::UnityEngine::Coroutine* StartUniqueCoroutine(::UnityEngine::MonoBehaviour* m, ::System::Func_2<T, ::System::Collections::IEnumerator*>* func, T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ExtensionMethods::StartUniqueCoroutine");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("", "ExtensionMethods", "StartUniqueCoroutine", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(m), ::il2cpp_utils::ExtractType(func), ::il2cpp_utils::ExtractType(value)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::UnityEngine::Coroutine*, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, m, func, value);
    }
    // static public System.Void StopUniqueCoroutine(UnityEngine.MonoBehaviour m, System.Func`1<System.Collections.IEnumerator> func)
    // Offset: 0x15CA1E4
    static void StopUniqueCoroutine(::UnityEngine::MonoBehaviour* m, ::System::Func_1<::System::Collections::IEnumerator*>* func);
    // static public System.Void StopUniqueCoroutine(UnityEngine.MonoBehaviour m, System.Func`2<T,System.Collections.IEnumerator> func)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static void StopUniqueCoroutine(::UnityEngine::MonoBehaviour* m, ::System::Func_2<T, ::System::Collections::IEnumerator*>* func) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ExtensionMethods::StopUniqueCoroutine");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("", "ExtensionMethods", "StopUniqueCoroutine", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(m), ::il2cpp_utils::ExtractType(func)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, m, func);
    }
    // static public System.Boolean IsDescendantOf(UnityEngine.Transform transform, UnityEngine.Transform parent)
    // Offset: 0x15CA234
    static bool IsDescendantOf(::UnityEngine::Transform* transform, ::UnityEngine::Transform* parent);
    // static public System.Void SetLocalPositionAndRotation(UnityEngine.Transform tr, UnityEngine.Vector3 pos, UnityEngine.Quaternion rot)
    // Offset: 0x15CA320
    static void SetLocalPositionAndRotation(::UnityEngine::Transform* tr, ::UnityEngine::Vector3 pos, ::UnityEngine::Quaternion rot);
    // static public System.String GetPath(UnityEngine.Transform current)
    // Offset: 0x15CA384
    static ::StringW GetPath(::UnityEngine::Transform* current);
    // static public UnityEngine.Quaternion Reflect(UnityEngine.Quaternion source, UnityEngine.Vector3 normal)
    // Offset: 0x15CA47C
    static ::UnityEngine::Quaternion Reflect(::UnityEngine::Quaternion source, ::UnityEngine::Vector3 normal);
    // static public UnityEngine.Texture2D CreateTexture2D(UnityEngine.RenderTexture renderTexture, UnityEngine.TextureFormat textureFormat)
    // Offset: 0x15CA5F8
    static ::UnityEngine::Texture2D* CreateTexture2D(::UnityEngine::RenderTexture* renderTexture, ::UnityEngine::TextureFormat textureFormat);
    // static public UnityEngine.Vector2 Rotate(UnityEngine.Vector2 vector, System.Single rads)
    // Offset: 0x15CA750
    static ::UnityEngine::Vector2 Rotate(::UnityEngine::Vector2 vector, float rads);
  }; // ExtensionMethods
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ExtensionMethods::ContainsLayer
// Il2CppName: ContainsLayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::LayerMask, int)>(&GlobalNamespace::ExtensionMethods::ContainsLayer)> {
  static const MethodInfo* get() {
    static auto* layerMask = &::il2cpp_utils::GetClassFromName("UnityEngine", "LayerMask")->byval_arg;
    static auto* layer = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ExtensionMethods*), "ContainsLayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{layerMask, layer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ExtensionMethods::StartUniqueCoroutine
// Il2CppName: StartUniqueCoroutine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Coroutine* (*)(::UnityEngine::MonoBehaviour*, ::System::Func_1<::System::Collections::IEnumerator*>*)>(&GlobalNamespace::ExtensionMethods::StartUniqueCoroutine)> {
  static const MethodInfo* get() {
    static auto* m = &::il2cpp_utils::GetClassFromName("UnityEngine", "MonoBehaviour")->byval_arg;
    static auto* func = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Func`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System.Collections", "IEnumerator")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ExtensionMethods*), "StartUniqueCoroutine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{m, func});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ExtensionMethods::StartUniqueCoroutine
// Il2CppName: StartUniqueCoroutine
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: GlobalNamespace::ExtensionMethods::StopUniqueCoroutine
// Il2CppName: StopUniqueCoroutine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::MonoBehaviour*, ::System::Func_1<::System::Collections::IEnumerator*>*)>(&GlobalNamespace::ExtensionMethods::StopUniqueCoroutine)> {
  static const MethodInfo* get() {
    static auto* m = &::il2cpp_utils::GetClassFromName("UnityEngine", "MonoBehaviour")->byval_arg;
    static auto* func = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Func`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System.Collections", "IEnumerator")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ExtensionMethods*), "StopUniqueCoroutine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{m, func});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ExtensionMethods::StopUniqueCoroutine
// Il2CppName: StopUniqueCoroutine
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: GlobalNamespace::ExtensionMethods::IsDescendantOf
// Il2CppName: IsDescendantOf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Transform*, ::UnityEngine::Transform*)>(&GlobalNamespace::ExtensionMethods::IsDescendantOf)> {
  static const MethodInfo* get() {
    static auto* transform = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* parent = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ExtensionMethods*), "IsDescendantOf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transform, parent});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ExtensionMethods::SetLocalPositionAndRotation
// Il2CppName: SetLocalPositionAndRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&GlobalNamespace::ExtensionMethods::SetLocalPositionAndRotation)> {
  static const MethodInfo* get() {
    static auto* tr = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* pos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* rot = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ExtensionMethods*), "SetLocalPositionAndRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tr, pos, rot});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ExtensionMethods::GetPath
// Il2CppName: GetPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::UnityEngine::Transform*)>(&GlobalNamespace::ExtensionMethods::GetPath)> {
  static const MethodInfo* get() {
    static auto* current = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ExtensionMethods*), "GetPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{current});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ExtensionMethods::Reflect
// Il2CppName: Reflect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Quaternion, ::UnityEngine::Vector3)>(&GlobalNamespace::ExtensionMethods::Reflect)> {
  static const MethodInfo* get() {
    static auto* source = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* normal = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ExtensionMethods*), "Reflect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{source, normal});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ExtensionMethods::CreateTexture2D
// Il2CppName: CreateTexture2D
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Texture2D* (*)(::UnityEngine::RenderTexture*, ::UnityEngine::TextureFormat)>(&GlobalNamespace::ExtensionMethods::CreateTexture2D)> {
  static const MethodInfo* get() {
    static auto* renderTexture = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTexture")->byval_arg;
    static auto* textureFormat = &::il2cpp_utils::GetClassFromName("UnityEngine", "TextureFormat")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ExtensionMethods*), "CreateTexture2D", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{renderTexture, textureFormat});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ExtensionMethods::Rotate
// Il2CppName: Rotate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector2, float)>(&GlobalNamespace::ExtensionMethods::Rotate)> {
  static const MethodInfo* get() {
    static auto* vector = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* rads = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ExtensionMethods*), "Rotate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{vector, rads});
  }
};
