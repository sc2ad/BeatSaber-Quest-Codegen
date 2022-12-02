// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HoudiniEngineUnity.HEU_AttributesStore
#include "HoudiniEngineUnity/HEU_AttributesStore.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HEU_AttributeData
  class HEU_AttributeData;
  // Forward declaring type: HEU_ToolsInfo
  class HEU_ToolsInfo;
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
NEED_NO_BOX(::HoudiniEngineUnity::HEU_AttributesStore::SetAttributeValueFunc);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_AttributesStore::SetAttributeValueFunc*, "HoudiniEngineUnity", "HEU_AttributesStore/SetAttributeValueFunc");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HEU_AttributesStore/HoudiniEngineUnity.SetAttributeValueFunc
  // [TokenAttribute] Offset: FFFFFFFF
  class HEU_AttributesStore::SetAttributeValueFunc : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1723128
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HEU_AttributesStore::SetAttributeValueFunc* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::HoudiniEngineUnity::HEU_AttributesStore::SetAttributeValueFunc::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HEU_AttributesStore::SetAttributeValueFunc*, creationType>(object, method)));
    }
    // public System.Void Invoke(HoudiniEngineUnity.HEU_AttributeData attributeData, System.Int32 targetIndex, HoudiniEngineUnity.HEU_ToolsInfo sourceTools, System.Int32 sourceIndex, System.Single factor)
    // Offset: 0x1721CFC
    void Invoke(::HoudiniEngineUnity::HEU_AttributeData* attributeData, int targetIndex, ::HoudiniEngineUnity::HEU_ToolsInfo* sourceTools, int sourceIndex, float factor);
    // public System.IAsyncResult BeginInvoke(HoudiniEngineUnity.HEU_AttributeData attributeData, System.Int32 targetIndex, HoudiniEngineUnity.HEU_ToolsInfo sourceTools, System.Int32 sourceIndex, System.Single factor, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1723830
    ::System::IAsyncResult* BeginInvoke(::HoudiniEngineUnity::HEU_AttributeData* attributeData, int targetIndex, ::HoudiniEngineUnity::HEU_ToolsInfo* sourceTools, int sourceIndex, float factor, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1723908
    void EndInvoke(::System::IAsyncResult* result);
  }; // HoudiniEngineUnity.HEU_AttributesStore/HoudiniEngineUnity.SetAttributeValueFunc
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_AttributesStore::SetAttributeValueFunc::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_AttributesStore::SetAttributeValueFunc::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_AttributesStore::SetAttributeValueFunc::*)(::HoudiniEngineUnity::HEU_AttributeData*, int, ::HoudiniEngineUnity::HEU_ToolsInfo*, int, float)>(&HoudiniEngineUnity::HEU_AttributesStore::SetAttributeValueFunc::Invoke)> {
  static const MethodInfo* get() {
    static auto* attributeData = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_AttributeData")->byval_arg;
    static auto* targetIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* sourceTools = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_ToolsInfo")->byval_arg;
    static auto* sourceIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* factor = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_AttributesStore::SetAttributeValueFunc*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attributeData, targetIndex, sourceTools, sourceIndex, factor});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_AttributesStore::SetAttributeValueFunc::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (HoudiniEngineUnity::HEU_AttributesStore::SetAttributeValueFunc::*)(::HoudiniEngineUnity::HEU_AttributeData*, int, ::HoudiniEngineUnity::HEU_ToolsInfo*, int, float, ::System::AsyncCallback*, ::Il2CppObject*)>(&HoudiniEngineUnity::HEU_AttributesStore::SetAttributeValueFunc::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* attributeData = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_AttributeData")->byval_arg;
    static auto* targetIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* sourceTools = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_ToolsInfo")->byval_arg;
    static auto* sourceIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* factor = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_AttributesStore::SetAttributeValueFunc*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attributeData, targetIndex, sourceTools, sourceIndex, factor, callback, object});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_AttributesStore::SetAttributeValueFunc::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_AttributesStore::SetAttributeValueFunc::*)(::System::IAsyncResult*)>(&HoudiniEngineUnity::HEU_AttributesStore::SetAttributeValueFunc::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_AttributesStore::SetAttributeValueFunc*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
