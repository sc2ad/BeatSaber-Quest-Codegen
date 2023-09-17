#pragma once
namespace {
#include "TMPro/zzzz__ITextPreprocessor_def.hpp"
//  Writing Method size for method: ::TMPro::ITextPreprocessor.PreprocessText
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::TMPro::ITextPreprocessor::*)(::StringW)>(&::TMPro::ITextPreprocessor::PreprocessText)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::ITextPreprocessor),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::ITextPreprocessor>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 ::StringW ::TMPro::ITextPreprocessor::PreprocessText(::StringW text)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::ITextPreprocessor>::get(),
                            "PreprocessText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, text);
}
} // end anonymous namespace
