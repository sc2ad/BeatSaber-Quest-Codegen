#pragma once
#include "UnityEngine/UIElements/zzzz__ObjectListPool_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__ObjectPool_1_def.hpp"
//  Writing Method size for method: UnityEngine::UIElements::ObjectListPool_1.Get
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<T> (*)()>(&UnityEngine::UIElements::ObjectListPool_1::Get)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ObjectListPool_1>::get(),
                            "Get",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::ObjectListPool_1.Release
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Collections::Generic::List_1<T>)>(&UnityEngine::UIElements::ObjectListPool_1::Release)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ObjectListPool_1>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<T>>::get()}
                        )));
    return ___internal_method;
  }
};
 void UnityEngine::UIElements::ObjectListPool_1::__set_pool(UnityEngine::UIElements::ObjectPool_1<System::Collections::Generic::List_1<T>> value)  {
::cordl_internals::setStaticField<UnityEngine::UIElements::ObjectPool_1<System::Collections::Generic::List_1<T>>, "pool", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ObjectListPool_1>::get>(std::forward<UnityEngine::UIElements::ObjectPool_1<System::Collections::Generic::List_1<T>>>(value));
}
 UnityEngine::UIElements::ObjectPool_1<System::Collections::Generic::List_1<T>> UnityEngine::UIElements::ObjectListPool_1::__get_pool()  {
return ::cordl_internals::getStaticField<UnityEngine::UIElements::ObjectPool_1<System::Collections::Generic::List_1<T>>, "pool", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ObjectListPool_1>::get>();
}
 System::Collections::Generic::List_1<T> UnityEngine::UIElements::ObjectListPool_1::Get()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ObjectListPool_1>::get(),
                            "Get",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::List_1<T>, false>(nullptr, ___internal_method);
}
 void UnityEngine::UIElements::ObjectListPool_1::Release(System::Collections::Generic::List_1<T> elements)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ObjectListPool_1>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, elements);
}
