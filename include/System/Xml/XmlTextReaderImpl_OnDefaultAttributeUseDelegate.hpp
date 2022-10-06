// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.XmlTextReaderImpl
#include "System/Xml/XmlTextReaderImpl.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: IDtdDefaultAttributeInfo
  class IDtdDefaultAttributeInfo;
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
NEED_NO_BOX(::System::Xml::XmlTextReaderImpl::OnDefaultAttributeUseDelegate);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlTextReaderImpl::OnDefaultAttributeUseDelegate*, "System.Xml", "XmlTextReaderImpl/OnDefaultAttributeUseDelegate");
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.XmlTextReaderImpl/System.Xml.OnDefaultAttributeUseDelegate
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlTextReaderImpl::OnDefaultAttributeUseDelegate : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x27AA100
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlTextReaderImpl::OnDefaultAttributeUseDelegate* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::XmlTextReaderImpl::OnDefaultAttributeUseDelegate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlTextReaderImpl::OnDefaultAttributeUseDelegate*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.Xml.IDtdDefaultAttributeInfo defaultAttribute, System.Xml.XmlTextReaderImpl coreReader)
    // Offset: 0x27AA110
    void Invoke(::System::Xml::IDtdDefaultAttributeInfo* defaultAttribute, ::System::Xml::XmlTextReaderImpl* coreReader);
    // public System.IAsyncResult BeginInvoke(System.Xml.IDtdDefaultAttributeInfo defaultAttribute, System.Xml.XmlTextReaderImpl coreReader, System.AsyncCallback callback, System.Object object)
    // Offset: 0x27AA4F8
    ::System::IAsyncResult* BeginInvoke(::System::Xml::IDtdDefaultAttributeInfo* defaultAttribute, ::System::Xml::XmlTextReaderImpl* coreReader, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x27AA528
    void EndInvoke(::System::IAsyncResult* result);
  }; // System.Xml.XmlTextReaderImpl/System.Xml.OnDefaultAttributeUseDelegate
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::XmlTextReaderImpl::OnDefaultAttributeUseDelegate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::XmlTextReaderImpl::OnDefaultAttributeUseDelegate::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::OnDefaultAttributeUseDelegate::*)(::System::Xml::IDtdDefaultAttributeInfo*, ::System::Xml::XmlTextReaderImpl*)>(&System::Xml::XmlTextReaderImpl::OnDefaultAttributeUseDelegate::Invoke)> {
  static const MethodInfo* get() {
    static auto* defaultAttribute = &::il2cpp_utils::GetClassFromName("System.Xml", "IDtdDefaultAttributeInfo")->byval_arg;
    static auto* coreReader = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlTextReaderImpl")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlTextReaderImpl::OnDefaultAttributeUseDelegate*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{defaultAttribute, coreReader});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlTextReaderImpl::OnDefaultAttributeUseDelegate::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (System::Xml::XmlTextReaderImpl::OnDefaultAttributeUseDelegate::*)(::System::Xml::IDtdDefaultAttributeInfo*, ::System::Xml::XmlTextReaderImpl*, ::System::AsyncCallback*, ::Il2CppObject*)>(&System::Xml::XmlTextReaderImpl::OnDefaultAttributeUseDelegate::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* defaultAttribute = &::il2cpp_utils::GetClassFromName("System.Xml", "IDtdDefaultAttributeInfo")->byval_arg;
    static auto* coreReader = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlTextReaderImpl")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlTextReaderImpl::OnDefaultAttributeUseDelegate*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{defaultAttribute, coreReader, callback, object});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlTextReaderImpl::OnDefaultAttributeUseDelegate::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::OnDefaultAttributeUseDelegate::*)(::System::IAsyncResult*)>(&System::Xml::XmlTextReaderImpl::OnDefaultAttributeUseDelegate::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlTextReaderImpl::OnDefaultAttributeUseDelegate*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
