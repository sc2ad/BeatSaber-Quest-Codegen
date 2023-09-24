#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_GeneralUtility_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_GeneralUtility_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MeshCollider_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_Parameters_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_Handle_def.hpp"
#include "HoudiniEngineUnity/zzzz__TransformData_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_HoudiniAssetRoot_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_AssetInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_AttributeInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_AttributeOwner_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_Transform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_OutputAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_SessionBase_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_HandleInfo_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_ObjectInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_ParmChoiceInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_ParmInfo_def.hpp"
#include "System/zzzz__Int32Enum_def.hpp"
//  Writing Method size for method: HoudiniEngineUnity::HEU_GeneralUtility.GetAttributeStringDataHelper
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(HoudiniEngineUnity::HEU_SessionBase, int32_t, int32_t, ::StringW, ByRef<HoudiniEngineUnity::HAPI_AttributeInfo>, ByRef<::ArrayW<int32_t>>)>(&HoudiniEngineUnity::HEU_GeneralUtility::GetAttributeStringDataHelper)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x2042c84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "GetAttributeStringDataHelper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<HoudiniEngineUnity::HAPI_AttributeInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<int32_t>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_GeneralUtility.GetAttributeStringData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (*)(HoudiniEngineUnity::HEU_SessionBase, int32_t, int32_t, ::StringW, ByRef<HoudiniEngineUnity::HAPI_AttributeInfo>)>(&HoudiniEngineUnity::HEU_GeneralUtility::GetAttributeStringData)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2042e58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "GetAttributeStringData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<HoudiniEngineUnity::HAPI_AttributeInfo>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_GeneralUtility.CheckAttributeExists
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(HoudiniEngineUnity::HEU_SessionBase, int32_t, int32_t, ::StringW, HoudiniEngineUnity::HAPI_AttributeOwner)>(&HoudiniEngineUnity::HEU_GeneralUtility::CheckAttributeExists)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2042f8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "CheckAttributeExists",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HAPI_AttributeOwner>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_GeneralUtility.GetAttributeInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(HoudiniEngineUnity::HEU_SessionBase, int32_t, int32_t, ::StringW, ByRef<HoudiniEngineUnity::HAPI_AttributeInfo>)>(&HoudiniEngineUnity::HEU_GeneralUtility::GetAttributeInfo)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2042fdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "GetAttributeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<HoudiniEngineUnity::HAPI_AttributeInfo>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_GeneralUtility.HasValidInstanceAttribute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(HoudiniEngineUnity::HEU_SessionBase, int32_t, int32_t, ::StringW)>(&HoudiniEngineUnity::HEU_GeneralUtility::HasValidInstanceAttribute)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2043070;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "HasValidInstanceAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_GeneralUtility.UpdateGeneratedAttributeStore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(HoudiniEngineUnity::HEU_SessionBase, int32_t, int32_t, UnityEngine::GameObject)>(&HoudiniEngineUnity::HEU_GeneralUtility::UpdateGeneratedAttributeStore)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x20430ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "UpdateGeneratedAttributeStore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_GeneralUtility.CreateOutputAttributeHelper
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::HEU_OutputAttribute (*)(::StringW, ByRef<HoudiniEngineUnity::HAPI_AttributeInfo>)>(&HoudiniEngineUnity::HEU_GeneralUtility::CreateOutputAttributeHelper)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2043564;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "CreateOutputAttributeHelper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<HoudiniEngineUnity::HAPI_AttributeInfo>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_GeneralUtility.CreateOutputAttribute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::HEU_OutputAttribute (*)(HoudiniEngineUnity::HEU_SessionBase, int32_t, int32_t, ::StringW, ByRef<HoudiniEngineUnity::HAPI_AttributeInfo>)>(&HoudiniEngineUnity::HEU_GeneralUtility::CreateOutputAttribute)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x2043280;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "CreateOutputAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<HoudiniEngineUnity::HAPI_AttributeInfo>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_GeneralUtility.CopyWorldTransformValues
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Transform, UnityEngine::Transform)>(&HoudiniEngineUnity::HEU_GeneralUtility::CopyWorldTransformValues)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x20435e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "CopyWorldTransformValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_GeneralUtility.ApplyTransformTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Transform, UnityEngine::Transform)>(&HoudiniEngineUnity::HEU_GeneralUtility::ApplyTransformTo)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x204364c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "ApplyTransformTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_GeneralUtility.CopyLocalTransformValues
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Transform, UnityEngine::Transform)>(&HoudiniEngineUnity::HEU_GeneralUtility::CopyLocalTransformValues)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2043720;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "CopyLocalTransformValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_GeneralUtility.GetChildGameObjects
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<UnityEngine::GameObject> (*)(UnityEngine::GameObject)>(&HoudiniEngineUnity::HEU_GeneralUtility::GetChildGameObjects)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x2043788;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "GetChildGameObjects",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_GeneralUtility.GetChildGameObjectsWithNamePattern
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<UnityEngine::GameObject> (*)(UnityEngine::GameObject, ::StringW, bool)>(&HoudiniEngineUnity::HEU_GeneralUtility::GetChildGameObjectsWithNamePattern)> {
  constexpr static std::size_t size = 0x420;
  constexpr static std::size_t addrs = 0x2043b28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "GetChildGameObjectsWithNamePattern",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_GeneralUtility.GetInstanceChildObjects
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<UnityEngine::GameObject> (*)(UnityEngine::GameObject)>(&HoudiniEngineUnity::HEU_GeneralUtility::GetInstanceChildObjects)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2043f48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "GetInstanceChildObjects",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_GeneralUtility.GetNonInstanceChildObjects
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<UnityEngine::GameObject> (*)(UnityEngine::GameObject)>(&HoudiniEngineUnity::HEU_GeneralUtility::GetNonInstanceChildObjects)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2043f94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "GetNonInstanceChildObjects",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_GeneralUtility.GetGameObjectByName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GameObject (*)(System::Collections::Generic::List_1<UnityEngine::GameObject>, ::StringW)>(&HoudiniEngineUnity::HEU_GeneralUtility::GetGameObjectByName)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x2043fe0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "GetGameObjectByName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::GameObject>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_GeneralUtility.GetGameObjectByNameInProjectOnly
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GameObject (*)(::StringW)>(&HoudiniEngineUnity::HEU_GeneralUtility::GetGameObjectByNameInProjectOnly)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2044168;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "GetGameObjectByNameInProjectOnly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_GeneralUtility.IsGameObjectInProject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::GameObject)>(&HoudiniEngineUnity::HEU_GeneralUtility::IsGameObjectInProject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2044238;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "IsGameObjectInProject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_GeneralUtility.GetGameObjectByNameInScene
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GameObject (*)(::StringW)>(&HoudiniEngineUnity::HEU_GeneralUtility::GetGameObjectByNameInScene)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2044240;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "GetGameObjectByNameInScene",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_GeneralUtility.GetHDAByGameObjectNameInScene
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::HEU_HoudiniAssetRoot (*)(::StringW)>(&HoudiniEngineUnity::HEU_GeneralUtility::GetHDAByGameObjectNameInScene)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x204428c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "GetHDAByGameObjectNameInScene",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_GeneralUtility.DestroyGeneratedComponents
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::GameObject)>(&HoudiniEngineUnity::HEU_GeneralUtility::DestroyGeneratedComponents)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x20442d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "DestroyGeneratedComponents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_GeneralUtility.DestroyGeneratedMeshComponents
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::GameObject)>(&HoudiniEngineUnity::HEU_GeneralUtility::DestroyGeneratedMeshComponents)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x20443f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "DestroyGeneratedMeshComponents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_GeneralUtility.DestroyTerrainComponents
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::GameObject)>(&HoudiniEngineUnity::HEU_GeneralUtility::DestroyTerrainComponents)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x20444b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "DestroyTerrainComponents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_GeneralUtility.DestroyImmediate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Object, bool, bool)>(&HoudiniEngineUnity::HEU_GeneralUtility::DestroyImmediate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2044664;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "DestroyImmediate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Object>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_GeneralUtility.DestroyBakedGameObjects
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Collections::Generic::List_1<UnityEngine::GameObject>)>(&HoudiniEngineUnity::HEU_GeneralUtility::DestroyBakedGameObjects)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20446a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "DestroyBakedGameObjects",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::GameObject>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_GeneralUtility.DestroyBakedGameObjectsWithEndName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Collections::Generic::List_1<UnityEngine::GameObject>, ::StringW)>(&HoudiniEngineUnity::HEU_GeneralUtility::DestroyBakedGameObjectsWithEndName)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x20446b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "DestroyBakedGameObjectsWithEndName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::GameObject>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_GeneralUtility.DestroyLODGroup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::GameObject, bool)>(&HoudiniEngineUnity::HEU_GeneralUtility::DestroyLODGroup)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x2044a5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "DestroyLODGroup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_GeneralUtility.GetLODTransforms
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<UnityEngine::Transform> (*)(UnityEngine::GameObject)>(&HoudiniEngineUnity::HEU_GeneralUtility::GetLODTransforms)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x2044c48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "GetLODTransforms",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_GeneralUtility.SetLODTransformValues
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::GameObject, System::Collections::Generic::List_1<HoudiniEngineUnity::TransformData>)>(&HoudiniEngineUnity::HEU_GeneralUtility::SetLODTransformValues)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x2044e00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "SetLODTransformValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<HoudiniEngineUnity::TransformData>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_GeneralUtility.DestroyGeneratedMeshMaterialsLODGroups
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::GameObject, bool)>(&HoudiniEngineUnity::HEU_GeneralUtility::DestroyGeneratedMeshMaterialsLODGroups)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x20447f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "DestroyGeneratedMeshMaterialsLODGroups",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_GeneralUtility.DestroyGeneratedMaterial
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Material)>(&HoudiniEngineUnity::HEU_GeneralUtility::DestroyGeneratedMaterial)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2044f44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "DestroyGeneratedMaterial",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Material>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_GeneralUtility.DestroyMeshCollider
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::MeshCollider, bool)>(&HoudiniEngineUnity::HEU_GeneralUtility::DestroyMeshCollider)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2045078;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "DestroyMeshCollider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::MeshCollider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_GeneralUtility.SetGameObjectRenderVisiblity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::GameObject, bool)>(&HoudiniEngineUnity::HEU_GeneralUtility::SetGameObjectRenderVisiblity)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x20451ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "SetGameObjectRenderVisiblity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_GeneralUtility.SetGameObjectChildrenRenderVisibility
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::GameObject, bool)>(&HoudiniEngineUnity::HEU_GeneralUtility::SetGameObjectChildrenRenderVisibility)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2045290;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "SetGameObjectChildrenRenderVisibility",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_GeneralUtility.SetGameObjectColliderState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::GameObject, bool)>(&HoudiniEngineUnity::HEU_GeneralUtility::SetGameObjectColliderState)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x2045378;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "SetGameObjectColliderState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_GeneralUtility.SetGameObjectChildrenColliderState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::GameObject, bool)>(&HoudiniEngineUnity::HEU_GeneralUtility::SetGameObjectChildrenColliderState)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x204545c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "SetGameObjectChildrenColliderState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_GeneralUtility.ColorToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(UnityEngine::Color)>(&HoudiniEngineUnity::HEU_GeneralUtility::ColorToString)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x2045544;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "ColorToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_GeneralUtility.StringToColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (*)(::StringW)>(&HoudiniEngineUnity::HEU_GeneralUtility::StringToColor)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x2045734;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "StringToColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_GeneralUtility.DoesUnityTagExist
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&HoudiniEngineUnity::HEU_GeneralUtility::DoesUnityTagExist)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2045958;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "DoesUnityTagExist",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_GeneralUtility.SetLayer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::GameObject, int32_t, bool)>(&HoudiniEngineUnity::HEU_GeneralUtility::SetLayer)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x2045960;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "SetLayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_GeneralUtility.SetTag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::GameObject, ::StringW, bool)>(&HoudiniEngineUnity::HEU_GeneralUtility::SetTag)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x2045a40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "SetTag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_GeneralUtility.CopyFlags
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::GameObject, UnityEngine::GameObject, bool)>(&HoudiniEngineUnity::HEU_GeneralUtility::CopyFlags)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2045b20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "CopyFlags",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_GeneralUtility.IsMouseWithinSceneView
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::Camera, UnityEngine::Vector2)>(&HoudiniEngineUnity::HEU_GeneralUtility::IsMouseWithinSceneView)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2045b88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "IsMouseWithinSceneView",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Camera>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_GeneralUtility.IsMouseOverRect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::Camera, UnityEngine::Vector2, ByRef<UnityEngine::Rect>)>(&HoudiniEngineUnity::HEU_GeneralUtility::IsMouseOverRect)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2045bf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "IsMouseOverRect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Camera>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Rect>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_GeneralUtility.GetSystemTypeByName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type (*)(::StringW)>(&HoudiniEngineUnity::HEU_GeneralUtility::GetSystemTypeByName)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2045c3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "GetSystemTypeByName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_GeneralUtility.AssignUnityTag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(HoudiniEngineUnity::HEU_SessionBase, int32_t, int32_t, UnityEngine::GameObject)>(&HoudiniEngineUnity::HEU_GeneralUtility::AssignUnityTag)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x2045c88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "AssignUnityTag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_GeneralUtility.AssignUnityLayer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(HoudiniEngineUnity::HEU_SessionBase, int32_t, int32_t, UnityEngine::GameObject)>(&HoudiniEngineUnity::HEU_GeneralUtility::AssignUnityLayer)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x2045f60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "AssignUnityLayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_GeneralUtility.MakeStaticIfHasAttribute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(HoudiniEngineUnity::HEU_SessionBase, int32_t, int32_t, UnityEngine::GameObject)>(&HoudiniEngineUnity::HEU_GeneralUtility::MakeStaticIfHasAttribute)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x20461b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "MakeStaticIfHasAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_GeneralUtility.GetUnityScriptAttributeValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(HoudiniEngineUnity::HEU_SessionBase, int32_t, int32_t)>(&HoudiniEngineUnity::HEU_GeneralUtility::GetUnityScriptAttributeValue)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x2046328;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "GetUnityScriptAttributeValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_GeneralUtility.GetAttributeStringValueSingle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(HoudiniEngineUnity::HEU_SessionBase, int32_t, int32_t, ::StringW, HoudiniEngineUnity::HAPI_AttributeOwner)>(&HoudiniEngineUnity::HEU_GeneralUtility::GetAttributeStringValueSingle)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x2046490;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "GetAttributeStringValueSingle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HAPI_AttributeOwner>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_GeneralUtility.GetAttributeStringValueSingleStrict
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(HoudiniEngineUnity::HEU_SessionBase, int32_t, int32_t, ::StringW, HoudiniEngineUnity::HAPI_AttributeOwner)>(&HoudiniEngineUnity::HEU_GeneralUtility::GetAttributeStringValueSingleStrict)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x2046734;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "GetAttributeStringValueSingleStrict",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HAPI_AttributeOwner>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_GeneralUtility.GetAttributeFloatSingle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(HoudiniEngineUnity::HEU_SessionBase, int32_t, int32_t, ::StringW, ByRef<float_t>)>(&HoudiniEngineUnity::HEU_GeneralUtility::GetAttributeFloatSingle)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x2046ab4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "GetAttributeFloatSingle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_GeneralUtility.GetAttributeIntSingle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(HoudiniEngineUnity::HEU_SessionBase, int32_t, int32_t, ::StringW, ByRef<int32_t>)>(&HoudiniEngineUnity::HEU_GeneralUtility::GetAttributeIntSingle)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x2046c14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "GetAttributeIntSingle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_GeneralUtility.GetAttributeColorSingle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(HoudiniEngineUnity::HEU_SessionBase, int32_t, int32_t, ::StringW, ByRef<UnityEngine::Color>)>(&HoudiniEngineUnity::HEU_GeneralUtility::GetAttributeColorSingle)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x2046d74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "GetAttributeColorSingle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Color>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_GeneralUtility.HasAttribute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(HoudiniEngineUnity::HEU_SessionBase, int32_t, int32_t, ::StringW, HoudiniEngineUnity::HAPI_AttributeOwner)>(&HoudiniEngineUnity::HEU_GeneralUtility::HasAttribute)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2046f40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "HasAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HAPI_AttributeOwner>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_GeneralUtility.AttachScriptWithInvokeFunction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, UnityEngine::GameObject)>(&HoudiniEngineUnity::HEU_GeneralUtility::AttachScriptWithInvokeFunction)> {
  constexpr static std::size_t size = 0x550;
  constexpr static std::size_t addrs = 0x2046fe4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "AttachScriptWithInvokeFunction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_GeneralUtility.IsInCameraView
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::Camera, UnityEngine::Vector3)>(&HoudiniEngineUnity::HEU_GeneralUtility::IsInCameraView)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2047534;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "IsInCameraView",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Camera>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_GeneralUtility.FindOrGenerateHandles
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_Handle> (*)(HoudiniEngineUnity::HEU_SessionBase, ByRef<HoudiniEngineUnity::HAPI_AssetInfo>, int32_t, ::StringW, HoudiniEngineUnity::HEU_Parameters, System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_Handle>)>(&HoudiniEngineUnity::HEU_GeneralUtility::FindOrGenerateHandles)> {
  constexpr static std::size_t size = 0x464;
  constexpr static std::size_t addrs = 0x20475cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "FindOrGenerateHandles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<HoudiniEngineUnity::HAPI_AssetInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_Parameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_Handle>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_GeneralUtility.CopyComponents
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::GameObject, UnityEngine::GameObject)>(&HoudiniEngineUnity::HEU_GeneralUtility::CopyComponents)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2047a30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "CopyComponents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_GeneralUtility.LoadTextureFromFile
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Texture (*)(::StringW)>(&HoudiniEngineUnity::HEU_GeneralUtility::LoadTextureFromFile)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x2047a34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "LoadTextureFromFile",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_GeneralUtility.MakeTexture
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Texture2D (*)(int32_t, int32_t, UnityEngine::Color)>(&HoudiniEngineUnity::HEU_GeneralUtility::MakeTexture)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2047c28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "MakeTexture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_GeneralUtility.ReplaceFirstOccurrence
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::StringW, ::StringW)>(&HoudiniEngineUnity::HEU_GeneralUtility::ReplaceFirstOccurrence)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2047d5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "ReplaceFirstOccurrence",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_GeneralUtility.SetParentWithCleanTransform
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Transform, UnityEngine::Transform)>(&HoudiniEngineUnity::HEU_GeneralUtility::SetParentWithCleanTransform)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x2047df0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "SetParentWithCleanTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_GeneralUtility.CopyHAPITransform
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<HoudiniEngineUnity::HAPI_Transform>, ByRef<HoudiniEngineUnity::HAPI_Transform>)>(&HoudiniEngineUnity::HEU_GeneralUtility::CopyHAPITransform)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2047ee0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "CopyHAPITransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<HoudiniEngineUnity::HAPI_Transform>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<HoudiniEngineUnity::HAPI_Transform>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_GeneralUtility.GetMaterialAttributeValueFromPart
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(HoudiniEngineUnity::HEU_SessionBase, int32_t, int32_t)>(&HoudiniEngineUnity::HEU_GeneralUtility::GetMaterialAttributeValueFromPart)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x2047f74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "GetMaterialAttributeValueFromPart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_GeneralUtility.ReplaceColliderMeshFromMeshFilter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::GameObject, UnityEngine::GameObject)>(&HoudiniEngineUnity::HEU_GeneralUtility::ReplaceColliderMeshFromMeshFilter)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x20480ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "ReplaceColliderMeshFromMeshFilter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_GeneralUtility.ReplaceColliderMeshFromMeshCollider
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::GameObject, UnityEngine::GameObject)>(&HoudiniEngineUnity::HEU_GeneralUtility::ReplaceColliderMeshFromMeshCollider)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x2048244;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "ReplaceColliderMeshFromMeshCollider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_GeneralUtility.BiLerpf
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(float_t, float_t, float_t, float_t, float_t, float_t)>(&HoudiniEngineUnity::HEU_GeneralUtility::BiLerpf)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2048394;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "BiLerpf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_GeneralUtility.Fractionalf
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(float_t)>(&HoudiniEngineUnity::HEU_GeneralUtility::Fractionalf)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x20483dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "Fractionalf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_GeneralUtility.LongestCommonPrefix
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(System::Collections::Generic::List_1<::StringW>)>(&HoudiniEngineUnity::HEU_GeneralUtility::LongestCommonPrefix)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x20483e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "LongestCommonPrefix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_GeneralUtility.GetRawOperatorName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&HoudiniEngineUnity::HEU_GeneralUtility::GetRawOperatorName)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2048574;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "GetRawOperatorName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_GeneralUtility.GetPrefabFromPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GameObject (*)(::StringW)>(&HoudiniEngineUnity::HEU_GeneralUtility::GetPrefabFromPath)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x20485cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "GetPrefabFromPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_GeneralUtility._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_GeneralUtility::*)()>(&HoudiniEngineUnity::HEU_GeneralUtility::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x204881c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
template<typename T>
 bool HoudiniEngineUnity::HEU_GeneralUtility::GetArray1Arg(int32_t arg1, HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<T> func, ByRef<::ArrayW<T>> data, int32_t start, int32_t count)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                        "GetArray1Arg",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<T>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, arg1, func, data, start, count);
}
template<typename ARG2,typename T>
 bool HoudiniEngineUnity::HEU_GeneralUtility::GetArray2Arg(int32_t arg1, ARG2 arg2, HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,T> func, ByRef<::ArrayW<T>> data, int32_t start, int32_t count)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                        "GetArray2Arg",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ARG2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ARG2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<T>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ARG2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, arg1, arg2, func, data, start, count);
}
template<typename ARG3,typename ARG2,typename T>
 bool HoudiniEngineUnity::HEU_GeneralUtility::GetArray3Arg(int32_t arg1, ARG2 arg2, ARG3 arg3, HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,T> func, ByRef<::ArrayW<T>> data, int32_t start, int32_t count)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                        "GetArray3Arg",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ARG3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ARG2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ARG2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ARG3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<T>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ARG3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ARG2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, arg1, arg2, arg3, func, data, start, count);
}
template<typename ARG3,typename ARG2,typename T>
 bool HoudiniEngineUnity::HEU_GeneralUtility::GetArray(int32_t arg1, ARG2 arg2, ARG3 arg3, HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<T> func1, HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,T> func2, HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,T> func3, ByRef<::ArrayW<T>> data, int32_t start, int32_t count, int32_t tupleSize)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                        "GetArray",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ARG3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ARG2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ARG2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ARG3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<T>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ARG3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ARG2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, arg1, arg2, arg3, func1, func2, func3, data, start, count, tupleSize);
}
template<typename T>
 bool HoudiniEngineUnity::HEU_GeneralUtility::SetArray1Arg(int32_t arg1, HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<T> func, ByRef<::ArrayW<T>> data, int32_t start, int32_t count)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                        "SetArray1Arg",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<T>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, arg1, func, data, start, count);
}
template<typename ARG2,typename T>
 bool HoudiniEngineUnity::HEU_GeneralUtility::SetArray2Arg(int32_t arg1, ARG2 arg2, HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,T> func, ByRef<::ArrayW<T>> data, int32_t start, int32_t count)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                        "SetArray2Arg",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ARG2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ARG2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<T>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ARG2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, arg1, arg2, func, data, start, count);
}
template<typename ARG2,typename T>
 bool HoudiniEngineUnity::HEU_GeneralUtility::SetArray(int32_t arg1, ARG2 arg2, HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<T> func1, HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,T> func2, ByRef<::ArrayW<T>> data, int32_t start, int32_t count, int32_t tupleSize)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                        "SetArray",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ARG2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ARG2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<T>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ARG2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, arg1, arg2, func1, func2, data, start, count, tupleSize);
}
template<typename T>
 bool HoudiniEngineUnity::HEU_GeneralUtility::DoArrayElementsMatch(::ArrayW<T> array1, ::ArrayW<T> array2)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                        "DoArrayElementsMatch",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, array1, array2);
}
template<typename T>
 bool HoudiniEngineUnity::HEU_GeneralUtility::DoArrayElementsMatch(::ArrayW<T> array1, int32_t startOffset1, ::ArrayW<T> array2, int32_t startOffset2, int32_t length)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                        "DoArrayElementsMatch",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, array1, startOffset1, array2, startOffset2, length);
}
template<typename T>
 bool HoudiniEngineUnity::HEU_GeneralUtility::GetAttributeArray(int32_t geoID, int32_t partID, ::StringW name, ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> info, ::ArrayW<T> items, HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<T> getFunc, int32_t count)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                        "GetAttributeArray",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<HoudiniEngineUnity::HAPI_AttributeInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, geoID, partID, name, info, items, getFunc, count);
}
template<typename T>
 bool HoudiniEngineUnity::HEU_GeneralUtility::GetAttribute(HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID, ::StringW name, ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> info, ByRef<::ArrayW<T>> data, HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<T> getFunc)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                        "GetAttribute",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<HoudiniEngineUnity::HAPI_AttributeInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<T>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<T>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, session, geoID, partID, name, info, data, getFunc);
}
template<typename T>
 bool HoudiniEngineUnity::HEU_GeneralUtility::GetAttributeStrict(HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID, HoudiniEngineUnity::HAPI_AttributeOwner attrOwner, ::StringW name, ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> info, ByRef<::ArrayW<T>> data, HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<T> getFunc)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                        "GetAttributeStrict",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HAPI_AttributeOwner>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<HoudiniEngineUnity::HAPI_AttributeInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<T>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<T>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, session, geoID, partID, attrOwner, name, info, data, getFunc);
}
 void HoudiniEngineUnity::HEU_GeneralUtility::GetAttributeStringDataHelper(HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID, ::StringW name, ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> info, ByRef<::ArrayW<int32_t>> data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "GetAttributeStringDataHelper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<HoudiniEngineUnity::HAPI_AttributeInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<int32_t>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, session, geoID, partID, name, info, data);
}
 ::ArrayW<::StringW> HoudiniEngineUnity::HEU_GeneralUtility::GetAttributeStringData(HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID, ::StringW name, ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> attrInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "GetAttributeStringData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<HoudiniEngineUnity::HAPI_AttributeInfo>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>, false>(nullptr, ___internal_method, session, geoID, partID, name, attrInfo);
}
template<typename T>
 bool HoudiniEngineUnity::HEU_GeneralUtility::SetAttributeArray(int32_t geoID, int32_t partID, ::StringW attrName, ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> attrInfo, ::ArrayW<T> items, HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1<T> setFunc, int32_t count)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                        "SetAttributeArray",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<HoudiniEngineUnity::HAPI_AttributeInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, geoID, partID, attrName, attrInfo, items, setFunc, count);
}
template<typename T>
 bool HoudiniEngineUnity::HEU_GeneralUtility::SetAttribute(int32_t geoID, int32_t partID, ::StringW attrName, ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> attrInfo, ::ArrayW<T> items, HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1<T> setFunc)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                        "SetAttribute",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<HoudiniEngineUnity::HAPI_AttributeInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1<T>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, geoID, partID, attrName, attrInfo, items, setFunc);
}
 bool HoudiniEngineUnity::HEU_GeneralUtility::CheckAttributeExists(HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID, ::StringW attribName, HoudiniEngineUnity::HAPI_AttributeOwner attribOwner)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "CheckAttributeExists",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HAPI_AttributeOwner>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, session, geoID, partID, attribName, attribOwner);
}
 bool HoudiniEngineUnity::HEU_GeneralUtility::GetAttributeInfo(HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID, ::StringW attribName, ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> attribInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "GetAttributeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<HoudiniEngineUnity::HAPI_AttributeInfo>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, session, geoID, partID, attribName, attribInfo);
}
 bool HoudiniEngineUnity::HEU_GeneralUtility::HasValidInstanceAttribute(HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID, ::StringW attribName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "HasValidInstanceAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, session, geoID, partID, attribName);
}
 void HoudiniEngineUnity::HEU_GeneralUtility::UpdateGeneratedAttributeStore(HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID, UnityEngine::GameObject go)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "UpdateGeneratedAttributeStore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, session, geoID, partID, go);
}
 HoudiniEngineUnity::HEU_OutputAttribute HoudiniEngineUnity::HEU_GeneralUtility::CreateOutputAttributeHelper(::StringW attrName, ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> attrInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "CreateOutputAttributeHelper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<HoudiniEngineUnity::HAPI_AttributeInfo>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<HoudiniEngineUnity::HEU_OutputAttribute, false>(nullptr, ___internal_method, attrName, attrInfo);
}
 HoudiniEngineUnity::HEU_OutputAttribute HoudiniEngineUnity::HEU_GeneralUtility::CreateOutputAttribute(HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID, ::StringW attrName, ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> attrInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "CreateOutputAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<HoudiniEngineUnity::HAPI_AttributeInfo>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<HoudiniEngineUnity::HEU_OutputAttribute, false>(nullptr, ___internal_method, session, geoID, partID, attrName, attrInfo);
}
 void HoudiniEngineUnity::HEU_GeneralUtility::CopyWorldTransformValues(UnityEngine::Transform src, UnityEngine::Transform dest)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "CopyWorldTransformValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, src, dest);
}
 void HoudiniEngineUnity::HEU_GeneralUtility::ApplyTransformTo(UnityEngine::Transform src, UnityEngine::Transform target)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "ApplyTransformTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, src, target);
}
 void HoudiniEngineUnity::HEU_GeneralUtility::CopyLocalTransformValues(UnityEngine::Transform src, UnityEngine::Transform dest)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "CopyLocalTransformValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, src, dest);
}
 System::Collections::Generic::List_1<UnityEngine::GameObject> HoudiniEngineUnity::HEU_GeneralUtility::GetChildGameObjects(UnityEngine::GameObject parentGO)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "GetChildGameObjects",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::List_1<UnityEngine::GameObject>, false>(nullptr, ___internal_method, parentGO);
}
 System::Collections::Generic::List_1<UnityEngine::GameObject> HoudiniEngineUnity::HEU_GeneralUtility::GetChildGameObjectsWithNamePattern(UnityEngine::GameObject parentGO, ::StringW pattern, bool bExclude)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "GetChildGameObjectsWithNamePattern",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::List_1<UnityEngine::GameObject>, false>(nullptr, ___internal_method, parentGO, pattern, bExclude);
}
 System::Collections::Generic::List_1<UnityEngine::GameObject> HoudiniEngineUnity::HEU_GeneralUtility::GetInstanceChildObjects(UnityEngine::GameObject parentGO)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "GetInstanceChildObjects",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::List_1<UnityEngine::GameObject>, false>(nullptr, ___internal_method, parentGO);
}
 System::Collections::Generic::List_1<UnityEngine::GameObject> HoudiniEngineUnity::HEU_GeneralUtility::GetNonInstanceChildObjects(UnityEngine::GameObject parentGO)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "GetNonInstanceChildObjects",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::List_1<UnityEngine::GameObject>, false>(nullptr, ___internal_method, parentGO);
}
 UnityEngine::GameObject HoudiniEngineUnity::HEU_GeneralUtility::GetGameObjectByName(System::Collections::Generic::List_1<UnityEngine::GameObject> goList, ::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "GetGameObjectByName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::GameObject>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::GameObject, false>(nullptr, ___internal_method, goList, name);
}
 UnityEngine::GameObject HoudiniEngineUnity::HEU_GeneralUtility::GetGameObjectByNameInProjectOnly(::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "GetGameObjectByNameInProjectOnly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::GameObject, false>(nullptr, ___internal_method, name);
}
 bool HoudiniEngineUnity::HEU_GeneralUtility::IsGameObjectInProject(UnityEngine::GameObject go)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "IsGameObjectInProject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, go);
}
 UnityEngine::GameObject HoudiniEngineUnity::HEU_GeneralUtility::GetGameObjectByNameInScene(::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "GetGameObjectByNameInScene",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::GameObject, false>(nullptr, ___internal_method, name);
}
 HoudiniEngineUnity::HEU_HoudiniAssetRoot HoudiniEngineUnity::HEU_GeneralUtility::GetHDAByGameObjectNameInScene(::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "GetHDAByGameObjectNameInScene",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<HoudiniEngineUnity::HEU_HoudiniAssetRoot, false>(nullptr, ___internal_method, name);
}
template<typename T>
 T HoudiniEngineUnity::HEU_GeneralUtility::GetOrCreateComponent(UnityEngine::GameObject gameObject)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                        "GetOrCreateComponent",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method, gameObject);
}
 void HoudiniEngineUnity::HEU_GeneralUtility::DestroyGeneratedComponents(UnityEngine::GameObject gameObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "DestroyGeneratedComponents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, gameObject);
}
 void HoudiniEngineUnity::HEU_GeneralUtility::DestroyGeneratedMeshComponents(UnityEngine::GameObject gameObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "DestroyGeneratedMeshComponents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, gameObject);
}
 void HoudiniEngineUnity::HEU_GeneralUtility::DestroyTerrainComponents(UnityEngine::GameObject gameObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "DestroyTerrainComponents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, gameObject);
}
template<typename T>
 void HoudiniEngineUnity::HEU_GeneralUtility::DestroyComponent(UnityEngine::GameObject gameObject)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                        "DestroyComponent",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, gameObject);
}
/// @param bAllowDestroyingAssets: bool (default: false)
/// @param bRegisterUndo: bool (default: false)
 void HoudiniEngineUnity::HEU_GeneralUtility::DestroyImmediate(UnityEngine::Object obj, bool bAllowDestroyingAssets, bool bRegisterUndo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "DestroyImmediate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Object>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, obj, bAllowDestroyingAssets, bRegisterUndo);
}
 void HoudiniEngineUnity::HEU_GeneralUtility::DestroyBakedGameObjects(System::Collections::Generic::List_1<UnityEngine::GameObject> gameObjectsToDestroy)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "DestroyBakedGameObjects",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::GameObject>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, gameObjectsToDestroy);
}
 void HoudiniEngineUnity::HEU_GeneralUtility::DestroyBakedGameObjectsWithEndName(System::Collections::Generic::List_1<UnityEngine::GameObject> gameObjectsToDestroy, ::StringW endName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "DestroyBakedGameObjectsWithEndName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::GameObject>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, gameObjectsToDestroy, endName);
}
 void HoudiniEngineUnity::HEU_GeneralUtility::DestroyLODGroup(UnityEngine::GameObject targetGO, bool bDontDeletePersistantResources)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "DestroyLODGroup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, targetGO, bDontDeletePersistantResources);
}
 System::Collections::Generic::List_1<UnityEngine::Transform> HoudiniEngineUnity::HEU_GeneralUtility::GetLODTransforms(UnityEngine::GameObject targetGO)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "GetLODTransforms",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::List_1<UnityEngine::Transform>, false>(nullptr, ___internal_method, targetGO);
}
 void HoudiniEngineUnity::HEU_GeneralUtility::SetLODTransformValues(UnityEngine::GameObject targetGO, System::Collections::Generic::List_1<HoudiniEngineUnity::TransformData> transformData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "SetLODTransformValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<HoudiniEngineUnity::TransformData>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, targetGO, transformData);
}
 void HoudiniEngineUnity::HEU_GeneralUtility::DestroyGeneratedMeshMaterialsLODGroups(UnityEngine::GameObject targetGO, bool bDontDeletePersistantResources)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "DestroyGeneratedMeshMaterialsLODGroups",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, targetGO, bDontDeletePersistantResources);
}
 void HoudiniEngineUnity::HEU_GeneralUtility::DestroyGeneratedMaterial(UnityEngine::Material material)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "DestroyGeneratedMaterial",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Material>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, material);
}
 void HoudiniEngineUnity::HEU_GeneralUtility::DestroyMeshCollider(UnityEngine::MeshCollider meshCollider, bool bDontDeletePersistantResources)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "DestroyMeshCollider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::MeshCollider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, meshCollider, bDontDeletePersistantResources);
}
 void HoudiniEngineUnity::HEU_GeneralUtility::SetGameObjectRenderVisiblity(UnityEngine::GameObject gameObject, bool bVisible)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "SetGameObjectRenderVisiblity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, gameObject, bVisible);
}
 void HoudiniEngineUnity::HEU_GeneralUtility::SetGameObjectChildrenRenderVisibility(UnityEngine::GameObject gameObject, bool bVisible)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "SetGameObjectChildrenRenderVisibility",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, gameObject, bVisible);
}
 void HoudiniEngineUnity::HEU_GeneralUtility::SetGameObjectColliderState(UnityEngine::GameObject gameObject, bool bEnabled)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "SetGameObjectColliderState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, gameObject, bEnabled);
}
 void HoudiniEngineUnity::HEU_GeneralUtility::SetGameObjectChildrenColliderState(UnityEngine::GameObject gameObject, bool bVisible)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "SetGameObjectChildrenColliderState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, gameObject, bVisible);
}
 ::StringW HoudiniEngineUnity::HEU_GeneralUtility::ColorToString(UnityEngine::Color c)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "ColorToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, c);
}
 UnityEngine::Color HoudiniEngineUnity::HEU_GeneralUtility::StringToColor(::StringW colorString)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "StringToColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Color, false>(nullptr, ___internal_method, colorString);
}
 bool HoudiniEngineUnity::HEU_GeneralUtility::DoesUnityTagExist(::StringW tagName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "DoesUnityTagExist",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, tagName);
}
 void HoudiniEngineUnity::HEU_GeneralUtility::SetLayer(UnityEngine::GameObject rootGO, int32_t layer, bool bIncludeChildren)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "SetLayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, rootGO, layer, bIncludeChildren);
}
 void HoudiniEngineUnity::HEU_GeneralUtility::SetTag(UnityEngine::GameObject rootGO, ::StringW tag, bool bIncludeChildren)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "SetTag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, rootGO, tag, bIncludeChildren);
}
 void HoudiniEngineUnity::HEU_GeneralUtility::CopyFlags(UnityEngine::GameObject srcGO, UnityEngine::GameObject dstGO, bool bIncludeChildren)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "CopyFlags",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, srcGO, dstGO, bIncludeChildren);
}
 bool HoudiniEngineUnity::HEU_GeneralUtility::IsMouseWithinSceneView(UnityEngine::Camera camera, UnityEngine::Vector2 mousePosition)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "IsMouseWithinSceneView",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Camera>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, camera, mousePosition);
}
 bool HoudiniEngineUnity::HEU_GeneralUtility::IsMouseOverRect(UnityEngine::Camera camera, UnityEngine::Vector2 mousePosition, ByRef<UnityEngine::Rect> rect)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "IsMouseOverRect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Camera>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Rect>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, camera, mousePosition, rect);
}
 System::Type HoudiniEngineUnity::HEU_GeneralUtility::GetSystemTypeByName(::StringW typeName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "GetSystemTypeByName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Type, false>(nullptr, ___internal_method, typeName);
}
 void HoudiniEngineUnity::HEU_GeneralUtility::AssignUnityTag(HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID, UnityEngine::GameObject gameObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "AssignUnityTag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, session, geoID, partID, gameObject);
}
 void HoudiniEngineUnity::HEU_GeneralUtility::AssignUnityLayer(HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID, UnityEngine::GameObject gameObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "AssignUnityLayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, session, geoID, partID, gameObject);
}
 void HoudiniEngineUnity::HEU_GeneralUtility::MakeStaticIfHasAttribute(HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID, UnityEngine::GameObject gameObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "MakeStaticIfHasAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, session, geoID, partID, gameObject);
}
 ::StringW HoudiniEngineUnity::HEU_GeneralUtility::GetUnityScriptAttributeValue(HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "GetUnityScriptAttributeValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, session, geoID, partID);
}
 ::StringW HoudiniEngineUnity::HEU_GeneralUtility::GetAttributeStringValueSingle(HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID, ::StringW attrName, HoudiniEngineUnity::HAPI_AttributeOwner attrOwner)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "GetAttributeStringValueSingle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HAPI_AttributeOwner>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, session, geoID, partID, attrName, attrOwner);
}
 ::StringW HoudiniEngineUnity::HEU_GeneralUtility::GetAttributeStringValueSingleStrict(HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID, ::StringW attrName, HoudiniEngineUnity::HAPI_AttributeOwner attrOwner)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "GetAttributeStringValueSingleStrict",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HAPI_AttributeOwner>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, session, geoID, partID, attrName, attrOwner);
}
 bool HoudiniEngineUnity::HEU_GeneralUtility::GetAttributeFloatSingle(HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID, ::StringW attrName, ByRef<float_t> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "GetAttributeFloatSingle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, session, geoID, partID, attrName, value);
}
 bool HoudiniEngineUnity::HEU_GeneralUtility::GetAttributeIntSingle(HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID, ::StringW attrName, ByRef<int32_t> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "GetAttributeIntSingle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, session, geoID, partID, attrName, value);
}
 bool HoudiniEngineUnity::HEU_GeneralUtility::GetAttributeColorSingle(HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID, ::StringW attrName, ByRef<UnityEngine::Color> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "GetAttributeColorSingle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Color>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, session, geoID, partID, attrName, value);
}
 bool HoudiniEngineUnity::HEU_GeneralUtility::HasAttribute(HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID, ::StringW attrName, HoudiniEngineUnity::HAPI_AttributeOwner attrOwner)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "HasAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HAPI_AttributeOwner>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, session, geoID, partID, attrName, attrOwner);
}
 void HoudiniEngineUnity::HEU_GeneralUtility::AttachScriptWithInvokeFunction(::StringW scriptSet, UnityEngine::GameObject gameObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "AttachScriptWithInvokeFunction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, scriptSet, gameObject);
}
 bool HoudiniEngineUnity::HEU_GeneralUtility::IsInCameraView(UnityEngine::Camera camera, UnityEngine::Vector3 point)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "IsInCameraView",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Camera>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, camera, point);
}
 System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_Handle> HoudiniEngineUnity::HEU_GeneralUtility::FindOrGenerateHandles(HoudiniEngineUnity::HEU_SessionBase session, ByRef<HoudiniEngineUnity::HAPI_AssetInfo> assetInfo, int32_t assetID, ::StringW assetName, HoudiniEngineUnity::HEU_Parameters parameters, System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_Handle> currentHandles)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "FindOrGenerateHandles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<HoudiniEngineUnity::HAPI_AssetInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_Parameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_Handle>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_Handle>, false>(nullptr, ___internal_method, session, assetInfo, assetID, assetName, parameters, currentHandles);
}
 void HoudiniEngineUnity::HEU_GeneralUtility::CopyComponents(UnityEngine::GameObject srcGO, UnityEngine::GameObject destGO)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "CopyComponents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, srcGO, destGO);
}
 UnityEngine::Texture HoudiniEngineUnity::HEU_GeneralUtility::LoadTextureFromFile(::StringW filePath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "LoadTextureFromFile",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Texture, false>(nullptr, ___internal_method, filePath);
}
 UnityEngine::Texture2D HoudiniEngineUnity::HEU_GeneralUtility::MakeTexture(int32_t width, int32_t height, UnityEngine::Color color)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "MakeTexture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Texture2D, false>(nullptr, ___internal_method, width, height, color);
}
 ::StringW HoudiniEngineUnity::HEU_GeneralUtility::ReplaceFirstOccurrence(::StringW srcStr, ::StringW searchStr, ::StringW replaceStr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "ReplaceFirstOccurrence",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, srcStr, searchStr, replaceStr);
}
 void HoudiniEngineUnity::HEU_GeneralUtility::SetParentWithCleanTransform(UnityEngine::Transform parentTransform, UnityEngine::Transform childTransform)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "SetParentWithCleanTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, parentTransform, childTransform);
}
 void HoudiniEngineUnity::HEU_GeneralUtility::CopyHAPITransform(ByRef<HoudiniEngineUnity::HAPI_Transform> src, ByRef<HoudiniEngineUnity::HAPI_Transform> dest)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "CopyHAPITransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<HoudiniEngineUnity::HAPI_Transform>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<HoudiniEngineUnity::HAPI_Transform>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, src, dest);
}
 ::StringW HoudiniEngineUnity::HEU_GeneralUtility::GetMaterialAttributeValueFromPart(HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "GetMaterialAttributeValueFromPart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, session, geoID, partID);
}
 void HoudiniEngineUnity::HEU_GeneralUtility::ReplaceColliderMeshFromMeshFilter(UnityEngine::GameObject targetGO, UnityEngine::GameObject sourceColliderGO)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "ReplaceColliderMeshFromMeshFilter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, targetGO, sourceColliderGO);
}
 void HoudiniEngineUnity::HEU_GeneralUtility::ReplaceColliderMeshFromMeshCollider(UnityEngine::GameObject targetGO, UnityEngine::GameObject sourceColliderGO)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "ReplaceColliderMeshFromMeshCollider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, targetGO, sourceColliderGO);
}
 float_t HoudiniEngineUnity::HEU_GeneralUtility::BiLerpf(float_t p00, float_t p10, float_t p01, float_t p11, float_t fracX, float_t fracY)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "BiLerpf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, p00, p10, p01, p11, fracX, fracY);
}
 float_t HoudiniEngineUnity::HEU_GeneralUtility::Fractionalf(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "Fractionalf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, value);
}
 ::StringW HoudiniEngineUnity::HEU_GeneralUtility::LongestCommonPrefix(System::Collections::Generic::List_1<::StringW> list)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "LongestCommonPrefix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, list);
}
 ::StringW HoudiniEngineUnity::HEU_GeneralUtility::GetRawOperatorName(::StringW assetOpName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "GetRawOperatorName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, assetOpName);
}
 UnityEngine::GameObject HoudiniEngineUnity::HEU_GeneralUtility::GetPrefabFromPath(::StringW path)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            "GetPrefabFromPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::GameObject, false>(nullptr, ___internal_method, path);
}
 HoudiniEngineUnity::HEU_GeneralUtility HoudiniEngineUnity::HEU_GeneralUtility::New_ctor()  {
HoudiniEngineUnity::HEU_GeneralUtility o{THROW_UNLESS(::il2cpp_utils::New<HoudiniEngineUnity::HEU_GeneralUtility>())};
return o;
}
 void HoudiniEngineUnity::HEU_GeneralUtility::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeneralUtility>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_Transform>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_Transform>::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_Transform>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_Transform>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_Transform>.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_Transform>::*)(int32_t, ByRef<::ArrayW<HoudiniEngineUnity::HAPI_Transform>>, int32_t, int32_t)>(&HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_Transform>::Invoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_Transform>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_Transform>.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_Transform>::*)(int32_t, ByRef<::ArrayW<HoudiniEngineUnity::HAPI_Transform>>, int32_t, int32_t, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_Transform>::BeginInvoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_Transform>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_Transform>.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_Transform>::*)(System::IAsyncResult)>(&HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_Transform>::EndInvoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_Transform>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
 HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_Transform> HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_Transform>::New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_Transform> o{THROW_UNLESS(::il2cpp_utils::New<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_Transform>>(object, method))};
return o;
}
 void HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_Transform>::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_Transform>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 bool HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_Transform>::Invoke(int32_t arg1, ByRef<::ArrayW<HoudiniEngineUnity::HAPI_Transform>> data, int32_t start, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_Transform>>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<HoudiniEngineUnity::HAPI_Transform>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, arg1, data, start, length);
}
 System::IAsyncResult HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_Transform>::BeginInvoke(int32_t arg1, ByRef<::ArrayW<HoudiniEngineUnity::HAPI_Transform>> data, int32_t start, int32_t length, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_Transform>>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<HoudiniEngineUnity::HAPI_Transform>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, arg1, data, start, length, callback, object);
}
 bool HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_Transform>::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_Transform>>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_ParmChoiceInfo>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_ParmChoiceInfo>::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_ParmChoiceInfo>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_ParmChoiceInfo>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_ParmChoiceInfo>.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_ParmChoiceInfo>::*)(int32_t, ByRef<::ArrayW<HoudiniEngineUnity::HAPI_ParmChoiceInfo>>, int32_t, int32_t)>(&HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_ParmChoiceInfo>::Invoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_ParmChoiceInfo>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_ParmChoiceInfo>.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_ParmChoiceInfo>::*)(int32_t, ByRef<::ArrayW<HoudiniEngineUnity::HAPI_ParmChoiceInfo>>, int32_t, int32_t, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_ParmChoiceInfo>::BeginInvoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_ParmChoiceInfo>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_ParmChoiceInfo>.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_ParmChoiceInfo>::*)(System::IAsyncResult)>(&HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_ParmChoiceInfo>::EndInvoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_ParmChoiceInfo>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
 HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_ParmChoiceInfo> HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_ParmChoiceInfo>::New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_ParmChoiceInfo> o{THROW_UNLESS(::il2cpp_utils::New<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_ParmChoiceInfo>>(object, method))};
return o;
}
 void HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_ParmChoiceInfo>::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_ParmChoiceInfo>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 bool HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_ParmChoiceInfo>::Invoke(int32_t arg1, ByRef<::ArrayW<HoudiniEngineUnity::HAPI_ParmChoiceInfo>> data, int32_t start, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_ParmChoiceInfo>>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<HoudiniEngineUnity::HAPI_ParmChoiceInfo>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, arg1, data, start, length);
}
 System::IAsyncResult HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_ParmChoiceInfo>::BeginInvoke(int32_t arg1, ByRef<::ArrayW<HoudiniEngineUnity::HAPI_ParmChoiceInfo>> data, int32_t start, int32_t length, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_ParmChoiceInfo>>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<HoudiniEngineUnity::HAPI_ParmChoiceInfo>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, arg1, data, start, length, callback, object);
}
 bool HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_ParmChoiceInfo>::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_ParmChoiceInfo>>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_ObjectInfo>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_ObjectInfo>::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_ObjectInfo>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_ObjectInfo>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_ObjectInfo>.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_ObjectInfo>::*)(int32_t, ByRef<::ArrayW<HoudiniEngineUnity::HAPI_ObjectInfo>>, int32_t, int32_t)>(&HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_ObjectInfo>::Invoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_ObjectInfo>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_ObjectInfo>.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_ObjectInfo>::*)(int32_t, ByRef<::ArrayW<HoudiniEngineUnity::HAPI_ObjectInfo>>, int32_t, int32_t, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_ObjectInfo>::BeginInvoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_ObjectInfo>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_ObjectInfo>.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_ObjectInfo>::*)(System::IAsyncResult)>(&HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_ObjectInfo>::EndInvoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_ObjectInfo>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
 HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_ObjectInfo> HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_ObjectInfo>::New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_ObjectInfo> o{THROW_UNLESS(::il2cpp_utils::New<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_ObjectInfo>>(object, method))};
return o;
}
 void HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_ObjectInfo>::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_ObjectInfo>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 bool HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_ObjectInfo>::Invoke(int32_t arg1, ByRef<::ArrayW<HoudiniEngineUnity::HAPI_ObjectInfo>> data, int32_t start, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_ObjectInfo>>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<HoudiniEngineUnity::HAPI_ObjectInfo>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, arg1, data, start, length);
}
 System::IAsyncResult HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_ObjectInfo>::BeginInvoke(int32_t arg1, ByRef<::ArrayW<HoudiniEngineUnity::HAPI_ObjectInfo>> data, int32_t start, int32_t length, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_ObjectInfo>>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<HoudiniEngineUnity::HAPI_ObjectInfo>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, arg1, data, start, length, callback, object);
}
 bool HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_ObjectInfo>::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_ObjectInfo>>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_HandleInfo>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_HandleInfo>::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_HandleInfo>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_HandleInfo>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_HandleInfo>.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_HandleInfo>::*)(int32_t, ByRef<::ArrayW<HoudiniEngineUnity::HAPI_HandleInfo>>, int32_t, int32_t)>(&HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_HandleInfo>::Invoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_HandleInfo>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_HandleInfo>.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_HandleInfo>::*)(int32_t, ByRef<::ArrayW<HoudiniEngineUnity::HAPI_HandleInfo>>, int32_t, int32_t, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_HandleInfo>::BeginInvoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_HandleInfo>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_HandleInfo>.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_HandleInfo>::*)(System::IAsyncResult)>(&HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_HandleInfo>::EndInvoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_HandleInfo>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
 HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_HandleInfo> HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_HandleInfo>::New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_HandleInfo> o{THROW_UNLESS(::il2cpp_utils::New<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_HandleInfo>>(object, method))};
return o;
}
 void HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_HandleInfo>::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_HandleInfo>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 bool HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_HandleInfo>::Invoke(int32_t arg1, ByRef<::ArrayW<HoudiniEngineUnity::HAPI_HandleInfo>> data, int32_t start, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_HandleInfo>>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<HoudiniEngineUnity::HAPI_HandleInfo>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, arg1, data, start, length);
}
 System::IAsyncResult HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_HandleInfo>::BeginInvoke(int32_t arg1, ByRef<::ArrayW<HoudiniEngineUnity::HAPI_HandleInfo>> data, int32_t start, int32_t length, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_HandleInfo>>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<HoudiniEngineUnity::HAPI_HandleInfo>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, arg1, data, start, length, callback, object);
}
 bool HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_HandleInfo>::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_HandleInfo>>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_ParmInfo>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_ParmInfo>::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_ParmInfo>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_ParmInfo>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_ParmInfo>.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_ParmInfo>::*)(int32_t, ByRef<::ArrayW<HoudiniEngineUnity::HAPI_ParmInfo>>, int32_t, int32_t)>(&HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_ParmInfo>::Invoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_ParmInfo>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_ParmInfo>.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_ParmInfo>::*)(int32_t, ByRef<::ArrayW<HoudiniEngineUnity::HAPI_ParmInfo>>, int32_t, int32_t, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_ParmInfo>::BeginInvoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_ParmInfo>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_ParmInfo>.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_ParmInfo>::*)(System::IAsyncResult)>(&HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_ParmInfo>::EndInvoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_ParmInfo>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
 HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_ParmInfo> HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_ParmInfo>::New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_ParmInfo> o{THROW_UNLESS(::il2cpp_utils::New<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_ParmInfo>>(object, method))};
return o;
}
 void HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_ParmInfo>::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_ParmInfo>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 bool HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_ParmInfo>::Invoke(int32_t arg1, ByRef<::ArrayW<HoudiniEngineUnity::HAPI_ParmInfo>> data, int32_t start, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_ParmInfo>>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<HoudiniEngineUnity::HAPI_ParmInfo>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, arg1, data, start, length);
}
 System::IAsyncResult HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_ParmInfo>::BeginInvoke(int32_t arg1, ByRef<::ArrayW<HoudiniEngineUnity::HAPI_ParmInfo>> data, int32_t start, int32_t length, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_ParmInfo>>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<HoudiniEngineUnity::HAPI_ParmInfo>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, arg1, data, start, length, callback, object);
}
 bool HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_ParmInfo>::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_ParmInfo>>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<float_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<float_t>::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<float_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<float_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<float_t>.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<float_t>::*)(int32_t, ByRef<::ArrayW<float_t>>, int32_t, int32_t)>(&HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<float_t>::Invoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<float_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<float_t>.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<float_t>::*)(int32_t, ByRef<::ArrayW<float_t>>, int32_t, int32_t, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<float_t>::BeginInvoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<float_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<float_t>.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<float_t>::*)(System::IAsyncResult)>(&HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<float_t>::EndInvoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<float_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
 HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<float_t> HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<float_t>::New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<float_t> o{THROW_UNLESS(::il2cpp_utils::New<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<float_t>>(object, method))};
return o;
}
 void HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<float_t>::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<float_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 bool HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<float_t>::Invoke(int32_t arg1, ByRef<::ArrayW<float_t>> data, int32_t start, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<float_t>>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<float_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, arg1, data, start, length);
}
 System::IAsyncResult HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<float_t>::BeginInvoke(int32_t arg1, ByRef<::ArrayW<float_t>> data, int32_t start, int32_t length, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<float_t>>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<float_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, arg1, data, start, length, callback, object);
}
 bool HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<float_t>::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<float_t>>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, result);
}
 HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<T> HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<T>::New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<T> o{THROW_UNLESS(::il2cpp_utils::New<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<T>>(object, method))};
return o;
}
 void HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<T>::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 bool HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<T>::Invoke(int32_t arg1, ByRef<::ArrayW<T>> data, int32_t start, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<T>>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<T>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, arg1, data, start, length);
}
 System::IAsyncResult HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<T>::BeginInvoke(int32_t arg1, ByRef<::ArrayW<T>> data, int32_t start, int32_t length, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<T>>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<T>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, arg1, data, start, length, callback, object);
}
 bool HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<T>::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<T>>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, result);
}
 HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<T> HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<T>::New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<T> o{THROW_UNLESS(::il2cpp_utils::New<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<T>>(object, method))};
return o;
}
 void HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<T>::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 bool HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<T>::Invoke(int32_t arg1, ByRef<::ArrayW<T>> data, int32_t start, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<T>>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<T>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, arg1, data, start, length);
}
 System::IAsyncResult HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<T>::BeginInvoke(int32_t arg1, ByRef<::ArrayW<T>> data, int32_t start, int32_t length, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<T>>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<T>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, arg1, data, start, length, callback, object);
}
 bool HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<T>::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<T>>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<System::Int32Enum,HoudiniEngineUnity::HAPI_Transform>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<System::Int32Enum,HoudiniEngineUnity::HAPI_Transform>::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<System::Int32Enum,HoudiniEngineUnity::HAPI_Transform>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<System::Int32Enum,HoudiniEngineUnity::HAPI_Transform>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<System::Int32Enum,HoudiniEngineUnity::HAPI_Transform>.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<System::Int32Enum,HoudiniEngineUnity::HAPI_Transform>::*)(int32_t, System::Int32Enum, ByRef<::ArrayW<HoudiniEngineUnity::HAPI_Transform>>, int32_t, int32_t)>(&HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<System::Int32Enum,HoudiniEngineUnity::HAPI_Transform>::Invoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<System::Int32Enum,HoudiniEngineUnity::HAPI_Transform>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<System::Int32Enum,HoudiniEngineUnity::HAPI_Transform>.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<System::Int32Enum,HoudiniEngineUnity::HAPI_Transform>::*)(int32_t, System::Int32Enum, ByRef<::ArrayW<HoudiniEngineUnity::HAPI_Transform>>, int32_t, int32_t, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<System::Int32Enum,HoudiniEngineUnity::HAPI_Transform>::BeginInvoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<System::Int32Enum,HoudiniEngineUnity::HAPI_Transform>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<System::Int32Enum,HoudiniEngineUnity::HAPI_Transform>.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<System::Int32Enum,HoudiniEngineUnity::HAPI_Transform>::*)(System::IAsyncResult)>(&HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<System::Int32Enum,HoudiniEngineUnity::HAPI_Transform>::EndInvoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<System::Int32Enum,HoudiniEngineUnity::HAPI_Transform>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
 HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<System::Int32Enum,HoudiniEngineUnity::HAPI_Transform> HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<System::Int32Enum,HoudiniEngineUnity::HAPI_Transform>::New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<System::Int32Enum,HoudiniEngineUnity::HAPI_Transform> o{THROW_UNLESS(::il2cpp_utils::New<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<System::Int32Enum,HoudiniEngineUnity::HAPI_Transform>>(object, method))};
return o;
}
 void HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<System::Int32Enum,HoudiniEngineUnity::HAPI_Transform>::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<System::Int32Enum,HoudiniEngineUnity::HAPI_Transform>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 bool HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<System::Int32Enum,HoudiniEngineUnity::HAPI_Transform>::Invoke(int32_t arg1, System::Int32Enum arg2, ByRef<::ArrayW<HoudiniEngineUnity::HAPI_Transform>> data, int32_t start, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<System::Int32Enum,HoudiniEngineUnity::HAPI_Transform>>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Int32Enum>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<HoudiniEngineUnity::HAPI_Transform>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, arg1, arg2, data, start, length);
}
 System::IAsyncResult HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<System::Int32Enum,HoudiniEngineUnity::HAPI_Transform>::BeginInvoke(int32_t arg1, System::Int32Enum arg2, ByRef<::ArrayW<HoudiniEngineUnity::HAPI_Transform>> data, int32_t start, int32_t length, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<System::Int32Enum,HoudiniEngineUnity::HAPI_Transform>>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Int32Enum>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<HoudiniEngineUnity::HAPI_Transform>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, arg1, arg2, data, start, length, callback, object);
}
 bool HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<System::Int32Enum,HoudiniEngineUnity::HAPI_Transform>::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<System::Int32Enum,HoudiniEngineUnity::HAPI_Transform>>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, result);
}
 HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,HoudiniEngineUnity::HAPI_Transform> HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,HoudiniEngineUnity::HAPI_Transform>::New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,HoudiniEngineUnity::HAPI_Transform> o{THROW_UNLESS(::il2cpp_utils::New<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,HoudiniEngineUnity::HAPI_Transform>>(object, method))};
return o;
}
 void HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,HoudiniEngineUnity::HAPI_Transform>::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,HoudiniEngineUnity::HAPI_Transform>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 bool HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,HoudiniEngineUnity::HAPI_Transform>::Invoke(int32_t arg1, ARG2 arg2, ByRef<::ArrayW<HoudiniEngineUnity::HAPI_Transform>> data, int32_t start, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,HoudiniEngineUnity::HAPI_Transform>>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ARG2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<HoudiniEngineUnity::HAPI_Transform>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, arg1, arg2, data, start, length);
}
 System::IAsyncResult HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,HoudiniEngineUnity::HAPI_Transform>::BeginInvoke(int32_t arg1, ARG2 arg2, ByRef<::ArrayW<HoudiniEngineUnity::HAPI_Transform>> data, int32_t start, int32_t length, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,HoudiniEngineUnity::HAPI_Transform>>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ARG2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<HoudiniEngineUnity::HAPI_Transform>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, arg1, arg2, data, start, length, callback, object);
}
 bool HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,HoudiniEngineUnity::HAPI_Transform>::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,HoudiniEngineUnity::HAPI_Transform>>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, result);
}
 HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,HoudiniEngineUnity::HAPI_ParmInfo> HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,HoudiniEngineUnity::HAPI_ParmInfo>::New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,HoudiniEngineUnity::HAPI_ParmInfo> o{THROW_UNLESS(::il2cpp_utils::New<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,HoudiniEngineUnity::HAPI_ParmInfo>>(object, method))};
return o;
}
 void HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,HoudiniEngineUnity::HAPI_ParmInfo>::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,HoudiniEngineUnity::HAPI_ParmInfo>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 bool HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,HoudiniEngineUnity::HAPI_ParmInfo>::Invoke(int32_t arg1, ARG2 arg2, ByRef<::ArrayW<HoudiniEngineUnity::HAPI_ParmInfo>> data, int32_t start, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,HoudiniEngineUnity::HAPI_ParmInfo>>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ARG2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<HoudiniEngineUnity::HAPI_ParmInfo>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, arg1, arg2, data, start, length);
}
 System::IAsyncResult HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,HoudiniEngineUnity::HAPI_ParmInfo>::BeginInvoke(int32_t arg1, ARG2 arg2, ByRef<::ArrayW<HoudiniEngineUnity::HAPI_ParmInfo>> data, int32_t start, int32_t length, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,HoudiniEngineUnity::HAPI_ParmInfo>>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ARG2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<HoudiniEngineUnity::HAPI_ParmInfo>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, arg1, arg2, data, start, length, callback, object);
}
 bool HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,HoudiniEngineUnity::HAPI_ParmInfo>::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,HoudiniEngineUnity::HAPI_ParmInfo>>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, result);
}
 HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,HoudiniEngineUnity::HAPI_ParmChoiceInfo> HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,HoudiniEngineUnity::HAPI_ParmChoiceInfo>::New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,HoudiniEngineUnity::HAPI_ParmChoiceInfo> o{THROW_UNLESS(::il2cpp_utils::New<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,HoudiniEngineUnity::HAPI_ParmChoiceInfo>>(object, method))};
return o;
}
 void HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,HoudiniEngineUnity::HAPI_ParmChoiceInfo>::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,HoudiniEngineUnity::HAPI_ParmChoiceInfo>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 bool HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,HoudiniEngineUnity::HAPI_ParmChoiceInfo>::Invoke(int32_t arg1, ARG2 arg2, ByRef<::ArrayW<HoudiniEngineUnity::HAPI_ParmChoiceInfo>> data, int32_t start, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,HoudiniEngineUnity::HAPI_ParmChoiceInfo>>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ARG2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<HoudiniEngineUnity::HAPI_ParmChoiceInfo>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, arg1, arg2, data, start, length);
}
 System::IAsyncResult HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,HoudiniEngineUnity::HAPI_ParmChoiceInfo>::BeginInvoke(int32_t arg1, ARG2 arg2, ByRef<::ArrayW<HoudiniEngineUnity::HAPI_ParmChoiceInfo>> data, int32_t start, int32_t length, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,HoudiniEngineUnity::HAPI_ParmChoiceInfo>>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ARG2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<HoudiniEngineUnity::HAPI_ParmChoiceInfo>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, arg1, arg2, data, start, length, callback, object);
}
 bool HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,HoudiniEngineUnity::HAPI_ParmChoiceInfo>::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,HoudiniEngineUnity::HAPI_ParmChoiceInfo>>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, result);
}
 HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,HoudiniEngineUnity::HAPI_ObjectInfo> HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,HoudiniEngineUnity::HAPI_ObjectInfo>::New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,HoudiniEngineUnity::HAPI_ObjectInfo> o{THROW_UNLESS(::il2cpp_utils::New<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,HoudiniEngineUnity::HAPI_ObjectInfo>>(object, method))};
return o;
}
 void HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,HoudiniEngineUnity::HAPI_ObjectInfo>::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,HoudiniEngineUnity::HAPI_ObjectInfo>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 bool HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,HoudiniEngineUnity::HAPI_ObjectInfo>::Invoke(int32_t arg1, ARG2 arg2, ByRef<::ArrayW<HoudiniEngineUnity::HAPI_ObjectInfo>> data, int32_t start, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,HoudiniEngineUnity::HAPI_ObjectInfo>>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ARG2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<HoudiniEngineUnity::HAPI_ObjectInfo>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, arg1, arg2, data, start, length);
}
 System::IAsyncResult HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,HoudiniEngineUnity::HAPI_ObjectInfo>::BeginInvoke(int32_t arg1, ARG2 arg2, ByRef<::ArrayW<HoudiniEngineUnity::HAPI_ObjectInfo>> data, int32_t start, int32_t length, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,HoudiniEngineUnity::HAPI_ObjectInfo>>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ARG2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<HoudiniEngineUnity::HAPI_ObjectInfo>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, arg1, arg2, data, start, length, callback, object);
}
 bool HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,HoudiniEngineUnity::HAPI_ObjectInfo>::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,HoudiniEngineUnity::HAPI_ObjectInfo>>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, result);
}
 HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,HoudiniEngineUnity::HAPI_HandleInfo> HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,HoudiniEngineUnity::HAPI_HandleInfo>::New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,HoudiniEngineUnity::HAPI_HandleInfo> o{THROW_UNLESS(::il2cpp_utils::New<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,HoudiniEngineUnity::HAPI_HandleInfo>>(object, method))};
return o;
}
 void HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,HoudiniEngineUnity::HAPI_HandleInfo>::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,HoudiniEngineUnity::HAPI_HandleInfo>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 bool HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,HoudiniEngineUnity::HAPI_HandleInfo>::Invoke(int32_t arg1, ARG2 arg2, ByRef<::ArrayW<HoudiniEngineUnity::HAPI_HandleInfo>> data, int32_t start, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,HoudiniEngineUnity::HAPI_HandleInfo>>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ARG2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<HoudiniEngineUnity::HAPI_HandleInfo>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, arg1, arg2, data, start, length);
}
 System::IAsyncResult HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,HoudiniEngineUnity::HAPI_HandleInfo>::BeginInvoke(int32_t arg1, ARG2 arg2, ByRef<::ArrayW<HoudiniEngineUnity::HAPI_HandleInfo>> data, int32_t start, int32_t length, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,HoudiniEngineUnity::HAPI_HandleInfo>>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ARG2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<HoudiniEngineUnity::HAPI_HandleInfo>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, arg1, arg2, data, start, length, callback, object);
}
 bool HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,HoudiniEngineUnity::HAPI_HandleInfo>::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,HoudiniEngineUnity::HAPI_HandleInfo>>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, result);
}
 HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,T> HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,T>::New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,T> o{THROW_UNLESS(::il2cpp_utils::New<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,T>>(object, method))};
return o;
}
 void HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,T>::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 bool HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,T>::Invoke(int32_t arg1, ARG2 arg2, ByRef<::ArrayW<T>> data, int32_t start, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,T>>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ARG2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<T>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, arg1, arg2, data, start, length);
}
 System::IAsyncResult HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,T>::BeginInvoke(int32_t arg1, ARG2 arg2, ByRef<::ArrayW<T>> data, int32_t start, int32_t length, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,T>>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ARG2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<T>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, arg1, arg2, data, start, length, callback, object);
}
 bool HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,T>::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,T>>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, result);
}
 HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,float_t> HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,float_t>::New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,float_t> o{THROW_UNLESS(::il2cpp_utils::New<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,float_t>>(object, method))};
return o;
}
 void HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,float_t>::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,float_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 bool HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,float_t>::Invoke(int32_t arg1, ARG2 arg2, ByRef<::ArrayW<float_t>> data, int32_t start, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,float_t>>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ARG2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<float_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, arg1, arg2, data, start, length);
}
 System::IAsyncResult HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,float_t>::BeginInvoke(int32_t arg1, ARG2 arg2, ByRef<::ArrayW<float_t>> data, int32_t start, int32_t length, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,float_t>>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ARG2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<float_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, arg1, arg2, data, start, length, callback, object);
}
 bool HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,float_t>::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,float_t>>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, result);
}
 HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,T> HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,T>::New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,T> o{THROW_UNLESS(::il2cpp_utils::New<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,T>>(object, method))};
return o;
}
 void HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,T>::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 bool HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,T>::Invoke(int32_t arg1, ARG2 arg2, ByRef<::ArrayW<T>> data, int32_t start, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,T>>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ARG2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<T>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, arg1, arg2, data, start, length);
}
 System::IAsyncResult HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,T>::BeginInvoke(int32_t arg1, ARG2 arg2, ByRef<::ArrayW<T>> data, int32_t start, int32_t length, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,T>>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ARG2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<T>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, arg1, arg2, data, start, length, callback, object);
}
 bool HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,T>::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,T>>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, result);
}
 HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,T> HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,T>::New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,T> o{THROW_UNLESS(::il2cpp_utils::New<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,T>>(object, method))};
return o;
}
 void HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,T>::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 bool HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,T>::Invoke(int32_t arg1, ARG2 arg2, ByRef<::ArrayW<T>> data, int32_t start, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,T>>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ARG2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<T>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, arg1, arg2, data, start, length);
}
 System::IAsyncResult HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,T>::BeginInvoke(int32_t arg1, ARG2 arg2, ByRef<::ArrayW<T>> data, int32_t start, int32_t length, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,T>>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ARG2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<T>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, arg1, arg2, data, start, length, callback, object);
}
 bool HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,T>::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,T>>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, result);
}
 HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<System::Int32Enum,ARG2,HoudiniEngineUnity::HAPI_Transform> HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<System::Int32Enum,ARG2,HoudiniEngineUnity::HAPI_Transform>::New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<System::Int32Enum,ARG2,HoudiniEngineUnity::HAPI_Transform> o{THROW_UNLESS(::il2cpp_utils::New<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<System::Int32Enum,ARG2,HoudiniEngineUnity::HAPI_Transform>>(object, method))};
return o;
}
 void HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<System::Int32Enum,ARG2,HoudiniEngineUnity::HAPI_Transform>::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<System::Int32Enum,ARG2,HoudiniEngineUnity::HAPI_Transform>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 bool HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<System::Int32Enum,ARG2,HoudiniEngineUnity::HAPI_Transform>::Invoke(int32_t arg1, ARG2 arg2, System::Int32Enum arg3, ByRef<::ArrayW<HoudiniEngineUnity::HAPI_Transform>> data, int32_t start, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<System::Int32Enum,ARG2,HoudiniEngineUnity::HAPI_Transform>>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ARG2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Int32Enum>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<HoudiniEngineUnity::HAPI_Transform>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, arg1, arg2, arg3, data, start, length);
}
 System::IAsyncResult HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<System::Int32Enum,ARG2,HoudiniEngineUnity::HAPI_Transform>::BeginInvoke(int32_t arg1, ARG2 arg2, System::Int32Enum arg3, ByRef<::ArrayW<HoudiniEngineUnity::HAPI_Transform>> data, int32_t start, int32_t length, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<System::Int32Enum,ARG2,HoudiniEngineUnity::HAPI_Transform>>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ARG2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Int32Enum>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<HoudiniEngineUnity::HAPI_Transform>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, arg1, arg2, arg3, data, start, length, callback, object);
}
 bool HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<System::Int32Enum,ARG2,HoudiniEngineUnity::HAPI_Transform>::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<System::Int32Enum,ARG2,HoudiniEngineUnity::HAPI_Transform>>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, result);
}
 HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,System::Int32Enum,HoudiniEngineUnity::HAPI_Transform> HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,System::Int32Enum,HoudiniEngineUnity::HAPI_Transform>::New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,System::Int32Enum,HoudiniEngineUnity::HAPI_Transform> o{THROW_UNLESS(::il2cpp_utils::New<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,System::Int32Enum,HoudiniEngineUnity::HAPI_Transform>>(object, method))};
return o;
}
 void HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,System::Int32Enum,HoudiniEngineUnity::HAPI_Transform>::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,System::Int32Enum,HoudiniEngineUnity::HAPI_Transform>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 bool HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,System::Int32Enum,HoudiniEngineUnity::HAPI_Transform>::Invoke(int32_t arg1, System::Int32Enum arg2, ARG3 arg3, ByRef<::ArrayW<HoudiniEngineUnity::HAPI_Transform>> data, int32_t start, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,System::Int32Enum,HoudiniEngineUnity::HAPI_Transform>>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Int32Enum>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ARG3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<HoudiniEngineUnity::HAPI_Transform>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, arg1, arg2, arg3, data, start, length);
}
 System::IAsyncResult HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,System::Int32Enum,HoudiniEngineUnity::HAPI_Transform>::BeginInvoke(int32_t arg1, System::Int32Enum arg2, ARG3 arg3, ByRef<::ArrayW<HoudiniEngineUnity::HAPI_Transform>> data, int32_t start, int32_t length, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,System::Int32Enum,HoudiniEngineUnity::HAPI_Transform>>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Int32Enum>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ARG3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<HoudiniEngineUnity::HAPI_Transform>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, arg1, arg2, arg3, data, start, length, callback, object);
}
 bool HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,System::Int32Enum,HoudiniEngineUnity::HAPI_Transform>::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,System::Int32Enum,HoudiniEngineUnity::HAPI_Transform>>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, result);
}
 HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,float_t> HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,float_t>::New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,float_t> o{THROW_UNLESS(::il2cpp_utils::New<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,float_t>>(object, method))};
return o;
}
 void HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,float_t>::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,float_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 bool HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,float_t>::Invoke(int32_t arg1, ARG2 arg2, ARG3 arg3, ByRef<::ArrayW<float_t>> data, int32_t start, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,float_t>>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ARG2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ARG3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<float_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, arg1, arg2, arg3, data, start, length);
}
 System::IAsyncResult HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,float_t>::BeginInvoke(int32_t arg1, ARG2 arg2, ARG3 arg3, ByRef<::ArrayW<float_t>> data, int32_t start, int32_t length, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,float_t>>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ARG2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ARG3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<float_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, arg1, arg2, arg3, data, start, length, callback, object);
}
 bool HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,float_t>::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,float_t>>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, result);
}
 HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,HoudiniEngineUnity::HAPI_ParmInfo> HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,HoudiniEngineUnity::HAPI_ParmInfo>::New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,HoudiniEngineUnity::HAPI_ParmInfo> o{THROW_UNLESS(::il2cpp_utils::New<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,HoudiniEngineUnity::HAPI_ParmInfo>>(object, method))};
return o;
}
 void HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,HoudiniEngineUnity::HAPI_ParmInfo>::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,HoudiniEngineUnity::HAPI_ParmInfo>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 bool HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,HoudiniEngineUnity::HAPI_ParmInfo>::Invoke(int32_t arg1, ARG2 arg2, ARG3 arg3, ByRef<::ArrayW<HoudiniEngineUnity::HAPI_ParmInfo>> data, int32_t start, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,HoudiniEngineUnity::HAPI_ParmInfo>>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ARG2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ARG3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<HoudiniEngineUnity::HAPI_ParmInfo>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, arg1, arg2, arg3, data, start, length);
}
 System::IAsyncResult HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,HoudiniEngineUnity::HAPI_ParmInfo>::BeginInvoke(int32_t arg1, ARG2 arg2, ARG3 arg3, ByRef<::ArrayW<HoudiniEngineUnity::HAPI_ParmInfo>> data, int32_t start, int32_t length, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,HoudiniEngineUnity::HAPI_ParmInfo>>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ARG2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ARG3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<HoudiniEngineUnity::HAPI_ParmInfo>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, arg1, arg2, arg3, data, start, length, callback, object);
}
 bool HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,HoudiniEngineUnity::HAPI_ParmInfo>::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,HoudiniEngineUnity::HAPI_ParmInfo>>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, result);
}
 HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,HoudiniEngineUnity::HAPI_ParmChoiceInfo> HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,HoudiniEngineUnity::HAPI_ParmChoiceInfo>::New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,HoudiniEngineUnity::HAPI_ParmChoiceInfo> o{THROW_UNLESS(::il2cpp_utils::New<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,HoudiniEngineUnity::HAPI_ParmChoiceInfo>>(object, method))};
return o;
}
 void HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,HoudiniEngineUnity::HAPI_ParmChoiceInfo>::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,HoudiniEngineUnity::HAPI_ParmChoiceInfo>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 bool HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,HoudiniEngineUnity::HAPI_ParmChoiceInfo>::Invoke(int32_t arg1, ARG2 arg2, ARG3 arg3, ByRef<::ArrayW<HoudiniEngineUnity::HAPI_ParmChoiceInfo>> data, int32_t start, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,HoudiniEngineUnity::HAPI_ParmChoiceInfo>>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ARG2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ARG3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<HoudiniEngineUnity::HAPI_ParmChoiceInfo>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, arg1, arg2, arg3, data, start, length);
}
 System::IAsyncResult HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,HoudiniEngineUnity::HAPI_ParmChoiceInfo>::BeginInvoke(int32_t arg1, ARG2 arg2, ARG3 arg3, ByRef<::ArrayW<HoudiniEngineUnity::HAPI_ParmChoiceInfo>> data, int32_t start, int32_t length, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,HoudiniEngineUnity::HAPI_ParmChoiceInfo>>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ARG2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ARG3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<HoudiniEngineUnity::HAPI_ParmChoiceInfo>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, arg1, arg2, arg3, data, start, length, callback, object);
}
 bool HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,HoudiniEngineUnity::HAPI_ParmChoiceInfo>::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,HoudiniEngineUnity::HAPI_ParmChoiceInfo>>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, result);
}
 HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,HoudiniEngineUnity::HAPI_ObjectInfo> HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,HoudiniEngineUnity::HAPI_ObjectInfo>::New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,HoudiniEngineUnity::HAPI_ObjectInfo> o{THROW_UNLESS(::il2cpp_utils::New<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,HoudiniEngineUnity::HAPI_ObjectInfo>>(object, method))};
return o;
}
 void HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,HoudiniEngineUnity::HAPI_ObjectInfo>::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,HoudiniEngineUnity::HAPI_ObjectInfo>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 bool HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,HoudiniEngineUnity::HAPI_ObjectInfo>::Invoke(int32_t arg1, ARG2 arg2, ARG3 arg3, ByRef<::ArrayW<HoudiniEngineUnity::HAPI_ObjectInfo>> data, int32_t start, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,HoudiniEngineUnity::HAPI_ObjectInfo>>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ARG2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ARG3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<HoudiniEngineUnity::HAPI_ObjectInfo>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, arg1, arg2, arg3, data, start, length);
}
 System::IAsyncResult HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,HoudiniEngineUnity::HAPI_ObjectInfo>::BeginInvoke(int32_t arg1, ARG2 arg2, ARG3 arg3, ByRef<::ArrayW<HoudiniEngineUnity::HAPI_ObjectInfo>> data, int32_t start, int32_t length, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,HoudiniEngineUnity::HAPI_ObjectInfo>>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ARG2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ARG3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<HoudiniEngineUnity::HAPI_ObjectInfo>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, arg1, arg2, arg3, data, start, length, callback, object);
}
 bool HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,HoudiniEngineUnity::HAPI_ObjectInfo>::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,HoudiniEngineUnity::HAPI_ObjectInfo>>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, result);
}
 HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,HoudiniEngineUnity::HAPI_HandleInfo> HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,HoudiniEngineUnity::HAPI_HandleInfo>::New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,HoudiniEngineUnity::HAPI_HandleInfo> o{THROW_UNLESS(::il2cpp_utils::New<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,HoudiniEngineUnity::HAPI_HandleInfo>>(object, method))};
return o;
}
 void HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,HoudiniEngineUnity::HAPI_HandleInfo>::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,HoudiniEngineUnity::HAPI_HandleInfo>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 bool HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,HoudiniEngineUnity::HAPI_HandleInfo>::Invoke(int32_t arg1, ARG2 arg2, ARG3 arg3, ByRef<::ArrayW<HoudiniEngineUnity::HAPI_HandleInfo>> data, int32_t start, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,HoudiniEngineUnity::HAPI_HandleInfo>>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ARG2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ARG3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<HoudiniEngineUnity::HAPI_HandleInfo>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, arg1, arg2, arg3, data, start, length);
}
 System::IAsyncResult HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,HoudiniEngineUnity::HAPI_HandleInfo>::BeginInvoke(int32_t arg1, ARG2 arg2, ARG3 arg3, ByRef<::ArrayW<HoudiniEngineUnity::HAPI_HandleInfo>> data, int32_t start, int32_t length, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,HoudiniEngineUnity::HAPI_HandleInfo>>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ARG2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ARG3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<HoudiniEngineUnity::HAPI_HandleInfo>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, arg1, arg2, arg3, data, start, length, callback, object);
}
 bool HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,HoudiniEngineUnity::HAPI_HandleInfo>::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,HoudiniEngineUnity::HAPI_HandleInfo>>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, result);
}
 HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,T> HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,T>::New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,T> o{THROW_UNLESS(::il2cpp_utils::New<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,T>>(object, method))};
return o;
}
 void HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,T>::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 bool HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,T>::Invoke(int32_t arg1, ARG2 arg2, ARG3 arg3, ByRef<::ArrayW<T>> data, int32_t start, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,T>>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ARG2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ARG3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<T>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, arg1, arg2, arg3, data, start, length);
}
 System::IAsyncResult HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,T>::BeginInvoke(int32_t arg1, ARG2 arg2, ARG3 arg3, ByRef<::ArrayW<T>> data, int32_t start, int32_t length, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,T>>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ARG2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ARG3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<T>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, arg1, arg2, arg3, data, start, length, callback, object);
}
 bool HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,T>::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,T>>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, result);
}
 HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,T> HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,T>::New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,T> o{THROW_UNLESS(::il2cpp_utils::New<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,T>>(object, method))};
return o;
}
 void HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,T>::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 bool HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,T>::Invoke(int32_t arg1, ARG2 arg2, ARG3 arg3, ByRef<::ArrayW<T>> data, int32_t start, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,T>>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ARG2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ARG3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<T>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, arg1, arg2, arg3, data, start, length);
}
 System::IAsyncResult HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,T>::BeginInvoke(int32_t arg1, ARG2 arg2, ARG3 arg3, ByRef<::ArrayW<T>> data, int32_t start, int32_t length, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,T>>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ARG2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ARG3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<T>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, arg1, arg2, arg3, data, start, length, callback, object);
}
 bool HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,T>::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,T>>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, result);
}
 HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,T> HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,T>::New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,T> o{THROW_UNLESS(::il2cpp_utils::New<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,T>>(object, method))};
return o;
}
 void HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,T>::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 bool HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,T>::Invoke(int32_t arg1, ARG2 arg2, ARG3 arg3, ByRef<::ArrayW<T>> data, int32_t start, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,T>>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ARG2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ARG3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<T>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, arg1, arg2, arg3, data, start, length);
}
 System::IAsyncResult HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,T>::BeginInvoke(int32_t arg1, ARG2 arg2, ARG3 arg3, ByRef<::ArrayW<T>> data, int32_t start, int32_t length, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,T>>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ARG2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ARG3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<T>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, arg1, arg2, arg3, data, start, length, callback, object);
}
 bool HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,T>::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,T>>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, result);
}
 HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,T> HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,T>::New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,T> o{THROW_UNLESS(::il2cpp_utils::New<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,T>>(object, method))};
return o;
}
 void HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,T>::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 bool HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,T>::Invoke(int32_t arg1, ARG2 arg2, ARG3 arg3, ByRef<::ArrayW<T>> data, int32_t start, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,T>>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ARG2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ARG3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<T>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, arg1, arg2, arg3, data, start, length);
}
 System::IAsyncResult HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,T>::BeginInvoke(int32_t arg1, ARG2 arg2, ARG3 arg3, ByRef<::ArrayW<T>> data, int32_t start, int32_t length, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,T>>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ARG2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ARG3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<T>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, arg1, arg2, arg3, data, start, length, callback, object);
}
 bool HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,T>::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,T>>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, result);
}
 HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<T> HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<T>::New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<T> o{THROW_UNLESS(::il2cpp_utils::New<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<T>>(object, method))};
return o;
}
 void HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<T>::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 bool HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<T>::Invoke(int32_t geoID, int32_t partID, ::StringW name, ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> info, ByRef<::ArrayW<T>> items, int32_t start, int32_t end)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<T>>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<HoudiniEngineUnity::HAPI_AttributeInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<T>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, geoID, partID, name, info, items, start, end);
}
 System::IAsyncResult HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<T>::BeginInvoke(int32_t geoID, int32_t partID, ::StringW name, ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> info, ByRef<::ArrayW<T>> items, int32_t start, int32_t end, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<T>>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<HoudiniEngineUnity::HAPI_AttributeInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<T>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, geoID, partID, name, info, items, start, end, callback, object);
}
 bool HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<T>::EndInvoke(ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> info, System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<T>>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<HoudiniEngineUnity::HAPI_AttributeInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, info, result);
}
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<double_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<double_t>::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<double_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<double_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<double_t>.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<double_t>::*)(int32_t, int32_t, ::StringW, ByRef<HoudiniEngineUnity::HAPI_AttributeInfo>, ByRef<::ArrayW<double_t>>, int32_t, int32_t)>(&HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<double_t>::Invoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<double_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<double_t>.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<double_t>::*)(int32_t, int32_t, ::StringW, ByRef<HoudiniEngineUnity::HAPI_AttributeInfo>, ByRef<::ArrayW<double_t>>, int32_t, int32_t, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<double_t>::BeginInvoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<double_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<double_t>.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<double_t>::*)(ByRef<HoudiniEngineUnity::HAPI_AttributeInfo>, System::IAsyncResult)>(&HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<double_t>::EndInvoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<double_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
 HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<double_t> HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<double_t>::New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<double_t> o{THROW_UNLESS(::il2cpp_utils::New<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<double_t>>(object, method))};
return o;
}
 void HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<double_t>::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<double_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 bool HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<double_t>::Invoke(int32_t geoID, int32_t partID, ::StringW name, ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> info, ByRef<::ArrayW<double_t>> items, int32_t start, int32_t end)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<double_t>>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<HoudiniEngineUnity::HAPI_AttributeInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<double_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, geoID, partID, name, info, items, start, end);
}
 System::IAsyncResult HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<double_t>::BeginInvoke(int32_t geoID, int32_t partID, ::StringW name, ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> info, ByRef<::ArrayW<double_t>> items, int32_t start, int32_t end, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<double_t>>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<HoudiniEngineUnity::HAPI_AttributeInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<double_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, geoID, partID, name, info, items, start, end, callback, object);
}
 bool HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<double_t>::EndInvoke(ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> info, System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<double_t>>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<HoudiniEngineUnity::HAPI_AttributeInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, info, result);
}
 HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<T> HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<T>::New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<T> o{THROW_UNLESS(::il2cpp_utils::New<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<T>>(object, method))};
return o;
}
 void HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<T>::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 bool HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<T>::Invoke(int32_t geoID, int32_t partID, ::StringW name, ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> info, ByRef<::ArrayW<T>> items, int32_t start, int32_t end)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<T>>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<HoudiniEngineUnity::HAPI_AttributeInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<T>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, geoID, partID, name, info, items, start, end);
}
 System::IAsyncResult HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<T>::BeginInvoke(int32_t geoID, int32_t partID, ::StringW name, ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> info, ByRef<::ArrayW<T>> items, int32_t start, int32_t end, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<T>>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<HoudiniEngineUnity::HAPI_AttributeInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<T>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, geoID, partID, name, info, items, start, end, callback, object);
}
 bool HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<T>::EndInvoke(ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> info, System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<T>>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<HoudiniEngineUnity::HAPI_AttributeInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, info, result);
}
 HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<T> HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<T>::New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<T> o{THROW_UNLESS(::il2cpp_utils::New<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<T>>(object, method))};
return o;
}
 void HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<T>::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 bool HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<T>::Invoke(int32_t geoID, int32_t partID, ::StringW name, ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> info, ByRef<::ArrayW<T>> items, int32_t start, int32_t end)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<T>>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<HoudiniEngineUnity::HAPI_AttributeInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<T>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, geoID, partID, name, info, items, start, end);
}
 System::IAsyncResult HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<T>::BeginInvoke(int32_t geoID, int32_t partID, ::StringW name, ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> info, ByRef<::ArrayW<T>> items, int32_t start, int32_t end, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<T>>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<HoudiniEngineUnity::HAPI_AttributeInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<T>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, geoID, partID, name, info, items, start, end, callback, object);
}
 bool HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<T>::EndInvoke(ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> info, System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<T>>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<HoudiniEngineUnity::HAPI_AttributeInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, info, result);
}
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<float_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<float_t>::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<float_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<float_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<float_t>.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<float_t>::*)(int32_t, int32_t, ::StringW, ByRef<HoudiniEngineUnity::HAPI_AttributeInfo>, ByRef<::ArrayW<float_t>>, int32_t, int32_t)>(&HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<float_t>::Invoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<float_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<float_t>.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<float_t>::*)(int32_t, int32_t, ::StringW, ByRef<HoudiniEngineUnity::HAPI_AttributeInfo>, ByRef<::ArrayW<float_t>>, int32_t, int32_t, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<float_t>::BeginInvoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<float_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<float_t>.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<float_t>::*)(ByRef<HoudiniEngineUnity::HAPI_AttributeInfo>, System::IAsyncResult)>(&HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<float_t>::EndInvoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<float_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
 HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<float_t> HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<float_t>::New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<float_t> o{THROW_UNLESS(::il2cpp_utils::New<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<float_t>>(object, method))};
return o;
}
 void HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<float_t>::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<float_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 bool HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<float_t>::Invoke(int32_t geoID, int32_t partID, ::StringW name, ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> info, ByRef<::ArrayW<float_t>> items, int32_t start, int32_t end)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<float_t>>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<HoudiniEngineUnity::HAPI_AttributeInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<float_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, geoID, partID, name, info, items, start, end);
}
 System::IAsyncResult HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<float_t>::BeginInvoke(int32_t geoID, int32_t partID, ::StringW name, ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> info, ByRef<::ArrayW<float_t>> items, int32_t start, int32_t end, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<float_t>>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<HoudiniEngineUnity::HAPI_AttributeInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<float_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, geoID, partID, name, info, items, start, end, callback, object);
}
 bool HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<float_t>::EndInvoke(ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> info, System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<float_t>>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<HoudiniEngineUnity::HAPI_AttributeInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, info, result);
}
 HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<T> HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<T>::New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<T> o{THROW_UNLESS(::il2cpp_utils::New<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<T>>(object, method))};
return o;
}
 void HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<T>::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 bool HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<T>::Invoke(int32_t geoID, int32_t partID, ::StringW name, ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> info, ByRef<::ArrayW<T>> items, int32_t start, int32_t end)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<T>>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<HoudiniEngineUnity::HAPI_AttributeInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<T>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, geoID, partID, name, info, items, start, end);
}
 System::IAsyncResult HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<T>::BeginInvoke(int32_t geoID, int32_t partID, ::StringW name, ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> info, ByRef<::ArrayW<T>> items, int32_t start, int32_t end, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<T>>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<HoudiniEngineUnity::HAPI_AttributeInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<T>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, geoID, partID, name, info, items, start, end, callback, object);
}
 bool HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<T>::EndInvoke(ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> info, System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<T>>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<HoudiniEngineUnity::HAPI_AttributeInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, info, result);
}
 HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<T> HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<T>::New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<T> o{THROW_UNLESS(::il2cpp_utils::New<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<T>>(object, method))};
return o;
}
 void HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<T>::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 bool HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<T>::Invoke(int32_t geoID, int32_t partID, ::StringW name, ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> info, ByRef<::ArrayW<T>> items, int32_t start, int32_t end)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<T>>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<HoudiniEngineUnity::HAPI_AttributeInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<T>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, geoID, partID, name, info, items, start, end);
}
 System::IAsyncResult HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<T>::BeginInvoke(int32_t geoID, int32_t partID, ::StringW name, ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> info, ByRef<::ArrayW<T>> items, int32_t start, int32_t end, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<T>>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<HoudiniEngineUnity::HAPI_AttributeInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<T>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, geoID, partID, name, info, items, start, end, callback, object);
}
 bool HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<T>::EndInvoke(ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> info, System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<T>>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<HoudiniEngineUnity::HAPI_AttributeInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, info, result);
}
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1<float_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1<float_t>::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1<float_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1<float_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1<float_t>.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1<float_t>::*)(int32_t, int32_t, ::StringW, ByRef<HoudiniEngineUnity::HAPI_AttributeInfo>, ::ArrayW<float_t>, int32_t, int32_t)>(&HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1<float_t>::Invoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1<float_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1<float_t>.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1<float_t>::*)(int32_t, int32_t, ::StringW, ByRef<HoudiniEngineUnity::HAPI_AttributeInfo>, ::ArrayW<float_t>, int32_t, int32_t, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1<float_t>::BeginInvoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1<float_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1<float_t>.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1<float_t>::*)(ByRef<HoudiniEngineUnity::HAPI_AttributeInfo>, System::IAsyncResult)>(&HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1<float_t>::EndInvoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1<float_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
 HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1<float_t> HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1<float_t>::New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1<float_t> o{THROW_UNLESS(::il2cpp_utils::New<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1<float_t>>(object, method))};
return o;
}
 void HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1<float_t>::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1<float_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 bool HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1<float_t>::Invoke(int32_t geoID, int32_t partID, ::StringW attrName, ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> attrInfo, ::ArrayW<float_t> items, int32_t start, int32_t end)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1<float_t>>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<HoudiniEngineUnity::HAPI_AttributeInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, geoID, partID, attrName, attrInfo, items, start, end);
}
 System::IAsyncResult HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1<float_t>::BeginInvoke(int32_t geoID, int32_t partID, ::StringW attrName, ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> attrInfo, ::ArrayW<float_t> items, int32_t start, int32_t end, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1<float_t>>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<HoudiniEngineUnity::HAPI_AttributeInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, geoID, partID, attrName, attrInfo, items, start, end, callback, object);
}
 bool HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1<float_t>::EndInvoke(ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> attrInfo, System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1<float_t>>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<HoudiniEngineUnity::HAPI_AttributeInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, attrInfo, result);
}
 HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1<T> HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1<T>::New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1<T> o{THROW_UNLESS(::il2cpp_utils::New<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1<T>>(object, method))};
return o;
}
 void HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1<T>::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 bool HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1<T>::Invoke(int32_t geoID, int32_t partID, ::StringW attrName, ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> attrInfo, ::ArrayW<T> items, int32_t start, int32_t end)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1<T>>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<HoudiniEngineUnity::HAPI_AttributeInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, geoID, partID, attrName, attrInfo, items, start, end);
}
 System::IAsyncResult HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1<T>::BeginInvoke(int32_t geoID, int32_t partID, ::StringW attrName, ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> attrInfo, ::ArrayW<T> items, int32_t start, int32_t end, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1<T>>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<HoudiniEngineUnity::HAPI_AttributeInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, geoID, partID, attrName, attrInfo, items, start, end, callback, object);
}
 bool HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1<T>::EndInvoke(ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> attrInfo, System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1<T>>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<HoudiniEngineUnity::HAPI_AttributeInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, attrInfo, result);
}
 HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1<T> HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1<T>::New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1<T> o{THROW_UNLESS(::il2cpp_utils::New<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1<T>>(object, method))};
return o;
}
 void HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1<T>::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 bool HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1<T>::Invoke(int32_t geoID, int32_t partID, ::StringW attrName, ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> attrInfo, ::ArrayW<T> items, int32_t start, int32_t end)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1<T>>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<HoudiniEngineUnity::HAPI_AttributeInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, geoID, partID, attrName, attrInfo, items, start, end);
}
 System::IAsyncResult HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1<T>::BeginInvoke(int32_t geoID, int32_t partID, ::StringW attrName, ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> attrInfo, ::ArrayW<T> items, int32_t start, int32_t end, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1<T>>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<HoudiniEngineUnity::HAPI_AttributeInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, geoID, partID, attrName, attrInfo, items, start, end, callback, object);
}
 bool HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1<T>::EndInvoke(ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> attrInfo, System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1<T>>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<HoudiniEngineUnity::HAPI_AttributeInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, attrInfo, result);
}
