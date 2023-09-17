#pragma once
namespace {
#include "Newtonsoft/Json/Serialization/zzzz__IContractResolver_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonContract_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::IContractResolver.ResolveContract
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Serialization::JsonContract (::Newtonsoft::Json::Serialization::IContractResolver::*)(::System::Type)>(&::Newtonsoft::Json::Serialization::IContractResolver::ResolveContract)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Newtonsoft::Json::Serialization::IContractResolver),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::IContractResolver>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 ::Newtonsoft::Json::Serialization::JsonContract ::Newtonsoft::Json::Serialization::IContractResolver::ResolveContract(::System::Type type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::IContractResolver>::get(),
                            "ResolveContract",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Serialization::JsonContract, false>(const_cast<void*>(instance), ___internal_method, type);
}
} // end anonymous namespace
