#pragma once
#include "UnityEngine/ResourceManagement/Util/zzzz__GlobalLinkedListNodeCache_1_def.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__LinkedListNodeCache_1_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedListNode_1_def.hpp"
 void UnityEngine::ResourceManagement::Util::GlobalLinkedListNodeCache_1<T>::__set_m_globalCache(UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T> value)  {
::cordl_internals::setStaticField<UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T>, "m_globalCache", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::Util::GlobalLinkedListNodeCache_1<T>>::get>(std::forward<UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T>>(value));
}
 UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T> UnityEngine::ResourceManagement::Util::GlobalLinkedListNodeCache_1<T>::__get_m_globalCache()  {
return ::cordl_internals::getStaticField<UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T>, "m_globalCache", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::Util::GlobalLinkedListNodeCache_1<T>>::get>();
}
 System::Collections::Generic::LinkedListNode_1<T> UnityEngine::ResourceManagement::Util::GlobalLinkedListNodeCache_1<T>::Acquire(T val)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::Util::GlobalLinkedListNodeCache_1<T>>::get(),
                            "Acquire",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::LinkedListNode_1<T>, false>(nullptr, ___internal_method, val);
}
 void UnityEngine::ResourceManagement::Util::GlobalLinkedListNodeCache_1<T>::Release(System::Collections::Generic::LinkedListNode_1<T> node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::Util::GlobalLinkedListNodeCache_1<T>>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::LinkedListNode_1<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, node);
}
