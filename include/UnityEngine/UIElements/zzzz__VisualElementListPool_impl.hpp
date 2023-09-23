#pragma once
#include "UnityEngine/UIElements/zzzz__VisualElementListPool_def.hpp"
#include "UnityEngine/UIElements/zzzz__ObjectPool_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: UnityEngine::UIElements::VisualElementListPool.Copy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<UnityEngine::UIElements::VisualElement> (*)(System::Collections::Generic::List_1<UnityEngine::UIElements::VisualElement>)>(&UnityEngine::UIElements::VisualElementListPool::Copy)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2c4ac4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::VisualElementListPool>::get(),
                            "Copy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::UIElements::VisualElement>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::VisualElementListPool.Get
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<UnityEngine::UIElements::VisualElement> (*)(int32_t)>(&UnityEngine::UIElements::VisualElementListPool::Get)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x2c4acf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::VisualElementListPool>::get(),
                            "Get",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::VisualElementListPool.Release
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Collections::Generic::List_1<UnityEngine::UIElements::VisualElement>)>(&UnityEngine::UIElements::VisualElementListPool::Release)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2c4add8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::VisualElementListPool>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::UIElements::VisualElement>>::get()}
                        )));
    return ___internal_method;
  }
};
 void UnityEngine::UIElements::VisualElementListPool::__set_pool(UnityEngine::UIElements::ObjectPool_1<System::Collections::Generic::List_1<UnityEngine::UIElements::VisualElement>> value)  {
::cordl_internals::setStaticField<UnityEngine::UIElements::ObjectPool_1<System::Collections::Generic::List_1<UnityEngine::UIElements::VisualElement>>, "pool", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::VisualElementListPool>::get>(std::forward<UnityEngine::UIElements::ObjectPool_1<System::Collections::Generic::List_1<UnityEngine::UIElements::VisualElement>>>(value));
}
 UnityEngine::UIElements::ObjectPool_1<System::Collections::Generic::List_1<UnityEngine::UIElements::VisualElement>> UnityEngine::UIElements::VisualElementListPool::__get_pool()  {
return ::cordl_internals::getStaticField<UnityEngine::UIElements::ObjectPool_1<System::Collections::Generic::List_1<UnityEngine::UIElements::VisualElement>>, "pool", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::VisualElementListPool>::get>();
}
 System::Collections::Generic::List_1<UnityEngine::UIElements::VisualElement> UnityEngine::UIElements::VisualElementListPool::Copy(System::Collections::Generic::List_1<UnityEngine::UIElements::VisualElement> elements)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::VisualElementListPool>::get(),
                            "Copy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::UIElements::VisualElement>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::List_1<UnityEngine::UIElements::VisualElement>, false>(nullptr, ___internal_method, elements);
}
/// @param initialCapacity: int32_t (default: 0)
 System::Collections::Generic::List_1<UnityEngine::UIElements::VisualElement> UnityEngine::UIElements::VisualElementListPool::Get(int32_t initialCapacity)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::VisualElementListPool>::get(),
                            "Get",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::List_1<UnityEngine::UIElements::VisualElement>, false>(nullptr, ___internal_method, initialCapacity);
}
 void UnityEngine::UIElements::VisualElementListPool::Release(System::Collections::Generic::List_1<UnityEngine::UIElements::VisualElement> elements)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::VisualElementListPool>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::UIElements::VisualElement>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, elements);
}
