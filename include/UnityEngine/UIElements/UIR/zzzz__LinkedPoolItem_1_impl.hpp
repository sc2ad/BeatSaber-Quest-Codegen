#pragma once
#include "UnityEngine/UIElements/UIR/zzzz__LinkedPoolItem_1_def.hpp"
constexpr void UnityEngine::UIElements::UIR::LinkedPoolItem_1<T>::__set_poolNext(T value)  {
::cordl_internals::setInstanceField<T, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<T>(value));
}
constexpr T UnityEngine::UIElements::UIR::LinkedPoolItem_1<T>::__get_poolNext() const {
return ::cordl_internals::getInstanceField<T, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 UnityEngine::UIElements::UIR::LinkedPoolItem_1<T> UnityEngine::UIElements::UIR::LinkedPoolItem_1<T>::New_ctor()  {
UnityEngine::UIElements::UIR::LinkedPoolItem_1<T> o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::UIElements::UIR::LinkedPoolItem_1<T>>())};
return o;
}
 void UnityEngine::UIElements::UIR::LinkedPoolItem_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::LinkedPoolItem_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
