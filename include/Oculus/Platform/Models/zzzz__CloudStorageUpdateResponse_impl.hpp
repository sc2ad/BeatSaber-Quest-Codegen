#pragma once
#include "Oculus/Platform/Models/zzzz__CloudStorageUpdateResponse_def.hpp"
#include "Oculus/Platform/zzzz__CloudStorageUpdateStatus_def.hpp"
//  Writing Method size for method: Oculus::Platform::Models::CloudStorageUpdateResponse._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Models::CloudStorageUpdateResponse::*)(::cordl_internals::intptr_t)>(&Oculus::Platform::Models::CloudStorageUpdateResponse::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x259e81c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Models::CloudStorageUpdateResponse>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Oculus::Platform::Models::CloudStorageUpdateResponse::__set_Bucket(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW Oculus::Platform::Models::CloudStorageUpdateResponse::__get_Bucket() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Oculus::Platform::Models::CloudStorageUpdateResponse::__set_Key(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW Oculus::Platform::Models::CloudStorageUpdateResponse::__get_Key() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Oculus::Platform::Models::CloudStorageUpdateResponse::__set_Status(Oculus::Platform::CloudStorageUpdateStatus value)  {
::cordl_internals::setInstanceField<Oculus::Platform::CloudStorageUpdateStatus, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Oculus::Platform::CloudStorageUpdateStatus>(value));
}
constexpr Oculus::Platform::CloudStorageUpdateStatus Oculus::Platform::Models::CloudStorageUpdateResponse::__get_Status() const {
return ::cordl_internals::getInstanceField<Oculus::Platform::CloudStorageUpdateStatus, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Oculus::Platform::Models::CloudStorageUpdateResponse::__set_VersionHandle(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW Oculus::Platform::Models::CloudStorageUpdateResponse::__get_VersionHandle() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Oculus::Platform::Models::CloudStorageUpdateResponse Oculus::Platform::Models::CloudStorageUpdateResponse::New_ctor(::cordl_internals::intptr_t o)  {
Oculus::Platform::Models::CloudStorageUpdateResponse o{THROW_UNLESS(::il2cpp_utils::New<Oculus::Platform::Models::CloudStorageUpdateResponse>(o))};
return o;
}
 void Oculus::Platform::Models::CloudStorageUpdateResponse::_ctor(::cordl_internals::intptr_t o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Models::CloudStorageUpdateResponse>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, o);
}
