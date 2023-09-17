#pragma once
namespace {
#include "BGNet/Core/zzzz__DefaultTimeProvider_def.hpp"
#include "BGNet/Core/zzzz__ITimeProvider_def.hpp"
//  Writing Method size for method: ::BGNet::Core::DefaultTimeProvider.get_instance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BGNet::Core::ITimeProvider (*)()>(&::BGNet::Core::DefaultTimeProvider::get_instance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xdd1038;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::DefaultTimeProvider>::get(),
                            "get_instance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 ::BGNet::Core::ITimeProvider ::BGNet::Core::DefaultTimeProvider::get_instance()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::DefaultTimeProvider>::get(),
                            "get_instance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::BGNet::Core::ITimeProvider, false>(nullptr, ___internal_method);
}
} // end anonymous namespace
