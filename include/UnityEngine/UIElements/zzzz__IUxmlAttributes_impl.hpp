#pragma once
#include "UnityEngine/UIElements/zzzz__IUxmlAttributes_def.hpp"
//  Writing Method size for method: UnityEngine::UIElements::IUxmlAttributes.TryGetAttributeValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::IUxmlAttributes::*)(::StringW, ByRef<::StringW>)>(&UnityEngine::UIElements::IUxmlAttributes::TryGetAttributeValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UIElements::IUxmlAttributes),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::IUxmlAttributes>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 bool UnityEngine::UIElements::IUxmlAttributes::TryGetAttributeValue(::StringW attributeName, ByRef<::StringW> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::IUxmlAttributes>::get(),
                            "TryGetAttributeValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, attributeName, value);
}
