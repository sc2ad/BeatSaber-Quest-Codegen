// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Reflection.EventInfo
#include "System/Reflection/EventInfo.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: Delegate because it is already included!
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Reflection::EventInfo::AddEventAdapter);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::EventInfo::AddEventAdapter*, "System.Reflection", "EventInfo/AddEventAdapter");
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: System.Reflection.EventInfo/System.Reflection.AddEventAdapter
  // [TokenAttribute] Offset: FFFFFFFF
  class EventInfo::AddEventAdapter : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x2166D60
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EventInfo::AddEventAdapter* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Reflection::EventInfo::AddEventAdapter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EventInfo::AddEventAdapter*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.Object _this, System.Delegate dele)
    // Offset: 0x2166D70
    void Invoke(::Il2CppObject* _this, ::System::Delegate* dele);
    // public System.IAsyncResult BeginInvoke(System.Object _this, System.Delegate dele, System.AsyncCallback callback, System.Object object)
    // Offset: 0x2167158
    ::System::IAsyncResult* BeginInvoke(::Il2CppObject* _this, ::System::Delegate* dele, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x2167188
    void EndInvoke(::System::IAsyncResult* result);
  }; // System.Reflection.EventInfo/System.Reflection.AddEventAdapter
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Reflection::EventInfo::AddEventAdapter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Reflection::EventInfo::AddEventAdapter::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Reflection::EventInfo::AddEventAdapter::*)(::Il2CppObject*, ::System::Delegate*)>(&System::Reflection::EventInfo::AddEventAdapter::Invoke)> {
  static const MethodInfo* get() {
    static auto* _this = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* dele = &::il2cpp_utils::GetClassFromName("System", "Delegate")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::EventInfo::AddEventAdapter*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_this, dele});
  }
};
// Writing MetadataGetter for method: System::Reflection::EventInfo::AddEventAdapter::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (System::Reflection::EventInfo::AddEventAdapter::*)(::Il2CppObject*, ::System::Delegate*, ::System::AsyncCallback*, ::Il2CppObject*)>(&System::Reflection::EventInfo::AddEventAdapter::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* _this = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* dele = &::il2cpp_utils::GetClassFromName("System", "Delegate")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::EventInfo::AddEventAdapter*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_this, dele, callback, object});
  }
};
// Writing MetadataGetter for method: System::Reflection::EventInfo::AddEventAdapter::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Reflection::EventInfo::AddEventAdapter::*)(::System::IAsyncResult*)>(&System::Reflection::EventInfo::AddEventAdapter::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::EventInfo::AddEventAdapter*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
