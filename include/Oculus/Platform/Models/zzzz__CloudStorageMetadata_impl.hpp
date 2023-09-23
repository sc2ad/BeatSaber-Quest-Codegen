#pragma once
#include "Oculus/Platform/Models/zzzz__CloudStorageMetadata_def.hpp"
#include "Oculus/Platform/zzzz__CloudStorageDataStatus_def.hpp"
//  Writing Method size for method: Oculus::Platform::Models::CloudStorageMetadata._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Models::CloudStorageMetadata::*)(::cordl_internals::intptr_t)>(&Oculus::Platform::Models::CloudStorageMetadata::_ctor)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x259e430;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Models::CloudStorageMetadata>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Oculus::Platform::Models::CloudStorageMetadata::__set_Bucket(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW Oculus::Platform::Models::CloudStorageMetadata::__get_Bucket() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Oculus::Platform::Models::CloudStorageMetadata::__set_Counter(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int64_t>(value));
}
constexpr int64_t Oculus::Platform::Models::CloudStorageMetadata::__get_Counter() const {
return ::cordl_internals::getInstanceField<int64_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Oculus::Platform::Models::CloudStorageMetadata::__set_DataSize(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t Oculus::Platform::Models::CloudStorageMetadata::__get_DataSize() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Oculus::Platform::Models::CloudStorageMetadata::__set_ExtraData(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW Oculus::Platform::Models::CloudStorageMetadata::__get_ExtraData() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Oculus::Platform::Models::CloudStorageMetadata::__set_Key(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW Oculus::Platform::Models::CloudStorageMetadata::__get_Key() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Oculus::Platform::Models::CloudStorageMetadata::__set_SaveTime(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint64_t>(value));
}
constexpr uint64_t Oculus::Platform::Models::CloudStorageMetadata::__get_SaveTime() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Oculus::Platform::Models::CloudStorageMetadata::__set_Status(Oculus::Platform::CloudStorageDataStatus value)  {
::cordl_internals::setInstanceField<Oculus::Platform::CloudStorageDataStatus, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Oculus::Platform::CloudStorageDataStatus>(value));
}
constexpr Oculus::Platform::CloudStorageDataStatus Oculus::Platform::Models::CloudStorageMetadata::__get_Status() const {
return ::cordl_internals::getInstanceField<Oculus::Platform::CloudStorageDataStatus, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Oculus::Platform::Models::CloudStorageMetadata::__set_VersionHandle(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW Oculus::Platform::Models::CloudStorageMetadata::__get_VersionHandle() const {
return ::cordl_internals::getInstanceField<::StringW, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "o", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 Oculus::Platform::Models::CloudStorageMetadata::CloudStorageMetadata(::cordl_internals::intptr_t o)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<CloudStorageMetadata>(o))) {}
 void Oculus::Platform::Models::CloudStorageMetadata::_ctor(::cordl_internals::intptr_t o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Models::CloudStorageMetadata>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, o);
}
