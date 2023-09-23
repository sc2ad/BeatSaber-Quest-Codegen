#pragma once
#include "GlobalNamespace/zzzz__ICertificateEncryptionProvider_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: GlobalNamespace::ICertificateEncryptionProvider.SignData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (GlobalNamespace::ICertificateEncryptionProvider::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&GlobalNamespace::ICertificateEncryptionProvider::SignData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::ICertificateEncryptionProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ICertificateEncryptionProvider>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::IDisposable
constexpr  GlobalNamespace::ICertificateEncryptionProvider::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
 ::ArrayW<uint8_t> GlobalNamespace::ICertificateEncryptionProvider::SignData(::ArrayW<uint8_t> data, int32_t offset, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ICertificateEncryptionProvider>::get(),
                            "SignData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method, data, offset, length);
}
