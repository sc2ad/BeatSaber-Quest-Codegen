#pragma once
#include "System/Security/Cryptography/zzzz__CryptographicOperations_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
//  Writing Method size for method: System::Security::Cryptography::CryptographicOperations.ZeroMemory
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Span_1<uint8_t>)>(&System::Security::Cryptography::CryptographicOperations::ZeroMemory)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x22eda1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::CryptographicOperations>::get(),
                            "ZeroMemory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Span_1<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
 void System::Security::Cryptography::CryptographicOperations::ZeroMemory(System::Span_1<uint8_t> buffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::CryptographicOperations>::get(),
                            "ZeroMemory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Span_1<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, buffer);
}
