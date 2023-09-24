#pragma once
#include "Oculus/Platform/Models/zzzz__AssetDetails_def.hpp"
#include "Oculus/Platform/Models/zzzz__LanguagePackInfo_def.hpp"
//  Writing Method size for method: Oculus::Platform::Models::AssetDetails._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Models::AssetDetails::*)(::cordl_internals::intptr_t)>(&Oculus::Platform::Models::AssetDetails::_ctor)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x259c9a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Models::AssetDetails>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Oculus::Platform::Models::AssetDetails::__set_AssetId(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint64_t>(value));
}
constexpr uint64_t Oculus::Platform::Models::AssetDetails::__get_AssetId() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Oculus::Platform::Models::AssetDetails::__set_AssetType(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW Oculus::Platform::Models::AssetDetails::__get_AssetType() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Oculus::Platform::Models::AssetDetails::__set_DownloadStatus(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW Oculus::Platform::Models::AssetDetails::__get_DownloadStatus() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Oculus::Platform::Models::AssetDetails::__set_Filepath(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW Oculus::Platform::Models::AssetDetails::__get_Filepath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Oculus::Platform::Models::AssetDetails::__set_IapStatus(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW Oculus::Platform::Models::AssetDetails::__get_IapStatus() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Oculus::Platform::Models::AssetDetails::__set_LanguageOptional(Oculus::Platform::Models::LanguagePackInfo value)  {
::cordl_internals::setInstanceField<Oculus::Platform::Models::LanguagePackInfo, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Oculus::Platform::Models::LanguagePackInfo>(value));
}
constexpr Oculus::Platform::Models::LanguagePackInfo Oculus::Platform::Models::AssetDetails::__get_LanguageOptional() const {
return ::cordl_internals::getInstanceField<Oculus::Platform::Models::LanguagePackInfo, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Oculus::Platform::Models::AssetDetails::__set_Language(Oculus::Platform::Models::LanguagePackInfo value)  {
::cordl_internals::setInstanceField<Oculus::Platform::Models::LanguagePackInfo, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Oculus::Platform::Models::LanguagePackInfo>(value));
}
constexpr Oculus::Platform::Models::LanguagePackInfo Oculus::Platform::Models::AssetDetails::__get_Language() const {
return ::cordl_internals::getInstanceField<Oculus::Platform::Models::LanguagePackInfo, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Oculus::Platform::Models::AssetDetails::__set_Metadata(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW Oculus::Platform::Models::AssetDetails::__get_Metadata() const {
return ::cordl_internals::getInstanceField<::StringW, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Oculus::Platform::Models::AssetDetails Oculus::Platform::Models::AssetDetails::New_ctor(::cordl_internals::intptr_t o)  {
Oculus::Platform::Models::AssetDetails o{THROW_UNLESS(::il2cpp_utils::New<Oculus::Platform::Models::AssetDetails>(o))};
return o;
}
 void Oculus::Platform::Models::AssetDetails::_ctor(::cordl_internals::intptr_t o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Models::AssetDetails>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, o);
}
