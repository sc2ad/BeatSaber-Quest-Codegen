#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__DownloadStatus_def.hpp"
//  Writing Method size for method: ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus.get_Percent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus::*)()>(&::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus::get_Percent)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2a45d3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus>::get(),
                            "get_Percent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "TotalBytes", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "DownloadedBytes", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "IsDone", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus::DownloadStatus(int64_t TotalBytes, int64_t DownloadedBytes, bool IsDone) noexcept : ::bs_hook::ValueTypeWrapper() {this->TotalBytes = TotalBytes;
this->DownloadedBytes = DownloadedBytes;
this->IsDone = IsDone;
}
constexpr void ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus::__set_TotalBytes(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x0>(this->__instance, std::forward<int64_t>(value));
}
constexpr int64_t ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus::__get_TotalBytes() const {
return ::cordl_internals::getInstanceField<int64_t, 0x0>(this->__instance);
}
constexpr void ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus::__set_DownloadedBytes(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x8>(this->__instance, std::forward<int64_t>(value));
}
constexpr int64_t ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus::__get_DownloadedBytes() const {
return ::cordl_internals::getInstanceField<int64_t, 0x8>(this->__instance);
}
constexpr void ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus::__set_IsDone(bool value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus::__get_IsDone() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this->__instance);
}
 float_t ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus::get_Percent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus>::get(),
                            "get_Percent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
} // end anonymous namespace
