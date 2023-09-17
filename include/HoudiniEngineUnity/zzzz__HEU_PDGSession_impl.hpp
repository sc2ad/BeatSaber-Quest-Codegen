#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "HoudiniEngineUnity/zzzz__HEU_PDGSession_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_TOPNodeData_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_TOPNodeData_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_PDG_EventInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_SessionBase_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_TOPNetworkData_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_PDG_State_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_PDGAssetLink_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_PDGSession__EventMessageColor::____HoudiniEngineUnity__HEU_PDGSession__EventMessageColor(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_PDGSession__EventMessageColor::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_PDGSession__EventMessageColor::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_PDGSession__EventMessageColor  ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_PDGSession__EventMessageColor::DEFAULT{0};
constexpr ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_PDGSession__EventMessageColor  ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_PDGSession__EventMessageColor::WARNING{1};
constexpr ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_PDGSession__EventMessageColor  ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_PDGSession__EventMessageColor::ERROR{2};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGSession.GetPDGSession
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_PDGSession (*)()>(&::HoudiniEngineUnity::HEU_PDGSession::GetPDGSession)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2027c4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession>::get(),
                            "GetPDGSession",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGSession._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PDGSession::*)()>(&::HoudiniEngineUnity::HEU_PDGSession::_ctor)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x202b2b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGSession.AddAsset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PDGSession::*)(::HoudiniEngineUnity::HEU_PDGAssetLink)>(&::HoudiniEngineUnity::HEU_PDGSession::AddAsset)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x202b468;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession>::get(),
                            "AddAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_PDGAssetLink>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGSession.RemoveAsset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PDGSession::*)(::HoudiniEngineUnity::HEU_PDGAssetLink)>(&::HoudiniEngineUnity::HEU_PDGSession::RemoveAsset)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2027cc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession>::get(),
                            "RemoveAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_PDGAssetLink>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGSession.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PDGSession::*)()>(&::HoudiniEngineUnity::HEU_PDGSession::Update)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x202b46c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGSession.CleanUp
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PDGSession::*)()>(&::HoudiniEngineUnity::HEU_PDGSession::CleanUp)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x202b470;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession>::get(),
                            "CleanUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGSession.UpdatePDGContext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PDGSession::*)()>(&::HoudiniEngineUnity::HEU_PDGSession::UpdatePDGContext)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x202b56c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession>::get(),
                            "UpdatePDGContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGSession.ReinitializePDGContext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PDGSession::*)()>(&::HoudiniEngineUnity::HEU_PDGSession::ReinitializePDGContext)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x202b570;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession>::get(),
                            "ReinitializePDGContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGSession.ProcessPDGEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PDGSession::*)(::HoudiniEngineUnity::HEU_SessionBase, int32_t, ByRef<::HoudiniEngineUnity::HAPI_PDG_EventInfo>)>(&::HoudiniEngineUnity::HEU_PDGSession::ProcessPDGEvent)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x202b574;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession>::get(),
                            "ProcessPDGEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HAPI_PDG_EventInfo>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGSession.GetTOPAssetLinkAndNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_PDGSession::*)(int32_t, ByRef<::HoudiniEngineUnity::HEU_PDGAssetLink>, ByRef<::HoudiniEngineUnity::HEU_TOPNodeData>)>(&::HoudiniEngineUnity::HEU_PDGSession::GetTOPAssetLinkAndNode)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x202b578;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession>::get(),
                            "GetTOPAssetLinkAndNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HEU_PDGAssetLink>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HEU_TOPNodeData>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGSession.SetTOPNodePDGState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PDGSession::*)(::HoudiniEngineUnity::HEU_PDGAssetLink, ::HoudiniEngineUnity::HEU_TOPNodeData, ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_TOPNodeData__PDGState)>(&::HoudiniEngineUnity::HEU_PDGSession::SetTOPNodePDGState)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x202b660;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession>::get(),
                            "SetTOPNodePDGState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_PDGAssetLink>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_TOPNodeData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_TOPNodeData__PDGState>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGSession.NotifyTOPNodePDGStateClear
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PDGSession::*)(::HoudiniEngineUnity::HEU_PDGAssetLink, ::HoudiniEngineUnity::HEU_TOPNodeData)>(&::HoudiniEngineUnity::HEU_PDGSession::NotifyTOPNodePDGStateClear)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x202b698;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession>::get(),
                            "NotifyTOPNodePDGStateClear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_PDGAssetLink>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_TOPNodeData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGSession.NotifyTOPNodeTotalWorkItem
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PDGSession::*)(::HoudiniEngineUnity::HEU_PDGAssetLink, ::HoudiniEngineUnity::HEU_TOPNodeData, int32_t)>(&::HoudiniEngineUnity::HEU_PDGSession::NotifyTOPNodeTotalWorkItem)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x202b6e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession>::get(),
                            "NotifyTOPNodeTotalWorkItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_PDGAssetLink>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_TOPNodeData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGSession.NotifyTOPNodeCookedWorkItem
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PDGSession::*)(::HoudiniEngineUnity::HEU_PDGAssetLink, ::HoudiniEngineUnity::HEU_TOPNodeData)>(&::HoudiniEngineUnity::HEU_PDGSession::NotifyTOPNodeCookedWorkItem)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x202b72c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession>::get(),
                            "NotifyTOPNodeCookedWorkItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_PDGAssetLink>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_TOPNodeData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGSession.NotifyTOPNodeErrorWorkItem
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PDGSession::*)(::HoudiniEngineUnity::HEU_PDGAssetLink, ::HoudiniEngineUnity::HEU_TOPNodeData)>(&::HoudiniEngineUnity::HEU_PDGSession::NotifyTOPNodeErrorWorkItem)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x202b774;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession>::get(),
                            "NotifyTOPNodeErrorWorkItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_PDGAssetLink>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_TOPNodeData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGSession.NotifyTOPNodeWaitingWorkItem
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PDGSession::*)(::HoudiniEngineUnity::HEU_PDGAssetLink, ::HoudiniEngineUnity::HEU_TOPNodeData, int32_t)>(&::HoudiniEngineUnity::HEU_PDGSession::NotifyTOPNodeWaitingWorkItem)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x202b7bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession>::get(),
                            "NotifyTOPNodeWaitingWorkItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_PDGAssetLink>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_TOPNodeData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGSession.NotifyTOPNodeScheduledWorkItem
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PDGSession::*)(::HoudiniEngineUnity::HEU_PDGAssetLink, ::HoudiniEngineUnity::HEU_TOPNodeData, int32_t)>(&::HoudiniEngineUnity::HEU_PDGSession::NotifyTOPNodeScheduledWorkItem)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x202b808;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession>::get(),
                            "NotifyTOPNodeScheduledWorkItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_PDGAssetLink>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_TOPNodeData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGSession.NotifyTOPNodeCookingWorkItem
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PDGSession::*)(::HoudiniEngineUnity::HEU_PDGAssetLink, ::HoudiniEngineUnity::HEU_TOPNodeData, int32_t)>(&::HoudiniEngineUnity::HEU_PDGSession::NotifyTOPNodeCookingWorkItem)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x202b854;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession>::get(),
                            "NotifyTOPNodeCookingWorkItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_PDGAssetLink>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_TOPNodeData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGSession.ResetPDGEventInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::HoudiniEngineUnity::HAPI_PDG_EventInfo>)>(&::HoudiniEngineUnity::HEU_PDGSession::ResetPDGEventInfo)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x202b8a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession>::get(),
                            "ResetPDGEventInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HAPI_PDG_EventInfo>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGSession.SetErrorState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PDGSession::*)(::StringW, bool)>(&::HoudiniEngineUnity::HEU_PDGSession::SetErrorState)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x202b8b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession>::get(),
                            "SetErrorState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGSession.ClearErrorState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PDGSession::*)()>(&::HoudiniEngineUnity::HEU_PDGSession::ClearErrorState)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x202b8f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession>::get(),
                            "ClearErrorState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGSession.GetHAPIPDGSession
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_SessionBase (::HoudiniEngineUnity::HEU_PDGSession::*)(bool)>(&::HoudiniEngineUnity::HEU_PDGSession::GetHAPIPDGSession)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x202b940;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession>::get(),
                            "GetHAPIPDGSession",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGSession.CookTOPNetworkOutputNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PDGSession::*)(::HoudiniEngineUnity::HEU_TOPNetworkData)>(&::HoudiniEngineUnity::HEU_PDGSession::CookTOPNetworkOutputNode)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x202a12c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession>::get(),
                            "CookTOPNetworkOutputNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_TOPNetworkData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGSession.PauseCook
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PDGSession::*)(::HoudiniEngineUnity::HEU_TOPNetworkData)>(&::HoudiniEngineUnity::HEU_PDGSession::PauseCook)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x202a190;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession>::get(),
                            "PauseCook",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_TOPNetworkData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGSession.CancelCook
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PDGSession::*)(::HoudiniEngineUnity::HEU_TOPNetworkData)>(&::HoudiniEngineUnity::HEU_PDGSession::CancelCook)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x202a1f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession>::get(),
                            "CancelCook",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_TOPNetworkData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGSession.ClearWorkItemResult
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PDGSession::*)(::HoudiniEngineUnity::HEU_SessionBase, int32_t, ::HoudiniEngineUnity::HAPI_PDG_EventInfo, ::HoudiniEngineUnity::HEU_TOPNodeData)>(&::HoudiniEngineUnity::HEU_PDGSession::ClearWorkItemResult)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x202bcb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession>::get(),
                            "ClearWorkItemResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HAPI_PDG_EventInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_TOPNodeData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGSession.DirtyTOPNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_PDGSession::*)(int32_t)>(&::HoudiniEngineUnity::HEU_PDGSession::DirtyTOPNode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x202a020;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession>::get(),
                            "DirtyTOPNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGSession.CookTOPNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_PDGSession::*)(int32_t)>(&::HoudiniEngineUnity::HEU_PDGSession::CookTOPNode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x202a048;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession>::get(),
                            "CookTOPNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGSession.DirtyAll
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_PDGSession::*)(int32_t)>(&::HoudiniEngineUnity::HEU_PDGSession::DirtyAll)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x202a070;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession>::get(),
                            "DirtyAll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGSession.AddEventMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PDGSession::*)(::StringW)>(&::HoudiniEngineUnity::HEU_PDGSession::AddEventMessage)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x202bcbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession>::get(),
                            "AddEventMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGSession.GetEventMessages
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::HoudiniEngineUnity::HEU_PDGSession::*)()>(&::HoudiniEngineUnity::HEU_PDGSession::GetEventMessages)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x202bcd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession>::get(),
                            "GetEventMessages",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGSession.ClearEventMessages
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PDGSession::*)()>(&::HoudiniEngineUnity::HEU_PDGSession::ClearEventMessages)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x202bcf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession>::get(),
                            "ClearEventMessages",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void ::HoudiniEngineUnity::HEU_PDGSession::__set__pdgSession(::HoudiniEngineUnity::HEU_PDGSession value)  {
::cordl_internals::setStaticField<::HoudiniEngineUnity::HEU_PDGSession, "_pdgSession", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession>::get>(std::forward<::HoudiniEngineUnity::HEU_PDGSession>(value));
}
 ::HoudiniEngineUnity::HEU_PDGSession ::HoudiniEngineUnity::HEU_PDGSession::__get__pdgSession()  {
return ::cordl_internals::getStaticField<::HoudiniEngineUnity::HEU_PDGSession, "_pdgSession", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession>::get>();
}
constexpr void ::HoudiniEngineUnity::HEU_PDGSession::__set__pdgAssets(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PDGAssetLink> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PDGAssetLink>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PDGAssetLink>>(value));
}
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PDGAssetLink> ::HoudiniEngineUnity::HEU_PDGSession::__get__pdgAssets() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PDGAssetLink>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_PDGSession::__set__pdgMaxProcessEvents(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::HEU_PDGSession::__get__pdgMaxProcessEvents() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_PDGSession::__set__pdgQueryEvents(::ArrayW<::HoudiniEngineUnity::HAPI_PDG_EventInfo> value)  {
::cordl_internals::setInstanceField<::ArrayW<::HoudiniEngineUnity::HAPI_PDG_EventInfo>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::HoudiniEngineUnity::HAPI_PDG_EventInfo>>(value));
}
constexpr ::ArrayW<::HoudiniEngineUnity::HAPI_PDG_EventInfo> ::HoudiniEngineUnity::HEU_PDGSession::__get__pdgQueryEvents() const {
return ::cordl_internals::getInstanceField<::ArrayW<::HoudiniEngineUnity::HAPI_PDG_EventInfo>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_PDGSession::__set__pdgContextSize(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::HEU_PDGSession::__get__pdgContextSize() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_PDGSession::__set__pdgContextIDs(::ArrayW<int32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<int32_t>>(value));
}
constexpr ::ArrayW<int32_t> ::HoudiniEngineUnity::HEU_PDGSession::__get__pdgContextIDs() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_PDGSession::__set__errored(bool value)  {
::cordl_internals::setInstanceField<bool, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::HoudiniEngineUnity::HEU_PDGSession::__get__errored() const {
return ::cordl_internals::getInstanceField<bool, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_PDGSession::__set__errorMsg(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::HoudiniEngineUnity::HEU_PDGSession::__get__errorMsg() const {
return ::cordl_internals::getInstanceField<::StringW, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_PDGSession::__set__pdgState(::HoudiniEngineUnity::HAPI_PDG_State value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::HAPI_PDG_State, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HoudiniEngineUnity::HAPI_PDG_State>(value));
}
constexpr ::HoudiniEngineUnity::HAPI_PDG_State ::HoudiniEngineUnity::HEU_PDGSession::__get__pdgState() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HAPI_PDG_State, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_PDGSession::__set__pdgEventMessages(::System::Text::StringBuilder value)  {
::cordl_internals::setInstanceField<::System::Text::StringBuilder, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Text::StringBuilder>(value));
}
constexpr ::System::Text::StringBuilder ::HoudiniEngineUnity::HEU_PDGSession::__get__pdgEventMessages() const {
return ::cordl_internals::getInstanceField<::System::Text::StringBuilder, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_PDGSession::__set__eventMessageColorCode(::ArrayW<::StringW> value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::StringW>>(value));
}
constexpr ::ArrayW<::StringW> ::HoudiniEngineUnity::HEU_PDGSession::__get__eventMessageColorCode() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::HoudiniEngineUnity::HEU_PDGSession ::HoudiniEngineUnity::HEU_PDGSession::GetPDGSession()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession>::get(),
                            "GetPDGSession",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_PDGSession, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
 ::HoudiniEngineUnity::HEU_PDGSession::HEU_PDGSession()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<HEU_PDGSession>())) {}
 void ::HoudiniEngineUnity::HEU_PDGSession::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HoudiniEngineUnity::HEU_PDGSession::AddAsset(::HoudiniEngineUnity::HEU_PDGAssetLink asset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession>::get(),
                            "AddAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_PDGAssetLink>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, asset);
}
 void ::HoudiniEngineUnity::HEU_PDGSession::RemoveAsset(::HoudiniEngineUnity::HEU_PDGAssetLink asset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession>::get(),
                            "RemoveAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_PDGAssetLink>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, asset);
}
 void ::HoudiniEngineUnity::HEU_PDGSession::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HoudiniEngineUnity::HEU_PDGSession::CleanUp()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession>::get(),
                            "CleanUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HoudiniEngineUnity::HEU_PDGSession::UpdatePDGContext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession>::get(),
                            "UpdatePDGContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HoudiniEngineUnity::HEU_PDGSession::ReinitializePDGContext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession>::get(),
                            "ReinitializePDGContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HoudiniEngineUnity::HEU_PDGSession::ProcessPDGEvent(::HoudiniEngineUnity::HEU_SessionBase session, int32_t contextID, ByRef<::HoudiniEngineUnity::HAPI_PDG_EventInfo> eventInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession>::get(),
                            "ProcessPDGEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HAPI_PDG_EventInfo>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, session, contextID, eventInfo);
}
 bool ::HoudiniEngineUnity::HEU_PDGSession::GetTOPAssetLinkAndNode(int32_t nodeID, ByRef<::HoudiniEngineUnity::HEU_PDGAssetLink> assetLink, ByRef<::HoudiniEngineUnity::HEU_TOPNodeData> topNode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession>::get(),
                            "GetTOPAssetLinkAndNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HEU_PDGAssetLink>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HEU_TOPNodeData>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, nodeID, assetLink, topNode);
}
 void ::HoudiniEngineUnity::HEU_PDGSession::SetTOPNodePDGState(::HoudiniEngineUnity::HEU_PDGAssetLink assetLink, ::HoudiniEngineUnity::HEU_TOPNodeData topNode, ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_TOPNodeData__PDGState pdgState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession>::get(),
                            "SetTOPNodePDGState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_PDGAssetLink>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_TOPNodeData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_TOPNodeData__PDGState>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, assetLink, topNode, pdgState);
}
 void ::HoudiniEngineUnity::HEU_PDGSession::NotifyTOPNodePDGStateClear(::HoudiniEngineUnity::HEU_PDGAssetLink assetLink, ::HoudiniEngineUnity::HEU_TOPNodeData topNode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession>::get(),
                            "NotifyTOPNodePDGStateClear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_PDGAssetLink>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_TOPNodeData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, assetLink, topNode);
}
 void ::HoudiniEngineUnity::HEU_PDGSession::NotifyTOPNodeTotalWorkItem(::HoudiniEngineUnity::HEU_PDGAssetLink assetLink, ::HoudiniEngineUnity::HEU_TOPNodeData topNode, int32_t inc)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession>::get(),
                            "NotifyTOPNodeTotalWorkItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_PDGAssetLink>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_TOPNodeData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, assetLink, topNode, inc);
}
 void ::HoudiniEngineUnity::HEU_PDGSession::NotifyTOPNodeCookedWorkItem(::HoudiniEngineUnity::HEU_PDGAssetLink assetLink, ::HoudiniEngineUnity::HEU_TOPNodeData topNode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession>::get(),
                            "NotifyTOPNodeCookedWorkItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_PDGAssetLink>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_TOPNodeData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, assetLink, topNode);
}
 void ::HoudiniEngineUnity::HEU_PDGSession::NotifyTOPNodeErrorWorkItem(::HoudiniEngineUnity::HEU_PDGAssetLink assetLink, ::HoudiniEngineUnity::HEU_TOPNodeData topNode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession>::get(),
                            "NotifyTOPNodeErrorWorkItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_PDGAssetLink>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_TOPNodeData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, assetLink, topNode);
}
 void ::HoudiniEngineUnity::HEU_PDGSession::NotifyTOPNodeWaitingWorkItem(::HoudiniEngineUnity::HEU_PDGAssetLink assetLink, ::HoudiniEngineUnity::HEU_TOPNodeData topNode, int32_t inc)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession>::get(),
                            "NotifyTOPNodeWaitingWorkItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_PDGAssetLink>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_TOPNodeData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, assetLink, topNode, inc);
}
 void ::HoudiniEngineUnity::HEU_PDGSession::NotifyTOPNodeScheduledWorkItem(::HoudiniEngineUnity::HEU_PDGAssetLink assetLink, ::HoudiniEngineUnity::HEU_TOPNodeData topNode, int32_t inc)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession>::get(),
                            "NotifyTOPNodeScheduledWorkItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_PDGAssetLink>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_TOPNodeData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, assetLink, topNode, inc);
}
 void ::HoudiniEngineUnity::HEU_PDGSession::NotifyTOPNodeCookingWorkItem(::HoudiniEngineUnity::HEU_PDGAssetLink assetLink, ::HoudiniEngineUnity::HEU_TOPNodeData topNode, int32_t inc)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession>::get(),
                            "NotifyTOPNodeCookingWorkItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_PDGAssetLink>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_TOPNodeData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, assetLink, topNode, inc);
}
 void ::HoudiniEngineUnity::HEU_PDGSession::ResetPDGEventInfo(ByRef<::HoudiniEngineUnity::HAPI_PDG_EventInfo> eventInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession>::get(),
                            "ResetPDGEventInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HAPI_PDG_EventInfo>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, eventInfo);
}
 void ::HoudiniEngineUnity::HEU_PDGSession::SetErrorState(::StringW msg, bool bLogIt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession>::get(),
                            "SetErrorState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, msg, bLogIt);
}
 void ::HoudiniEngineUnity::HEU_PDGSession::ClearErrorState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession>::get(),
                            "ClearErrorState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
/// @param bCreate: bool (default: true)
 ::HoudiniEngineUnity::HEU_SessionBase ::HoudiniEngineUnity::HEU_PDGSession::GetHAPIPDGSession(bool bCreate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession>::get(),
                            "GetHAPIPDGSession",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_SessionBase, false>(const_cast<void*>(instance), ___internal_method, bCreate);
}
 void ::HoudiniEngineUnity::HEU_PDGSession::CookTOPNetworkOutputNode(::HoudiniEngineUnity::HEU_TOPNetworkData topNetwork)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession>::get(),
                            "CookTOPNetworkOutputNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_TOPNetworkData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, topNetwork);
}
 void ::HoudiniEngineUnity::HEU_PDGSession::PauseCook(::HoudiniEngineUnity::HEU_TOPNetworkData topNetwork)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession>::get(),
                            "PauseCook",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_TOPNetworkData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, topNetwork);
}
 void ::HoudiniEngineUnity::HEU_PDGSession::CancelCook(::HoudiniEngineUnity::HEU_TOPNetworkData topNetwork)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession>::get(),
                            "CancelCook",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_TOPNetworkData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, topNetwork);
}
 void ::HoudiniEngineUnity::HEU_PDGSession::ClearWorkItemResult(::HoudiniEngineUnity::HEU_SessionBase session, int32_t contextID, ::HoudiniEngineUnity::HAPI_PDG_EventInfo eventInfo, ::HoudiniEngineUnity::HEU_TOPNodeData topNode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession>::get(),
                            "ClearWorkItemResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HAPI_PDG_EventInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_TOPNodeData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, session, contextID, eventInfo, topNode);
}
 bool ::HoudiniEngineUnity::HEU_PDGSession::DirtyTOPNode(int32_t nodeID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession>::get(),
                            "DirtyTOPNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, nodeID);
}
 bool ::HoudiniEngineUnity::HEU_PDGSession::CookTOPNode(int32_t nodeID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession>::get(),
                            "CookTOPNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, nodeID);
}
 bool ::HoudiniEngineUnity::HEU_PDGSession::DirtyAll(int32_t nodeID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession>::get(),
                            "DirtyAll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, nodeID);
}
 void ::HoudiniEngineUnity::HEU_PDGSession::AddEventMessage(::StringW msg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession>::get(),
                            "AddEventMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, msg);
}
 ::StringW ::HoudiniEngineUnity::HEU_PDGSession::GetEventMessages()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession>::get(),
                            "GetEventMessages",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HoudiniEngineUnity::HEU_PDGSession::ClearEventMessages()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession>::get(),
                            "ClearEventMessages",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
