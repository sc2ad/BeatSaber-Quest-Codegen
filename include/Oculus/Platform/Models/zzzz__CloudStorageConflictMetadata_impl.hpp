#pragma once
#include "Oculus/Platform/Models/zzzz__CloudStorageConflictMetadata_def.hpp"
#include "Oculus/Platform/Models/zzzz__CloudStorageMetadata_def.hpp"
//  Writing Method size for method: Oculus::Platform::Models::CloudStorageConflictMetadata._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Models::CloudStorageConflictMetadata::*)(::cordl_internals::intptr_t)>(&Oculus::Platform::Models::CloudStorageConflictMetadata::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x259e350;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Models::CloudStorageConflictMetadata>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Oculus::Platform::Models::CloudStorageConflictMetadata::__set_Local(Oculus::Platform::Models::CloudStorageMetadata value)  {
::cordl_internals::setInstanceField<Oculus::Platform::Models::CloudStorageMetadata, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Oculus::Platform::Models::CloudStorageMetadata>(value));
}
constexpr Oculus::Platform::Models::CloudStorageMetadata Oculus::Platform::Models::CloudStorageConflictMetadata::__get_Local() const {
return ::cordl_internals::getInstanceField<Oculus::Platform::Models::CloudStorageMetadata, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Oculus::Platform::Models::CloudStorageConflictMetadata::__set_Remote(Oculus::Platform::Models::CloudStorageMetadata value)  {
::cordl_internals::setInstanceField<Oculus::Platform::Models::CloudStorageMetadata, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Oculus::Platform::Models::CloudStorageMetadata>(value));
}
constexpr Oculus::Platform::Models::CloudStorageMetadata Oculus::Platform::Models::CloudStorageConflictMetadata::__get_Remote() const {
return ::cordl_internals::getInstanceField<Oculus::Platform::Models::CloudStorageMetadata, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Oculus::Platform::Models::CloudStorageConflictMetadata Oculus::Platform::Models::CloudStorageConflictMetadata::New_ctor(::cordl_internals::intptr_t o)  {
Oculus::Platform::Models::CloudStorageConflictMetadata o{THROW_UNLESS(::il2cpp_utils::New<Oculus::Platform::Models::CloudStorageConflictMetadata>(o))};
return o;
}
 void Oculus::Platform::Models::CloudStorageConflictMetadata::_ctor(::cordl_internals::intptr_t o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Models::CloudStorageConflictMetadata>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, o);
}
