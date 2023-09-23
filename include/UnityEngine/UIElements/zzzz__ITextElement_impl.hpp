#pragma once
#include "UnityEngine/UIElements/zzzz__ITextElement_def.hpp"
//  Writing Method size for method: UnityEngine::UIElements::ITextElement.get_text
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::UIElements::ITextElement::*)()>(&UnityEngine::UIElements::ITextElement::get_text)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UIElements::ITextElement),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ITextElement>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 ::StringW UnityEngine::UIElements::ITextElement::get_text()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ITextElement>::get(),
                            "get_text",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
