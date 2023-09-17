#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "UnityEngine/Android/zzzz__Permission_def.hpp"
#include "UnityEngine/zzzz__AndroidJavaObject_def.hpp"
#include "UnityEngine/Android/zzzz__PermissionCallbacks_def.hpp"
//  Writing Method size for method: ::UnityEngine::Android::Permission.GetActivity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AndroidJavaObject (*)()>(&::UnityEngine::Android::Permission::GetActivity)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x2b17d84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Android::Permission>::get(),
                            "GetActivity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Android::Permission.GetUnityPermissions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AndroidJavaObject (*)()>(&::UnityEngine::Android::Permission::GetUnityPermissions)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2b17f9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Android::Permission>::get(),
                            "GetUnityPermissions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Android::Permission.HasUserAuthorizedPermission
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::UnityEngine::Android::Permission::HasUserAuthorizedPermission)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x2b18054;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Android::Permission>::get(),
                            "HasUserAuthorizedPermission",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Android::Permission.RequestUserPermission
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::UnityEngine::Android::PermissionCallbacks)>(&::UnityEngine::Android::Permission::RequestUserPermission)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2b18174;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Android::Permission>::get(),
                            "RequestUserPermission",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Android::PermissionCallbacks>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Android::Permission.RequestUserPermissions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<::StringW>, ::UnityEngine::Android::PermissionCallbacks)>(&::UnityEngine::Android::Permission::RequestUserPermissions)> {
  constexpr static std::size_t size = 0x1138;
  constexpr static std::size_t addrs = 0x2b18218;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Android::Permission>::get(),
                            "RequestUserPermissions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Android::PermissionCallbacks>::get()}
                        )));
    return ___internal_method;
  }
};
 void ::UnityEngine::Android::Permission::__set_m_UnityPermissions(::UnityEngine::AndroidJavaObject value)  {
::cordl_internals::setStaticField<::UnityEngine::AndroidJavaObject, "m_UnityPermissions", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Android::Permission>::get>(std::forward<::UnityEngine::AndroidJavaObject>(value));
}
 ::UnityEngine::AndroidJavaObject ::UnityEngine::Android::Permission::__get_m_UnityPermissions()  {
return ::cordl_internals::getStaticField<::UnityEngine::AndroidJavaObject, "m_UnityPermissions", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Android::Permission>::get>();
}
 void ::UnityEngine::Android::Permission::__set_m_Activity(::UnityEngine::AndroidJavaObject value)  {
::cordl_internals::setStaticField<::UnityEngine::AndroidJavaObject, "m_Activity", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Android::Permission>::get>(std::forward<::UnityEngine::AndroidJavaObject>(value));
}
 ::UnityEngine::AndroidJavaObject ::UnityEngine::Android::Permission::__get_m_Activity()  {
return ::cordl_internals::getStaticField<::UnityEngine::AndroidJavaObject, "m_Activity", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Android::Permission>::get>();
}
 ::UnityEngine::AndroidJavaObject ::UnityEngine::Android::Permission::GetActivity()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Android::Permission>::get(),
                            "GetActivity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AndroidJavaObject, false>(nullptr, ___internal_method);
}
 ::UnityEngine::AndroidJavaObject ::UnityEngine::Android::Permission::GetUnityPermissions()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Android::Permission>::get(),
                            "GetUnityPermissions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AndroidJavaObject, false>(nullptr, ___internal_method);
}
 bool ::UnityEngine::Android::Permission::HasUserAuthorizedPermission(::StringW permission)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Android::Permission>::get(),
                            "HasUserAuthorizedPermission",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, permission);
}
 void ::UnityEngine::Android::Permission::RequestUserPermission(::StringW permission, ::UnityEngine::Android::PermissionCallbacks callbacks)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Android::Permission>::get(),
                            "RequestUserPermission",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Android::PermissionCallbacks>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, permission, callbacks);
}
 void ::UnityEngine::Android::Permission::RequestUserPermissions(::ArrayW<::StringW> permissions, ::UnityEngine::Android::PermissionCallbacks callbacks)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Android::Permission>::get(),
                            "RequestUserPermissions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Android::PermissionCallbacks>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, permissions, callbacks);
}
} // end anonymous namespace
