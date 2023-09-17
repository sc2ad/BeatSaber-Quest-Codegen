#pragma once
#include "Zenject/zzzz__StaticMemoryPool_1_impl.hpp"
namespace {
#include "Zenject/zzzz__DictionaryPool_2_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::Zenject::DictionaryPool_2._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::DictionaryPool_2::*)()>(&::Zenject::DictionaryPool_2::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DictionaryPool_2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DictionaryPool_2.get_Instance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::DictionaryPool_2<TKey,TValue> (*)()>(&::Zenject::DictionaryPool_2::get_Instance)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DictionaryPool_2>::get(),
                            "get_Instance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DictionaryPool_2.OnSpawned
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::Generic::Dictionary_2<TKey,TValue>)>(&::Zenject::DictionaryPool_2::OnSpawned)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DictionaryPool_2>::get(),
                            "OnSpawned",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<TKey,TValue>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DictionaryPool_2.OnDespawned
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::Generic::Dictionary_2<TKey,TValue>)>(&::Zenject::DictionaryPool_2::OnDespawned)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DictionaryPool_2>::get(),
                            "OnDespawned",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<TKey,TValue>>::get()}
                        )));
    return ___internal_method;
  }
};
 void ::Zenject::DictionaryPool_2::__set__instance(::Zenject::DictionaryPool_2<TKey,TValue> value)  {
::cordl_internals::setStaticField<::Zenject::DictionaryPool_2<TKey,TValue>, "_instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DictionaryPool_2>::get>(std::forward<::Zenject::DictionaryPool_2<TKey,TValue>>(value));
}
 ::Zenject::DictionaryPool_2<TKey,TValue> ::Zenject::DictionaryPool_2::__get__instance()  {
return ::cordl_internals::getStaticField<::Zenject::DictionaryPool_2<TKey,TValue>, "_instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DictionaryPool_2>::get>();
}
// Ctor Parameters []
 ::Zenject::DictionaryPool_2::DictionaryPool_2()  : ::Zenject::StaticMemoryPool_1<::System::Collections::Generic::Dictionary_2<TKey,TValue>>(THROW_UNLESS(::il2cpp_utils::New<DictionaryPool_2>())) {}
 void ::Zenject::DictionaryPool_2::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DictionaryPool_2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Zenject::DictionaryPool_2<TKey,TValue> ::Zenject::DictionaryPool_2::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DictionaryPool_2>::get(),
                            "get_Instance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Zenject::DictionaryPool_2<TKey,TValue>, false>(nullptr, ___internal_method);
}
 void ::Zenject::DictionaryPool_2::OnSpawned(::System::Collections::Generic::Dictionary_2<TKey,TValue> items)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DictionaryPool_2>::get(),
                            "OnSpawned",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<TKey,TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, items);
}
 void ::Zenject::DictionaryPool_2::OnDespawned(::System::Collections::Generic::Dictionary_2<TKey,TValue> items)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DictionaryPool_2>::get(),
                            "OnDespawned",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<TKey,TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, items);
}
} // end anonymous namespace
