#pragma once
namespace {
#include "System/zzzz__ICustomFormatter_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
//  Writing Method size for method: ::System::ICustomFormatter.Format
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::ICustomFormatter::*)(::StringW, ::bs_hook::Il2CppWrapperType, ::System::IFormatProvider)>(&::System::ICustomFormatter::Format)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::ICustomFormatter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ICustomFormatter>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 ::StringW ::System::ICustomFormatter::Format(::StringW format, ::bs_hook::Il2CppWrapperType arg, ::System::IFormatProvider formatProvider)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ICustomFormatter>::get(),
                            "Format",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, format, arg, formatProvider);
}
} // end anonymous namespace
