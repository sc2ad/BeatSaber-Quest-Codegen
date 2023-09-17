#pragma once
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
namespace {
#include "HoudiniEngineUnity/zzzz__HEU_GeoNode_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_SessionBase_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_InputNode_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_VolumeCache_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_PartData_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_GeoType_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_MaterialData_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_PartInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_Curve_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_HoudiniAsset_def.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_GeoInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_GeneratedOutput_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_ObjectNode_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_Transform_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GeoNode.get_GeoID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::HoudiniEngineUnity::HEU_GeoNode::*)()>(&::HoudiniEngineUnity::HEU_GeoNode::get_GeoID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fd922c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "get_GeoID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GeoNode.get_GeoName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::HoudiniEngineUnity::HEU_GeoNode::*)()>(&::HoudiniEngineUnity::HEU_GeoNode::get_GeoName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe3acc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "get_GeoName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GeoNode.get_GeoType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HAPI_GeoType (::HoudiniEngineUnity::HEU_GeoNode::*)()>(&::HoudiniEngineUnity::HEU_GeoNode::get_GeoType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe3ad4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "get_GeoType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GeoNode.get_Editable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_GeoNode::*)()>(&::HoudiniEngineUnity::HEU_GeoNode::get_Editable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe3adc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "get_Editable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GeoNode.get_Displayable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_GeoNode::*)()>(&::HoudiniEngineUnity::HEU_GeoNode::get_Displayable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe3ae4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "get_Displayable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GeoNode.IsVisible
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_GeoNode::*)()>(&::HoudiniEngineUnity::HEU_GeoNode::IsVisible)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1fe3aec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "IsVisible",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GeoNode.IsIntermediate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_GeoNode::*)()>(&::HoudiniEngineUnity::HEU_GeoNode::IsIntermediate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1fe3b08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "IsIntermediate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GeoNode.IsIntermediateOrEditable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_GeoNode::*)()>(&::HoudiniEngineUnity::HEU_GeoNode::IsIntermediateOrEditable)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1fe3b18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "IsIntermediateOrEditable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GeoNode.IsGeoInputType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_GeoNode::*)()>(&::HoudiniEngineUnity::HEU_GeoNode::IsGeoInputType)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1fe3b48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "IsGeoInputType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GeoNode.IsGeoCurveType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_GeoNode::*)()>(&::HoudiniEngineUnity::HEU_GeoNode::IsGeoCurveType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1fe3b68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "IsGeoCurveType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GeoNode.get_ObjectNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_ObjectNode (::HoudiniEngineUnity::HEU_GeoNode::*)()>(&::HoudiniEngineUnity::HEU_GeoNode::get_ObjectNode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe3b78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "get_ObjectNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GeoNode.get_ParentAsset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_HoudiniAsset (::HoudiniEngineUnity::HEU_GeoNode::*)()>(&::HoudiniEngineUnity::HEU_GeoNode::get_ParentAsset)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1fe3b80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "get_ParentAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GeoNode.get_VolumeCaches
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCache> (::HoudiniEngineUnity::HEU_GeoNode::*)()>(&::HoudiniEngineUnity::HEU_GeoNode::get_VolumeCaches)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe3c00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "get_VolumeCaches",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GeoNode._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_GeoNode::*)()>(&::HoudiniEngineUnity::HEU_GeoNode::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1fe3c08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GeoNode.OnBeforeSerialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_GeoNode::*)()>(&::HoudiniEngineUnity::HEU_GeoNode::OnBeforeSerialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1fe3cd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "OnBeforeSerialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GeoNode.OnAfterDeserialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_GeoNode::*)()>(&::HoudiniEngineUnity::HEU_GeoNode::OnAfterDeserialize)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x1fe3cd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "OnAfterDeserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GeoNode.DestroyAllData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_GeoNode::*)(bool)>(&::HoudiniEngineUnity::HEU_GeoNode::DestroyAllData)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x1fe3e14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "DestroyAllData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GeoNode.RemoveAndDestroyPart
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_GeoNode::*)(::HoudiniEngineUnity::HEU_PartData)>(&::HoudiniEngineUnity::HEU_GeoNode::RemoveAndDestroyPart)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x1fe41d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "RemoveAndDestroyPart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_PartData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GeoNode.Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_GeoNode::*)()>(&::HoudiniEngineUnity::HEU_GeoNode::Reset)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1fe3c24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GeoNode.Initialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_GeoNode::*)(::HoudiniEngineUnity::HEU_SessionBase, ::HoudiniEngineUnity::HAPI_GeoInfo, ::HoudiniEngineUnity::HEU_ObjectNode)>(&::HoudiniEngineUnity::HEU_GeoNode::Initialize)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x1fe4234;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HAPI_GeoInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_ObjectNode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GeoNode.DoesThisRequirePotentialCook
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_GeoNode::*)()>(&::HoudiniEngineUnity::HEU_GeoNode::DoesThisRequirePotentialCook)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1fe4368;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "DoesThisRequirePotentialCook",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GeoNode.UpdateGeo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_GeoNode::*)(::HoudiniEngineUnity::HEU_SessionBase)>(&::HoudiniEngineUnity::HEU_GeoNode::UpdateGeo)> {
  constexpr static std::size_t size = 0x628;
  constexpr static std::size_t addrs = 0x1fe43c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "UpdateGeo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GeoNode.ProcessUnityScriptAttribute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_GeoNode::*)(::HoudiniEngineUnity::HEU_SessionBase)>(&::HoudiniEngineUnity::HEU_GeoNode::ProcessUnityScriptAttribute)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x1fe54c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "ProcessUnityScriptAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GeoNode.ProcessPart
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_GeoNode::*)(::HoudiniEngineUnity::HEU_SessionBase, int32_t, ByRef<::HoudiniEngineUnity::HAPI_PartInfo>, ByRef<::HoudiniEngineUnity::HEU_PartData>)>(&::HoudiniEngineUnity::HEU_GeoNode::ProcessPart)> {
  constexpr static std::size_t size = 0x910;
  constexpr static std::size_t addrs = 0x1fe4bb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "ProcessPart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HAPI_PartInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HEU_PartData>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GeoNode.SetupGameObjectAndTransform
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_GeoNode::*)(::HoudiniEngineUnity::HEU_PartData, ::HoudiniEngineUnity::HEU_HoudiniAsset)>(&::HoudiniEngineUnity::HEU_GeoNode::SetupGameObjectAndTransform)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x1fe5790;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "SetupGameObjectAndTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_PartData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GeoNode.GetPartsByOutputType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_GeoNode::*)(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData>, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData>)>(&::HoudiniEngineUnity::HEU_GeoNode::GetPartsByOutputType)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x1fe5b84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "GetPartsByOutputType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GeoNode.GeneratePartInstances
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_GeoNode::*)(::HoudiniEngineUnity::HEU_SessionBase)>(&::HoudiniEngineUnity::HEU_GeoNode::GeneratePartInstances)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x1fe5d20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "GeneratePartInstances",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GeoNode.GenerateAttributesStore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_GeoNode::*)(::HoudiniEngineUnity::HEU_SessionBase)>(&::HoudiniEngineUnity::HEU_GeoNode::GenerateAttributesStore)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x1fe5e08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "GenerateAttributesStore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GeoNode.ProcessGeoCurve
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_GeoNode::*)(::HoudiniEngineUnity::HEU_SessionBase)>(&::HoudiniEngineUnity::HEU_GeoNode::ProcessGeoCurve)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x1fe49f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "ProcessGeoCurve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GeoNode.SetupGeoCurveGameObjectAndTransform
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_GeoNode::*)(::HoudiniEngineUnity::HEU_Curve)>(&::HoudiniEngineUnity::HEU_GeoNode::SetupGeoCurveGameObjectAndTransform)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x1fe5eac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "SetupGeoCurveGameObjectAndTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_Curve>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GeoNode.ClearObjectInstances
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_GeoNode::*)()>(&::HoudiniEngineUnity::HEU_GeoNode::ClearObjectInstances)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x1fe608c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "ClearObjectInstances",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GeoNode.SetGeoInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_GeoNode::*)(::HoudiniEngineUnity::HAPI_GeoInfo)>(&::HoudiniEngineUnity::HEU_GeoNode::SetGeoInfo)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x1fe6124;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "SetGeoInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HAPI_GeoInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GeoNode.GeneratePartFullName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::HoudiniEngineUnity::HEU_GeoNode::*)(::StringW)>(&::HoudiniEngineUnity::HEU_GeoNode::GeneratePartFullName)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x1fe5a10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "GeneratePartFullName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GeoNode.GenerateGeoCurveName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::HoudiniEngineUnity::HEU_GeoNode::*)()>(&::HoudiniEngineUnity::HEU_GeoNode::GenerateGeoCurveName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe61c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "GenerateGeoCurveName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GeoNode.HasGeoNodeChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_GeoNode::*)(::HoudiniEngineUnity::HEU_SessionBase)>(&::HoudiniEngineUnity::HEU_GeoNode::HasGeoNodeChanged)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x1fe61c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "HasGeoNodeChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GeoNode.ApplyHAPITransform
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_GeoNode::*)(ByRef<::HoudiniEngineUnity::HAPI_Transform>)>(&::HoudiniEngineUnity::HEU_GeoNode::ApplyHAPITransform)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x1fe62b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "ApplyHAPITransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HAPI_Transform>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GeoNode.GetDebugInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_GeoNode::*)(::System::Text::StringBuilder)>(&::HoudiniEngineUnity::HEU_GeoNode::GetDebugInfo)> {
  constexpr static std::size_t size = 0x3ac;
  constexpr static std::size_t addrs = 0x1fe6404;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "GetDebugInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GeoNode.IsUsingMaterial
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_GeoNode::*)(::HoudiniEngineUnity::HEU_MaterialData)>(&::HoudiniEngineUnity::HEU_GeoNode::IsUsingMaterial)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x1fe67b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "IsUsingMaterial",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_MaterialData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GeoNode.GetClonableParts
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_GeoNode::*)(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData>)>(&::HoudiniEngineUnity::HEU_GeoNode::GetClonableParts)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x1fe6930;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "GetClonableParts",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GeoNode.GetOutputGameObjects
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_GeoNode::*)(::System::Collections::Generic::List_1<::UnityEngine::GameObject>)>(&::HoudiniEngineUnity::HEU_GeoNode::GetOutputGameObjects)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x1fe6a84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "GetOutputGameObjects",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::GameObject>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GeoNode.GetOutput
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_GeoNode::*)(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeneratedOutput>)>(&::HoudiniEngineUnity::HEU_GeoNode::GetOutput)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x1fe6bd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "GetOutput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeneratedOutput>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GeoNode.GetHDAPartWithGameObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_PartData (::HoudiniEngineUnity::HEU_GeoNode::*)(::UnityEngine::GameObject)>(&::HoudiniEngineUnity::HEU_GeoNode::GetHDAPartWithGameObject)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x1fe6d2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "GetHDAPartWithGameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GeoNode.GetPartFromPartID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_PartData (::HoudiniEngineUnity::HEU_GeoNode::*)(int32_t)>(&::HoudiniEngineUnity::HEU_GeoNode::GetPartFromPartID)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x1fe6ed8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "GetPartFromPartID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GeoNode.GetCurves
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_GeoNode::*)(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Curve>, bool)>(&::HoudiniEngineUnity::HEU_GeoNode::GetCurves)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x1fe6fa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "GetCurves",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Curve>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GeoNode.GetParts
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData> (::HoudiniEngineUnity::HEU_GeoNode::*)()>(&::HoudiniEngineUnity::HEU_GeoNode::GetParts)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe7268;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "GetParts",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GeoNode.HasAttribInstancer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_GeoNode::*)()>(&::HoudiniEngineUnity::HEU_GeoNode::HasAttribInstancer)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1fe7270;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "HasAttribInstancer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GeoNode.SetAttributeModifiersOnPartOutputs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_GeoNode::*)(::HoudiniEngineUnity::HEU_SessionBase)>(&::HoudiniEngineUnity::HEU_GeoNode::SetAttributeModifiersOnPartOutputs)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x1fe73e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "SetAttributeModifiersOnPartOutputs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GeoNode.CalculateVisiblity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_GeoNode::*)(bool)>(&::HoudiniEngineUnity::HEU_GeoNode::CalculateVisiblity)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x1fe75e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "CalculateVisiblity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GeoNode.HideAllGeometry
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_GeoNode::*)()>(&::HoudiniEngineUnity::HEU_GeoNode::HideAllGeometry)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1fe76f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "HideAllGeometry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GeoNode.CalculateColliderState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_GeoNode::*)()>(&::HoudiniEngineUnity::HEU_GeoNode::CalculateColliderState)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x1fe7790;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "CalculateColliderState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GeoNode.DisableAllColliders
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_GeoNode::*)()>(&::HoudiniEngineUnity::HEU_GeoNode::DisableAllColliders)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1fe782c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "DisableAllColliders",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GeoNode.ProcessVolumeParts
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_GeoNode::*)(::HoudiniEngineUnity::HEU_SessionBase, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData>, bool)>(&::HoudiniEngineUnity::HEU_GeoNode::ProcessVolumeParts)> {
  constexpr static std::size_t size = 0x68c;
  constexpr static std::size_t addrs = 0x1fe78cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "ProcessVolumeParts",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GeoNode.GetVolumeCacheByTileIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_VolumeCache (::HoudiniEngineUnity::HEU_GeoNode::*)(int32_t)>(&::HoudiniEngineUnity::HEU_GeoNode::GetVolumeCacheByTileIndex)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x1fe7f58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "GetVolumeCacheByTileIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GeoNode.DestroyVolumeCache
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_GeoNode::*)()>(&::HoudiniEngineUnity::HEU_GeoNode::DestroyVolumeCache)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1fe4070;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "DestroyVolumeCache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GeoNode.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::HoudiniEngineUnity::HEU_GeoNode::*)()>(&::HoudiniEngineUnity::HEU_GeoNode::ToString)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1fe8164;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::HoudiniEngineUnity::HEU_GeoNode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GeoNode.IsEquivalentTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_GeoNode::*)(::HoudiniEngineUnity::HEU_GeoNode)>(&::HoudiniEngineUnity::HEU_GeoNode::IsEquivalentTo)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x1fe81d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_GeoNode>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::UnityEngine::ISerializationCallbackReceiver
constexpr  ::HoudiniEngineUnity::HEU_GeoNode::operator ::UnityEngine::ISerializationCallbackReceiver() const noexcept {
return ::UnityEngine::ISerializationCallbackReceiver(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_GeoNode>
constexpr  ::HoudiniEngineUnity::HEU_GeoNode::operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_GeoNode>() const noexcept {
return ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_GeoNode>(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_GeoNode::__set__geoInfo(::HoudiniEngineUnity::HAPI_GeoInfo value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::HAPI_GeoInfo, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HoudiniEngineUnity::HAPI_GeoInfo>(value));
}
constexpr ::HoudiniEngineUnity::HAPI_GeoInfo ::HoudiniEngineUnity::HEU_GeoNode::__get__geoInfo() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HAPI_GeoInfo, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_GeoNode::__set__geoName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::HoudiniEngineUnity::HEU_GeoNode::__get__geoName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_GeoNode::__set__parts(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData>>(value));
}
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData> ::HoudiniEngineUnity::HEU_GeoNode::__get__parts() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_GeoNode::__set__containerObjectNode(::HoudiniEngineUnity::HEU_ObjectNode value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::HEU_ObjectNode, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HoudiniEngineUnity::HEU_ObjectNode>(value));
}
constexpr ::HoudiniEngineUnity::HEU_ObjectNode ::HoudiniEngineUnity::HEU_GeoNode::__get__containerObjectNode() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HEU_ObjectNode, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_GeoNode::__set__inputNode(::HoudiniEngineUnity::HEU_InputNode value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::HEU_InputNode, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HoudiniEngineUnity::HEU_InputNode>(value));
}
constexpr ::HoudiniEngineUnity::HEU_InputNode ::HoudiniEngineUnity::HEU_GeoNode::__get__inputNode() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HEU_InputNode, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_GeoNode::__set__geoCurve(::HoudiniEngineUnity::HEU_Curve value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::HEU_Curve, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HoudiniEngineUnity::HEU_Curve>(value));
}
constexpr ::HoudiniEngineUnity::HEU_Curve ::HoudiniEngineUnity::HEU_GeoNode::__get__geoCurve() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HEU_Curve, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_GeoNode::__set__volumeCache(::HoudiniEngineUnity::HEU_VolumeCache value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::HEU_VolumeCache, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HoudiniEngineUnity::HEU_VolumeCache>(value));
}
constexpr ::HoudiniEngineUnity::HEU_VolumeCache ::HoudiniEngineUnity::HEU_GeoNode::__get__volumeCache() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HEU_VolumeCache, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_GeoNode::__set__volumeCaches(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCache> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCache>, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCache>>(value));
}
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCache> ::HoudiniEngineUnity::HEU_GeoNode::__get__volumeCaches() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCache>, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
 int32_t ::HoudiniEngineUnity::HEU_GeoNode::get_GeoID()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "get_GeoID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW ::HoudiniEngineUnity::HEU_GeoNode::get_GeoName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "get_GeoName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::HoudiniEngineUnity::HAPI_GeoType ::HoudiniEngineUnity::HEU_GeoNode::get_GeoType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "get_GeoType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HAPI_GeoType, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::HoudiniEngineUnity::HEU_GeoNode::get_Editable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "get_Editable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::HoudiniEngineUnity::HEU_GeoNode::get_Displayable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "get_Displayable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::HoudiniEngineUnity::HEU_GeoNode::IsVisible()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "IsVisible",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::HoudiniEngineUnity::HEU_GeoNode::IsIntermediate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "IsIntermediate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::HoudiniEngineUnity::HEU_GeoNode::IsIntermediateOrEditable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "IsIntermediateOrEditable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::HoudiniEngineUnity::HEU_GeoNode::IsGeoInputType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "IsGeoInputType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::HoudiniEngineUnity::HEU_GeoNode::IsGeoCurveType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "IsGeoCurveType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::HoudiniEngineUnity::HEU_ObjectNode ::HoudiniEngineUnity::HEU_GeoNode::get_ObjectNode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "get_ObjectNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_ObjectNode, false>(const_cast<void*>(instance), ___internal_method);
}
 ::HoudiniEngineUnity::HEU_HoudiniAsset ::HoudiniEngineUnity::HEU_GeoNode::get_ParentAsset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "get_ParentAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_HoudiniAsset, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCache> ::HoudiniEngineUnity::HEU_GeoNode::get_VolumeCaches()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "get_VolumeCaches",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCache>, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::HoudiniEngineUnity::HEU_GeoNode::HEU_GeoNode()  : ::UnityEngine::ScriptableObject(THROW_UNLESS(::il2cpp_utils::New<HEU_GeoNode>())) {}
 void ::HoudiniEngineUnity::HEU_GeoNode::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HoudiniEngineUnity::HEU_GeoNode::OnBeforeSerialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "OnBeforeSerialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HoudiniEngineUnity::HEU_GeoNode::OnAfterDeserialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "OnAfterDeserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
/// @param bIsRebuild: bool (default: false)
 void ::HoudiniEngineUnity::HEU_GeoNode::DestroyAllData(bool bIsRebuild)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "DestroyAllData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bIsRebuild);
}
 void ::HoudiniEngineUnity::HEU_GeoNode::RemoveAndDestroyPart(::HoudiniEngineUnity::HEU_PartData part)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "RemoveAndDestroyPart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_PartData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, part);
}
 void ::HoudiniEngineUnity::HEU_GeoNode::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HoudiniEngineUnity::HEU_GeoNode::Initialize(::HoudiniEngineUnity::HEU_SessionBase session, ::HoudiniEngineUnity::HAPI_GeoInfo geoInfo, ::HoudiniEngineUnity::HEU_ObjectNode containerObjectNode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HAPI_GeoInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_ObjectNode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, session, geoInfo, containerObjectNode);
}
 bool ::HoudiniEngineUnity::HEU_GeoNode::DoesThisRequirePotentialCook()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "DoesThisRequirePotentialCook",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HoudiniEngineUnity::HEU_GeoNode::UpdateGeo(::HoudiniEngineUnity::HEU_SessionBase session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "UpdateGeo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, session);
}
 void ::HoudiniEngineUnity::HEU_GeoNode::ProcessUnityScriptAttribute(::HoudiniEngineUnity::HEU_SessionBase session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "ProcessUnityScriptAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, session);
}
 void ::HoudiniEngineUnity::HEU_GeoNode::ProcessPart(::HoudiniEngineUnity::HEU_SessionBase session, int32_t partID, ByRef<::HoudiniEngineUnity::HAPI_PartInfo> partInfo, ByRef<::HoudiniEngineUnity::HEU_PartData> partData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "ProcessPart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HAPI_PartInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HEU_PartData>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, session, partID, partInfo, partData);
}
 void ::HoudiniEngineUnity::HEU_GeoNode::SetupGameObjectAndTransform(::HoudiniEngineUnity::HEU_PartData partData, ::HoudiniEngineUnity::HEU_HoudiniAsset parentAsset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "SetupGameObjectAndTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_PartData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, partData, parentAsset);
}
 void ::HoudiniEngineUnity::HEU_GeoNode::GetPartsByOutputType(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData> meshParts, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData> volumeParts)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "GetPartsByOutputType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, meshParts, volumeParts);
}
 void ::HoudiniEngineUnity::HEU_GeoNode::GeneratePartInstances(::HoudiniEngineUnity::HEU_SessionBase session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "GeneratePartInstances",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, session);
}
 void ::HoudiniEngineUnity::HEU_GeoNode::GenerateAttributesStore(::HoudiniEngineUnity::HEU_SessionBase session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "GenerateAttributesStore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, session);
}
 void ::HoudiniEngineUnity::HEU_GeoNode::ProcessGeoCurve(::HoudiniEngineUnity::HEU_SessionBase session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "ProcessGeoCurve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, session);
}
 void ::HoudiniEngineUnity::HEU_GeoNode::SetupGeoCurveGameObjectAndTransform(::HoudiniEngineUnity::HEU_Curve curve)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "SetupGeoCurveGameObjectAndTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_Curve>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, curve);
}
 void ::HoudiniEngineUnity::HEU_GeoNode::ClearObjectInstances()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "ClearObjectInstances",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HoudiniEngineUnity::HEU_GeoNode::SetGeoInfo(::HoudiniEngineUnity::HAPI_GeoInfo geoInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "SetGeoInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HAPI_GeoInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, geoInfo);
}
 ::StringW ::HoudiniEngineUnity::HEU_GeoNode::GeneratePartFullName(::StringW partName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "GeneratePartFullName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, partName);
}
 ::StringW ::HoudiniEngineUnity::HEU_GeoNode::GenerateGeoCurveName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "GenerateGeoCurveName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::HoudiniEngineUnity::HEU_GeoNode::HasGeoNodeChanged(::HoudiniEngineUnity::HEU_SessionBase session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "HasGeoNodeChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, session);
}
 void ::HoudiniEngineUnity::HEU_GeoNode::ApplyHAPITransform(ByRef<::HoudiniEngineUnity::HAPI_Transform> hapiTransform)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "ApplyHAPITransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HAPI_Transform>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, hapiTransform);
}
 void ::HoudiniEngineUnity::HEU_GeoNode::GetDebugInfo(::System::Text::StringBuilder sb)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "GetDebugInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sb);
}
 bool ::HoudiniEngineUnity::HEU_GeoNode::IsUsingMaterial(::HoudiniEngineUnity::HEU_MaterialData materialData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "IsUsingMaterial",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_MaterialData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, materialData);
}
 void ::HoudiniEngineUnity::HEU_GeoNode::GetClonableParts(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData> clonableParts)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "GetClonableParts",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, clonableParts);
}
 void ::HoudiniEngineUnity::HEU_GeoNode::GetOutputGameObjects(::System::Collections::Generic::List_1<::UnityEngine::GameObject> outputObjects)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "GetOutputGameObjects",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::GameObject>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, outputObjects);
}
 void ::HoudiniEngineUnity::HEU_GeoNode::GetOutput(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeneratedOutput> outputs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "GetOutput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeneratedOutput>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, outputs);
}
 ::HoudiniEngineUnity::HEU_PartData ::HoudiniEngineUnity::HEU_GeoNode::GetHDAPartWithGameObject(::UnityEngine::GameObject outputGameObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "GetHDAPartWithGameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_PartData, false>(const_cast<void*>(instance), ___internal_method, outputGameObject);
}
 ::HoudiniEngineUnity::HEU_PartData ::HoudiniEngineUnity::HEU_GeoNode::GetPartFromPartID(int32_t partID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "GetPartFromPartID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_PartData, false>(const_cast<void*>(instance), ___internal_method, partID);
}
 void ::HoudiniEngineUnity::HEU_GeoNode::GetCurves(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Curve> curves, bool bEditableOnly)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "GetCurves",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Curve>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, curves, bEditableOnly);
}
 ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData> ::HoudiniEngineUnity::HEU_GeoNode::GetParts()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "GetParts",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData>, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::HoudiniEngineUnity::HEU_GeoNode::HasAttribInstancer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "HasAttribInstancer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HoudiniEngineUnity::HEU_GeoNode::SetAttributeModifiersOnPartOutputs(::HoudiniEngineUnity::HEU_SessionBase session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "SetAttributeModifiersOnPartOutputs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, session);
}
 void ::HoudiniEngineUnity::HEU_GeoNode::CalculateVisiblity(bool bParentVisibility)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "CalculateVisiblity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bParentVisibility);
}
 void ::HoudiniEngineUnity::HEU_GeoNode::HideAllGeometry()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "HideAllGeometry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HoudiniEngineUnity::HEU_GeoNode::CalculateColliderState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "CalculateColliderState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HoudiniEngineUnity::HEU_GeoNode::DisableAllColliders()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "DisableAllColliders",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HoudiniEngineUnity::HEU_GeoNode::ProcessVolumeParts(::HoudiniEngineUnity::HEU_SessionBase session, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData> volumeParts, bool bRebuild)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "ProcessVolumeParts",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, session, volumeParts, bRebuild);
}
 ::HoudiniEngineUnity::HEU_VolumeCache ::HoudiniEngineUnity::HEU_GeoNode::GetVolumeCacheByTileIndex(int32_t tileIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "GetVolumeCacheByTileIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_VolumeCache, false>(const_cast<void*>(instance), ___internal_method, tileIndex);
}
 void ::HoudiniEngineUnity::HEU_GeoNode::DestroyVolumeCache()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "DestroyVolumeCache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW ::HoudiniEngineUnity::HEU_GeoNode::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::HoudiniEngineUnity::HEU_GeoNode::IsEquivalentTo(::HoudiniEngineUnity::HEU_GeoNode other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoNode>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_GeoNode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, other);
}
} // end anonymous namespace
