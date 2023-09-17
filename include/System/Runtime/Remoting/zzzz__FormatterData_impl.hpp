#pragma once
#include "System/Runtime/Remoting/zzzz__ProviderData_impl.hpp"
namespace {
#include "System/Runtime/Remoting/zzzz__FormatterData_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::FormatterData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::FormatterData::*)()>(&::System::Runtime::Remoting::FormatterData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x23223a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::FormatterData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 ::System::Runtime::Remoting::FormatterData::FormatterData()  : ::System::Runtime::Remoting::ProviderData(THROW_UNLESS(::il2cpp_utils::New<FormatterData>())) {}
 void ::System::Runtime::Remoting::FormatterData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::FormatterData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
