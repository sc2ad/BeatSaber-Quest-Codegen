#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "GlobalNamespace/zzzz__GetAssetBundleFileResult_def.hpp"
//  Writing Method size for method: GlobalNamespace::GetAssetBundleFileResult._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GetAssetBundleFileResult::*)(bool, ::StringW)>(&GlobalNamespace::GetAssetBundleFileResult::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x21ed9e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GetAssetBundleFileResult>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "isError", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "assetBundlePath", ty: "::StringW", modifiers: "", def_value: Some("csnull") }]
constexpr GlobalNamespace::GetAssetBundleFileResult::GetAssetBundleFileResult(bool isError, ::StringW assetBundlePath) noexcept : ::bs_hook::ValueTypeWrapper() {this->isError = isError;
this->assetBundlePath = assetBundlePath;
}
constexpr void GlobalNamespace::GetAssetBundleFileResult::__set_isError(bool value)  {
::cordl_internals::setInstanceField<bool, 0x0>(this->__instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GetAssetBundleFileResult::__get_isError() const {
return ::cordl_internals::getInstanceField<bool, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GetAssetBundleFileResult::__set_assetBundlePath(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x8>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GetAssetBundleFileResult::__get_assetBundlePath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x8>(this->__instance);
}
 void GlobalNamespace::GetAssetBundleFileResult::_ctor(bool isError, ::StringW assetBundlePath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GetAssetBundleFileResult>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, isError, assetBundlePath);
}
