#pragma once
#include "Org/BouncyCastle/Crmf/zzzz__IEncryptedValuePadder_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Crmf::IEncryptedValuePadder.GetPaddedData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Crmf::IEncryptedValuePadder::*)(::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crmf::IEncryptedValuePadder::GetPaddedData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crmf::IEncryptedValuePadder),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crmf::IEncryptedValuePadder>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crmf::IEncryptedValuePadder.GetUnpaddedData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Crmf::IEncryptedValuePadder::*)(::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crmf::IEncryptedValuePadder::GetUnpaddedData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crmf::IEncryptedValuePadder),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crmf::IEncryptedValuePadder>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
 ::ArrayW<uint8_t> Org::BouncyCastle::Crmf::IEncryptedValuePadder::GetPaddedData(::ArrayW<uint8_t> data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crmf::IEncryptedValuePadder>::get(),
                            "GetPaddedData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method, data);
}
 ::ArrayW<uint8_t> Org::BouncyCastle::Crmf::IEncryptedValuePadder::GetUnpaddedData(::ArrayW<uint8_t> paddedData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crmf::IEncryptedValuePadder>::get(),
                            "GetUnpaddedData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method, paddedData);
}
