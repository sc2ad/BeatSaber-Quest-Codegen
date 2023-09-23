#pragma once
#include "HoudiniEngineUnity/zzzz__HEU_InputUtility_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_HoudiniAsset_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_InputObjectInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_InputInterface_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_InputNode_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_InputHDAInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_SessionBase_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: HoudiniEngineUnity::HEU_InputUtility.GetHighestPriority
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&HoudiniEngineUnity::HEU_InputUtility::GetHighestPriority)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x205d0b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputUtility>::get(),
                            "GetHighestPriority",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_InputUtility.RegisterInputInterface
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(HoudiniEngineUnity::HEU_InputInterface)>(&HoudiniEngineUnity::HEU_InputUtility::RegisterInputInterface)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x205d180;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputUtility>::get(),
                            "RegisterInputInterface",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_InputInterface>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_InputUtility.UnregisterInputInterface
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(HoudiniEngineUnity::HEU_InputInterface)>(&HoudiniEngineUnity::HEU_InputUtility::UnregisterInputInterface)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x205d574;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputUtility>::get(),
                            "UnregisterInputInterface",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_InputInterface>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_InputUtility.GetInputInterfaceByType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::HEU_InputInterface (*)(System::Type)>(&HoudiniEngineUnity::HEU_InputUtility::GetInputInterfaceByType)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x205d41c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputUtility>::get(),
                            "GetInputInterfaceByType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_InputUtility.GetInputInterface
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::HEU_InputInterface (*)(UnityEngine::GameObject)>(&HoudiniEngineUnity::HEU_InputUtility::GetInputInterface)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x205d5f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputUtility>::get(),
                            "GetInputInterface",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_InputUtility.GetInputInterface
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::HEU_InputInterface (*)(HoudiniEngineUnity::HEU_InputObjectInfo)>(&HoudiniEngineUnity::HEU_InputUtility::GetInputInterface)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x205d70c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputUtility>::get(),
                            "GetInputInterface",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_InputObjectInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_InputUtility.CreateInputNodeWithMultiObjects
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(HoudiniEngineUnity::HEU_SessionBase, int32_t, ByRef<int32_t>, ByRef<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_InputObjectInfo>>, ByRef<System::Collections::Generic::List_1<int32_t>>, HoudiniEngineUnity::HEU_InputNode)>(&HoudiniEngineUnity::HEU_InputUtility::CreateInputNodeWithMultiObjects)> {
  constexpr static std::size_t size = 0x5d0;
  constexpr static std::size_t addrs = 0x205d7ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputUtility>::get(),
                            "CreateInputNodeWithMultiObjects",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_InputObjectInfo>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Collections::Generic::List_1<int32_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_InputNode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_InputUtility.CreateInputNodeWithMultiAssets
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(HoudiniEngineUnity::HEU_SessionBase, HoudiniEngineUnity::HEU_HoudiniAsset, ByRef<int32_t>, ByRef<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_InputHDAInfo>>, bool, int32_t)>(&HoudiniEngineUnity::HEU_InputUtility::CreateInputNodeWithMultiAssets)> {
  constexpr static std::size_t size = 0x3c4;
  constexpr static std::size_t addrs = 0x205e0e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputUtility>::get(),
                            "CreateInputNodeWithMultiAssets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_HoudiniAsset>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_InputHDAInfo>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_InputUtility.UploadInputObjectTransform
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(HoudiniEngineUnity::HEU_SessionBase, HoudiniEngineUnity::HEU_InputObjectInfo, int32_t, bool)>(&HoudiniEngineUnity::HEU_InputUtility::UploadInputObjectTransform)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x205ddbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputUtility>::get(),
                            "UploadInputObjectTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_InputObjectInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
 void HoudiniEngineUnity::HEU_InputUtility::__set__inputInterfaces(System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_InputInterface> value)  {
::cordl_internals::setStaticField<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_InputInterface>, "_inputInterfaces", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputUtility>::get>(std::forward<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_InputInterface>>(value));
}
 System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_InputInterface> HoudiniEngineUnity::HEU_InputUtility::__get__inputInterfaces()  {
return ::cordl_internals::getStaticField<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_InputInterface>, "_inputInterfaces", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputUtility>::get>();
}
 int32_t HoudiniEngineUnity::HEU_InputUtility::GetHighestPriority()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputUtility>::get(),
                            "GetHighestPriority",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
 void HoudiniEngineUnity::HEU_InputUtility::RegisterInputInterface(HoudiniEngineUnity::HEU_InputInterface inputInterface)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputUtility>::get(),
                            "RegisterInputInterface",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_InputInterface>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, inputInterface);
}
 void HoudiniEngineUnity::HEU_InputUtility::UnregisterInputInterface(HoudiniEngineUnity::HEU_InputInterface inputInterface)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputUtility>::get(),
                            "UnregisterInputInterface",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_InputInterface>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, inputInterface);
}
 HoudiniEngineUnity::HEU_InputInterface HoudiniEngineUnity::HEU_InputUtility::GetInputInterfaceByType(System::Type type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputUtility>::get(),
                            "GetInputInterfaceByType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<HoudiniEngineUnity::HEU_InputInterface, false>(nullptr, ___internal_method, type);
}
 HoudiniEngineUnity::HEU_InputInterface HoudiniEngineUnity::HEU_InputUtility::GetInputInterface(UnityEngine::GameObject inputObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputUtility>::get(),
                            "GetInputInterface",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<HoudiniEngineUnity::HEU_InputInterface, false>(nullptr, ___internal_method, inputObject);
}
 HoudiniEngineUnity::HEU_InputInterface HoudiniEngineUnity::HEU_InputUtility::GetInputInterface(HoudiniEngineUnity::HEU_InputObjectInfo inputObjectInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputUtility>::get(),
                            "GetInputInterface",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_InputObjectInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<HoudiniEngineUnity::HEU_InputInterface, false>(nullptr, ___internal_method, inputObjectInfo);
}
 bool HoudiniEngineUnity::HEU_InputUtility::CreateInputNodeWithMultiObjects(HoudiniEngineUnity::HEU_SessionBase session, int32_t assetID, ByRef<int32_t> connectMergeID, ByRef<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_InputObjectInfo>> inputObjects, ByRef<System::Collections::Generic::List_1<int32_t>> inputObjectsConnectedAssetIDs, HoudiniEngineUnity::HEU_InputNode inputNode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputUtility>::get(),
                            "CreateInputNodeWithMultiObjects",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_InputObjectInfo>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Collections::Generic::List_1<int32_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_InputNode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, session, assetID, connectMergeID, inputObjects, inputObjectsConnectedAssetIDs, inputNode);
}
/// @param mergeParentID: int32_t (default: -1)
 bool HoudiniEngineUnity::HEU_InputUtility::CreateInputNodeWithMultiAssets(HoudiniEngineUnity::HEU_SessionBase session, HoudiniEngineUnity::HEU_HoudiniAsset parentAsset, ByRef<int32_t> connectMergeID, ByRef<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_InputHDAInfo>> inputAssetInfos, bool bKeepWorldTransform, int32_t mergeParentID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputUtility>::get(),
                            "CreateInputNodeWithMultiAssets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_HoudiniAsset>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_InputHDAInfo>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, session, parentAsset, connectMergeID, inputAssetInfos, bKeepWorldTransform, mergeParentID);
}
 bool HoudiniEngineUnity::HEU_InputUtility::UploadInputObjectTransform(HoudiniEngineUnity::HEU_SessionBase session, HoudiniEngineUnity::HEU_InputObjectInfo inputObject, int32_t inputNodeID, bool bKeepWorldTransform)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputUtility>::get(),
                            "UploadInputObjectTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_InputObjectInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, session, inputObject, inputNodeID, bKeepWorldTransform);
}
