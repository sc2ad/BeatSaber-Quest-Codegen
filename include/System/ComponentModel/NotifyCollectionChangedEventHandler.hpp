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
// Forward declaring namespace: System::ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: NotifyCollectionChangedEventArgs
  class NotifyCollectionChangedEventArgs;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: NotifyCollectionChangedEventHandler
  class NotifyCollectionChangedEventHandler;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::NotifyCollectionChangedEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::NotifyCollectionChangedEventHandler*, "System.ComponentModel", "NotifyCollectionChangedEventHandler");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.NotifyCollectionChangedEventHandler
  // [TokenAttribute] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: 10ED9EC
  class NotifyCollectionChangedEventHandler : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x21296FC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NotifyCollectionChangedEventHandler* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::NotifyCollectionChangedEventHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NotifyCollectionChangedEventHandler*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.Object sender, System.ComponentModel.NotifyCollectionChangedEventArgs e)
    // Offset: 0x212970C
    void Invoke(::Il2CppObject* sender, ::System::ComponentModel::NotifyCollectionChangedEventArgs* e);
    // public System.IAsyncResult BeginInvoke(System.Object sender, System.ComponentModel.NotifyCollectionChangedEventArgs e, System.AsyncCallback callback, System.Object object)
    // Offset: 0x2129AF4
    ::System::IAsyncResult* BeginInvoke(::Il2CppObject* sender, ::System::ComponentModel::NotifyCollectionChangedEventArgs* e, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x2129B24
    void EndInvoke(::System::IAsyncResult* result);
  }; // System.ComponentModel.NotifyCollectionChangedEventHandler
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::NotifyCollectionChangedEventHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::NotifyCollectionChangedEventHandler::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::NotifyCollectionChangedEventHandler::*)(::Il2CppObject*, ::System::ComponentModel::NotifyCollectionChangedEventArgs*)>(&System::ComponentModel::NotifyCollectionChangedEventHandler::Invoke)> {
  static const MethodInfo* get() {
    static auto* sender = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* e = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "NotifyCollectionChangedEventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::NotifyCollectionChangedEventHandler*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sender, e});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::NotifyCollectionChangedEventHandler::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (System::ComponentModel::NotifyCollectionChangedEventHandler::*)(::Il2CppObject*, ::System::ComponentModel::NotifyCollectionChangedEventArgs*, ::System::AsyncCallback*, ::Il2CppObject*)>(&System::ComponentModel::NotifyCollectionChangedEventHandler::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* sender = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* e = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "NotifyCollectionChangedEventArgs")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::NotifyCollectionChangedEventHandler*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sender, e, callback, object});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::NotifyCollectionChangedEventHandler::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::NotifyCollectionChangedEventHandler::*)(::System::IAsyncResult*)>(&System::ComponentModel::NotifyCollectionChangedEventHandler::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::NotifyCollectionChangedEventHandler*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
