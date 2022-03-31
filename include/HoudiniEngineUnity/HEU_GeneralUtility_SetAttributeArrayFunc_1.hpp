// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HoudiniEngineUnity.HEU_GeneralUtility
#include "HoudiniEngineUnity/HEU_GeneralUtility.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: HoudiniEngineUnity.HAPI_AttributeInfo
#include "HoudiniEngineUnity/HAPI_AttributeInfo.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::HoudiniEngineUnity::HEU_GeneralUtility::SetAttributeArrayFunc_1, "HoudiniEngineUnity", "HEU_GeneralUtility/SetAttributeArrayFunc`1");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // WARNING Size may be invalid!
  // Autogenerated type: HoudiniEngineUnity.HEU_GeneralUtility/HoudiniEngineUnity.SetAttributeArrayFunc`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class HEU_GeneralUtility::SetAttributeArrayFunc_1 : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HEU_GeneralUtility::SetAttributeArrayFunc_1<T>* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::HoudiniEngineUnity::HEU_GeneralUtility::SetAttributeArrayFunc_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HEU_GeneralUtility::SetAttributeArrayFunc_1<T>*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(System.Int32 geoID, System.Int32 partID, System.String attrName, ref HoudiniEngineUnity.HAPI_AttributeInfo attrInfo, T[] items, System.Int32 start, System.Int32 end)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool Invoke(int geoID, int partID, ::StringW attrName, ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo> attrInfo, ::ArrayW<T> items, int start, int end) {
      static auto ___internal__logger = ::Logger::get().WithContext("::HoudiniEngineUnity::HEU_GeneralUtility::SetAttributeArrayFunc_1::Invoke");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Invoke", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(geoID), ::il2cpp_utils::ExtractType(partID), ::il2cpp_utils::ExtractType(attrName), ::il2cpp_utils::ExtractType(attrInfo), ::il2cpp_utils::ExtractType(items), ::il2cpp_utils::ExtractType(start), ::il2cpp_utils::ExtractType(end)})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, geoID, partID, attrName, byref(attrInfo), items, start, end);
    }
    // public System.IAsyncResult BeginInvoke(System.Int32 geoID, System.Int32 partID, System.String attrName, ref HoudiniEngineUnity.HAPI_AttributeInfo attrInfo, T[] items, System.Int32 start, System.Int32 end, System.AsyncCallback callback, System.Object object)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::IAsyncResult* BeginInvoke(int geoID, int partID, ::StringW attrName, ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo> attrInfo, ::ArrayW<T> items, int start, int end, ::System::AsyncCallback* callback, ::Il2CppObject* object) {
      static auto ___internal__logger = ::Logger::get().WithContext("::HoudiniEngineUnity::HEU_GeneralUtility::SetAttributeArrayFunc_1::BeginInvoke");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "BeginInvoke", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(geoID), ::il2cpp_utils::ExtractType(partID), ::il2cpp_utils::ExtractType(attrName), ::il2cpp_utils::ExtractType(attrInfo), ::il2cpp_utils::ExtractType(items), ::il2cpp_utils::ExtractType(start), ::il2cpp_utils::ExtractType(end), ::il2cpp_utils::ExtractType(callback), ::il2cpp_utils::ExtractType(object)})));
      return ::il2cpp_utils::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal__method, geoID, partID, attrName, byref(attrInfo), items, start, end, callback, object);
    }
    // public System.Boolean EndInvoke(ref HoudiniEngineUnity.HAPI_AttributeInfo attrInfo, System.IAsyncResult result)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool EndInvoke(ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo> attrInfo, ::System::IAsyncResult* result) {
      static auto ___internal__logger = ::Logger::get().WithContext("::HoudiniEngineUnity::HEU_GeneralUtility::SetAttributeArrayFunc_1::EndInvoke");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "EndInvoke", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(attrInfo), ::il2cpp_utils::ExtractType(result)})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, byref(attrInfo), result);
    }
  }; // HoudiniEngineUnity.HEU_GeneralUtility/HoudiniEngineUnity.SetAttributeArrayFunc`1
  // Could not write size check! Type: HoudiniEngineUnity.HEU_GeneralUtility/HoudiniEngineUnity.SetAttributeArrayFunc`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
