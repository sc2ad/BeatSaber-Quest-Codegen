#pragma once
#include "UnityEngine/Android/zzzz__AndroidAssetPackInfo_def.hpp"
#include "UnityEngine/Android/zzzz__AndroidAssetPackStatus_def.hpp"
#include "UnityEngine/Android/zzzz__AndroidAssetPackError_def.hpp"
//  Writing Method size for method: UnityEngine::Android::AndroidAssetPackInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Android::AndroidAssetPackInfo::*)(::StringW, UnityEngine::Android::AndroidAssetPackStatus, uint64_t, uint64_t, float_t, UnityEngine::Android::AndroidAssetPackError)>(&UnityEngine::Android::AndroidAssetPackInfo::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2b16da4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Android::AndroidAssetPackInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Android::AndroidAssetPackStatus>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Android::AndroidAssetPackError>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::Android::AndroidAssetPackInfo::__set__name_k__BackingField(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::Android::AndroidAssetPackInfo::__get__name_k__BackingField() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Android::AndroidAssetPackInfo::__set__status_k__BackingField(UnityEngine::Android::AndroidAssetPackStatus value)  {
::cordl_internals::setInstanceField<UnityEngine::Android::AndroidAssetPackStatus, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Android::AndroidAssetPackStatus>(value));
}
constexpr UnityEngine::Android::AndroidAssetPackStatus UnityEngine::Android::AndroidAssetPackInfo::__get__status_k__BackingField() const {
return ::cordl_internals::getInstanceField<UnityEngine::Android::AndroidAssetPackStatus, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Android::AndroidAssetPackInfo::__set__size_k__BackingField(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint64_t>(value));
}
constexpr uint64_t UnityEngine::Android::AndroidAssetPackInfo::__get__size_k__BackingField() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Android::AndroidAssetPackInfo::__set__bytesDownloaded_k__BackingField(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint64_t>(value));
}
constexpr uint64_t UnityEngine::Android::AndroidAssetPackInfo::__get__bytesDownloaded_k__BackingField() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Android::AndroidAssetPackInfo::__set__transferProgress_k__BackingField(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::Android::AndroidAssetPackInfo::__get__transferProgress_k__BackingField() const {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Android::AndroidAssetPackInfo::__set__error_k__BackingField(UnityEngine::Android::AndroidAssetPackError value)  {
::cordl_internals::setInstanceField<UnityEngine::Android::AndroidAssetPackError, 0x34>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Android::AndroidAssetPackError>(value));
}
constexpr UnityEngine::Android::AndroidAssetPackError UnityEngine::Android::AndroidAssetPackInfo::__get__error_k__BackingField() const {
return ::cordl_internals::getInstanceField<UnityEngine::Android::AndroidAssetPackError, 0x34>(this->::bs_hook::Il2CppWrapperType::instance);
}
 UnityEngine::Android::AndroidAssetPackInfo UnityEngine::Android::AndroidAssetPackInfo::New_ctor(::StringW name, UnityEngine::Android::AndroidAssetPackStatus status, uint64_t size, uint64_t bytesDownloaded, float_t transferProgress, UnityEngine::Android::AndroidAssetPackError error)  {
UnityEngine::Android::AndroidAssetPackInfo o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::Android::AndroidAssetPackInfo>(name, status, size, bytesDownloaded, transferProgress, error))};
return o;
}
 void UnityEngine::Android::AndroidAssetPackInfo::_ctor(::StringW name, UnityEngine::Android::AndroidAssetPackStatus status, uint64_t size, uint64_t bytesDownloaded, float_t transferProgress, UnityEngine::Android::AndroidAssetPackError error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Android::AndroidAssetPackInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Android::AndroidAssetPackStatus>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Android::AndroidAssetPackError>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, name, status, size, bytesDownloaded, transferProgress, error);
}
