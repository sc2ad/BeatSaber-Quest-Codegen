#pragma once
#include "System/zzzz__NotImplemented_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: System::NotImplemented.get_ByDesign
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Exception (*)()>(&System::NotImplemented::get_ByDesign)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x245b018;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::NotImplemented>::get(),
                            "get_ByDesign",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 System::Exception System::NotImplemented::get_ByDesign()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::NotImplemented>::get(),
                            "get_ByDesign",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Exception, false>(nullptr, ___internal_method);
}
