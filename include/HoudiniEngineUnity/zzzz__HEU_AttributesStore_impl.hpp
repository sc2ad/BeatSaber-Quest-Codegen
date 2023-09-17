#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
namespace {
#include "HoudiniEngineUnity/zzzz__HEU_AttributesStore_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_ToolsInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_AttributeOwner_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_AttributeData_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_AttributeInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_HoudiniAsset_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MeshCollider_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_PartType_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_AttributeData_def.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_ToolsInfo_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_PartInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_SessionBase_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_AttributesStore__SetAttributeValueFunc._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_AttributesStore__SetAttributeValueFunc::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_AttributesStore__SetAttributeValueFunc::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2010f7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_AttributesStore__SetAttributeValueFunc>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_AttributesStore__SetAttributeValueFunc.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_AttributesStore__SetAttributeValueFunc::*)(::HoudiniEngineUnity::HEU_AttributeData, int32_t, ::HoudiniEngineUnity::HEU_ToolsInfo, int32_t, float_t)>(&::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_AttributesStore__SetAttributeValueFunc::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2011054;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_AttributesStore__SetAttributeValueFunc),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_AttributesStore__SetAttributeValueFunc>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_AttributesStore__SetAttributeValueFunc.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_AttributesStore__SetAttributeValueFunc::*)(::HoudiniEngineUnity::HEU_AttributeData, int32_t, ::HoudiniEngineUnity::HEU_ToolsInfo, int32_t, float_t, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_AttributesStore__SetAttributeValueFunc::BeginInvoke)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x2011068;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_AttributesStore__SetAttributeValueFunc),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_AttributesStore__SetAttributeValueFunc>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_AttributesStore__SetAttributeValueFunc.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_AttributesStore__SetAttributeValueFunc::*)(::System::IAsyncResult)>(&::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_AttributesStore__SetAttributeValueFunc::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2011148;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_AttributesStore__SetAttributeValueFunc),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_AttributesStore__SetAttributeValueFunc>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_AttributesStore__SetAttributeValueFunc::____HoudiniEngineUnity__HEU_AttributesStore__SetAttributeValueFunc(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____HoudiniEngineUnity__HEU_AttributesStore__SetAttributeValueFunc>(object, method))) {}
 void ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_AttributesStore__SetAttributeValueFunc::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_AttributesStore__SetAttributeValueFunc>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_AttributesStore__SetAttributeValueFunc::Invoke(::HoudiniEngineUnity::HEU_AttributeData attributeData, int32_t targetIndex, ::HoudiniEngineUnity::HEU_ToolsInfo sourceTools, int32_t sourceIndex, float_t factor)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_AttributesStore__SetAttributeValueFunc>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributeData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_ToolsInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, attributeData, targetIndex, sourceTools, sourceIndex, factor);
}
 ::System::IAsyncResult ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_AttributesStore__SetAttributeValueFunc::BeginInvoke(::HoudiniEngineUnity::HEU_AttributeData attributeData, int32_t targetIndex, ::HoudiniEngineUnity::HEU_ToolsInfo sourceTools, int32_t sourceIndex, float_t factor, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_AttributesStore__SetAttributeValueFunc>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributeData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_ToolsInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, attributeData, targetIndex, sourceTools, sourceIndex, factor, callback, object);
}
 void ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_AttributesStore__SetAttributeValueFunc::EndInvoke(::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_AttributesStore__SetAttributeValueFunc>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.get_GeoID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::HoudiniEngineUnity::HEU_AttributesStore::*)()>(&::HoudiniEngineUnity::HEU_AttributesStore::get_GeoID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x200c404;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "get_GeoID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.get_PartID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::HoudiniEngineUnity::HEU_AttributesStore::*)()>(&::HoudiniEngineUnity::HEU_AttributesStore::get_PartID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x200c40c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "get_PartID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.get_GeoName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::HoudiniEngineUnity::HEU_AttributesStore::*)()>(&::HoudiniEngineUnity::HEU_AttributesStore::get_GeoName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x200c414;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "get_GeoName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.HasColorAttribute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_AttributesStore::*)()>(&::HoudiniEngineUnity::HEU_AttributesStore::HasColorAttribute)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x200c41c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "HasColorAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.get_OutputTransform
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform (::HoudiniEngineUnity::HEU_AttributesStore::*)()>(&::HoudiniEngineUnity::HEU_AttributesStore::get_OutputTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x200c424;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "get_OutputTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.get_OutputMesh
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Mesh (::HoudiniEngineUnity::HEU_AttributesStore::*)()>(&::HoudiniEngineUnity::HEU_AttributesStore::get_OutputMesh)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x200c42c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "get_OutputMesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.DestroyAllData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_AttributesStore::*)(::HoudiniEngineUnity::HEU_HoudiniAsset)>(&::HoudiniEngineUnity::HEU_AttributesStore::DestroyAllData)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x200b0e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "DestroyAllData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.SyncAllAttributesFrom
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_AttributesStore::*)(::HoudiniEngineUnity::HEU_SessionBase, ::HoudiniEngineUnity::HEU_HoudiniAsset, int32_t, ByRef<::HoudiniEngineUnity::HAPI_PartInfo>, ::UnityEngine::GameObject)>(&::HoudiniEngineUnity::HEU_AttributesStore::SyncAllAttributesFrom)> {
  constexpr static std::size_t size = 0x698;
  constexpr static std::size_t addrs = 0x200a6a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "SyncAllAttributesFrom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HAPI_PartInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.SetupMeshAndMaterials
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_AttributesStore::*)(::HoudiniEngineUnity::HEU_HoudiniAsset, ::HoudiniEngineUnity::HAPI_PartType, ::UnityEngine::GameObject)>(&::HoudiniEngineUnity::HEU_AttributesStore::SetupMeshAndMaterials)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0x200ad3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "SetupMeshAndMaterials",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HAPI_PartType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.HasDirtyAttributes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_AttributesStore::*)()>(&::HoudiniEngineUnity::HEU_AttributesStore::HasDirtyAttributes)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x200cdd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "HasDirtyAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.SyncDirtyAttributesToHoudini
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_AttributesStore::*)(::HoudiniEngineUnity::HEU_SessionBase)>(&::HoudiniEngineUnity::HEU_AttributesStore::SyncDirtyAttributesToHoudini)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x200cf58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "SyncDirtyAttributesToHoudini",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.PopulateAttributeData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_AttributesStore::*)(::HoudiniEngineUnity::HEU_SessionBase, int32_t, int32_t, ::HoudiniEngineUnity::HEU_AttributeData, ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo>)>(&::HoudiniEngineUnity::HEU_AttributesStore::PopulateAttributeData)> {
  constexpr static std::size_t size = 0x75c;
  constexpr static std::size_t addrs = 0x200c678;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "PopulateAttributeData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributeData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.GetAttributesList
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_AttributesStore::*)(::HoudiniEngineUnity::HEU_SessionBase, int32_t, int32_t, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_AttributeData>, ::HoudiniEngineUnity::HAPI_AttributeOwner, int32_t)>(&::HoudiniEngineUnity::HEU_AttributesStore::GetAttributesList)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x200d4d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "GetAttributesList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_AttributeData>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HAPI_AttributeOwner>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.UpdateAttribute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_AttributesStore::*)(::HoudiniEngineUnity::HEU_SessionBase, int32_t, int32_t, ::HoudiniEngineUnity::HEU_AttributeData)>(&::HoudiniEngineUnity::HEU_AttributesStore::UpdateAttribute)> {
  constexpr static std::size_t size = 0x4bc;
  constexpr static std::size_t addrs = 0x200d740;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "UpdateAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributeData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.UpdateAttributeList
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_AttributesStore::*)(::HoudiniEngineUnity::HEU_SessionBase, int32_t, int32_t, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_AttributeData>)>(&::HoudiniEngineUnity::HEU_AttributesStore::UpdateAttributeList)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x200dbfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "UpdateAttributeList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_AttributeData>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.RefreshUpstreamInputs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_AttributesStore::*)(::HoudiniEngineUnity::HEU_SessionBase)>(&::HoudiniEngineUnity::HEU_AttributesStore::RefreshUpstreamInputs)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x200dd50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "RefreshUpstreamInputs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.UploadAttributeViaMeshInput
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_AttributesStore::*)(::HoudiniEngineUnity::HEU_SessionBase, int32_t, int32_t)>(&::HoudiniEngineUnity::HEU_AttributesStore::UploadAttributeViaMeshInput)> {
  constexpr static std::size_t size = 0x4f8;
  constexpr static std::size_t addrs = 0x200cfc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "UploadAttributeViaMeshInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.SetAttributeDataSyncd
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::HoudiniEngineUnity::HEU_AttributeData)>(&::HoudiniEngineUnity::HEU_AttributesStore::SetAttributeDataSyncd)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x200d4bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "SetAttributeDataSyncd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributeData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.SetAttributeDataDirty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::HoudiniEngineUnity::HEU_AttributeData)>(&::HoudiniEngineUnity::HEU_AttributesStore::SetAttributeDataDirty)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x200ddc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "SetAttributeDataDirty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributeData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.CreateAttribute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_AttributeData (::HoudiniEngineUnity::HEU_AttributesStore::*)(::StringW, ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo>)>(&::HoudiniEngineUnity::HEU_AttributesStore::CreateAttribute)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x200c5c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "CreateAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.GetAttributeData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_AttributeData (::HoudiniEngineUnity::HEU_AttributesStore::*)(::StringW)>(&::HoudiniEngineUnity::HEU_AttributesStore::GetAttributeData)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x200c434;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "GetAttributeData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.GetAttributeData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_AttributeData (::HoudiniEngineUnity::HEU_AttributesStore::*)(int32_t)>(&::HoudiniEngineUnity::HEU_AttributesStore::GetAttributeData)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x200dde4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "GetAttributeData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.GetAttributeNames
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::StringW> (::HoudiniEngineUnity::HEU_AttributesStore::*)()>(&::HoudiniEngineUnity::HEU_AttributesStore::GetAttributeNames)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x200de68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "GetAttributeNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.EnablePaintCollider
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_AttributesStore::*)()>(&::HoudiniEngineUnity::HEU_AttributesStore::EnablePaintCollider)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x200e06c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "EnablePaintCollider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.DisablePaintCollider
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_AttributesStore::*)()>(&::HoudiniEngineUnity::HEU_AttributesStore::DisablePaintCollider)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x200e210;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "DisablePaintCollider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.ShowPaintMesh
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_AttributesStore::*)()>(&::HoudiniEngineUnity::HEU_AttributesStore::ShowPaintMesh)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x200e328;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "ShowPaintMesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.HidePaintMesh
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_AttributesStore::*)()>(&::HoudiniEngineUnity::HEU_AttributesStore::HidePaintMesh)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x200e44c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "HidePaintMesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.HasMeshForPainting
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_AttributesStore::*)()>(&::HoudiniEngineUnity::HEU_AttributesStore::HasMeshForPainting)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x200e534;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "HasMeshForPainting",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.GetPaintMeshCollider
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::MeshCollider (::HoudiniEngineUnity::HEU_AttributesStore::*)()>(&::HoudiniEngineUnity::HEU_AttributesStore::GetPaintMeshCollider)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x200e594;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "GetPaintMeshCollider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.PaintAttribute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_AttributesStore::*)(::HoudiniEngineUnity::HEU_AttributeData, ::HoudiniEngineUnity::HEU_ToolsInfo, int32_t, float_t, ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_AttributesStore__SetAttributeValueFunc)>(&::HoudiniEngineUnity::HEU_AttributesStore::PaintAttribute)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x200e60c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "PaintAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributeData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_ToolsInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_AttributesStore__SetAttributeValueFunc>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.SetAttributeEditValueInt
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::HoudiniEngineUnity::HEU_AttributeData, int32_t, ::ArrayW<int32_t>)>(&::HoudiniEngineUnity::HEU_AttributesStore::SetAttributeEditValueInt)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x200e660;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "SetAttributeEditValueInt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributeData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.SetAttributeEditValueFloat
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::HoudiniEngineUnity::HEU_AttributeData, int32_t, ::ArrayW<float_t>)>(&::HoudiniEngineUnity::HEU_AttributesStore::SetAttributeEditValueFloat)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x200e6cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "SetAttributeEditValueFloat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributeData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.SetAttributeEditValueString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::HoudiniEngineUnity::HEU_AttributeData, int32_t, ::ArrayW<::StringW>)>(&::HoudiniEngineUnity::HEU_AttributesStore::SetAttributeEditValueString)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x200e738;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "SetAttributeEditValueString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributeData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.ReplaceAttributeValueInt
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::HoudiniEngineUnity::HEU_AttributeData, int32_t, ::HoudiniEngineUnity::HEU_ToolsInfo, int32_t, float_t)>(&::HoudiniEngineUnity::HEU_AttributesStore::ReplaceAttributeValueInt)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x200e814;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "ReplaceAttributeValueInt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributeData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_ToolsInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.AddAttributeValueInt
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::HoudiniEngineUnity::HEU_AttributeData, int32_t, ::HoudiniEngineUnity::HEU_ToolsInfo, int32_t, float_t)>(&::HoudiniEngineUnity::HEU_AttributesStore::AddAttributeValueInt)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x200e9f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "AddAttributeValueInt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributeData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_ToolsInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.SubtractAttributeValueInt
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::HoudiniEngineUnity::HEU_AttributeData, int32_t, ::HoudiniEngineUnity::HEU_ToolsInfo, int32_t, float_t)>(&::HoudiniEngineUnity::HEU_AttributesStore::SubtractAttributeValueInt)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x200ebac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "SubtractAttributeValueInt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributeData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_ToolsInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.MultiplyAttributeValueInt
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::HoudiniEngineUnity::HEU_AttributeData, int32_t, ::HoudiniEngineUnity::HEU_ToolsInfo, int32_t, float_t)>(&::HoudiniEngineUnity::HEU_AttributesStore::MultiplyAttributeValueInt)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x200ed60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "MultiplyAttributeValueInt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributeData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_ToolsInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.ReplaceAttributeValueFloat
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::HoudiniEngineUnity::HEU_AttributeData, int32_t, ::HoudiniEngineUnity::HEU_ToolsInfo, int32_t, float_t)>(&::HoudiniEngineUnity::HEU_AttributesStore::ReplaceAttributeValueFloat)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x200ef48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "ReplaceAttributeValueFloat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributeData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_ToolsInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.AddAttributeValueFloat
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::HoudiniEngineUnity::HEU_AttributeData, int32_t, ::HoudiniEngineUnity::HEU_ToolsInfo, int32_t, float_t)>(&::HoudiniEngineUnity::HEU_AttributesStore::AddAttributeValueFloat)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x200eff0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "AddAttributeValueFloat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributeData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_ToolsInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.SubtractAttributeValueFloat
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::HoudiniEngineUnity::HEU_AttributeData, int32_t, ::HoudiniEngineUnity::HEU_ToolsInfo, int32_t, float_t)>(&::HoudiniEngineUnity::HEU_AttributesStore::SubtractAttributeValueFloat)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x200f090;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "SubtractAttributeValueFloat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributeData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_ToolsInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.MultiplyAttributeValueFloat
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::HoudiniEngineUnity::HEU_AttributeData, int32_t, ::HoudiniEngineUnity::HEU_ToolsInfo, int32_t, float_t)>(&::HoudiniEngineUnity::HEU_AttributesStore::MultiplyAttributeValueFloat)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x200f130;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "MultiplyAttributeValueFloat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributeData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_ToolsInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.SetAttributeValueString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::HoudiniEngineUnity::HEU_AttributeData, int32_t, ::HoudiniEngineUnity::HEU_ToolsInfo, int32_t, float_t)>(&::HoudiniEngineUnity::HEU_AttributesStore::SetAttributeValueString)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x200f1e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "SetAttributeValueString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributeData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_ToolsInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.FillAttribute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_AttributesStore::*)(::HoudiniEngineUnity::HEU_AttributeData, ::HoudiniEngineUnity::HEU_ToolsInfo)>(&::HoudiniEngineUnity::HEU_AttributesStore::FillAttribute)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x200f2c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "FillAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributeData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_ToolsInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.AreAttributesDirty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_AttributesStore::*)()>(&::HoudiniEngineUnity::HEU_AttributesStore::AreAttributesDirty)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x200f570;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "AreAttributesDirty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.GetPositionAttributeValues
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_AttributesStore::*)(ByRef<::ArrayW<::UnityEngine::Vector3>>)>(&::HoudiniEngineUnity::HEU_AttributesStore::GetPositionAttributeValues)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x200f6e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "GetPositionAttributeValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::Vector3>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.GetVertexIndices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_AttributesStore::*)(ByRef<::ArrayW<int32_t>>)>(&::HoudiniEngineUnity::HEU_AttributesStore::GetVertexIndices)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x200f6f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "GetVertexIndices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<int32_t>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.GetAttributeSetValueFunction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_AttributesStore__SetAttributeValueFunc (*)(::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_AttributeData__AttributeType, ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ToolsInfo__PaintMergeMode)>(&::HoudiniEngineUnity::HEU_AttributesStore::GetAttributeSetValueFunction)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x200f364;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "GetAttributeSetValueFunction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_AttributeData__AttributeType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ToolsInfo__PaintMergeMode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.CopyAttributeValuesTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_AttributesStore::*)(::HoudiniEngineUnity::HEU_AttributesStore)>(&::HoudiniEngineUnity::HEU_AttributesStore::CopyAttributeValuesTo)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x200f6fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "CopyAttributeValuesTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributesStore>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.IsValidStore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_AttributesStore::*)(::HoudiniEngineUnity::HEU_SessionBase)>(&::HoudiniEngineUnity::HEU_AttributesStore::IsValidStore)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x200f8d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "IsValidStore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.IsEquivalentTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_AttributesStore::*)(::HoudiniEngineUnity::HEU_AttributesStore)>(&::HoudiniEngineUnity::HEU_AttributesStore::IsEquivalentTo)> {
  constexpr static std::size_t size = 0x578;
  constexpr static std::size_t addrs = 0x200f938;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributesStore>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_AttributesStore::*)()>(&::HoudiniEngineUnity::HEU_AttributesStore::_ctor)> {
  constexpr static std::size_t size = 0x10cc;
  constexpr static std::size_t addrs = 0x200feb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_AttributesStore>
constexpr  ::HoudiniEngineUnity::HEU_AttributesStore::operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_AttributesStore>() const noexcept {
return ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_AttributesStore>(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_AttributesStore::__set__geoID(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::HEU_AttributesStore::__get__geoID() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_AttributesStore::__set__partID(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::HEU_AttributesStore::__get__partID() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_AttributesStore::__set__geoName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::HoudiniEngineUnity::HEU_AttributesStore::__get__geoName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_AttributesStore::__set__attributeDatas(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_AttributeData> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_AttributeData>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_AttributeData>>(value));
}
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_AttributeData> ::HoudiniEngineUnity::HEU_AttributesStore::__get__attributeDatas() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_AttributeData>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_AttributesStore::__set__hasColorAttribute(bool value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::HoudiniEngineUnity::HEU_AttributesStore::__get__hasColorAttribute() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_AttributesStore::__set__localMaterial(::UnityEngine::Material value)  {
::cordl_internals::setInstanceField<::UnityEngine::Material, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Material>(value));
}
constexpr ::UnityEngine::Material ::HoudiniEngineUnity::HEU_AttributesStore::__get__localMaterial() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Material, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_AttributesStore::__set__outputTransform(::UnityEngine::Transform value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Transform>(value));
}
constexpr ::UnityEngine::Transform ::HoudiniEngineUnity::HEU_AttributesStore::__get__outputTransform() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_AttributesStore::__set__positionAttributeValues(::ArrayW<::UnityEngine::Vector3> value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::Vector3>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::UnityEngine::Vector3>>(value));
}
constexpr ::ArrayW<::UnityEngine::Vector3> ::HoudiniEngineUnity::HEU_AttributesStore::__get__positionAttributeValues() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Vector3>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_AttributesStore::__set__vertexIndices(::ArrayW<int32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<int32_t>>(value));
}
constexpr ::ArrayW<int32_t> ::HoudiniEngineUnity::HEU_AttributesStore::__get__vertexIndices() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_AttributesStore::__set__outputGameObject(::UnityEngine::GameObject value)  {
::cordl_internals::setInstanceField<::UnityEngine::GameObject, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::GameObject>(value));
}
constexpr ::UnityEngine::GameObject ::HoudiniEngineUnity::HEU_AttributesStore::__get__outputGameObject() const {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_AttributesStore::__set__outputMesh(::UnityEngine::Mesh value)  {
::cordl_internals::setInstanceField<::UnityEngine::Mesh, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Mesh>(value));
}
constexpr ::UnityEngine::Mesh ::HoudiniEngineUnity::HEU_AttributesStore::__get__outputMesh() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Mesh, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_AttributesStore::__set__outputMaterials(::ArrayW<::UnityEngine::Material> value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::Material>, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::UnityEngine::Material>>(value));
}
constexpr ::ArrayW<::UnityEngine::Material> ::HoudiniEngineUnity::HEU_AttributesStore::__get__outputMaterials() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Material>, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_AttributesStore::__set__outputCollider(::UnityEngine::MeshCollider value)  {
::cordl_internals::setInstanceField<::UnityEngine::MeshCollider, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::MeshCollider>(value));
}
constexpr ::UnityEngine::MeshCollider ::HoudiniEngineUnity::HEU_AttributesStore::__get__outputCollider() const {
return ::cordl_internals::getInstanceField<::UnityEngine::MeshCollider, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_AttributesStore::__set__outputColliderMesh(::UnityEngine::Mesh value)  {
::cordl_internals::setInstanceField<::UnityEngine::Mesh, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Mesh>(value));
}
constexpr ::UnityEngine::Mesh ::HoudiniEngineUnity::HEU_AttributesStore::__get__outputColliderMesh() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Mesh, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_AttributesStore::__set__outputMeshCollider(::UnityEngine::MeshCollider value)  {
::cordl_internals::setInstanceField<::UnityEngine::MeshCollider, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::MeshCollider>(value));
}
constexpr ::UnityEngine::MeshCollider ::HoudiniEngineUnity::HEU_AttributesStore::__get__outputMeshCollider() const {
return ::cordl_internals::getInstanceField<::UnityEngine::MeshCollider, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_AttributesStore::__set__localMeshCollider(::UnityEngine::MeshCollider value)  {
::cordl_internals::setInstanceField<::UnityEngine::MeshCollider, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::MeshCollider>(value));
}
constexpr ::UnityEngine::MeshCollider ::HoudiniEngineUnity::HEU_AttributesStore::__get__localMeshCollider() const {
return ::cordl_internals::getInstanceField<::UnityEngine::MeshCollider, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_AttributesStore::__set__outputMeshRendererInitiallyEnabled(bool value)  {
::cordl_internals::setInstanceField<bool, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::HoudiniEngineUnity::HEU_AttributesStore::__get__outputMeshRendererInitiallyEnabled() const {
return ::cordl_internals::getInstanceField<bool, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_AttributesStore::__set__outputMeshColliderInitiallyEnabled(bool value)  {
::cordl_internals::setInstanceField<bool, 0x91>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::HoudiniEngineUnity::HEU_AttributesStore::__get__outputMeshColliderInitiallyEnabled() const {
return ::cordl_internals::getInstanceField<bool, 0x91>(this->::bs_hook::Il2CppWrapperType::instance);
}
 int32_t ::HoudiniEngineUnity::HEU_AttributesStore::get_GeoID()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "get_GeoID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::HoudiniEngineUnity::HEU_AttributesStore::get_PartID()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "get_PartID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW ::HoudiniEngineUnity::HEU_AttributesStore::get_GeoName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "get_GeoName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::HoudiniEngineUnity::HEU_AttributesStore::HasColorAttribute()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "HasColorAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::Transform ::HoudiniEngineUnity::HEU_AttributesStore::get_OutputTransform()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "get_OutputTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Transform, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::Mesh ::HoudiniEngineUnity::HEU_AttributesStore::get_OutputMesh()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "get_OutputMesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Mesh, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HoudiniEngineUnity::HEU_AttributesStore::DestroyAllData(::HoudiniEngineUnity::HEU_HoudiniAsset asset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "DestroyAllData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, asset);
}
 void ::HoudiniEngineUnity::HEU_AttributesStore::SyncAllAttributesFrom(::HoudiniEngineUnity::HEU_SessionBase session, ::HoudiniEngineUnity::HEU_HoudiniAsset asset, int32_t geoID, ByRef<::HoudiniEngineUnity::HAPI_PartInfo> partInfo, ::UnityEngine::GameObject outputGameObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "SyncAllAttributesFrom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HAPI_PartInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, session, asset, geoID, partInfo, outputGameObject);
}
 void ::HoudiniEngineUnity::HEU_AttributesStore::SetupMeshAndMaterials(::HoudiniEngineUnity::HEU_HoudiniAsset asset, ::HoudiniEngineUnity::HAPI_PartType partType, ::UnityEngine::GameObject outputGameObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "SetupMeshAndMaterials",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HAPI_PartType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, asset, partType, outputGameObject);
}
 bool ::HoudiniEngineUnity::HEU_AttributesStore::HasDirtyAttributes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "HasDirtyAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HoudiniEngineUnity::HEU_AttributesStore::SyncDirtyAttributesToHoudini(::HoudiniEngineUnity::HEU_SessionBase session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "SyncDirtyAttributesToHoudini",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, session);
}
 void ::HoudiniEngineUnity::HEU_AttributesStore::PopulateAttributeData(::HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID, ::HoudiniEngineUnity::HEU_AttributeData attributeData, ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo> attributeInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "PopulateAttributeData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributeData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, session, geoID, partID, attributeData, attributeInfo);
}
 void ::HoudiniEngineUnity::HEU_AttributesStore::GetAttributesList(::HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_AttributeData> attributesList, ::HoudiniEngineUnity::HAPI_AttributeOwner ownerType, int32_t attributeCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "GetAttributesList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_AttributeData>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HAPI_AttributeOwner>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, session, geoID, partID, attributesList, ownerType, attributeCount);
}
 void ::HoudiniEngineUnity::HEU_AttributesStore::UpdateAttribute(::HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID, ::HoudiniEngineUnity::HEU_AttributeData attributeData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "UpdateAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributeData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, session, geoID, partID, attributeData);
}
 void ::HoudiniEngineUnity::HEU_AttributesStore::UpdateAttributeList(::HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_AttributeData> attributeDataList)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "UpdateAttributeList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_AttributeData>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, session, geoID, partID, attributeDataList);
}
 void ::HoudiniEngineUnity::HEU_AttributesStore::RefreshUpstreamInputs(::HoudiniEngineUnity::HEU_SessionBase session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "RefreshUpstreamInputs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, session);
}
 bool ::HoudiniEngineUnity::HEU_AttributesStore::UploadAttributeViaMeshInput(::HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "UploadAttributeViaMeshInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, session, geoID, partID);
}
 void ::HoudiniEngineUnity::HEU_AttributesStore::SetAttributeDataSyncd(::HoudiniEngineUnity::HEU_AttributeData attributeData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "SetAttributeDataSyncd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributeData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, attributeData);
}
 void ::HoudiniEngineUnity::HEU_AttributesStore::SetAttributeDataDirty(::HoudiniEngineUnity::HEU_AttributeData attributeData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "SetAttributeDataDirty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributeData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, attributeData);
}
 ::HoudiniEngineUnity::HEU_AttributeData ::HoudiniEngineUnity::HEU_AttributesStore::CreateAttribute(::StringW attributeName, ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo> attributeInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "CreateAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_AttributeData, false>(const_cast<void*>(instance), ___internal_method, attributeName, attributeInfo);
}
 ::HoudiniEngineUnity::HEU_AttributeData ::HoudiniEngineUnity::HEU_AttributesStore::GetAttributeData(::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "GetAttributeData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_AttributeData, false>(const_cast<void*>(instance), ___internal_method, name);
}
 ::HoudiniEngineUnity::HEU_AttributeData ::HoudiniEngineUnity::HEU_AttributesStore::GetAttributeData(int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "GetAttributeData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_AttributeData, false>(const_cast<void*>(instance), ___internal_method, index);
}
 ::System::Collections::Generic::List_1<::StringW> ::HoudiniEngineUnity::HEU_AttributesStore::GetAttributeNames()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "GetAttributeNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HoudiniEngineUnity::HEU_AttributesStore::EnablePaintCollider()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "EnablePaintCollider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HoudiniEngineUnity::HEU_AttributesStore::DisablePaintCollider()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "DisablePaintCollider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HoudiniEngineUnity::HEU_AttributesStore::ShowPaintMesh()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "ShowPaintMesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HoudiniEngineUnity::HEU_AttributesStore::HidePaintMesh()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "HidePaintMesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::HoudiniEngineUnity::HEU_AttributesStore::HasMeshForPainting()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "HasMeshForPainting",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::MeshCollider ::HoudiniEngineUnity::HEU_AttributesStore::GetPaintMeshCollider()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "GetPaintMeshCollider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::MeshCollider, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HoudiniEngineUnity::HEU_AttributesStore::PaintAttribute(::HoudiniEngineUnity::HEU_AttributeData attributeData, ::HoudiniEngineUnity::HEU_ToolsInfo sourceTools, int32_t attributeIndex, float_t paintFactor, ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_AttributesStore__SetAttributeValueFunc setAttrFunc)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "PaintAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributeData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_ToolsInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_AttributesStore__SetAttributeValueFunc>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, attributeData, sourceTools, attributeIndex, paintFactor, setAttrFunc);
}
 void ::HoudiniEngineUnity::HEU_AttributesStore::SetAttributeEditValueInt(::HoudiniEngineUnity::HEU_AttributeData attributeData, int32_t startIndex, ::ArrayW<int32_t> values)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "SetAttributeEditValueInt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributeData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, attributeData, startIndex, values);
}
 void ::HoudiniEngineUnity::HEU_AttributesStore::SetAttributeEditValueFloat(::HoudiniEngineUnity::HEU_AttributeData attributeData, int32_t startIndex, ::ArrayW<float_t> values)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "SetAttributeEditValueFloat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributeData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, attributeData, startIndex, values);
}
 void ::HoudiniEngineUnity::HEU_AttributesStore::SetAttributeEditValueString(::HoudiniEngineUnity::HEU_AttributeData attributeData, int32_t startIndex, ::ArrayW<::StringW> values)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "SetAttributeEditValueString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributeData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, attributeData, startIndex, values);
}
 void ::HoudiniEngineUnity::HEU_AttributesStore::ReplaceAttributeValueInt(::HoudiniEngineUnity::HEU_AttributeData attributeData, int32_t targetIndex, ::HoudiniEngineUnity::HEU_ToolsInfo sourceTools, int32_t sourceIndex, float_t factor)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "ReplaceAttributeValueInt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributeData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_ToolsInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, attributeData, targetIndex, sourceTools, sourceIndex, factor);
}
 void ::HoudiniEngineUnity::HEU_AttributesStore::AddAttributeValueInt(::HoudiniEngineUnity::HEU_AttributeData attributeData, int32_t targetIndex, ::HoudiniEngineUnity::HEU_ToolsInfo sourceTools, int32_t sourceIndex, float_t factor)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "AddAttributeValueInt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributeData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_ToolsInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, attributeData, targetIndex, sourceTools, sourceIndex, factor);
}
 void ::HoudiniEngineUnity::HEU_AttributesStore::SubtractAttributeValueInt(::HoudiniEngineUnity::HEU_AttributeData attributeData, int32_t targetIndex, ::HoudiniEngineUnity::HEU_ToolsInfo sourceTools, int32_t sourceIndex, float_t factor)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "SubtractAttributeValueInt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributeData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_ToolsInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, attributeData, targetIndex, sourceTools, sourceIndex, factor);
}
 void ::HoudiniEngineUnity::HEU_AttributesStore::MultiplyAttributeValueInt(::HoudiniEngineUnity::HEU_AttributeData attributeData, int32_t targetIndex, ::HoudiniEngineUnity::HEU_ToolsInfo sourceTools, int32_t sourceIndex, float_t factor)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "MultiplyAttributeValueInt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributeData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_ToolsInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, attributeData, targetIndex, sourceTools, sourceIndex, factor);
}
 void ::HoudiniEngineUnity::HEU_AttributesStore::ReplaceAttributeValueFloat(::HoudiniEngineUnity::HEU_AttributeData attributeData, int32_t targetIndex, ::HoudiniEngineUnity::HEU_ToolsInfo sourceTools, int32_t sourceIndex, float_t factor)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "ReplaceAttributeValueFloat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributeData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_ToolsInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, attributeData, targetIndex, sourceTools, sourceIndex, factor);
}
 void ::HoudiniEngineUnity::HEU_AttributesStore::AddAttributeValueFloat(::HoudiniEngineUnity::HEU_AttributeData attributeData, int32_t targetIndex, ::HoudiniEngineUnity::HEU_ToolsInfo sourceTools, int32_t sourceIndex, float_t factor)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "AddAttributeValueFloat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributeData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_ToolsInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, attributeData, targetIndex, sourceTools, sourceIndex, factor);
}
 void ::HoudiniEngineUnity::HEU_AttributesStore::SubtractAttributeValueFloat(::HoudiniEngineUnity::HEU_AttributeData attributeData, int32_t targetIndex, ::HoudiniEngineUnity::HEU_ToolsInfo sourceTools, int32_t sourceIndex, float_t factor)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "SubtractAttributeValueFloat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributeData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_ToolsInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, attributeData, targetIndex, sourceTools, sourceIndex, factor);
}
 void ::HoudiniEngineUnity::HEU_AttributesStore::MultiplyAttributeValueFloat(::HoudiniEngineUnity::HEU_AttributeData attributeData, int32_t targetIndex, ::HoudiniEngineUnity::HEU_ToolsInfo sourceTools, int32_t sourceIndex, float_t factor)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "MultiplyAttributeValueFloat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributeData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_ToolsInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, attributeData, targetIndex, sourceTools, sourceIndex, factor);
}
 void ::HoudiniEngineUnity::HEU_AttributesStore::SetAttributeValueString(::HoudiniEngineUnity::HEU_AttributeData attributeData, int32_t targetIndex, ::HoudiniEngineUnity::HEU_ToolsInfo sourceTools, int32_t sourceIndex, float_t factor)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "SetAttributeValueString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributeData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_ToolsInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, attributeData, targetIndex, sourceTools, sourceIndex, factor);
}
 void ::HoudiniEngineUnity::HEU_AttributesStore::FillAttribute(::HoudiniEngineUnity::HEU_AttributeData attributeData, ::HoudiniEngineUnity::HEU_ToolsInfo sourceTools)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "FillAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributeData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_ToolsInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, attributeData, sourceTools);
}
 bool ::HoudiniEngineUnity::HEU_AttributesStore::AreAttributesDirty()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "AreAttributesDirty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HoudiniEngineUnity::HEU_AttributesStore::GetPositionAttributeValues(ByRef<::ArrayW<::UnityEngine::Vector3>> positionArray)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "GetPositionAttributeValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::Vector3>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, positionArray);
}
 void ::HoudiniEngineUnity::HEU_AttributesStore::GetVertexIndices(ByRef<::ArrayW<int32_t>> indices)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "GetVertexIndices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<int32_t>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, indices);
}
 ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_AttributesStore__SetAttributeValueFunc ::HoudiniEngineUnity::HEU_AttributesStore::GetAttributeSetValueFunction(::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_AttributeData__AttributeType attrType, ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ToolsInfo__PaintMergeMode paintMergeMode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "GetAttributeSetValueFunction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_AttributeData__AttributeType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ToolsInfo__PaintMergeMode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_AttributesStore__SetAttributeValueFunc, false>(nullptr, ___internal_method, attrType, paintMergeMode);
}
 void ::HoudiniEngineUnity::HEU_AttributesStore::CopyAttributeValuesTo(::HoudiniEngineUnity::HEU_AttributesStore destAttrStore)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "CopyAttributeValuesTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributesStore>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, destAttrStore);
}
 bool ::HoudiniEngineUnity::HEU_AttributesStore::IsValidStore(::HoudiniEngineUnity::HEU_SessionBase session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "IsValidStore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, session);
}
 bool ::HoudiniEngineUnity::HEU_AttributesStore::IsEquivalentTo(::HoudiniEngineUnity::HEU_AttributesStore other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributesStore>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, other);
}
// Ctor Parameters []
 ::HoudiniEngineUnity::HEU_AttributesStore::HEU_AttributesStore()  : ::UnityEngine::ScriptableObject(THROW_UNLESS(::il2cpp_utils::New<HEU_AttributesStore>())) {}
 void ::HoudiniEngineUnity::HEU_AttributesStore::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
