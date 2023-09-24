#pragma once
#include "UnityEngine/zzzz__AndroidJavaObject_impl.hpp"
#include "UnityEngine/zzzz__AndroidJavaClass_def.hpp"
//  Writing Method size for method: UnityEngine::AndroidJavaClass._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AndroidJavaClass::*)(::StringW)>(&UnityEngine::AndroidJavaClass::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2b0e410;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AndroidJavaClass>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AndroidJavaClass._AndroidJavaClass
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AndroidJavaClass::*)(::StringW)>(&UnityEngine::AndroidJavaClass::_AndroidJavaClass)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2b11a64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AndroidJavaClass>::get(),
                            "_AndroidJavaClass",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AndroidJavaClass._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AndroidJavaClass::*)(::cordl_internals::intptr_t)>(&UnityEngine::AndroidJavaClass::_ctor)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2b11278;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AndroidJavaClass>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
 UnityEngine::AndroidJavaClass UnityEngine::AndroidJavaClass::New_ctor(::StringW className)  {
UnityEngine::AndroidJavaClass o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::AndroidJavaClass>(className))};
return o;
}
 void UnityEngine::AndroidJavaClass::_ctor(::StringW className)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AndroidJavaClass>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, className);
}
 void UnityEngine::AndroidJavaClass::_AndroidJavaClass(::StringW className)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AndroidJavaClass>::get(),
                            "_AndroidJavaClass",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, className);
}
 UnityEngine::AndroidJavaClass UnityEngine::AndroidJavaClass::New_ctor(::cordl_internals::intptr_t jclass)  {
UnityEngine::AndroidJavaClass o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::AndroidJavaClass>(jclass))};
return o;
}
 void UnityEngine::AndroidJavaClass::_ctor(::cordl_internals::intptr_t jclass)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AndroidJavaClass>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, jclass);
}
