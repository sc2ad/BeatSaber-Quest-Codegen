#pragma once
namespace {
#include "UnityEngine/ResourceManagement/Util/zzzz__AsyncOpHandlesCacheKey_def.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__IOperationCacheKey_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey::*)(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>)>(&::UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2a35748;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey::*)()>(&::UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey::GetHashCode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2a3a520;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey::*)(::bs_hook::Il2CppWrapperType)>(&::UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey::Equals)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2a3a540;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey::*)(::UnityEngine::ResourceManagement::Util::IOperationCacheKey)>(&::UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey::Equals)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2a3a620;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::Util::IOperationCacheKey>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey::*)(::UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey)>(&::UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey::Equals)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2a3a5a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::UnityEngine::ResourceManagement::Util::IOperationCacheKey
constexpr  ::UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey::operator ::UnityEngine::ResourceManagement::Util::IOperationCacheKey() const noexcept {
return ::UnityEngine::ResourceManagement::Util::IOperationCacheKey(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::IEquatable_1<::UnityEngine::ResourceManagement::Util::IOperationCacheKey>
constexpr  ::UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey::operator ::System::IEquatable_1<::UnityEngine::ResourceManagement::Util::IOperationCacheKey>() const noexcept {
return ::System::IEquatable_1<::UnityEngine::ResourceManagement::Util::IOperationCacheKey>(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey::__set_m_Handles(::System::Collections::Generic::HashSet_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::HashSet_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::HashSet_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>(value));
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> ::UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey::__get_m_Handles() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::HashSet_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "handles", ty: "::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>", modifiers: "", def_value: None }]
 ::UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey::AsyncOpHandlesCacheKey(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> handles)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<AsyncOpHandlesCacheKey>(handles))) {}
 void ::UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey::_ctor(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> handles)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, handles);
}
 int32_t ::UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey::Equals(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, obj);
}
 bool ::UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey::Equals(::UnityEngine::ResourceManagement::Util::IOperationCacheKey other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::Util::IOperationCacheKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, other);
}
 bool ::UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey::Equals(::UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, other);
}
} // end anonymous namespace
