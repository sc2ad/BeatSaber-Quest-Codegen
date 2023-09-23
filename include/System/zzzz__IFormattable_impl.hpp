#pragma once
#include "System/zzzz__IFormattable_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
//  Writing Method size for method: System::IFormattable.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::IFormattable::*)(::StringW, System::IFormatProvider)>(&System::IFormattable::ToString)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IFormattable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IFormattable>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 ::StringW System::IFormattable::ToString(::StringW format, System::IFormatProvider formatProvider)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IFormattable>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, format, formatProvider);
}
