#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_SessionSyncData_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_Viewport_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_SessionSyncData_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_SessionSyncInfo_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_SessionSyncData__Status::HoudiniEngineUnity__HEU_SessionSyncData__Status(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void HoudiniEngineUnity::HoudiniEngineUnity__HEU_SessionSyncData__Status::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HoudiniEngineUnity__HEU_SessionSyncData__Status::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_SessionSyncData__Status  HoudiniEngineUnity::HoudiniEngineUnity__HEU_SessionSyncData__Status::Stopped{0};
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_SessionSyncData__Status  HoudiniEngineUnity::HoudiniEngineUnity__HEU_SessionSyncData__Status::Started{1};
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_SessionSyncData__Status  HoudiniEngineUnity::HoudiniEngineUnity__HEU_SessionSyncData__Status::Connecting{2};
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_SessionSyncData__Status  HoudiniEngineUnity::HoudiniEngineUnity__HEU_SessionSyncData__Status::Initializing{3};
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_SessionSyncData__Status  HoudiniEngineUnity::HoudiniEngineUnity__HEU_SessionSyncData__Status::Connected{4};
//  Writing Method size for method: HoudiniEngineUnity::HEU_SessionSyncData.get_SyncStatus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::HoudiniEngineUnity__HEU_SessionSyncData__Status (HoudiniEngineUnity::HEU_SessionSyncData::*)()>(&HoudiniEngineUnity::HEU_SessionSyncData::get_SyncStatus)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2033b4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionSyncData>::get(),
                            "get_SyncStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_SessionSyncData.set_SyncStatus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_SessionSyncData::*)(HoudiniEngineUnity::HoudiniEngineUnity__HEU_SessionSyncData__Status)>(&HoudiniEngineUnity::HEU_SessionSyncData::set_SyncStatus)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2033b60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionSyncData>::get(),
                            "set_SyncStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HoudiniEngineUnity__HEU_SessionSyncData__Status>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_SessionSyncData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_SessionSyncData::*)()>(&HoudiniEngineUnity::HEU_SessionSyncData::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2030ee0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionSyncData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void HoudiniEngineUnity::HEU_SessionSyncData::__set__status(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HEU_SessionSyncData::__get__status() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_SessionSyncData::__set__timeLastUpdate(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t HoudiniEngineUnity::HEU_SessionSyncData::__get__timeLastUpdate() const {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_SessionSyncData::__set__timeStartConnection(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t HoudiniEngineUnity::HEU_SessionSyncData::__get__timeStartConnection() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_SessionSyncData::__set__newNodeName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW HoudiniEngineUnity::HEU_SessionSyncData::__get__newNodeName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_SessionSyncData::__set__nodeTypeIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HEU_SessionSyncData::__get__nodeTypeIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_SessionSyncData::__set__validForConnection(bool value)  {
::cordl_internals::setInstanceField<bool, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool HoudiniEngineUnity::HEU_SessionSyncData::__get__validForConnection() const {
return ::cordl_internals::getInstanceField<bool, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_SessionSyncData::__set__viewportHAPI(HoudiniEngineUnity::HAPI_Viewport value)  {
::cordl_internals::setInstanceField<HoudiniEngineUnity::HAPI_Viewport, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<HoudiniEngineUnity::HAPI_Viewport>(value));
}
constexpr HoudiniEngineUnity::HAPI_Viewport HoudiniEngineUnity::HEU_SessionSyncData::__get__viewportHAPI() const {
return ::cordl_internals::getInstanceField<HoudiniEngineUnity::HAPI_Viewport, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_SessionSyncData::__set__viewportLocal(HoudiniEngineUnity::HAPI_Viewport value)  {
::cordl_internals::setInstanceField<HoudiniEngineUnity::HAPI_Viewport, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<HoudiniEngineUnity::HAPI_Viewport>(value));
}
constexpr HoudiniEngineUnity::HAPI_Viewport HoudiniEngineUnity::HEU_SessionSyncData::__get__viewportLocal() const {
return ::cordl_internals::getInstanceField<HoudiniEngineUnity::HAPI_Viewport, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_SessionSyncData::__set__viewportJustUpdated(bool value)  {
::cordl_internals::setInstanceField<bool, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool HoudiniEngineUnity::HEU_SessionSyncData::__get__viewportJustUpdated() const {
return ::cordl_internals::getInstanceField<bool, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_SessionSyncData::__set__syncInfo(HoudiniEngineUnity::HAPI_SessionSyncInfo value)  {
::cordl_internals::setInstanceField<HoudiniEngineUnity::HAPI_SessionSyncInfo, 0x61>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<HoudiniEngineUnity::HAPI_SessionSyncInfo>(value));
}
constexpr HoudiniEngineUnity::HAPI_SessionSyncInfo HoudiniEngineUnity::HEU_SessionSyncData::__get__syncInfo() const {
return ::cordl_internals::getInstanceField<HoudiniEngineUnity::HAPI_SessionSyncInfo, 0x61>(this->::bs_hook::Il2CppWrapperType::instance);
}
 HoudiniEngineUnity::HoudiniEngineUnity__HEU_SessionSyncData__Status HoudiniEngineUnity::HEU_SessionSyncData::get_SyncStatus()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionSyncData>::get(),
                            "get_SyncStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<HoudiniEngineUnity::HoudiniEngineUnity__HEU_SessionSyncData__Status, false>(const_cast<void*>(instance), ___internal_method);
}
 void HoudiniEngineUnity::HEU_SessionSyncData::set_SyncStatus(HoudiniEngineUnity::HoudiniEngineUnity__HEU_SessionSyncData__Status value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionSyncData>::get(),
                            "set_SyncStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HoudiniEngineUnity__HEU_SessionSyncData__Status>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 HoudiniEngineUnity::HEU_SessionSyncData HoudiniEngineUnity::HEU_SessionSyncData::New_ctor()  {
HoudiniEngineUnity::HEU_SessionSyncData o{THROW_UNLESS(::il2cpp_utils::New<HoudiniEngineUnity::HEU_SessionSyncData>())};
return o;
}
 void HoudiniEngineUnity::HEU_SessionSyncData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionSyncData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
