#pragma once
namespace {
#include "HoudiniEngineUnity/zzzz__HEU_HAPIUtility_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_PartType_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_CookOptions_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_HoudiniAsset_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_Transform_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_AttributeOwner_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_SessionSyncInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_SessionBase_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_Viewport_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_HoudiniAssetRoot_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_ObjectInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_NodeInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_TransformEuler_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_AttributeInfo_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HAPIUtility.GetHoudiniEngineInstallationInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::HoudiniEngineUnity::HEU_HAPIUtility::GetHoudiniEngineInstallationInfo)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2012fe0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "GetHoudiniEngineInstallationInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HAPIUtility.GetEnvironmentPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::HoudiniEngineUnity::HEU_HAPIUtility::GetEnvironmentPath)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2013020;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "GetEnvironmentPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HAPIUtility.GetRealPathFromHFSPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::HoudiniEngineUnity::HEU_HAPIUtility::GetRealPathFromHFSPath)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x2013068;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "GetRealPathFromHFSPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HAPIUtility.DoesMappedPathExist
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::HoudiniEngineUnity::HEU_HAPIUtility::DoesMappedPathExist)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x201321c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "DoesMappedPathExist",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HAPIUtility.IsHoudiniAssetFile
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::HoudiniEngineUnity::HEU_HAPIUtility::IsHoudiniAssetFile)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x2013574;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "IsHoudiniAssetFile",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HAPIUtility.FindHoudiniAssetFileInPathWithExt
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::HoudiniEngineUnity::HEU_HAPIUtility::FindHoudiniAssetFileInPathWithExt)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x20136b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "FindHoudiniAssetFileInPathWithExt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HAPIUtility.Log
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::HoudiniEngineUnity::HEU_HAPIUtility::Log)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2013944;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "Log",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HAPIUtility.LogWarning
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::HoudiniEngineUnity::HEU_HAPIUtility::LogWarning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x201394c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "LogWarning",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HAPIUtility.LogError
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::HoudiniEngineUnity::HEU_HAPIUtility::LogError)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2013954;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "LogError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HAPIUtility.LocateValidFilePath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::UnityEngine::Object)>(&::HoudiniEngineUnity::HEU_HAPIUtility::LocateValidFilePath)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x201395c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "LocateValidFilePath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HAPIUtility.LocateValidFilePath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::StringW)>(&::HoudiniEngineUnity::HEU_HAPIUtility::LocateValidFilePath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20139c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "LocateValidFilePath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HAPIUtility.InstantiateHDA
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject (*)(::StringW, ::UnityEngine::Vector3, ::HoudiniEngineUnity::HEU_SessionBase, bool, bool, bool, ::UnityEngine::GameObject)>(&::HoudiniEngineUnity::HEU_HAPIUtility::InstantiateHDA)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x20139d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "InstantiateHDA",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HAPIUtility.LoadHDAFile
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::HoudiniEngineUnity::HEU_SessionBase, ::StringW, ByRef<int32_t>, ByRef<::ArrayW<::StringW>>)>(&::HoudiniEngineUnity::HEU_HAPIUtility::LoadHDAFile)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x2013d20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "LoadHDAFile",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::StringW>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HAPIUtility.CreateAndCookAssetNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::HoudiniEngineUnity::HEU_SessionBase, ::StringW, bool, ByRef<int32_t>)>(&::HoudiniEngineUnity::HEU_HAPIUtility::CreateAndCookAssetNode)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x2013f40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "CreateAndCookAssetNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HAPIUtility.CreateAndCookCurveAsset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::HoudiniEngineUnity::HEU_SessionBase, ::StringW, bool, ByRef<int32_t>)>(&::HoudiniEngineUnity::HEU_HAPIUtility::CreateAndCookCurveAsset)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2014324;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "CreateAndCookCurveAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HAPIUtility.CreateAndCookInputAsset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::HoudiniEngineUnity::HEU_SessionBase, ::StringW, bool, ByRef<int32_t>)>(&::HoudiniEngineUnity::HEU_HAPIUtility::CreateAndCookInputAsset)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x2014410;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "CreateAndCookInputAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HAPIUtility.CookNodeInHoudini
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::HoudiniEngineUnity::HEU_SessionBase, int32_t, bool, ::StringW)>(&::HoudiniEngineUnity::HEU_HAPIUtility::CookNodeInHoudini)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x20142cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "CookNodeInHoudini",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HAPIUtility.CookNodeInHoudiniWithOptions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::HoudiniEngineUnity::HEU_SessionBase, int32_t, ::HoudiniEngineUnity::HAPI_CookOptions, ::StringW)>(&::HoudiniEngineUnity::HEU_HAPIUtility::CookNodeInHoudiniWithOptions)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x201463c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "CookNodeInHoudiniWithOptions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HAPI_CookOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HAPIUtility.GetDefaultCookOptions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HAPI_CookOptions (*)(::HoudiniEngineUnity::HEU_SessionBase)>(&::HoudiniEngineUnity::HEU_HAPIUtility::GetDefaultCookOptions)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x20146b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "GetDefaultCookOptions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HAPIUtility.ProcessHoudiniCookStatus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::HoudiniEngineUnity::HEU_SessionBase, ::StringW)>(&::HoudiniEngineUnity::HEU_HAPIUtility::ProcessHoudiniCookStatus)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x20140f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "ProcessHoudiniCookStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HAPIUtility.CreateNewAsset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject (*)(::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__HEU_AssetType, ::StringW, ::UnityEngine::Transform, ::HoudiniEngineUnity::HEU_SessionBase, bool, ::UnityEngine::GameObject)>(&::HoudiniEngineUnity::HEU_HAPIUtility::CreateNewAsset)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x201475c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "CreateNewAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__HEU_AssetType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HAPIUtility.CreateNewCurveAsset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject (*)(::StringW, ::UnityEngine::Transform, ::HoudiniEngineUnity::HEU_SessionBase, bool, ::UnityEngine::GameObject)>(&::HoudiniEngineUnity::HEU_HAPIUtility::CreateNewCurveAsset)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2014b0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "CreateNewCurveAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HAPIUtility.CreateNewInputAsset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject (*)(::StringW, ::UnityEngine::Transform, ::HoudiniEngineUnity::HEU_SessionBase, bool, ::UnityEngine::GameObject)>(&::HoudiniEngineUnity::HEU_HAPIUtility::CreateNewInputAsset)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2014b30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "CreateNewInputAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HAPIUtility.LoadGeoWithNewGeoSync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject (*)(::HoudiniEngineUnity::HEU_SessionBase)>(&::HoudiniEngineUnity::HEU_HAPIUtility::LoadGeoWithNewGeoSync)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2014b54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "LoadGeoWithNewGeoSync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HAPIUtility.DestroyChildren
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Transform)>(&::HoudiniEngineUnity::HEU_HAPIUtility::DestroyChildren)> {
  constexpr static std::size_t size = 0x47c;
  constexpr static std::size_t addrs = 0x2014b5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "DestroyChildren",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HAPIUtility.DestroyGameObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::GameObject, bool)>(&::HoudiniEngineUnity::HEU_HAPIUtility::DestroyGameObject)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2014fd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "DestroyGameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HAPIUtility.IsNodeValidInHoudini
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::HoudiniEngineUnity::HEU_SessionBase, int32_t)>(&::HoudiniEngineUnity::HEU_HAPIUtility::IsNodeValidInHoudini)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2014fe8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "IsNodeValidInHoudini",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HAPIUtility.GetAssetInScene
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_HoudiniAssetRoot (*)(int32_t)>(&::HoudiniEngineUnity::HEU_HAPIUtility::GetAssetInScene)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x2015088;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "GetAssetInScene",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HAPIUtility.ApplyWorldTransfromFromHoudiniToUnity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::HoudiniEngineUnity::HAPI_Transform>, ::UnityEngine::Transform)>(&::HoudiniEngineUnity::HEU_HAPIUtility::ApplyWorldTransfromFromHoudiniToUnity)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x201518c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "ApplyWorldTransfromFromHoudiniToUnity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HAPI_Transform>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HAPIUtility.ApplyLocalTransfromFromHoudiniToUnity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::HoudiniEngineUnity::HAPI_Transform>, ::UnityEngine::Transform)>(&::HoudiniEngineUnity::HEU_HAPIUtility::ApplyLocalTransfromFromHoudiniToUnity)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x2015374;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "ApplyLocalTransfromFromHoudiniToUnity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HAPI_Transform>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HAPIUtility.ApplyLocalTransfromFromHoudiniToUnityForInstance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::HoudiniEngineUnity::HAPI_Transform>, ::UnityEngine::Transform)>(&::HoudiniEngineUnity::HEU_HAPIUtility::ApplyLocalTransfromFromHoudiniToUnityForInstance)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x2015488;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "ApplyLocalTransfromFromHoudiniToUnityForInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HAPI_Transform>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HAPIUtility.ApplyMatrixToLocalTransform
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::Matrix4x4>, ::UnityEngine::Transform)>(&::HoudiniEngineUnity::HEU_HAPIUtility::ApplyMatrixToLocalTransform)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2015650;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "ApplyMatrixToLocalTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Matrix4x4>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HAPIUtility.GetMatrixFromHAPITransform
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Matrix4x4 (*)(ByRef<::HoudiniEngineUnity::HAPI_Transform>, bool)>(&::HoudiniEngineUnity::HEU_HAPIUtility::GetMatrixFromHAPITransform)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x2015a80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "GetMatrixFromHAPITransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HAPI_Transform>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HAPIUtility.GetQuaternion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (*)(ByRef<::UnityEngine::Matrix4x4>)>(&::HoudiniEngineUnity::HEU_HAPIUtility::GetQuaternion)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x20156bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "GetQuaternion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Matrix4x4>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HAPIUtility.GetPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(ByRef<::UnityEngine::Matrix4x4>)>(&::HoudiniEngineUnity::HEU_HAPIUtility::GetPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x20156b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "GetPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Matrix4x4>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HAPIUtility.SetMatrixPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::Matrix4x4>, ByRef<::UnityEngine::Vector3>)>(&::HoudiniEngineUnity::HEU_HAPIUtility::SetMatrixPosition)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2015bfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "SetMatrixPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Matrix4x4>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HAPIUtility.GetScale
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(ByRef<::UnityEngine::Matrix4x4>)>(&::HoudiniEngineUnity::HEU_HAPIUtility::GetScale)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2015a1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "GetScale",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Matrix4x4>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HAPIUtility.GetHAPITransformFromMatrix
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HAPI_TransformEuler (*)(ByRef<::UnityEngine::Matrix4x4>)>(&::HoudiniEngineUnity::HEU_HAPIUtility::GetHAPITransformFromMatrix)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x2015c14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "GetHAPITransformFromMatrix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Matrix4x4>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HAPIUtility.GetHAPITransform
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HAPI_TransformEuler (*)(ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>)>(&::HoudiniEngineUnity::HEU_HAPIUtility::GetHAPITransform)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x2015e30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "GetHAPITransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HAPIUtility.GetHAPITransformQuatFromMatrix
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HAPI_Transform (*)(ByRef<::UnityEngine::Matrix4x4>)>(&::HoudiniEngineUnity::HEU_HAPIUtility::GetHAPITransformQuatFromMatrix)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x2015f54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "GetHAPITransformQuatFromMatrix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Matrix4x4>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HAPIUtility.GetMatrix4x4
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Matrix4x4 (*)(ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>)>(&::HoudiniEngineUnity::HEU_HAPIUtility::GetMatrix4x4)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x20161b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "GetMatrix4x4",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HAPIUtility.IsSameTransform
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::UnityEngine::Matrix4x4>, ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>)>(&::HoudiniEngineUnity::HEU_HAPIUtility::IsSameTransform)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2016278;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "IsSameTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Matrix4x4>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HAPIUtility.IsEqualTol
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(float_t, float_t, float_t)>(&::HoudiniEngineUnity::HEU_HAPIUtility::IsEqualTol)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x20162dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "IsEqualTol",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HAPIUtility.IsTransformEqual
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::HoudiniEngineUnity::HAPI_Transform>, ByRef<::HoudiniEngineUnity::HAPI_Transform>)>(&::HoudiniEngineUnity::HEU_HAPIUtility::IsTransformEqual)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x20162ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "IsTransformEqual",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HAPI_Transform>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HAPI_Transform>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HAPIUtility.IsViewportEqual
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::HoudiniEngineUnity::HAPI_Viewport>, ByRef<::HoudiniEngineUnity::HAPI_Viewport>)>(&::HoudiniEngineUnity::HEU_HAPIUtility::IsViewportEqual)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x201648c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "IsViewportEqual",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HAPI_Viewport>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HAPI_Viewport>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HAPIUtility.IsSessionSyncEqual
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::HoudiniEngineUnity::HAPI_SessionSyncInfo>, ByRef<::HoudiniEngineUnity::HAPI_SessionSyncInfo>)>(&::HoudiniEngineUnity::HEU_HAPIUtility::IsSessionSyncEqual)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2016574;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "IsSessionSyncEqual",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HAPI_SessionSyncInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HAPI_SessionSyncInfo>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HAPIUtility.DoesGeoPartHaveAttribute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::HoudiniEngineUnity::HEU_SessionBase, int32_t, int32_t, ::StringW, ::HoudiniEngineUnity::HAPI_AttributeOwner, ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo>)>(&::HoudiniEngineUnity::HEU_HAPIUtility::DoesGeoPartHaveAttribute)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x20165a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "DoesGeoPartHaveAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HAPI_AttributeOwner>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HAPIUtility.SetAnimationCurveTangentModes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::AnimationCurve, ::System::Collections::Generic::List_1<int32_t>)>(&::HoudiniEngineUnity::HEU_HAPIUtility::SetAnimationCurveTangentModes)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x20165e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "SetAnimationCurveTangentModes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AnimationCurve>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HAPIUtility.IsSupportedPolygonType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::HoudiniEngineUnity::HAPI_PartType)>(&::HoudiniEngineUnity::HEU_HAPIUtility::IsSupportedPolygonType)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x20165e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "IsSupportedPolygonType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HAPI_PartType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HAPIUtility.GetParentNodeID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::HoudiniEngineUnity::HEU_SessionBase, int32_t)>(&::HoudiniEngineUnity::HEU_HAPIUtility::GetParentNodeID)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2016600;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "GetParentNodeID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HAPIUtility.GetObjectInfos
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::HoudiniEngineUnity::HEU_SessionBase, int32_t, ByRef<::HoudiniEngineUnity::HAPI_NodeInfo>, ByRef<::ArrayW<::HoudiniEngineUnity::HAPI_ObjectInfo>>, ByRef<::ArrayW<::HoudiniEngineUnity::HAPI_Transform>>)>(&::HoudiniEngineUnity::HEU_HAPIUtility::GetObjectInfos)> {
  constexpr static std::size_t size = 0x4b8;
  constexpr static std::size_t addrs = 0x2016668;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "GetObjectInfos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HAPI_NodeInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::HoudiniEngineUnity::HAPI_ObjectInfo>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::HoudiniEngineUnity::HAPI_Transform>>>::get()}
                        )));
    return ___internal_method;
  }
};
 ::StringW ::HoudiniEngineUnity::HEU_HAPIUtility::GetHoudiniEngineInstallationInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "GetHoudiniEngineInstallationInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
 ::StringW ::HoudiniEngineUnity::HEU_HAPIUtility::GetEnvironmentPath()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "GetEnvironmentPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
 ::StringW ::HoudiniEngineUnity::HEU_HAPIUtility::GetRealPathFromHFSPath(::StringW inPath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "GetRealPathFromHFSPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, inPath);
}
 bool ::HoudiniEngineUnity::HEU_HAPIUtility::DoesMappedPathExist(::StringW inPath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "DoesMappedPathExist",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, inPath);
}
 bool ::HoudiniEngineUnity::HEU_HAPIUtility::IsHoudiniAssetFile(::StringW filePath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "IsHoudiniAssetFile",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, filePath);
}
 ::StringW ::HoudiniEngineUnity::HEU_HAPIUtility::FindHoudiniAssetFileInPathWithExt(::StringW filePath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "FindHoudiniAssetFileInPathWithExt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, filePath);
}
 void ::HoudiniEngineUnity::HEU_HAPIUtility::Log(::StringW message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "Log",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, message);
}
 void ::HoudiniEngineUnity::HEU_HAPIUtility::LogWarning(::StringW message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "LogWarning",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, message);
}
 void ::HoudiniEngineUnity::HEU_HAPIUtility::LogError(::StringW message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "LogError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, message);
}
 ::StringW ::HoudiniEngineUnity::HEU_HAPIUtility::LocateValidFilePath(::UnityEngine::Object inObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "LocateValidFilePath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, inObject);
}
 ::StringW ::HoudiniEngineUnity::HEU_HAPIUtility::LocateValidFilePath(::StringW assetName, ::StringW inFilePath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "LocateValidFilePath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, assetName, inFilePath);
}
/// @param bLoadFromMemory: bool (default: false)
/// @param bAlwaysOverwriteOnLoad: bool (default: false)
/// @param rootGO: ::UnityEngine::GameObject (default: csnull)
 ::UnityEngine::GameObject ::HoudiniEngineUnity::HEU_HAPIUtility::InstantiateHDA(::StringW filePath, ::UnityEngine::Vector3 initialPosition, ::HoudiniEngineUnity::HEU_SessionBase session, bool bBuildAsync, bool bLoadFromMemory, bool bAlwaysOverwriteOnLoad, ::UnityEngine::GameObject rootGO)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "InstantiateHDA",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::GameObject, false>(nullptr, ___internal_method, filePath, initialPosition, session, bBuildAsync, bLoadFromMemory, bAlwaysOverwriteOnLoad, rootGO);
}
 bool ::HoudiniEngineUnity::HEU_HAPIUtility::LoadHDAFile(::HoudiniEngineUnity::HEU_SessionBase session, ::StringW assetPath, ByRef<int32_t> assetLibraryID, ByRef<::ArrayW<::StringW>> assetNames)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "LoadHDAFile",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::StringW>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, session, assetPath, assetLibraryID, assetNames);
}
 bool ::HoudiniEngineUnity::HEU_HAPIUtility::CreateAndCookAssetNode(::HoudiniEngineUnity::HEU_SessionBase session, ::StringW assetName, bool bCookTemplatedGeos, ByRef<int32_t> newAssetID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "CreateAndCookAssetNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, session, assetName, bCookTemplatedGeos, newAssetID);
}
 bool ::HoudiniEngineUnity::HEU_HAPIUtility::CreateAndCookCurveAsset(::HoudiniEngineUnity::HEU_SessionBase session, ::StringW assetName, bool bCookTemplatedGeos, ByRef<int32_t> newAssetID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "CreateAndCookCurveAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, session, assetName, bCookTemplatedGeos, newAssetID);
}
 bool ::HoudiniEngineUnity::HEU_HAPIUtility::CreateAndCookInputAsset(::HoudiniEngineUnity::HEU_SessionBase session, ::StringW assetName, bool bCookTemplatedGeos, ByRef<int32_t> newAssetID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "CreateAndCookInputAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, session, assetName, bCookTemplatedGeos, newAssetID);
}
 bool ::HoudiniEngineUnity::HEU_HAPIUtility::CookNodeInHoudini(::HoudiniEngineUnity::HEU_SessionBase session, int32_t nodeID, bool bCookTemplatedGeos, ::StringW assetName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "CookNodeInHoudini",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, session, nodeID, bCookTemplatedGeos, assetName);
}
 bool ::HoudiniEngineUnity::HEU_HAPIUtility::CookNodeInHoudiniWithOptions(::HoudiniEngineUnity::HEU_SessionBase session, int32_t nodeID, ::HoudiniEngineUnity::HAPI_CookOptions options, ::StringW assetName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "CookNodeInHoudiniWithOptions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HAPI_CookOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, session, nodeID, options, assetName);
}
 ::HoudiniEngineUnity::HAPI_CookOptions ::HoudiniEngineUnity::HEU_HAPIUtility::GetDefaultCookOptions(::HoudiniEngineUnity::HEU_SessionBase session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "GetDefaultCookOptions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HAPI_CookOptions, false>(nullptr, ___internal_method, session);
}
 bool ::HoudiniEngineUnity::HEU_HAPIUtility::ProcessHoudiniCookStatus(::HoudiniEngineUnity::HEU_SessionBase session, ::StringW assetName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "ProcessHoudiniCookStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, session, assetName);
}
/// @param rootName: ::StringW (default: u"HoudiniAsset")
/// @param parentTransform: ::UnityEngine::Transform (default: csnull)
/// @param session: ::HoudiniEngineUnity::HEU_SessionBase (default: csnull)
/// @param bBuildAsync: bool (default: true)
/// @param rootGO: ::UnityEngine::GameObject (default: csnull)
 ::UnityEngine::GameObject ::HoudiniEngineUnity::HEU_HAPIUtility::CreateNewAsset(::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__HEU_AssetType assetType, ::StringW rootName, ::UnityEngine::Transform parentTransform, ::HoudiniEngineUnity::HEU_SessionBase session, bool bBuildAsync, ::UnityEngine::GameObject rootGO)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "CreateNewAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__HEU_AssetType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::GameObject, false>(nullptr, ___internal_method, assetType, rootName, parentTransform, session, bBuildAsync, rootGO);
}
/// @param name: ::StringW (default: u"HoudiniCurve")
/// @param parentTransform: ::UnityEngine::Transform (default: csnull)
/// @param session: ::HoudiniEngineUnity::HEU_SessionBase (default: csnull)
/// @param bBuildAsync: bool (default: true)
/// @param rootGO: ::UnityEngine::GameObject (default: csnull)
 ::UnityEngine::GameObject ::HoudiniEngineUnity::HEU_HAPIUtility::CreateNewCurveAsset(::StringW name, ::UnityEngine::Transform parentTransform, ::HoudiniEngineUnity::HEU_SessionBase session, bool bBuildAsync, ::UnityEngine::GameObject rootGO)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "CreateNewCurveAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::GameObject, false>(nullptr, ___internal_method, name, parentTransform, session, bBuildAsync, rootGO);
}
/// @param name: ::StringW (default: u"HoudiniInput")
/// @param parentTransform: ::UnityEngine::Transform (default: csnull)
/// @param session: ::HoudiniEngineUnity::HEU_SessionBase (default: csnull)
/// @param bBuildAsync: bool (default: true)
/// @param rootGO: ::UnityEngine::GameObject (default: csnull)
 ::UnityEngine::GameObject ::HoudiniEngineUnity::HEU_HAPIUtility::CreateNewInputAsset(::StringW name, ::UnityEngine::Transform parentTransform, ::HoudiniEngineUnity::HEU_SessionBase session, bool bBuildAsync, ::UnityEngine::GameObject rootGO)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "CreateNewInputAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::GameObject, false>(nullptr, ___internal_method, name, parentTransform, session, bBuildAsync, rootGO);
}
/// @param session: ::HoudiniEngineUnity::HEU_SessionBase (default: csnull)
 ::UnityEngine::GameObject ::HoudiniEngineUnity::HEU_HAPIUtility::LoadGeoWithNewGeoSync(::HoudiniEngineUnity::HEU_SessionBase session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "LoadGeoWithNewGeoSync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::GameObject, false>(nullptr, ___internal_method, session);
}
 void ::HoudiniEngineUnity::HEU_HAPIUtility::DestroyChildren(::UnityEngine::Transform inTransform)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "DestroyChildren",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, inTransform);
}
/// @param bRegisterUndo: bool (default: false)
 void ::HoudiniEngineUnity::HEU_HAPIUtility::DestroyGameObject(::UnityEngine::GameObject gameObect, bool bRegisterUndo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "DestroyGameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, gameObect, bRegisterUndo);
}
template<typename T>
 void ::HoudiniEngineUnity::HEU_HAPIUtility::DestroyChildrenWithComponent(::UnityEngine::GameObject gameObject)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                        "DestroyChildrenWithComponent",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, gameObject);
}
 bool ::HoudiniEngineUnity::HEU_HAPIUtility::IsNodeValidInHoudini(::HoudiniEngineUnity::HEU_SessionBase session, int32_t nodeID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "IsNodeValidInHoudini",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, session, nodeID);
}
 ::HoudiniEngineUnity::HEU_HoudiniAssetRoot ::HoudiniEngineUnity::HEU_HAPIUtility::GetAssetInScene(int32_t assetID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "GetAssetInScene",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_HoudiniAssetRoot, false>(nullptr, ___internal_method, assetID);
}
 void ::HoudiniEngineUnity::HEU_HAPIUtility::ApplyWorldTransfromFromHoudiniToUnity(ByRef<::HoudiniEngineUnity::HAPI_Transform> hapiTransform, ::UnityEngine::Transform unityTransform)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "ApplyWorldTransfromFromHoudiniToUnity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HAPI_Transform>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, hapiTransform, unityTransform);
}
 void ::HoudiniEngineUnity::HEU_HAPIUtility::ApplyLocalTransfromFromHoudiniToUnity(ByRef<::HoudiniEngineUnity::HAPI_Transform> hapiTransform, ::UnityEngine::Transform unityTransform)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "ApplyLocalTransfromFromHoudiniToUnity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HAPI_Transform>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, hapiTransform, unityTransform);
}
 void ::HoudiniEngineUnity::HEU_HAPIUtility::ApplyLocalTransfromFromHoudiniToUnityForInstance(ByRef<::HoudiniEngineUnity::HAPI_Transform> hapiTransform, ::UnityEngine::Transform unityTransform)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "ApplyLocalTransfromFromHoudiniToUnityForInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HAPI_Transform>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, hapiTransform, unityTransform);
}
 void ::HoudiniEngineUnity::HEU_HAPIUtility::ApplyMatrixToLocalTransform(ByRef<::UnityEngine::Matrix4x4> matrix, ::UnityEngine::Transform transform)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "ApplyMatrixToLocalTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Matrix4x4>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, matrix, transform);
}
/// @param bConvertToUnity: bool (default: true)
 ::UnityEngine::Matrix4x4 ::HoudiniEngineUnity::HEU_HAPIUtility::GetMatrixFromHAPITransform(ByRef<::HoudiniEngineUnity::HAPI_Transform> hapiTransform, bool bConvertToUnity)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "GetMatrixFromHAPITransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HAPI_Transform>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4, false>(nullptr, ___internal_method, hapiTransform, bConvertToUnity);
}
 ::UnityEngine::Quaternion ::HoudiniEngineUnity::HEU_HAPIUtility::GetQuaternion(ByRef<::UnityEngine::Matrix4x4> m)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "GetQuaternion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Matrix4x4>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion, false>(nullptr, ___internal_method, m);
}
 ::UnityEngine::Vector3 ::HoudiniEngineUnity::HEU_HAPIUtility::GetPosition(ByRef<::UnityEngine::Matrix4x4> m)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "GetPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Matrix4x4>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(nullptr, ___internal_method, m);
}
 void ::HoudiniEngineUnity::HEU_HAPIUtility::SetMatrixPosition(ByRef<::UnityEngine::Matrix4x4> m, ByRef<::UnityEngine::Vector3> position)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "SetMatrixPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Matrix4x4>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, m, position);
}
 ::UnityEngine::Vector3 ::HoudiniEngineUnity::HEU_HAPIUtility::GetScale(ByRef<::UnityEngine::Matrix4x4> m)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "GetScale",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Matrix4x4>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(nullptr, ___internal_method, m);
}
 ::HoudiniEngineUnity::HAPI_TransformEuler ::HoudiniEngineUnity::HEU_HAPIUtility::GetHAPITransformFromMatrix(ByRef<::UnityEngine::Matrix4x4> mat)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "GetHAPITransformFromMatrix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Matrix4x4>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HAPI_TransformEuler, false>(nullptr, ___internal_method, mat);
}
 ::HoudiniEngineUnity::HAPI_TransformEuler ::HoudiniEngineUnity::HEU_HAPIUtility::GetHAPITransform(ByRef<::UnityEngine::Vector3> p, ByRef<::UnityEngine::Vector3> r, ByRef<::UnityEngine::Vector3> s)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "GetHAPITransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HAPI_TransformEuler, false>(nullptr, ___internal_method, p, r, s);
}
 ::HoudiniEngineUnity::HAPI_Transform ::HoudiniEngineUnity::HEU_HAPIUtility::GetHAPITransformQuatFromMatrix(ByRef<::UnityEngine::Matrix4x4> mat)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "GetHAPITransformQuatFromMatrix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Matrix4x4>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HAPI_Transform, false>(nullptr, ___internal_method, mat);
}
 ::UnityEngine::Matrix4x4 ::HoudiniEngineUnity::HEU_HAPIUtility::GetMatrix4x4(ByRef<::UnityEngine::Vector3> p, ByRef<::UnityEngine::Vector3> r, ByRef<::UnityEngine::Vector3> s)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "GetMatrix4x4",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4, false>(nullptr, ___internal_method, p, r, s);
}
 bool ::HoudiniEngineUnity::HEU_HAPIUtility::IsSameTransform(ByRef<::UnityEngine::Matrix4x4> transformMatrix, ByRef<::UnityEngine::Vector3> p, ByRef<::UnityEngine::Vector3> r, ByRef<::UnityEngine::Vector3> s)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "IsSameTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Matrix4x4>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, transformMatrix, p, r, s);
}
/// @param t: float_t (default: 0.00001)
 bool ::HoudiniEngineUnity::HEU_HAPIUtility::IsEqualTol(float_t a, float_t b, float_t t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "IsEqualTol",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, a, b, t);
}
 bool ::HoudiniEngineUnity::HEU_HAPIUtility::IsTransformEqual(ByRef<::HoudiniEngineUnity::HAPI_Transform> transA, ByRef<::HoudiniEngineUnity::HAPI_Transform> transB)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "IsTransformEqual",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HAPI_Transform>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HAPI_Transform>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, transA, transB);
}
 bool ::HoudiniEngineUnity::HEU_HAPIUtility::IsViewportEqual(ByRef<::HoudiniEngineUnity::HAPI_Viewport> viewA, ByRef<::HoudiniEngineUnity::HAPI_Viewport> viewB)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "IsViewportEqual",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HAPI_Viewport>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HAPI_Viewport>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, viewA, viewB);
}
 bool ::HoudiniEngineUnity::HEU_HAPIUtility::IsSessionSyncEqual(ByRef<::HoudiniEngineUnity::HAPI_SessionSyncInfo> syncA, ByRef<::HoudiniEngineUnity::HAPI_SessionSyncInfo> syncB)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "IsSessionSyncEqual",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HAPI_SessionSyncInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HAPI_SessionSyncInfo>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, syncA, syncB);
}
 bool ::HoudiniEngineUnity::HEU_HAPIUtility::DoesGeoPartHaveAttribute(::HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID, ::StringW attrName, ::HoudiniEngineUnity::HAPI_AttributeOwner owner, ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo> attributeInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "DoesGeoPartHaveAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HAPI_AttributeOwner>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, session, geoID, partID, attrName, owner, attributeInfo);
}
 void ::HoudiniEngineUnity::HEU_HAPIUtility::SetAnimationCurveTangentModes(::UnityEngine::AnimationCurve animCurve, ::System::Collections::Generic::List_1<int32_t> tangentValues)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "SetAnimationCurveTangentModes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AnimationCurve>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, animCurve, tangentValues);
}
 bool ::HoudiniEngineUnity::HEU_HAPIUtility::IsSupportedPolygonType(::HoudiniEngineUnity::HAPI_PartType partType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "IsSupportedPolygonType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HAPI_PartType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, partType);
}
 int32_t ::HoudiniEngineUnity::HEU_HAPIUtility::GetParentNodeID(::HoudiniEngineUnity::HEU_SessionBase session, int32_t nodeID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "GetParentNodeID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, session, nodeID);
}
 bool ::HoudiniEngineUnity::HEU_HAPIUtility::GetObjectInfos(::HoudiniEngineUnity::HEU_SessionBase session, int32_t assetID, ByRef<::HoudiniEngineUnity::HAPI_NodeInfo> nodeInfo, ByRef<::ArrayW<::HoudiniEngineUnity::HAPI_ObjectInfo>> objectInfos, ByRef<::ArrayW<::HoudiniEngineUnity::HAPI_Transform>> objectTransforms)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HAPIUtility>::get(),
                            "GetObjectInfos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HAPI_NodeInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::HoudiniEngineUnity::HAPI_ObjectInfo>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::HoudiniEngineUnity::HAPI_Transform>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, session, assetID, nodeInfo, objectInfos, objectTransforms);
}
} // end anonymous namespace
