#pragma once
#include "UnityEngine/ResourceManagement/Util/zzzz__GlobalLinkedListNodeCache_1_def.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__LinkedListNodeCache_1_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedListNode_1_def.hpp"
//  Writing Method size for method: UnityEngine::ResourceManagement::Util::GlobalLinkedListNodeCache_1.Acquire
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::LinkedListNode_1<T> (*)(T)>(&UnityEngine::ResourceManagement::Util::GlobalLinkedListNodeCache_1::Acquire)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::Util::GlobalLinkedListNodeCache_1>::get(),
                            "Acquire",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::Util::GlobalLinkedListNodeCache_1.Release
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Collections::Generic::LinkedListNode_1<T>)>(&UnityEngine::ResourceManagement::Util::GlobalLinkedListNodeCache_1::Release)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::Util::GlobalLinkedListNodeCache_1>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::LinkedListNode_1<T>>::get()}
                        )));
    return ___internal_method;
  }
};
 void UnityEngine::ResourceManagement::Util::GlobalLinkedListNodeCache_1::__set_m_globalCache(UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T> value)  {
::cordl_internals::setStaticField<UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T>, "m_globalCache", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::Util::GlobalLinkedListNodeCache_1>::get>(std::forward<UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T>>(value));
}
 UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T> UnityEngine::ResourceManagement::Util::GlobalLinkedListNodeCache_1::__get_m_globalCache()  {
return ::cordl_internals::getStaticField<UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T>, "m_globalCache", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::Util::GlobalLinkedListNodeCache_1>::get>();
}
 System::Collections::Generic::LinkedListNode_1<T> UnityEngine::ResourceManagement::Util::GlobalLinkedListNodeCache_1::Acquire(T val)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::Util::GlobalLinkedListNodeCache_1>::get(),
                            "Acquire",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::LinkedListNode_1<T>, false>(nullptr, ___internal_method, val);
}
 void UnityEngine::ResourceManagement::Util::GlobalLinkedListNodeCache_1::Release(System::Collections::Generic::LinkedListNode_1<T> node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::Util::GlobalLinkedListNodeCache_1>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::LinkedListNode_1<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, node);
}
