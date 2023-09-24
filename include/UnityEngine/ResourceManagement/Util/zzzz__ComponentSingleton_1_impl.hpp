#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__ComponentSingleton_1_def.hpp"
 void UnityEngine::ResourceManagement::Util::ComponentSingleton_1<T>::__set_s_Instance(T value)  {
::cordl_internals::setStaticField<T, "s_Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::Util::ComponentSingleton_1<T>>::get>(std::forward<T>(value));
}
 T UnityEngine::ResourceManagement::Util::ComponentSingleton_1<T>::__get_s_Instance()  {
return ::cordl_internals::getStaticField<T, "s_Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::Util::ComponentSingleton_1<T>>::get>();
}
 bool UnityEngine::ResourceManagement::Util::ComponentSingleton_1<T>::get_Exists()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::Util::ComponentSingleton_1<T>>::get(),
                            "get_Exists",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
 T UnityEngine::ResourceManagement::Util::ComponentSingleton_1<T>::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::Util::ComponentSingleton_1<T>>::get(),
                            "get_Instance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method);
}
 T UnityEngine::ResourceManagement::Util::ComponentSingleton_1<T>::FindInstance()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::Util::ComponentSingleton_1<T>>::get(),
                            "FindInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method);
}
 ::StringW UnityEngine::ResourceManagement::Util::ComponentSingleton_1<T>::GetGameObjectName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::Util::ComponentSingleton_1<T>>::get(),
                            "GetGameObjectName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 T UnityEngine::ResourceManagement::Util::ComponentSingleton_1<T>::CreateNewSingleton()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::Util::ComponentSingleton_1<T>>::get(),
                            "CreateNewSingleton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method);
}
 void UnityEngine::ResourceManagement::Util::ComponentSingleton_1<T>::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::Util::ComponentSingleton_1<T>>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::Util::ComponentSingleton_1<T>::DestroySingleton()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::Util::ComponentSingleton_1<T>>::get(),
                            "DestroySingleton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 UnityEngine::ResourceManagement::Util::ComponentSingleton_1<T> UnityEngine::ResourceManagement::Util::ComponentSingleton_1<T>::New_ctor()  {
UnityEngine::ResourceManagement::Util::ComponentSingleton_1<T> o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::ResourceManagement::Util::ComponentSingleton_1<T>>())};
return o;
}
 void UnityEngine::ResourceManagement::Util::ComponentSingleton_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::Util::ComponentSingleton_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
