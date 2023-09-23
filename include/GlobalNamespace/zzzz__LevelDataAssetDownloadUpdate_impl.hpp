#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "GlobalNamespace/zzzz__LevelDataAssetDownloadUpdate_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__LevelDataAssetDownloadUpdate__AssetDownloadingState::GlobalNamespace__LevelDataAssetDownloadUpdate__AssetDownloadingState(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__LevelDataAssetDownloadUpdate__AssetDownloadingState::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__LevelDataAssetDownloadUpdate__AssetDownloadingState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__LevelDataAssetDownloadUpdate__AssetDownloadingState  GlobalNamespace::GlobalNamespace__LevelDataAssetDownloadUpdate__AssetDownloadingState::PreparingToDownload{0};
constexpr GlobalNamespace::GlobalNamespace__LevelDataAssetDownloadUpdate__AssetDownloadingState  GlobalNamespace::GlobalNamespace__LevelDataAssetDownloadUpdate__AssetDownloadingState::Downloading{1};
constexpr GlobalNamespace::GlobalNamespace__LevelDataAssetDownloadUpdate__AssetDownloadingState  GlobalNamespace::GlobalNamespace__LevelDataAssetDownloadUpdate__AssetDownloadingState::Completed{2};
//  Writing Method size for method: GlobalNamespace::LevelDataAssetDownloadUpdate._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelDataAssetDownloadUpdate::*)(::StringW, uint32_t, uint32_t, GlobalNamespace::GlobalNamespace__LevelDataAssetDownloadUpdate__AssetDownloadingState)>(&GlobalNamespace::LevelDataAssetDownloadUpdate::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x21ed9f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelDataAssetDownloadUpdate>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__LevelDataAssetDownloadUpdate__AssetDownloadingState>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "levelID", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "bytesTotal", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "bytesTransferred", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "assetDownloadingState", ty: "GlobalNamespace::GlobalNamespace__LevelDataAssetDownloadUpdate__AssetDownloadingState", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::LevelDataAssetDownloadUpdate::LevelDataAssetDownloadUpdate(::StringW levelID, uint32_t bytesTotal, uint32_t bytesTransferred, GlobalNamespace::GlobalNamespace__LevelDataAssetDownloadUpdate__AssetDownloadingState assetDownloadingState) noexcept : ::bs_hook::ValueTypeWrapper() {this->levelID = levelID;
this->bytesTotal = bytesTotal;
this->bytesTransferred = bytesTransferred;
this->assetDownloadingState = assetDownloadingState;
}
constexpr void GlobalNamespace::LevelDataAssetDownloadUpdate::__set_levelID(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x0>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::LevelDataAssetDownloadUpdate::__get_levelID() const {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::LevelDataAssetDownloadUpdate::__set_bytesTotal(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x8>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t GlobalNamespace::LevelDataAssetDownloadUpdate::__get_bytesTotal() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::LevelDataAssetDownloadUpdate::__set_bytesTransferred(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0xc>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t GlobalNamespace::LevelDataAssetDownloadUpdate::__get_bytesTransferred() const {
return ::cordl_internals::getInstanceField<uint32_t, 0xc>(this->__instance);
}
constexpr void GlobalNamespace::LevelDataAssetDownloadUpdate::__set_assetDownloadingState(GlobalNamespace::GlobalNamespace__LevelDataAssetDownloadUpdate__AssetDownloadingState value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__LevelDataAssetDownloadUpdate__AssetDownloadingState, 0x10>(this->__instance, std::forward<GlobalNamespace::GlobalNamespace__LevelDataAssetDownloadUpdate__AssetDownloadingState>(value));
}
constexpr GlobalNamespace::GlobalNamespace__LevelDataAssetDownloadUpdate__AssetDownloadingState GlobalNamespace::LevelDataAssetDownloadUpdate::__get_assetDownloadingState() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__LevelDataAssetDownloadUpdate__AssetDownloadingState, 0x10>(this->__instance);
}
 void GlobalNamespace::LevelDataAssetDownloadUpdate::_ctor(::StringW levelID, uint32_t bytesTotal, uint32_t bytesTransferred, GlobalNamespace::GlobalNamespace__LevelDataAssetDownloadUpdate__AssetDownloadingState assetDownloadingState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelDataAssetDownloadUpdate>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__LevelDataAssetDownloadUpdate__AssetDownloadingState>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, levelID, bytesTotal, bytesTransferred, assetDownloadingState);
}
