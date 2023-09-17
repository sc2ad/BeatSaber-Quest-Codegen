#pragma once
namespace {
#include "UnityEngine/UIElements/zzzz__EventCallbackListPool_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventCallbackList_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::EventCallbackListPool.Get
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::EventCallbackList (::UnityEngine::UIElements::EventCallbackListPool::*)(::UnityEngine::UIElements::EventCallbackList)>(&::UnityEngine::UIElements::EventCallbackListPool::Get)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2cd3a0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackListPool>::get(),
                            "Get",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventCallbackList>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventCallbackListPool.Release
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::EventCallbackListPool::*)(::UnityEngine::UIElements::EventCallbackList)>(&::UnityEngine::UIElements::EventCallbackListPool::Release)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2cd3d70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackListPool>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventCallbackList>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventCallbackListPool._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::EventCallbackListPool::*)()>(&::UnityEngine::UIElements::EventCallbackListPool::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2cd3e40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackListPool>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::UnityEngine::UIElements::EventCallbackListPool::__set_m_Stack(::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::EventCallbackList> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::EventCallbackList>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::EventCallbackList>>(value));
}
constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::EventCallbackList> ::UnityEngine::UIElements::EventCallbackListPool::__get_m_Stack() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::EventCallbackList>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::UnityEngine::UIElements::EventCallbackList ::UnityEngine::UIElements::EventCallbackListPool::Get(::UnityEngine::UIElements::EventCallbackList initializer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackListPool>::get(),
                            "Get",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventCallbackList>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::EventCallbackList, false>(const_cast<void*>(instance), ___internal_method, initializer);
}
 void ::UnityEngine::UIElements::EventCallbackListPool::Release(::UnityEngine::UIElements::EventCallbackList element)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackListPool>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventCallbackList>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, element);
}
// Ctor Parameters []
 ::UnityEngine::UIElements::EventCallbackListPool::EventCallbackListPool()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<EventCallbackListPool>())) {}
 void ::UnityEngine::UIElements::EventCallbackListPool::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackListPool>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
