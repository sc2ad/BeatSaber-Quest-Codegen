#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Tayx/Graphy/Utils/zzzz__G_Singleton_1_def.hpp"
 void Tayx::Graphy::Utils::G_Singleton_1<T>::__set__instance(T value)  {
::cordl_internals::setStaticField<T, "_instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tayx::Graphy::Utils::G_Singleton_1<T>>::get>(std::forward<T>(value));
}
 T Tayx::Graphy::Utils::G_Singleton_1<T>::__get__instance()  {
return ::cordl_internals::getStaticField<T, "_instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tayx::Graphy::Utils::G_Singleton_1<T>>::get>();
}
 void Tayx::Graphy::Utils::G_Singleton_1<T>::__set__lock(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setStaticField<::bs_hook::Il2CppWrapperType, "_lock", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tayx::Graphy::Utils::G_Singleton_1<T>>::get>(std::forward<::bs_hook::Il2CppWrapperType>(value));
}
 ::bs_hook::Il2CppWrapperType Tayx::Graphy::Utils::G_Singleton_1<T>::__get__lock()  {
return ::cordl_internals::getStaticField<::bs_hook::Il2CppWrapperType, "_lock", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tayx::Graphy::Utils::G_Singleton_1<T>>::get>();
}
 T Tayx::Graphy::Utils::G_Singleton_1<T>::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tayx::Graphy::Utils::G_Singleton_1<T>>::get(),
                            "get_Instance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method);
}
 void Tayx::Graphy::Utils::G_Singleton_1<T>::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tayx::Graphy::Utils::G_Singleton_1<T>>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void Tayx::Graphy::Utils::G_Singleton_1<T>::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tayx::Graphy::Utils::G_Singleton_1<T>>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 Tayx::Graphy::Utils::G_Singleton_1<T> Tayx::Graphy::Utils::G_Singleton_1<T>::New_ctor()  {
Tayx::Graphy::Utils::G_Singleton_1<T> o{THROW_UNLESS(::il2cpp_utils::New<Tayx::Graphy::Utils::G_Singleton_1<T>>())};
return o;
}
 void Tayx::Graphy::Utils::G_Singleton_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tayx::Graphy::Utils::G_Singleton_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
