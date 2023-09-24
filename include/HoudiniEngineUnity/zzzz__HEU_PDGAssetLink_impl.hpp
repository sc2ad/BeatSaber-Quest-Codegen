#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_PDGAssetLink_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_WorkItemTally_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_PDGAssetLink_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_TOPWorkResult_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_TOPNodeData_def.hpp"
#include "HoudiniEngineUnity/zzzz__TOPNodeTags_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_PDG_WorkitemInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_SessionBase_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_ReloadEventData_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_HoudiniAsset_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_TOPNetworkData_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_PDG_WorkitemResultInfo_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_NodeInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_CookedEventData_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_PDGAssetLink__LinkState::HoudiniEngineUnity__HEU_PDGAssetLink__LinkState(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void HoudiniEngineUnity::HoudiniEngineUnity__HEU_PDGAssetLink__LinkState::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HoudiniEngineUnity__HEU_PDGAssetLink__LinkState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_PDGAssetLink__LinkState  HoudiniEngineUnity::HoudiniEngineUnity__HEU_PDGAssetLink__LinkState::INACTIVE{0};
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_PDGAssetLink__LinkState  HoudiniEngineUnity::HoudiniEngineUnity__HEU_PDGAssetLink__LinkState::LINKING{1};
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_PDGAssetLink__LinkState  HoudiniEngineUnity::HoudiniEngineUnity__HEU_PDGAssetLink__LinkState::LINKED{2};
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_PDGAssetLink__LinkState  HoudiniEngineUnity::HoudiniEngineUnity__HEU_PDGAssetLink__LinkState::ERROR_NOT_LINKED{3};
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__HEU_PDGAssetLink__UpdateUIDelegate._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HoudiniEngineUnity__HEU_PDGAssetLink__UpdateUIDelegate::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&HoudiniEngineUnity::HoudiniEngineUnity__HEU_PDGAssetLink__UpdateUIDelegate::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x202afb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_PDGAssetLink__UpdateUIDelegate>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__HEU_PDGAssetLink__UpdateUIDelegate.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HoudiniEngineUnity__HEU_PDGAssetLink__UpdateUIDelegate::*)()>(&HoudiniEngineUnity::HoudiniEngineUnity__HEU_PDGAssetLink__UpdateUIDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x202b074;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HoudiniEngineUnity::HoudiniEngineUnity__HEU_PDGAssetLink__UpdateUIDelegate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_PDGAssetLink__UpdateUIDelegate>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__HEU_PDGAssetLink__UpdateUIDelegate.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (HoudiniEngineUnity::HoudiniEngineUnity__HEU_PDGAssetLink__UpdateUIDelegate::*)(System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&HoudiniEngineUnity::HoudiniEngineUnity__HEU_PDGAssetLink__UpdateUIDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x202b088;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HoudiniEngineUnity::HoudiniEngineUnity__HEU_PDGAssetLink__UpdateUIDelegate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_PDGAssetLink__UpdateUIDelegate>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__HEU_PDGAssetLink__UpdateUIDelegate.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HoudiniEngineUnity__HEU_PDGAssetLink__UpdateUIDelegate::*)(System::IAsyncResult)>(&HoudiniEngineUnity::HoudiniEngineUnity__HEU_PDGAssetLink__UpdateUIDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x202b0a8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HoudiniEngineUnity::HoudiniEngineUnity__HEU_PDGAssetLink__UpdateUIDelegate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_PDGAssetLink__UpdateUIDelegate>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
 HoudiniEngineUnity::HoudiniEngineUnity__HEU_PDGAssetLink__UpdateUIDelegate HoudiniEngineUnity::HoudiniEngineUnity__HEU_PDGAssetLink__UpdateUIDelegate::New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
HoudiniEngineUnity::HoudiniEngineUnity__HEU_PDGAssetLink__UpdateUIDelegate o{THROW_UNLESS(::il2cpp_utils::New<HoudiniEngineUnity::HoudiniEngineUnity__HEU_PDGAssetLink__UpdateUIDelegate>(object, method))};
return o;
}
 void HoudiniEngineUnity::HoudiniEngineUnity__HEU_PDGAssetLink__UpdateUIDelegate::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_PDGAssetLink__UpdateUIDelegate>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void HoudiniEngineUnity::HoudiniEngineUnity__HEU_PDGAssetLink__UpdateUIDelegate::Invoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_PDGAssetLink__UpdateUIDelegate>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::IAsyncResult HoudiniEngineUnity::HoudiniEngineUnity__HEU_PDGAssetLink__UpdateUIDelegate::BeginInvoke(System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_PDGAssetLink__UpdateUIDelegate>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, callback, object);
}
 void HoudiniEngineUnity::HoudiniEngineUnity__HEU_PDGAssetLink__UpdateUIDelegate::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_PDGAssetLink__UpdateUIDelegate>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: HoudiniEngineUnity::HEU_PDGAssetLink.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_PDGAssetLink::*)()>(&HoudiniEngineUnity::HEU_PDGAssetLink::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2027c38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_PDGAssetLink>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_PDGAssetLink.OnBeforeSerialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_PDGAssetLink::*)()>(&HoudiniEngineUnity::HEU_PDGAssetLink::OnBeforeSerialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2027c40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_PDGAssetLink>::get(),
                            "OnBeforeSerialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_PDGAssetLink.OnAfterDeserialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_PDGAssetLink::*)()>(&HoudiniEngineUnity::HEU_PDGAssetLink::OnAfterDeserialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2027c44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_PDGAssetLink>::get(),
                            "OnAfterDeserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_PDGAssetLink.HandleInitialLoad
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_PDGAssetLink::*)()>(&HoudiniEngineUnity::HEU_PDGAssetLink::HandleInitialLoad)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2027c3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_PDGAssetLink>::get(),
                            "HandleInitialLoad",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_PDGAssetLink.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_PDGAssetLink::*)()>(&HoudiniEngineUnity::HEU_PDGAssetLink::OnDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2027c48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_PDGAssetLink>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_PDGAssetLink.Setup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_PDGAssetLink::*)(HoudiniEngineUnity::HEU_HoudiniAsset)>(&HoudiniEngineUnity::HEU_PDGAssetLink::Setup)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x2027ccc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_PDGAssetLink>::get(),
                            "Setup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_HoudiniAsset>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_PDGAssetLink.NotifyAssetCooked
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_PDGAssetLink::*)(HoudiniEngineUnity::HEU_HoudiniAsset, bool, System::Collections::Generic::List_1<UnityEngine::GameObject>)>(&HoudiniEngineUnity::HEU_PDGAssetLink::NotifyAssetCooked)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2028228;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_PDGAssetLink>::get(),
                            "NotifyAssetCooked",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_HoudiniAsset>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::GameObject>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_PDGAssetLink.NotifyAssetCooked
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_PDGAssetLink::*)(HoudiniEngineUnity::HEU_CookedEventData)>(&HoudiniEngineUnity::HEU_PDGAssetLink::NotifyAssetCooked)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x202841c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_PDGAssetLink>::get(),
                            "NotifyAssetCooked",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_CookedEventData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_PDGAssetLink.NotifyAssetCooked
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_PDGAssetLink::*)(HoudiniEngineUnity::HEU_ReloadEventData)>(&HoudiniEngineUnity::HEU_PDGAssetLink::NotifyAssetCooked)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x202842c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_PDGAssetLink>::get(),
                            "NotifyAssetCooked",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_ReloadEventData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_PDGAssetLink.Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_PDGAssetLink::*)()>(&HoudiniEngineUnity::HEU_PDGAssetLink::Reset)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2027df8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_PDGAssetLink>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_PDGAssetLink.Refresh
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_PDGAssetLink::*)()>(&HoudiniEngineUnity::HEU_PDGAssetLink::Refresh)> {
  constexpr static std::size_t size = 0x42c;
  constexpr static std::size_t addrs = 0x2027dfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_PDGAssetLink>::get(),
                            "Refresh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_PDGAssetLink.PopulateFromHDA
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_PDGAssetLink::*)()>(&HoudiniEngineUnity::HEU_PDGAssetLink::PopulateFromHDA)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x20282b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_PDGAssetLink>::get(),
                            "PopulateFromHDA",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_PDGAssetLink.PopulateTOPNetworks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_PDGAssetLink::*)()>(&HoudiniEngineUnity::HEU_PDGAssetLink::PopulateTOPNetworks)> {
  constexpr static std::size_t size = 0x4cc;
  constexpr static std::size_t addrs = 0x202871c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_PDGAssetLink>::get(),
                            "PopulateTOPNetworks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_PDGAssetLink.PopulateTOPNodes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(HoudiniEngineUnity::HEU_SessionBase, HoudiniEngineUnity::HEU_TOPNetworkData, ::ArrayW<int32_t>, bool)>(&HoudiniEngineUnity::HEU_PDGAssetLink::PopulateTOPNodes)> {
  constexpr static std::size_t size = 0x3e8;
  constexpr static std::size_t addrs = 0x20291d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_PDGAssetLink>::get(),
                            "PopulateTOPNodes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_TOPNetworkData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_PDGAssetLink.SelectTOPNetwork
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_PDGAssetLink::*)(int32_t)>(&HoudiniEngineUnity::HEU_PDGAssetLink::SelectTOPNetwork)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2029888;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_PDGAssetLink>::get(),
                            "SelectTOPNetwork",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_PDGAssetLink.SelectTOPNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_PDGAssetLink::*)(HoudiniEngineUnity::HEU_TOPNetworkData, int32_t)>(&HoudiniEngineUnity::HEU_PDGAssetLink::SelectTOPNode)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x20298e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_PDGAssetLink>::get(),
                            "SelectTOPNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_TOPNetworkData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_PDGAssetLink.GetSelectedTOPNetwork
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::HEU_TOPNetworkData (HoudiniEngineUnity::HEU_PDGAssetLink::*)()>(&HoudiniEngineUnity::HEU_PDGAssetLink::GetSelectedTOPNetwork)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2029944;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_PDGAssetLink>::get(),
                            "GetSelectedTOPNetwork",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_PDGAssetLink.GetSelectedTOPNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::HEU_TOPNodeData (HoudiniEngineUnity::HEU_PDGAssetLink::*)()>(&HoudiniEngineUnity::HEU_PDGAssetLink::GetSelectedTOPNode)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x20299d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_PDGAssetLink>::get(),
                            "GetSelectedTOPNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_PDGAssetLink.GetTOPNetwork
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::HEU_TOPNetworkData (HoudiniEngineUnity::HEU_PDGAssetLink::*)(int32_t)>(&HoudiniEngineUnity::HEU_PDGAssetLink::GetTOPNetwork)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x202994c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_PDGAssetLink>::get(),
                            "GetTOPNetwork",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_PDGAssetLink.GetTOPNetworkByName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::HEU_TOPNetworkData (*)(::StringW, System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_TOPNetworkData>)>(&HoudiniEngineUnity::HEU_PDGAssetLink::GetTOPNetworkByName)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x202902c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_PDGAssetLink>::get(),
                            "GetTOPNetworkByName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_TOPNetworkData>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_PDGAssetLink.GetTOPNodeByName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::HEU_TOPNodeData (*)(::StringW, System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_TOPNodeData>)>(&HoudiniEngineUnity::HEU_PDGAssetLink::GetTOPNodeByName)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x20295b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_PDGAssetLink>::get(),
                            "GetTOPNodeByName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_TOPNodeData>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_PDGAssetLink.ClearAllTOPData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_PDGAssetLink::*)()>(&HoudiniEngineUnity::HEU_PDGAssetLink::ClearAllTOPData)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x202843c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_PDGAssetLink>::get(),
                            "ClearAllTOPData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_PDGAssetLink.ClearTOPNetworkWorkItemResults
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(HoudiniEngineUnity::HEU_TOPNetworkData)>(&HoudiniEngineUnity::HEU_PDGAssetLink::ClearTOPNetworkWorkItemResults)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x2029a60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_PDGAssetLink>::get(),
                            "ClearTOPNetworkWorkItemResults",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_TOPNetworkData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_PDGAssetLink.ClearTOPNodeWorkItemResults
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(HoudiniEngineUnity::HEU_TOPNodeData)>(&HoudiniEngineUnity::HEU_PDGAssetLink::ClearTOPNodeWorkItemResults)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x2029768;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_PDGAssetLink>::get(),
                            "ClearTOPNodeWorkItemResults",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_TOPNodeData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_PDGAssetLink.ClearWorkItemResultByID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(HoudiniEngineUnity::HEU_TOPNodeData, int32_t)>(&HoudiniEngineUnity::HEU_PDGAssetLink::ClearWorkItemResultByID)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2029d88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_PDGAssetLink>::get(),
                            "ClearWorkItemResultByID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_TOPNodeData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_PDGAssetLink.ClearWorkItemResult
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(HoudiniEngineUnity::HEU_TOPNodeData, HoudiniEngineUnity::HEU_TOPWorkResult)>(&HoudiniEngineUnity::HEU_PDGAssetLink::ClearWorkItemResult)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2029f00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_PDGAssetLink>::get(),
                            "ClearWorkItemResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_TOPNodeData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_TOPWorkResult>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_PDGAssetLink.UpdateTOPNodeResultsVisibility
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_PDGAssetLink::*)(HoudiniEngineUnity::HEU_TOPNodeData)>(&HoudiniEngineUnity::HEU_PDGAssetLink::UpdateTOPNodeResultsVisibility)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2029f74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_PDGAssetLink>::get(),
                            "UpdateTOPNodeResultsVisibility",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_TOPNodeData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_PDGAssetLink.GetWorkResultByID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::HEU_TOPWorkResult (*)(HoudiniEngineUnity::HEU_TOPNodeData, int32_t)>(&HoudiniEngineUnity::HEU_PDGAssetLink::GetWorkResultByID)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x2029da4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_PDGAssetLink>::get(),
                            "GetWorkResultByID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_TOPNodeData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_PDGAssetLink.DestroyWorkItemResultData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(HoudiniEngineUnity::HEU_TOPNodeData, HoudiniEngineUnity::HEU_TOPWorkResult)>(&HoudiniEngineUnity::HEU_PDGAssetLink::DestroyWorkItemResultData)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x2029ba0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_PDGAssetLink>::get(),
                            "DestroyWorkItemResultData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_TOPNodeData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_TOPWorkResult>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_PDGAssetLink.DirtyTOPNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_PDGAssetLink::*)(HoudiniEngineUnity::HEU_TOPNodeData)>(&HoudiniEngineUnity::HEU_PDGAssetLink::DirtyTOPNode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x202a000;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_PDGAssetLink>::get(),
                            "DirtyTOPNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_TOPNodeData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_PDGAssetLink.CookTOPNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_PDGAssetLink::*)(HoudiniEngineUnity::HEU_TOPNodeData)>(&HoudiniEngineUnity::HEU_PDGAssetLink::CookTOPNode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x202a028;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_PDGAssetLink>::get(),
                            "CookTOPNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_TOPNodeData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_PDGAssetLink.DirtyAll
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_PDGAssetLink::*)()>(&HoudiniEngineUnity::HEU_PDGAssetLink::DirtyAll)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x202a050;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_PDGAssetLink>::get(),
                            "DirtyAll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_PDGAssetLink.CookOutput
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_PDGAssetLink::*)()>(&HoudiniEngineUnity::HEU_PDGAssetLink::CookOutput)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2028254;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_PDGAssetLink>::get(),
                            "CookOutput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_PDGAssetLink.PauseCook
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_PDGAssetLink::*)()>(&HoudiniEngineUnity::HEU_PDGAssetLink::PauseCook)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x202a130;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_PDGAssetLink>::get(),
                            "PauseCook",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_PDGAssetLink.CancelCook
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_PDGAssetLink::*)()>(&HoudiniEngineUnity::HEU_PDGAssetLink::CancelCook)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x202a194;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_PDGAssetLink>::get(),
                            "CancelCook",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_PDGAssetLink.GetHAPISession
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::HEU_SessionBase (HoudiniEngineUnity::HEU_PDGAssetLink::*)()>(&HoudiniEngineUnity::HEU_PDGAssetLink::GetHAPISession)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2028be8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_PDGAssetLink>::get(),
                            "GetHAPISession",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_PDGAssetLink.LoadResults
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_PDGAssetLink::*)(HoudiniEngineUnity::HEU_SessionBase, HoudiniEngineUnity::HEU_TOPNodeData, HoudiniEngineUnity::HAPI_PDG_WorkitemInfo, ::ArrayW<HoudiniEngineUnity::HAPI_PDG_WorkitemResultInfo>, int32_t)>(&HoudiniEngineUnity::HEU_PDGAssetLink::LoadResults)> {
  constexpr static std::size_t size = 0x5ec;
  constexpr static std::size_t addrs = 0x202a1f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_PDGAssetLink>::get(),
                            "LoadResults",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_TOPNodeData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HAPI_PDG_WorkitemInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<HoudiniEngineUnity::HAPI_PDG_WorkitemResultInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_PDGAssetLink.GetLoadRootTransform
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Transform (HoudiniEngineUnity::HEU_PDGAssetLink::*)()>(&HoudiniEngineUnity::HEU_PDGAssetLink::GetLoadRootTransform)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x202a868;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_PDGAssetLink>::get(),
                            "GetLoadRootTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_PDGAssetLink.GetTOPNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::HEU_TOPNodeData (HoudiniEngineUnity::HEU_PDGAssetLink::*)(int32_t)>(&HoudiniEngineUnity::HEU_PDGAssetLink::GetTOPNode)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x202a94c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_PDGAssetLink>::get(),
                            "GetTOPNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_PDGAssetLink.RepaintUI
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_PDGAssetLink::*)()>(&HoudiniEngineUnity::HEU_PDGAssetLink::RepaintUI)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2028700;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_PDGAssetLink>::get(),
                            "RepaintUI",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_PDGAssetLink.UpdateWorkItemTally
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_PDGAssetLink::*)()>(&HoudiniEngineUnity::HEU_PDGAssetLink::UpdateWorkItemTally)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x202aabc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_PDGAssetLink>::get(),
                            "UpdateWorkItemTally",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_PDGAssetLink.ResetTOPNetworkWorkItemTally
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_PDGAssetLink::*)(HoudiniEngineUnity::HEU_TOPNetworkData)>(&HoudiniEngineUnity::HEU_PDGAssetLink::ResetTOPNetworkWorkItemTally)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x202a084;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_PDGAssetLink>::get(),
                            "ResetTOPNetworkWorkItemTally",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_TOPNetworkData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_PDGAssetLink.GetTOPNodeStatus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (HoudiniEngineUnity::HEU_PDGAssetLink::*)(HoudiniEngineUnity::HEU_TOPNodeData)>(&HoudiniEngineUnity::HEU_PDGAssetLink::GetTOPNodeStatus)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x202ad94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_PDGAssetLink>::get(),
                            "GetTOPNodeStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_TOPNodeData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_PDGAssetLink.ParseHEngineData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(HoudiniEngineUnity::HEU_SessionBase, int32_t, ByRef<HoudiniEngineUnity::HAPI_NodeInfo>, ByRef<HoudiniEngineUnity::TOPNodeTags>)>(&HoudiniEngineUnity::HEU_PDGAssetLink::ParseHEngineData)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x2028e60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_PDGAssetLink>::get(),
                            "ParseHEngineData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<HoudiniEngineUnity::HAPI_NodeInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<HoudiniEngineUnity::TOPNodeTags>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_PDGAssetLink.get_AssetName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (HoudiniEngineUnity::HEU_PDGAssetLink::*)()>(&HoudiniEngineUnity::HEU_PDGAssetLink::get_AssetName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x202aeb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_PDGAssetLink>::get(),
                            "get_AssetName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_PDGAssetLink.get_SelectedTOPNetwork
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (HoudiniEngineUnity::HEU_PDGAssetLink::*)()>(&HoudiniEngineUnity::HEU_PDGAssetLink::get_SelectedTOPNetwork)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x202aec0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_PDGAssetLink>::get(),
                            "get_SelectedTOPNetwork",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_PDGAssetLink.get_AssetLinkState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::HoudiniEngineUnity__HEU_PDGAssetLink__LinkState (HoudiniEngineUnity::HEU_PDGAssetLink::*)()>(&HoudiniEngineUnity::HEU_PDGAssetLink::get_AssetLinkState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x202aec8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_PDGAssetLink>::get(),
                            "get_AssetLinkState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_PDGAssetLink._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_PDGAssetLink::*)()>(&HoudiniEngineUnity::HEU_PDGAssetLink::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x202aed0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_PDGAssetLink>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to UnityEngine::ISerializationCallbackReceiver
constexpr  HoudiniEngineUnity::HEU_PDGAssetLink::operator UnityEngine::ISerializationCallbackReceiver() const noexcept {
return UnityEngine::ISerializationCallbackReceiver(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_PDGAssetLink::__set__assetPath(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW HoudiniEngineUnity::HEU_PDGAssetLink::__get__assetPath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_PDGAssetLink::__set__assetGO(UnityEngine::GameObject value)  {
::cordl_internals::setInstanceField<UnityEngine::GameObject, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::GameObject>(value));
}
constexpr UnityEngine::GameObject HoudiniEngineUnity::HEU_PDGAssetLink::__get__assetGO() const {
return ::cordl_internals::getInstanceField<UnityEngine::GameObject, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_PDGAssetLink::__set__assetName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW HoudiniEngineUnity::HEU_PDGAssetLink::__get__assetName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_PDGAssetLink::__set__assetID(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HEU_PDGAssetLink::__get__assetID() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_PDGAssetLink::__set__heu(HoudiniEngineUnity::HEU_HoudiniAsset value)  {
::cordl_internals::setInstanceField<HoudiniEngineUnity::HEU_HoudiniAsset, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<HoudiniEngineUnity::HEU_HoudiniAsset>(value));
}
constexpr HoudiniEngineUnity::HEU_HoudiniAsset HoudiniEngineUnity::HEU_PDGAssetLink::__get__heu() const {
return ::cordl_internals::getInstanceField<HoudiniEngineUnity::HEU_HoudiniAsset, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_PDGAssetLink::__set__topNetworks(System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_TOPNetworkData> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_TOPNetworkData>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_TOPNetworkData>>(value));
}
constexpr System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_TOPNetworkData> HoudiniEngineUnity::HEU_PDGAssetLink::__get__topNetworks() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_TOPNetworkData>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_PDGAssetLink::__set__topNetworkNames(::ArrayW<::StringW> value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::StringW>>(value));
}
constexpr ::ArrayW<::StringW> HoudiniEngineUnity::HEU_PDGAssetLink::__get__topNetworkNames() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_PDGAssetLink::__set__selectedTOPNetwork(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HEU_PDGAssetLink::__get__selectedTOPNetwork() const {
return ::cordl_internals::getInstanceField<int32_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_PDGAssetLink::__set__linkState(HoudiniEngineUnity::HoudiniEngineUnity__HEU_PDGAssetLink__LinkState value)  {
::cordl_internals::setInstanceField<HoudiniEngineUnity::HoudiniEngineUnity__HEU_PDGAssetLink__LinkState, 0x54>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<HoudiniEngineUnity::HoudiniEngineUnity__HEU_PDGAssetLink__LinkState>(value));
}
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_PDGAssetLink__LinkState HoudiniEngineUnity::HEU_PDGAssetLink::__get__linkState() const {
return ::cordl_internals::getInstanceField<HoudiniEngineUnity::HoudiniEngineUnity__HEU_PDGAssetLink__LinkState, 0x54>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_PDGAssetLink::__set__autoCook(bool value)  {
::cordl_internals::setInstanceField<bool, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool HoudiniEngineUnity::HEU_PDGAssetLink::__get__autoCook() const {
return ::cordl_internals::getInstanceField<bool, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_PDGAssetLink::__set__useHEngineData(bool value)  {
::cordl_internals::setInstanceField<bool, 0x59>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool HoudiniEngineUnity::HEU_PDGAssetLink::__get__useHEngineData() const {
return ::cordl_internals::getInstanceField<bool, 0x59>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_PDGAssetLink::__set__repaintUIDelegate(HoudiniEngineUnity::HoudiniEngineUnity__HEU_PDGAssetLink__UpdateUIDelegate value)  {
::cordl_internals::setInstanceField<HoudiniEngineUnity::HoudiniEngineUnity__HEU_PDGAssetLink__UpdateUIDelegate, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<HoudiniEngineUnity::HoudiniEngineUnity__HEU_PDGAssetLink__UpdateUIDelegate>(value));
}
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_PDGAssetLink__UpdateUIDelegate HoudiniEngineUnity::HEU_PDGAssetLink::__get__repaintUIDelegate() const {
return ::cordl_internals::getInstanceField<HoudiniEngineUnity::HoudiniEngineUnity__HEU_PDGAssetLink__UpdateUIDelegate, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_PDGAssetLink::__set__numWorkItems(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HEU_PDGAssetLink::__get__numWorkItems() const {
return ::cordl_internals::getInstanceField<int32_t, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_PDGAssetLink::__set__workItemTally(HoudiniEngineUnity::HEU_WorkItemTally value)  {
::cordl_internals::setInstanceField<HoudiniEngineUnity::HEU_WorkItemTally, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<HoudiniEngineUnity::HEU_WorkItemTally>(value));
}
constexpr HoudiniEngineUnity::HEU_WorkItemTally HoudiniEngineUnity::HEU_PDGAssetLink::__get__workItemTally() const {
return ::cordl_internals::getInstanceField<HoudiniEngineUnity::HEU_WorkItemTally, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_PDGAssetLink::__set__loadRootGameObject(UnityEngine::GameObject value)  {
::cordl_internals::setInstanceField<UnityEngine::GameObject, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::GameObject>(value));
}
constexpr UnityEngine::GameObject HoudiniEngineUnity::HEU_PDGAssetLink::__get__loadRootGameObject() const {
return ::cordl_internals::getInstanceField<UnityEngine::GameObject, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_PDGAssetLink::__set__outputCachePathRoot(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW HoudiniEngineUnity::HEU_PDGAssetLink::__get__outputCachePathRoot() const {
return ::cordl_internals::getInstanceField<::StringW, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void HoudiniEngineUnity::HEU_PDGAssetLink::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_PDGAssetLink>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void HoudiniEngineUnity::HEU_PDGAssetLink::OnBeforeSerialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_PDGAssetLink>::get(),
                            "OnBeforeSerialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void HoudiniEngineUnity::HEU_PDGAssetLink::OnAfterDeserialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_PDGAssetLink>::get(),
                            "OnAfterDeserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void HoudiniEngineUnity::HEU_PDGAssetLink::HandleInitialLoad()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_PDGAssetLink>::get(),
                            "HandleInitialLoad",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void HoudiniEngineUnity::HEU_PDGAssetLink::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_PDGAssetLink>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void HoudiniEngineUnity::HEU_PDGAssetLink::Setup(HoudiniEngineUnity::HEU_HoudiniAsset hdaAsset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_PDGAssetLink>::get(),
                            "Setup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_HoudiniAsset>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, hdaAsset);
}
 void HoudiniEngineUnity::HEU_PDGAssetLink::NotifyAssetCooked(HoudiniEngineUnity::HEU_HoudiniAsset asset, bool bSuccess, System::Collections::Generic::List_1<UnityEngine::GameObject> generatedOutputs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_PDGAssetLink>::get(),
                            "NotifyAssetCooked",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_HoudiniAsset>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::GameObject>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, asset, bSuccess, generatedOutputs);
}
 void HoudiniEngineUnity::HEU_PDGAssetLink::NotifyAssetCooked(HoudiniEngineUnity::HEU_CookedEventData cookedEventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_PDGAssetLink>::get(),
                            "NotifyAssetCooked",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_CookedEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, cookedEventData);
}
 void HoudiniEngineUnity::HEU_PDGAssetLink::NotifyAssetCooked(HoudiniEngineUnity::HEU_ReloadEventData reloadEventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_PDGAssetLink>::get(),
                            "NotifyAssetCooked",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_ReloadEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reloadEventData);
}
 void HoudiniEngineUnity::HEU_PDGAssetLink::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_PDGAssetLink>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void HoudiniEngineUnity::HEU_PDGAssetLink::Refresh()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_PDGAssetLink>::get(),
                            "Refresh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void HoudiniEngineUnity::HEU_PDGAssetLink::PopulateFromHDA()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_PDGAssetLink>::get(),
                            "PopulateFromHDA",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool HoudiniEngineUnity::HEU_PDGAssetLink::PopulateTOPNetworks()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_PDGAssetLink>::get(),
                            "PopulateTOPNetworks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool HoudiniEngineUnity::HEU_PDGAssetLink::PopulateTOPNodes(HoudiniEngineUnity::HEU_SessionBase session, HoudiniEngineUnity::HEU_TOPNetworkData topNetwork, ::ArrayW<int32_t> topNodeIDs, bool useHEngineData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_PDGAssetLink>::get(),
                            "PopulateTOPNodes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_TOPNetworkData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, session, topNetwork, topNodeIDs, useHEngineData);
}
 void HoudiniEngineUnity::HEU_PDGAssetLink::SelectTOPNetwork(int32_t newIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_PDGAssetLink>::get(),
                            "SelectTOPNetwork",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, newIndex);
}
 void HoudiniEngineUnity::HEU_PDGAssetLink::SelectTOPNode(HoudiniEngineUnity::HEU_TOPNetworkData network, int32_t newIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_PDGAssetLink>::get(),
                            "SelectTOPNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_TOPNetworkData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, network, newIndex);
}
 HoudiniEngineUnity::HEU_TOPNetworkData HoudiniEngineUnity::HEU_PDGAssetLink::GetSelectedTOPNetwork()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_PDGAssetLink>::get(),
                            "GetSelectedTOPNetwork",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<HoudiniEngineUnity::HEU_TOPNetworkData, false>(const_cast<void*>(instance), ___internal_method);
}
 HoudiniEngineUnity::HEU_TOPNodeData HoudiniEngineUnity::HEU_PDGAssetLink::GetSelectedTOPNode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_PDGAssetLink>::get(),
                            "GetSelectedTOPNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<HoudiniEngineUnity::HEU_TOPNodeData, false>(const_cast<void*>(instance), ___internal_method);
}
 HoudiniEngineUnity::HEU_TOPNetworkData HoudiniEngineUnity::HEU_PDGAssetLink::GetTOPNetwork(int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_PDGAssetLink>::get(),
                            "GetTOPNetwork",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<HoudiniEngineUnity::HEU_TOPNetworkData, false>(const_cast<void*>(instance), ___internal_method, index);
}
 HoudiniEngineUnity::HEU_TOPNetworkData HoudiniEngineUnity::HEU_PDGAssetLink::GetTOPNetworkByName(::StringW name, System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_TOPNetworkData> topNetworks)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_PDGAssetLink>::get(),
                            "GetTOPNetworkByName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_TOPNetworkData>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<HoudiniEngineUnity::HEU_TOPNetworkData, false>(nullptr, ___internal_method, name, topNetworks);
}
 HoudiniEngineUnity::HEU_TOPNodeData HoudiniEngineUnity::HEU_PDGAssetLink::GetTOPNodeByName(::StringW name, System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_TOPNodeData> topNodes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_PDGAssetLink>::get(),
                            "GetTOPNodeByName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_TOPNodeData>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<HoudiniEngineUnity::HEU_TOPNodeData, false>(nullptr, ___internal_method, name, topNodes);
}
 void HoudiniEngineUnity::HEU_PDGAssetLink::ClearAllTOPData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_PDGAssetLink>::get(),
                            "ClearAllTOPData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void HoudiniEngineUnity::HEU_PDGAssetLink::ClearTOPNetworkWorkItemResults(HoudiniEngineUnity::HEU_TOPNetworkData topNetwork)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_PDGAssetLink>::get(),
                            "ClearTOPNetworkWorkItemResults",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_TOPNetworkData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, topNetwork);
}
 void HoudiniEngineUnity::HEU_PDGAssetLink::ClearTOPNodeWorkItemResults(HoudiniEngineUnity::HEU_TOPNodeData topNode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_PDGAssetLink>::get(),
                            "ClearTOPNodeWorkItemResults",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_TOPNodeData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, topNode);
}
 void HoudiniEngineUnity::HEU_PDGAssetLink::ClearWorkItemResultByID(HoudiniEngineUnity::HEU_TOPNodeData topNode, int32_t workItemID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_PDGAssetLink>::get(),
                            "ClearWorkItemResultByID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_TOPNodeData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, topNode, workItemID);
}
 void HoudiniEngineUnity::HEU_PDGAssetLink::ClearWorkItemResult(HoudiniEngineUnity::HEU_TOPNodeData topNode, HoudiniEngineUnity::HEU_TOPWorkResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_PDGAssetLink>::get(),
                            "ClearWorkItemResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_TOPNodeData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_TOPWorkResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, topNode, result);
}
 void HoudiniEngineUnity::HEU_PDGAssetLink::UpdateTOPNodeResultsVisibility(HoudiniEngineUnity::HEU_TOPNodeData topNode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_PDGAssetLink>::get(),
                            "UpdateTOPNodeResultsVisibility",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_TOPNodeData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, topNode);
}
 HoudiniEngineUnity::HEU_TOPWorkResult HoudiniEngineUnity::HEU_PDGAssetLink::GetWorkResultByID(HoudiniEngineUnity::HEU_TOPNodeData topNode, int32_t workItemID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_PDGAssetLink>::get(),
                            "GetWorkResultByID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_TOPNodeData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<HoudiniEngineUnity::HEU_TOPWorkResult, false>(nullptr, ___internal_method, topNode, workItemID);
}
 void HoudiniEngineUnity::HEU_PDGAssetLink::DestroyWorkItemResultData(HoudiniEngineUnity::HEU_TOPNodeData topNode, HoudiniEngineUnity::HEU_TOPWorkResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_PDGAssetLink>::get(),
                            "DestroyWorkItemResultData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_TOPNodeData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_TOPWorkResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, topNode, result);
}
 void HoudiniEngineUnity::HEU_PDGAssetLink::DirtyTOPNode(HoudiniEngineUnity::HEU_TOPNodeData topNode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_PDGAssetLink>::get(),
                            "DirtyTOPNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_TOPNodeData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, topNode);
}
 void HoudiniEngineUnity::HEU_PDGAssetLink::CookTOPNode(HoudiniEngineUnity::HEU_TOPNodeData topNode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_PDGAssetLink>::get(),
                            "CookTOPNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_TOPNodeData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, topNode);
}
 void HoudiniEngineUnity::HEU_PDGAssetLink::DirtyAll()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_PDGAssetLink>::get(),
                            "DirtyAll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void HoudiniEngineUnity::HEU_PDGAssetLink::CookOutput()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_PDGAssetLink>::get(),
                            "CookOutput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void HoudiniEngineUnity::HEU_PDGAssetLink::PauseCook()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_PDGAssetLink>::get(),
                            "PauseCook",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void HoudiniEngineUnity::HEU_PDGAssetLink::CancelCook()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_PDGAssetLink>::get(),
                            "CancelCook",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 HoudiniEngineUnity::HEU_SessionBase HoudiniEngineUnity::HEU_PDGAssetLink::GetHAPISession()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_PDGAssetLink>::get(),
                            "GetHAPISession",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<HoudiniEngineUnity::HEU_SessionBase, false>(const_cast<void*>(instance), ___internal_method);
}
 void HoudiniEngineUnity::HEU_PDGAssetLink::LoadResults(HoudiniEngineUnity::HEU_SessionBase session, HoudiniEngineUnity::HEU_TOPNodeData topNode, HoudiniEngineUnity::HAPI_PDG_WorkitemInfo workItemInfo, ::ArrayW<HoudiniEngineUnity::HAPI_PDG_WorkitemResultInfo> resultInfos, int32_t workItemID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_PDGAssetLink>::get(),
                            "LoadResults",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_TOPNodeData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HAPI_PDG_WorkitemInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<HoudiniEngineUnity::HAPI_PDG_WorkitemResultInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, session, topNode, workItemInfo, resultInfos, workItemID);
}
 UnityEngine::Transform HoudiniEngineUnity::HEU_PDGAssetLink::GetLoadRootTransform()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_PDGAssetLink>::get(),
                            "GetLoadRootTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Transform, false>(const_cast<void*>(instance), ___internal_method);
}
 HoudiniEngineUnity::HEU_TOPNodeData HoudiniEngineUnity::HEU_PDGAssetLink::GetTOPNode(int32_t nodeID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_PDGAssetLink>::get(),
                            "GetTOPNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<HoudiniEngineUnity::HEU_TOPNodeData, false>(const_cast<void*>(instance), ___internal_method, nodeID);
}
 void HoudiniEngineUnity::HEU_PDGAssetLink::RepaintUI()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_PDGAssetLink>::get(),
                            "RepaintUI",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void HoudiniEngineUnity::HEU_PDGAssetLink::UpdateWorkItemTally()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_PDGAssetLink>::get(),
                            "UpdateWorkItemTally",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void HoudiniEngineUnity::HEU_PDGAssetLink::ResetTOPNetworkWorkItemTally(HoudiniEngineUnity::HEU_TOPNetworkData topNetwork)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_PDGAssetLink>::get(),
                            "ResetTOPNetworkWorkItemTally",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_TOPNetworkData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, topNetwork);
}
 ::StringW HoudiniEngineUnity::HEU_PDGAssetLink::GetTOPNodeStatus(HoudiniEngineUnity::HEU_TOPNodeData topNode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_PDGAssetLink>::get(),
                            "GetTOPNodeStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_TOPNodeData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, topNode);
}
 void HoudiniEngineUnity::HEU_PDGAssetLink::ParseHEngineData(HoudiniEngineUnity::HEU_SessionBase session, int32_t topNodeID, ByRef<HoudiniEngineUnity::HAPI_NodeInfo> nodeInfo, ByRef<HoudiniEngineUnity::TOPNodeTags> nodeTags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_PDGAssetLink>::get(),
                            "ParseHEngineData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<HoudiniEngineUnity::HAPI_NodeInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<HoudiniEngineUnity::TOPNodeTags>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, session, topNodeID, nodeInfo, nodeTags);
}
 ::StringW HoudiniEngineUnity::HEU_PDGAssetLink::get_AssetName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_PDGAssetLink>::get(),
                            "get_AssetName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t HoudiniEngineUnity::HEU_PDGAssetLink::get_SelectedTOPNetwork()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_PDGAssetLink>::get(),
                            "get_SelectedTOPNetwork",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 HoudiniEngineUnity::HoudiniEngineUnity__HEU_PDGAssetLink__LinkState HoudiniEngineUnity::HEU_PDGAssetLink::get_AssetLinkState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_PDGAssetLink>::get(),
                            "get_AssetLinkState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<HoudiniEngineUnity::HoudiniEngineUnity__HEU_PDGAssetLink__LinkState, false>(const_cast<void*>(instance), ___internal_method);
}
 HoudiniEngineUnity::HEU_PDGAssetLink HoudiniEngineUnity::HEU_PDGAssetLink::New_ctor()  {
HoudiniEngineUnity::HEU_PDGAssetLink o{THROW_UNLESS(::il2cpp_utils::New<HoudiniEngineUnity::HEU_PDGAssetLink>())};
return o;
}
 void HoudiniEngineUnity::HEU_PDGAssetLink::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_PDGAssetLink>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
