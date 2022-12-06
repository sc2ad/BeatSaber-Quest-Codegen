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
  // Forward declaring type: ListChangedEventArgs
  class ListChangedEventArgs;
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
  // Forward declaring type: ListChangedEventHandler
  class ListChangedEventHandler;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::ListChangedEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::ListChangedEventHandler*, "System.ComponentModel", "ListChangedEventHandler");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.ListChangedEventHandler
  // [TokenAttribute] Offset: FFFFFFFF
  class ListChangedEventHandler : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1E2064C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ListChangedEventHandler* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::ListChangedEventHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ListChangedEventHandler*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.Object sender, System.ComponentModel.ListChangedEventArgs e)
    // Offset: 0x1E2065C
    void Invoke(::Il2CppObject* sender, ::System::ComponentModel::ListChangedEventArgs* e);
    // public System.IAsyncResult BeginInvoke(System.Object sender, System.ComponentModel.ListChangedEventArgs e, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1E20A44
    ::System::IAsyncResult* BeginInvoke(::Il2CppObject* sender, ::System::ComponentModel::ListChangedEventArgs* e, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1E20A74
    void EndInvoke(::System::IAsyncResult* result);
  }; // System.ComponentModel.ListChangedEventHandler
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::ListChangedEventHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::ListChangedEventHandler::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::ListChangedEventHandler::*)(::Il2CppObject*, ::System::ComponentModel::ListChangedEventArgs*)>(&System::ComponentModel::ListChangedEventHandler::Invoke)> {
  static const MethodInfo* get() {
    static auto* sender = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* e = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "ListChangedEventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ListChangedEventHandler*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sender, e});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ListChangedEventHandler::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (System::ComponentModel::ListChangedEventHandler::*)(::Il2CppObject*, ::System::ComponentModel::ListChangedEventArgs*, ::System::AsyncCallback*, ::Il2CppObject*)>(&System::ComponentModel::ListChangedEventHandler::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* sender = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* e = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "ListChangedEventArgs")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ListChangedEventHandler*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sender, e, callback, object});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ListChangedEventHandler::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::ListChangedEventHandler::*)(::System::IAsyncResult*)>(&System::ComponentModel::ListChangedEventHandler::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ListChangedEventHandler*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
