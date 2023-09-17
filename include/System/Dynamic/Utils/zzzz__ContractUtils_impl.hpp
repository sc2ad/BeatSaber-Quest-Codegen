#pragma once
namespace {
#include "System/Dynamic/Utils/zzzz__ContractUtils_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::System::Dynamic::Utils::ContractUtils.get_Unreachable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception (*)()>(&::System::Dynamic::Utils::ContractUtils::get_Unreachable)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x268243c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::Utils::ContractUtils>::get(),
                            "get_Unreachable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 ::System::Exception ::System::Dynamic::Utils::ContractUtils::get_Unreachable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::Utils::ContractUtils>::get(),
                            "get_Unreachable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Exception, false>(nullptr, ___internal_method);
}
} // end anonymous namespace
