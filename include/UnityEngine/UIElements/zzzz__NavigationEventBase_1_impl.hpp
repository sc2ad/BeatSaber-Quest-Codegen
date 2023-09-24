#pragma once
#include "UnityEngine/UIElements/zzzz__EventBase_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__NavigationEventBase_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__INavigationEvent_def.hpp"
/// @brief Convert operator to UnityEngine::UIElements::INavigationEvent
constexpr  UnityEngine::UIElements::NavigationEventBase_1<T>::operator UnityEngine::UIElements::INavigationEvent() const noexcept {
return UnityEngine::UIElements::INavigationEvent(::bs_hook::Il2CppWrapperType::instance);
}
 UnityEngine::UIElements::NavigationEventBase_1<T> UnityEngine::UIElements::NavigationEventBase_1<T>::New_ctor()  {
UnityEngine::UIElements::NavigationEventBase_1<T> o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::UIElements::NavigationEventBase_1<T>>())};
return o;
}
 void UnityEngine::UIElements::NavigationEventBase_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::NavigationEventBase_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::NavigationEventBase_1<T>::Init()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::NavigationEventBase_1<T>>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::NavigationEventBase_1<T>::LocalInit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::NavigationEventBase_1<T>>::get(),
                            "LocalInit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
