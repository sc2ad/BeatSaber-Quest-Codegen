#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/zzzz__CachedAssetBundle_def.hpp"
#include "UnityEngine/zzzz__Hash128_def.hpp"
//  Writing Method size for method: UnityEngine::CachedAssetBundle._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::CachedAssetBundle::*)(::StringW, UnityEngine::Hash128)>(&UnityEngine::CachedAssetBundle::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2b4f304;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::CachedAssetBundle>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Hash128>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::CachedAssetBundle.get_name
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::CachedAssetBundle::*)()>(&UnityEngine::CachedAssetBundle::get_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b4ecf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::CachedAssetBundle>::get(),
                            "get_name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::CachedAssetBundle.get_hash
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Hash128 (UnityEngine::CachedAssetBundle::*)()>(&UnityEngine::CachedAssetBundle::get_hash)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2b4ecfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::CachedAssetBundle>::get(),
                            "get_hash",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "m_Name", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "m_Hash", ty: "UnityEngine::Hash128", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::CachedAssetBundle::CachedAssetBundle(::StringW m_Name, UnityEngine::Hash128 m_Hash) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_Name = m_Name;
this->m_Hash = m_Hash;
}
constexpr void UnityEngine::CachedAssetBundle::__set_m_Name(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x0>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::CachedAssetBundle::__get_m_Name() const {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->__instance);
}
constexpr void UnityEngine::CachedAssetBundle::__set_m_Hash(UnityEngine::Hash128 value)  {
::cordl_internals::setInstanceField<UnityEngine::Hash128, 0x8>(this->__instance, std::forward<UnityEngine::Hash128>(value));
}
constexpr UnityEngine::Hash128 UnityEngine::CachedAssetBundle::__get_m_Hash() const {
return ::cordl_internals::getInstanceField<UnityEngine::Hash128, 0x8>(this->__instance);
}
 void UnityEngine::CachedAssetBundle::_ctor(::StringW name, UnityEngine::Hash128 hash)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::CachedAssetBundle>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Hash128>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, name, hash);
}
 ::StringW UnityEngine::CachedAssetBundle::get_name()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::CachedAssetBundle>::get(),
                            "get_name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 UnityEngine::Hash128 UnityEngine::CachedAssetBundle::get_hash()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::CachedAssetBundle>::get(),
                            "get_hash",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Hash128, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
