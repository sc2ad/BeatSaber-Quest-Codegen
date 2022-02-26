// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Schema.XdrBuilder
#include "System/Xml/Schema/XdrBuilder.hpp"
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
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::XdrBuilder::XdrEndChildFunction);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XdrBuilder::XdrEndChildFunction*, "System.Xml.Schema", "XdrBuilder/XdrEndChildFunction");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.XdrBuilder/System.Xml.Schema.XdrEndChildFunction
  // [TokenAttribute] Offset: FFFFFFFF
  class XdrBuilder::XdrEndChildFunction : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1C71EAC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XdrBuilder::XdrEndChildFunction* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::XdrBuilder::XdrEndChildFunction::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XdrBuilder::XdrEndChildFunction*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.Xml.Schema.XdrBuilder builder)
    // Offset: 0x1C71EBC
    void Invoke(::System::Xml::Schema::XdrBuilder* builder);
    // public System.IAsyncResult BeginInvoke(System.Xml.Schema.XdrBuilder builder, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1C72250
    ::System::IAsyncResult* BeginInvoke(::System::Xml::Schema::XdrBuilder* builder, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1C72274
    void EndInvoke(::System::IAsyncResult* result);
  }; // System.Xml.Schema.XdrBuilder/System.Xml.Schema.XdrEndChildFunction
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::XdrBuilder::XdrEndChildFunction::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::XdrBuilder::XdrEndChildFunction::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XdrBuilder::XdrEndChildFunction::*)(::System::Xml::Schema::XdrBuilder*)>(&System::Xml::Schema::XdrBuilder::XdrEndChildFunction::Invoke)> {
  static const MethodInfo* get() {
    static auto* builder = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XdrBuilder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XdrBuilder::XdrEndChildFunction*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{builder});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XdrBuilder::XdrEndChildFunction::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (System::Xml::Schema::XdrBuilder::XdrEndChildFunction::*)(::System::Xml::Schema::XdrBuilder*, ::System::AsyncCallback*, ::Il2CppObject*)>(&System::Xml::Schema::XdrBuilder::XdrEndChildFunction::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* builder = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XdrBuilder")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XdrBuilder::XdrEndChildFunction*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{builder, callback, object});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XdrBuilder::XdrEndChildFunction::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XdrBuilder::XdrEndChildFunction::*)(::System::IAsyncResult*)>(&System::Xml::Schema::XdrBuilder::XdrEndChildFunction::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XdrBuilder::XdrEndChildFunction*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
