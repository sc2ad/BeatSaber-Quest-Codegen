#pragma once
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: System::IFormatProvider.GetFormat
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::IFormatProvider::*)(System::Type)>(&System::IFormatProvider::GetFormat)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IFormatProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IFormatProvider>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 ::bs_hook::Il2CppWrapperType System::IFormatProvider::GetFormat(System::Type formatType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IFormatProvider>::get(),
                            "GetFormat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, formatType);
}
