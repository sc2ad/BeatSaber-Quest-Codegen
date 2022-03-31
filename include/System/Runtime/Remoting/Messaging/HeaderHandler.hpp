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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: Header
  class Header;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: HeaderHandler
  class HeaderHandler;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::HeaderHandler);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::HeaderHandler*, "System.Runtime.Remoting.Messaging", "HeaderHandler");
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Messaging.HeaderHandler
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 11AC7CC
  class HeaderHandler : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1C68AD4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HeaderHandler* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Remoting::Messaging::HeaderHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HeaderHandler*, creationType>(object, method)));
    }
    // public System.Object Invoke(System.Runtime.Remoting.Messaging.Header[] headers)
    // Offset: 0x1C68AE4
    ::Il2CppObject* Invoke(::ArrayW<::System::Runtime::Remoting::Messaging::Header*> headers);
    // public System.IAsyncResult BeginInvoke(System.Runtime.Remoting.Messaging.Header[] headers, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1C68E80
    ::System::IAsyncResult* BeginInvoke(::ArrayW<::System::Runtime::Remoting::Messaging::Header*> headers, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Object EndInvoke(System.IAsyncResult result)
    // Offset: 0x1C68EA4
    ::Il2CppObject* EndInvoke(::System::IAsyncResult* result);
  }; // System.Runtime.Remoting.Messaging.HeaderHandler
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::HeaderHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::HeaderHandler::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Runtime::Remoting::Messaging::HeaderHandler::*)(::ArrayW<::System::Runtime::Remoting::Messaging::Header*>)>(&System::Runtime::Remoting::Messaging::HeaderHandler::Invoke)> {
  static const MethodInfo* get() {
    static auto* headers = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Runtime.Remoting.Messaging", "Header"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::HeaderHandler*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{headers});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::HeaderHandler::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (System::Runtime::Remoting::Messaging::HeaderHandler::*)(::ArrayW<::System::Runtime::Remoting::Messaging::Header*>, ::System::AsyncCallback*, ::Il2CppObject*)>(&System::Runtime::Remoting::Messaging::HeaderHandler::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* headers = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Runtime.Remoting.Messaging", "Header"), 1)->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::HeaderHandler*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{headers, callback, object});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::HeaderHandler::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Runtime::Remoting::Messaging::HeaderHandler::*)(::System::IAsyncResult*)>(&System::Runtime::Remoting::Messaging::HeaderHandler::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::HeaderHandler*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
