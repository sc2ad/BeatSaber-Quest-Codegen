#pragma once
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_1_def.hpp"
 UnityEngine::UIElements::UxmlFactory_1<TCreatedType> UnityEngine::UIElements::UxmlFactory_1<TCreatedType>::New_ctor()  {
UnityEngine::UIElements::UxmlFactory_1<TCreatedType> o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::UIElements::UxmlFactory_1<TCreatedType>>())};
return o;
}
 void UnityEngine::UIElements::UxmlFactory_1<TCreatedType>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UxmlFactory_1<TCreatedType>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
