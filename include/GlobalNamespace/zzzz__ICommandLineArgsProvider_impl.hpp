#pragma once
namespace {
#include "GlobalNamespace/zzzz__ICommandLineArgsProvider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ICommandLineArgsProvider.GetCommandLineArgs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (::GlobalNamespace::ICommandLineArgsProvider::*)()>(&::GlobalNamespace::ICommandLineArgsProvider::GetCommandLineArgs)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::ICommandLineArgsProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ICommandLineArgsProvider>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 ::ArrayW<::StringW> ::GlobalNamespace::ICommandLineArgsProvider::GetCommandLineArgs()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ICommandLineArgsProvider>::get(),
                            "GetCommandLineArgs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
