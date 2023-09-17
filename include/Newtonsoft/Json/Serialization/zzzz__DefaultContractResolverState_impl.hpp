#pragma once
namespace {
#include "Newtonsoft/Json/Serialization/zzzz__DefaultContractResolverState_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonContract_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__PropertyNameTable_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__ResolverContractKey_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::DefaultContractResolverState._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::DefaultContractResolverState::*)()>(&::Newtonsoft::Json::Serialization::DefaultContractResolverState::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x24f6d80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::DefaultContractResolverState>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::Newtonsoft::Json::Serialization::DefaultContractResolverState::__set_ContractCache(::System::Collections::Generic::Dictionary_2<::Newtonsoft::Json::Serialization::ResolverContractKey,::Newtonsoft::Json::Serialization::JsonContract> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::Newtonsoft::Json::Serialization::ResolverContractKey,::Newtonsoft::Json::Serialization::JsonContract>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::Dictionary_2<::Newtonsoft::Json::Serialization::ResolverContractKey,::Newtonsoft::Json::Serialization::JsonContract>>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<::Newtonsoft::Json::Serialization::ResolverContractKey,::Newtonsoft::Json::Serialization::JsonContract> ::Newtonsoft::Json::Serialization::DefaultContractResolverState::__get_ContractCache() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::Newtonsoft::Json::Serialization::ResolverContractKey,::Newtonsoft::Json::Serialization::JsonContract>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Newtonsoft::Json::Serialization::DefaultContractResolverState::__set_NameTable(::Newtonsoft::Json::Utilities::PropertyNameTable value)  {
::cordl_internals::setInstanceField<::Newtonsoft::Json::Utilities::PropertyNameTable, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Newtonsoft::Json::Utilities::PropertyNameTable>(value));
}
constexpr ::Newtonsoft::Json::Utilities::PropertyNameTable ::Newtonsoft::Json::Serialization::DefaultContractResolverState::__get_NameTable() const {
return ::cordl_internals::getInstanceField<::Newtonsoft::Json::Utilities::PropertyNameTable, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::Newtonsoft::Json::Serialization::DefaultContractResolverState::DefaultContractResolverState()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<DefaultContractResolverState>())) {}
 void ::Newtonsoft::Json::Serialization::DefaultContractResolverState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::DefaultContractResolverState>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
