// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
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
  // Forward declaring type: Object
  class Object;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: Assets.OVR.Scripts
namespace Assets::OVR::Scripts {
  // Forward declaring type: FixMethodDelegate
  class FixMethodDelegate;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Assets::OVR::Scripts::FixMethodDelegate);
DEFINE_IL2CPP_ARG_TYPE(::Assets::OVR::Scripts::FixMethodDelegate*, "Assets.OVR.Scripts", "FixMethodDelegate");
// Type namespace: Assets.OVR.Scripts
namespace Assets::OVR::Scripts {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Assets.OVR.Scripts.FixMethodDelegate
  // [TokenAttribute] Offset: FFFFFFFF
  class FixMethodDelegate : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1A52058
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FixMethodDelegate* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Assets::OVR::Scripts::FixMethodDelegate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FixMethodDelegate*, creationType>(object, method)));
    }
    // public System.Void Invoke(UnityEngine.Object obj, System.Boolean isLastInSet, System.Int32 selectedIndex)
    // Offset: 0x1A52068
    void Invoke(::UnityEngine::Object* obj, bool isLastInSet, int selectedIndex);
    // public System.IAsyncResult BeginInvoke(UnityEngine.Object obj, System.Boolean isLastInSet, System.Int32 selectedIndex, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1A524B8
    ::System::IAsyncResult* BeginInvoke(::UnityEngine::Object* obj, bool isLastInSet, int selectedIndex, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1A52578
    void EndInvoke(::System::IAsyncResult* result);
  }; // Assets.OVR.Scripts.FixMethodDelegate
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Assets::OVR::Scripts::FixMethodDelegate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Assets::OVR::Scripts::FixMethodDelegate::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Assets::OVR::Scripts::FixMethodDelegate::*)(::UnityEngine::Object*, bool, int)>(&Assets::OVR::Scripts::FixMethodDelegate::Invoke)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    static auto* isLastInSet = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* selectedIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Assets::OVR::Scripts::FixMethodDelegate*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, isLastInSet, selectedIndex});
  }
};
// Writing MetadataGetter for method: Assets::OVR::Scripts::FixMethodDelegate::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (Assets::OVR::Scripts::FixMethodDelegate::*)(::UnityEngine::Object*, bool, int, ::System::AsyncCallback*, ::Il2CppObject*)>(&Assets::OVR::Scripts::FixMethodDelegate::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    static auto* isLastInSet = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* selectedIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Assets::OVR::Scripts::FixMethodDelegate*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, isLastInSet, selectedIndex, callback, object});
  }
};
// Writing MetadataGetter for method: Assets::OVR::Scripts::FixMethodDelegate::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Assets::OVR::Scripts::FixMethodDelegate::*)(::System::IAsyncResult*)>(&Assets::OVR::Scripts::FixMethodDelegate::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Assets::OVR::Scripts::FixMethodDelegate*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
